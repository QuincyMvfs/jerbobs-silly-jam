//Copyright 2024 P.Kallisto SKG

#include "Vehicle/RTuneVehicle.h"
#include "Vehicle/SuspensionComponent.h"
#include "AsyncTickFunctions.h"
#include "Kismet/KismetMathLibrary.h"
#include "DrawDebugHelpers.h"
#include "Components/PrimitiveComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Curves/CurveFloat.h"
#include "Net/UnrealNetwork.h"

ARTuneVehicle::ARTuneVehicle()
{
	PrimaryActorTick.bCanEverTick = true;

	NetUpdateFrequency = 100;
	//SetNetUpdateFrequency(100);
	MinNetUpdateFrequency = 100;
	//SetMinNetUpdateFrequency(100);

}


void ARTuneVehicle::BeginPlay()
{
	Super::BeginPlay();

	PrimitiveComponent = Cast<UPrimitiveComponent>(GetRootComponent());

	if (PrimitiveComponent == nullptr) { UE_LOG(LogTemp, Error, TEXT("No primitive component as the root object of this vehicle found!")); }

	BrakeForceDuplicate = BrakeForce;
	EngineTorqueDuplicate = EngineTorque;

	//TArray<UActorComponent*> comps = this->GetComponentsByClass(USuspensionComponent::StaticClass());
	TArray<UActorComponent*> comps;
	GetComponents(USuspensionComponent::StaticClass(), comps);

	if (comps.Num() == 0) { return; }

	for (int i = 0; i < comps.Num(); i++)
	{
		USuspensionComponent* suspComp = Cast<USuspensionComponent>(comps[i]);
		SuspensionComponents.Add(suspComp);

		if (ReplicationMethod == EReplicationType::ERT_Full || ReplicationMethod == EReplicationType::ERT_DataOnly)
		{
			suspComp->SetIsReplicated(true);
		}
	}
}

void ARTuneVehicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	GameDeltaTime = DeltaTime;

	if (PrimitiveComponent == nullptr) { return; }

	if (bAutoWakeRigidBodies)
	{
		PrimitiveComponent->WakeAllRigidBodies();
	}
	
	AnimateSteering();

	for (int i = 0; i < SuspensionComponents.Num(); i++)
	{
		SuspensionComponents[i]->UpdateTick(DeltaTime);
		SuspensionComponents[i]->SetHandbrakeInput(bHandbrakeInput);
	}

	if (!HasAuthority() && bUseServerFastSync && ReplicationMethod == EReplicationType::ERT_Full)
	{
		FastServerSyncCount++;
		if (FastServerSyncCount > ServerFastSyncLatency)
		{
			FastServerSyncCount = 0;
			SetActorTransform(ServerState.ServerTransform);
		}
	}

	if (AntiGravity != nullptr)
	{
		AntiGravityMass = AntiGravityCoreMesh->GetMass();
		FRotator r = PrimitiveComponent->GetComponentRotation();
		AntiGravity->SetWorldRotation(FRotator
		(
			0.f,
			r.Yaw,
			0.f
			
		));
	}



#pragma region DrawDebug
	/*
	FVector com = UAsyncTickFunctions::ATP_GetCOM(PrimitiveComponent);
	FVector up = PhysicsTransform.GetRotation().GetUpVector();
	DrawDebugLine(GetWorld(), com, com + up * 100.f, FColor::Blue, false, -1.0f, 0.0f,3.f);
	*/
#pragma endregion
}

void ARTuneVehicle::InitializeAntiGravity(USceneComponent* antiGravityComponent, UStaticMeshComponent* coreMesh)
{
	if (antiGravityComponent == nullptr)
	{

		UE_LOG(LogTemp, Error, TEXT("No scene component in InitializeAntiGravity function! Please set a scene component to use the Anti Gravity system"));
		return; 
	}
	if (coreMesh == nullptr)
	{ 
		UE_LOG(LogTemp, Error, TEXT("No core mesh component in InitializeAntiGravity function! Please set a core to use the Anti Gravity system"));
		return;
	}

	AntiGravity = antiGravityComponent;
	AntiGravityCoreMesh = coreMesh;
}

void ARTuneVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ARTuneVehicle, ServerState);
	DOREPLIFETIME(ARTuneVehicle, ServerVelocity);
	DOREPLIFETIME(ARTuneVehicle, ServerAngularVelocity);

}

void ARTuneVehicle::NativeAsyncTick(float DeltaTime)
{
	Super::NativeAsyncTick(DeltaTime);
	if (PrimitiveComponent == nullptr) { return; }

	AsyncDeltaTime = DeltaTime;
	//if (GetLocalRole() == ROLE_SimulatedProxy) { return; }

	float AsyncTime = DeltaTime;

	int c = 0;
	for (int i = 0; i < SuspensionComponents.Num(); i++)
	{
		if (SuspensionComponents[i]->IsInAir())
		{
			c++;
		}
	}

	bInAir = c >= InAirWheelCount;


	float angularVelocity = UKismetMathLibrary::InverseTransformDirection(PhysicsTransform, UAsyncTickFunctions::ATP_GetAngularVelocity(PrimitiveComponent)).Z;


	if (FMath::Abs(GetSpeedKPH()) < IdleLockSpeedThreshold && Throttle == 0 && Brakes == 0 && !bInAir && FMath::Abs(angularVelocity) < 0.15f)
	{
		if (!bIsIdleLocked && bUseIdleLock)
		{
			IdleLockCount += AsyncTime;
		}

		if ((IdleLockCount > IdleLockTime) && bUseIdleLock)
		{
			bIsIdleLocked = true;
			IdleLockCount = 612.f;

			FVector v = UAsyncTickFunctions::ATP_GetLinearVelocity(PrimitiveComponent);
			float interpspeed = 5.f;
			float x = FMath::FInterpTo(v.X, 0.f, AsyncTime, interpspeed);
			float y = FMath::FInterpTo(v.Y, 0.f, AsyncTime, interpspeed);
			float z = FMath::FInterpTo(v.Z, 0.f, AsyncTime, interpspeed);

			if (ReplicationMethod == EReplicationType::ERT_None)
			{
				UAsyncTickFunctions::ATP_SetLinearVelocity(PrimitiveComponent, FVector(x, y, z), false);
				UAsyncTickFunctions::ATP_SetAngularVelocityInRadians(PrimitiveComponent, FVector::ZeroVector, false);
			}


			IdleLockRotationLocationCount += AsyncTime;
			if (IdleLockRotationLocationCount >= (IdleLockTime / 2.f))
			{
				bIsIdleLockedRotationLocation = true;

				FVector direction = v;
				direction.Normalize();
				UAsyncTickFunctions::ATP_AddForce(PrimitiveComponent, -direction * v.Size() * IdleLockStiffness * 100.f, false);
			}

		}
	}
	else
	{
		IdleLockCount = 0;
		IdleLockRotationLocationCount = 0;
		bIsIdleLocked = false;
		bIsIdleLockedRotationLocation = false;
	}

	if (ReplicationMethod == EReplicationType::ERT_Full)
	{

		if (HasAuthority())
		{
			UpdatePhysicsCore(DeltaTime);
			AsyncTick(DeltaTime);
			ServerStateSync(true);

		}
		else
		{
			ClientStateSync(true);
		}
	}
	else if (ReplicationMethod == EReplicationType::ERT_DataOnly)
	{
		if (HasAuthority())
		{
			UpdatePhysicsCore(DeltaTime);
			AsyncTick(DeltaTime);
			ServerStateSync(false);

		}
		else
		{
			ClientStateSync(false);
			UpdatePhysicsCore(DeltaTime);
			AsyncTick(DeltaTime);
		}
	}
	else if(ReplicationMethod == EReplicationType::ERT_None)
	{
		UpdatePhysicsCore(DeltaTime);
		AsyncTick(DeltaTime);
	}

	for (int i = 0; i < SuspensionComponents.Num(); i++)
	{
		if (SuspensionComponents[i] != nullptr)
		{
			SuspensionComponents[i]->UpdatePhysics(DeltaTime);
		}
	}


}

void ARTuneVehicle::AsyncReplicatedTick()
{
	if (PrimitiveComponent == nullptr) { return; }

	if (HasAuthority())
	{
		ServerVelocity = UAsyncTickFunctions::ATP_GetLinearVelocity(PrimitiveComponent);
		ServerAngularVelocity = UAsyncTickFunctions::ATP_GetAngularVelocity(PrimitiveComponent);

	}
	else
	{
		UAsyncTickFunctions::ATP_SetLinearVelocity(PrimitiveComponent, ServerVelocity, false);
		UAsyncTickFunctions::ATP_SetAngularVelocityInRadians(PrimitiveComponent, ServerAngularVelocity, false);
	}
}

void ARTuneVehicle::UpdatePhysicsCore(float DeltaTime)
{
	PhysicsTransform = UAsyncTickFunctions::ATP_GetTransform(PrimitiveComponent);

	float d = FMath::Sign(GetLinearVelocity());
	PhysicsTransform = UAsyncTickFunctions::ATP_GetTransform(PrimitiveComponent);
	FVector fwd = PhysicsTransform.GetRotation().GetForwardVector();
	FVector rgt = PhysicsTransform.GetRotation().GetRightVector();
	FVector up = PhysicsTransform.GetRotation().GetUpVector();

	if (PowertrainType == EBehaviourType::Standard)
	{
		float r = WheelRadius;
		float xd = DifferentialRatio;
		float xg = 3.5f;
		float velocityDirection = FMath::Sign(GetLinearVelocity());
		float rpmDelta = 50;

		if (true)
		{
			switch (TorqueImplementation)
			{
			case ETorqueImplementation::ETI_Constant:
				CurrentTorque = EngineTorque;
				break;

			case ETorqueImplementation::ETI_Curve:

				if (EngineTorqueCurve == nullptr)
				{
					UE_LOG(LogTemp, Error, TEXT("No engine torque curve set in advanced vehicle powertrain! "));
					return;
				}
				else
				{
					CurrentTorque = EngineTorque * EngineTorqueCurve->GetFloatValue(FMath::Abs(RPM));
				}
				break;
			}

			if (GearRatios.Num() == 0)
			{
				xg = 3.5f;

			}
			else
			{
				xg = GearRatios[CurrentGear];
			}
			Xg = xg;


			float CONST = 2.f * PI * (1.f / 60.f);
			float gmax = MaxRPM * CONST * WheelRadius * (1.f / xg) * (1.f / xd) * 3.6f;
			float cg = RPM * CONST * WheelRadius * (1.f / xg) * (1.f / xd) * 3.6f;
			//UE_LOG(LogTemp, Log, TEXT("Max speed at current gear: %f ----- Current speed %f"), gmax, currentSpeedInGear);

			if (bAutomatic)
			{
				if (GearRatios.Num() != 1)
				{
					if (RPM > MaxRPM * UpshiftRatio)
					{
						Shift(true);
					}

					if (RPM < MaxRPM * DownshiftRatio)
					{
						Shift(false);
					}

				}

			}

			float standardBrakeForce = FMath::GetMappedRangeValueClamped(FVector2D(0.f, 5.f), FVector2D(0.f, BrakeForce), FMath::Abs(GetSpeedKPH()));
			float powerBrake = FMath::Abs(RPM) * EngineBrakeCoefficient * (1 - Throttle) * xg * -velocityDirection;
			float wheelForce = CurrentTorque * xg * xd * (1.f / r);


			if (FMath::Abs(RPM) > (MaxRPM - rpmDelta))
			{
				wheelForce = 0.f;
			}

			if (!bInAir)
			{
				float brakeDirection = bUseBrakeAsReverse ? -1 : -velocityDirection;
				//float clampedBrakeForce = FMath::GetMappedRangeValueClamped(FVector2D(MaxSpeedInReverse - 20.f, MaxSpeedInReverse), FVector2D(BrakeForce, 0.f), FMath::Abs(GetSpeedKPH()));
				float brakesAsReverseForce = FMath::Abs(RPM) < MaxRPM ? BrakeForce : 0.f;

				float fb = bUseBrakeAsReverse ? brakesAsReverseForce : standardBrakeForce;

				if (bUseBrakeAsReverse && (GetSpeedKPH() < -MaxSpeedInReverse))
				{
					fb = 0.f;
				}


				float fres = ((wheelForce * TransmissionEfficiency * Throttle) + (fb * Brakes * brakeDirection) + (powerBrake)) * 100.f;

				UAsyncTickFunctions::ATP_AddForce(PrimitiveComponent, fwd * fres, false);
				UAsyncTickFunctions::ATP_AddTorque(PrimitiveComponent, -rgt * fres * 10.f, false);

				if (DynamicPitchMomentMultiplier != 0)
				{
					UAsyncTickFunctions::ATP_AddTorque(PrimitiveComponent, -rgt * wheelForce * Throttle * 100.f * DynamicPitchMomentMultiplier, false);
					//UAsyncTickFunctions::ATP_AddTorque(PrimitiveComponent, -rgt * BrakeForce * brakeDirection * Brakes * 100.f * DynamicPitchMomentMultiplier, false);
				}
				if (DynamicPitchMomentMultiplier != 0)
				{
					UAsyncTickFunctions::ATP_AddTorque(PrimitiveComponent, -rgt * fb * Brakes * brakeDirection * 100.f * DynamicBrakeMomentMultiplier, false);
					//UAsyncTickFunctions::ATP_AddTorque(PrimitiveComponent, -rgt * BrakeForce * brakeDirection * Brakes * 100.f * DynamicPitchMomentMultiplier, false);
				}
			}

		}

		Drag = 0.5f * AirDensity * (FMath::Pow(GetLinearVelocity(), 2)) * CoefficientOfDrag * CrossSectionArea;
		UAsyncTickFunctions::ATP_AddForce(PrimitiveComponent, fwd * 100 * Drag * -velocityDirection, false);


		FVector _velocity = UKismetMathLibrary::InverseTransformDirection(PhysicsTransform, UAsyncTickFunctions::ATP_GetLinearVelocity(PrimitiveComponent));
		_velocity.Z = 0.f;


		float _rpm = xg * xd * GetLinearVelocity() * WheelRadius * (60.f / 2.f * PI) * RPM_Multiplier;
		float interpSpeed = 15.f;


		RPM = FMath::Clamp(FMath::FInterpTo(RPM, _rpm, DeltaTime, interpSpeed), -MaxRPM, MaxRPM);

		if (IsUpshifting)
		{
			UpshiftFrameCount++;

			if (UpshiftFrameCount * DeltaTime > ShiftDelay)
			{
				IsUpshifting = false;
			}
		}
		else
		{
			UpshiftFrameCount = 0;
		}

		if (IsDownshifting)
		{
			DownshiftFrameCount++;

			if (DownshiftFrameCount * DeltaTime > ShiftDelay)
			{
				IsDownshifting = false;
			}
		}
		else
		{
			DownshiftFrameCount = 0.f;
		}

	}
	else
	{
		//ARCADE POWERTRAIN
		float clampedTorque = FMath::GetMappedRangeValueClamped(FVector2D(MaxSpeed - 20.f, MaxSpeed), FVector2D(EngineTorque, 0.f), FMath::Abs(GetSpeedKPH()));
		CurrentTorque = clampedTorque;
		float clampedBrakeForce = BrakeForce;
		if (GetSpeedKPH() < 0 && GetSpeedKPH() < -MaxSpeedInReverse) { clampedBrakeForce = 0.f; }
		ResultantForce = clampedTorque * Xg * Xd * (1.f / WheelRadius);
		float dynamicForce = (Throttle * ResultantForce) - (Brakes * clampedBrakeForce);
		float fres = dynamicForce + (ExternalResistanceForce * -d);

		if (!bInAir)
		{
			UAsyncTickFunctions::ATP_AddForce(PrimitiveComponent, fres * fwd * 100.f, false);

			if (DynamicPitchMomentMultiplier != 0)
			{
				UAsyncTickFunctions::ATP_AddTorque(PrimitiveComponent, -rgt * dynamicForce * 100.f * DynamicPitchMomentMultiplier, false);
			}

		}
	}

	if (!bInAir)
	{
		float scaledTorque = FMath::GetMappedRangeValueClamped(FVector2D(3.f, 6.f), FVector2D(0.f, DriftTorque), FMath::Abs(GetLinearVelocity()));
		UAsyncTickFunctions::ATP_AddTorque(PrimitiveComponent, up * scaledTorque * SteeringInput * (FMath::Sign(GetLinearVelocity()) > 0 ? 1.f : -1.f), true);
	}

	PreviousLocalVelocity = LocalVelocity;
	FVector worldVelocity = UAsyncTickFunctions::ATP_GetLinearVelocity(PrimitiveComponent);
	LocalVelocity = UKismetMathLibrary::InverseTransformDirection(PhysicsTransform, worldVelocity);
	Speed = LocalVelocity.X * 0.01;

	Acceleration = (LocalVelocity - PreviousLocalVelocity) * 0.01 * (1.f/DeltaTime);


#pragma region Handbrake

	int frontHandbrakeCount = 0;
	int rearHandbrakeCount = 0;

	for (int i = 0; i < SuspensionComponents.Num(); i++)
	{
		if (SuspensionComponents[i] != nullptr)
		{
			EHandbrakeWheelType hbt = SuspensionComponents[i]->GetWheelHandbrake();

			if (hbt == EHandbrakeWheelType::Front && SuspensionComponents[i]->IsHandbrakeWheel())
			{
				frontHandbrakeCount++;
			}

			if (hbt == EHandbrakeWheelType::Rear && SuspensionComponents[i]->IsHandbrakeWheel())
			{
				rearHandbrakeCount++;
			}
		}

		bHandbrakeActive = (frontHandbrakeCount > 0 || rearHandbrakeCount > 0) && bHandbrakeInput;
		
		if (!bInAir)
		{
			if (bHandbrakeActive)
			{
				FVector planarVelocity = FVector
				(
					worldVelocity.X,
					worldVelocity.Y,
					0.f
				);

				FVector planarUdirection = planarVelocity;
				planarUdirection.Normalize();

				float hbf = HandbrakeStrength * (bHandbrakeInput? 1.f : 0.f);
				FVector2D hSpeedIn(0.f, 1.f);
				FVector2D hSpeedOut(0.f, hbf);
				float mapped_hbf = FMath::GetMappedRangeValueClamped(hSpeedIn, hSpeedOut, FMath::Abs(LocalVelocity.X));
				HandbrakeForce = mapped_hbf;

				UAsyncTickFunctions::ATP_AddForce(PrimitiveComponent, mapped_hbf * 100.f * -planarUdirection,false);

			}
		}
	}

#pragma endregion

#pragma region AirController


	FVector torque = FVector(
		(up * YawStrength * YawInput) + (rgt * PitchStrength * PitchInput) + (fwd * RollStrength * RollInput)
	);

	if (SuspensionComponents.Num() > 0)
	{
		int airborneCount = 0;
		for (USuspensionComponent* s : SuspensionComponents)
		{
			if (s->IsInAir())
			{
				airborneCount++;
			}
		}

		if (InAirWheelCount <= airborneCount)
		{
			UAsyncTickFunctions::ATP_AddTorque(PrimitiveComponent, torque, true);
		}
	}
	else
	{
		UAsyncTickFunctions::ATP_AddTorque(PrimitiveComponent, torque, true);
	}
#pragma endregion

#pragma region AntiGravity

	if (AntiGravity != nullptr)
	{
			if (bAntiGravityEnabled)
			{
				if(bInAir)
				{
					AntiGravityOffContactTime = AntiGravityOffContactTime + AsyncDeltaTime;
				}
				else
				{
					AntiGravityOffContactTime = 0;
				}

				bAntiGravityActive = (AntiGravityOffContactTime < AntiGravityOffContactThreshold);
				if ( bAntiGravityActive || bOverrideAntiGravity)
				{
					float z_base = FMath::Clamp(1.f - GetPhysicsTransform().GetRotation().GetUpVector().Dot(FVector(0.f, 0.f, 1.f)), -1.f, 1.f);
					float x_base = AntiGravity->GetUpVector().Dot(GetPhysicsTransform().GetRotation().GetForwardVector());
					float y_base = AntiGravity->GetUpVector().Dot(GetPhysicsTransform().GetRotation().GetRightVector());
					float mass = AntiGravityMass + AddedMass;

					FVector zForce = z_base * mass * GetPhysicsTransform().GetRotation().GetUpVector() * -GravityStrength * AntiGravityZStrength;
					FVector xForce = x_base * mass * GetPhysicsTransform().GetRotation().GetForwardVector() * GravityStrength * AntiGravityXStrength;
					FVector yForce = y_base * mass * GetPhysicsTransform().GetRotation().GetRightVector() * GravityStrength * AntiGravityYStrength;

					//Even though up, forward and right are mutually perpendicular - split this for neatness and futureproofing.
					UAsyncTickFunctions::ATP_AddForce(
						PrimitiveComponent,
						zForce,
						false,
						NAME_None
					);

					UAsyncTickFunctions::ATP_AddForce(
						PrimitiveComponent,
						xForce,
						false,
						NAME_None
					);

					UAsyncTickFunctions::ATP_AddForce(
						PrimitiveComponent,
						yForce,
						false,
						NAME_None
					);
				}
			}
		
	}

#pragma endregion

}


void ARTuneVehicle::AnimateSteering()
{
	float sensitivity = bUseSensitivityClamp ? FMath::GetMappedRangeValueClamped(SteeringSensitivityClamp.InputRange, SteeringSensitivityClamp.OutputRange, GetSpeedKPH()) : SteeringSensitivity;
	for (int i = 0; i < SuspensionComponents.Num(); i++)
	{
		if (SuspensionComponents[i]->IsSteeringWheel())
		{
			SuspensionComponents[i]->SetSteeringInput(SteeringInput, sensitivity);
		}
	}
}

void ARTuneVehicle::ServerStateSync(bool updatePhysics)
{
	if (updatePhysics)
	{
		ServerState.ServerLinearVelocity = UAsyncTickFunctions::ATP_GetLinearVelocity(PrimitiveComponent);
		ServerState.ServerAngularVelocity = UAsyncTickFunctions::ATP_GetAngularVelocity(PrimitiveComponent);
		ServerState.ServerTransform = UAsyncTickFunctions::ATP_GetTransform(PrimitiveComponent);
	}

	ServerState.ServerRPM = RPM;
	ServerState.ServerCurrentGearRatio = Xg;
	ServerState.ServerCurrentGear = CurrentGear;
	ServerState.ServerThrottle = Throttle;
	ServerState.ServerBrakes = Brakes;
	ServerState.ServerSteering = SteeringInput;
	ServerState.ServerSpeed = Speed;
	ServerState.ServerIsUpshifting = IsUpshifting;
	ServerState.ServerIsDownshifting = IsDownshifting;
}

void ARTuneVehicle::ClientStateSync(bool updatePhysics)
{
	if (updatePhysics)
	{
		UAsyncTickFunctions::ATP_SetLinearVelocity(PrimitiveComponent, ServerState.ServerLinearVelocity, false);
		UAsyncTickFunctions::ATP_SetAngularVelocityInRadians(PrimitiveComponent, ServerState.ServerAngularVelocity, false);
	}
	RPM = ServerState.ServerRPM;
	Xg = ServerState.ServerCurrentGearRatio;
	CurrentGear = ServerState.ServerCurrentGear;
	Throttle = ServerState.ServerThrottle;
	Brakes = ServerState.ServerBrakes;
	SteeringInput = ServerState.ServerSteering;
	Speed = ServerState.ServerSpeed;
	IsUpshifting = ServerState.ServerIsUpshifting;
	IsDownshifting = ServerState.ServerIsDownshifting;
}


float ARTuneVehicle::GetRPM()
{
	return RPM;
}

bool ARTuneVehicle::IsGearboxUpshifting()
{
	return IsUpshifting;
}

bool ARTuneVehicle::IsGearboxDownshifting()
{
	return IsDownshifting;
}

int ARTuneVehicle::GetCurrentGear()
{
	return CurrentGear;
}

FTransform ARTuneVehicle::GetPhysicsTransform()
{
	return PhysicsTransform;
}

bool ARTuneVehicle::GetIsHandbrakeActive()
{
	return bHandbrakeActive;
}

float ARTuneVehicle::GetSideSlipAngle()
{
	return FMath::RadiansToDegrees(FMath::Atan(UKismetMathLibrary::SafeDivide(GetVelocityVector().Y, GetVelocityVector().X)));
}

float ARTuneVehicle::GetHandbrakeStrength()
{
	return HandbrakeForce;
}

UPrimitiveComponent* ARTuneVehicle::GetPrimitiveRoot()
{
	return PrimitiveComponent;
}

bool ARTuneVehicle::IsAntiGravityActive()
{
	return bAntiGravityActive;
}

float ARTuneVehicle::GetLongitudinalG()
{
	return (Acceleration.X/9.81);
}

float ARTuneVehicle::GetLateralG()
{
	return (Acceleration.Y / 9.81);
}

float ARTuneVehicle::GetVerticalG()
{
	return (Acceleration.Z / 9.81);
}

TArray<USuspensionComponent*> ARTuneVehicle::GetSuspension()
{
	return SuspensionComponents;
}

void ARTuneVehicle::Shift(bool bUpshift)
{
	if (bUpshift)
	{
		if (CurrentGear + 1 < GearRatios.Num() && (!IsUpshifting || IsDownshifting))
		{
			IsUpshifting = true;
			CurrentGear++;
		}
	}
	else
	{
		if (CurrentGear - 1 >= 0 && (IsUpshifting || !IsDownshifting))
		{
			IsDownshifting = true;
			CurrentGear--;
		}
	}
}

void ARTuneVehicle::Upshift()
{
	Shift(true);
}

void ARTuneVehicle::Downshift()
{
	Shift(false);
}

void ARTuneVehicle::OverrideRPM(float newRPM)
{
	RPM = newRPM;
}

void ARTuneVehicle::OverrideAntiGravityState(bool bOn)
{
	bOverrideAntiGravity = bOn;
}

void ARTuneVehicle::RTWakeRigidBodies()
{
	PrimitiveComponent->WakeAllRigidBodies();
}

void ARTuneVehicle::SetArcadeMaxSpeed(float newMaxSpeed)
{
	MaxSpeed = newMaxSpeed;
}


#pragma region Settors

void ARTuneVehicle::SetThrottleInput(float value)
{
	Throttle = IsUpshifting ? 0 : value;
	ServerSetThrottleInput(Throttle);
}


void ARTuneVehicle::ServerSetThrottleInput_Implementation(float value)
{
	Throttle = value;
}

bool ARTuneVehicle::ServerSetThrottleInput_Validate(float value)
{
	return FMath::Abs(value) <= 1;
}


void ARTuneVehicle::ApplyHandbrakeInput(bool value)
{
	bHandbrakeInput = value;
}


void ARTuneVehicle::SetBrakeInput(float value)
{
	Brakes = value;
	ServerSetBrakeInput(Brakes);
}

void ARTuneVehicle::ServerSetBrakeInput_Implementation(float value)
{
	Brakes = value;
}

bool ARTuneVehicle::ServerSetBrakeInput_Validate(float value)
{
	return FMath::Abs(value) <= 1;
}

float ARTuneVehicle::GetProcessedSteeringInput(float value)
{
	float processedInput = 0.f;
	switch (SteeringInputClamp)
	{
	case ESpeedClamp::NoClamp:
		processedInput = value;
		break;

	case ESpeedClamp::Constant:
		processedInput = value * ConstantSteeringClamp;
		break;

	case ESpeedClamp::Linear:
		processedInput = value * FMath::GetMappedRangeValueClamped(LinearSteeringInputClamp.InputRange, LinearSteeringInputClamp.OutputRange, GetSpeedKPH());
		break;

	case ESpeedClamp::Curve:
		if (CurveSteeringInputClamp != nullptr)
		{
			processedInput = value * CurveSteeringInputClamp->GetFloatValue(GetSpeedKPH());
		}
		else
		{
			processedInput = value;
		}
		break;
	}

	return processedInput;
}

void ARTuneVehicle::SetSteeringInput(float value)
{
	SteeringInput = GetProcessedSteeringInput(value);
	ServerSetSteeringInput(SteeringInput);

	/*
	float sensitivity = bUseSensitivityClamp ? FMath::GetMappedRangeValueClamped(SteeringSensitivityClamp.InputRange, SteeringSensitivityClamp.OutputRange, GetSpeedKPH()) : SteeringSensitivity;
	for (int i = 0; i < SuspensionComponents.Num(); i++)
	{
		if (SuspensionComponents[i]->IsSteeringWheel())
		{
			SuspensionComponents[i]->SetSteeringInput(SteeringInput,sensitivity);
		}
	}	
	*/
	
}

void ARTuneVehicle::ServerSetSteeringInput_Implementation(float value)
{
	SteeringInput = value;
}

bool ARTuneVehicle::ServerSetSteeringInput_Validate(float value)
{
	return FMath::Abs(value) <= 1;
}

void ARTuneVehicle::Jump(float amount)
{
	if (!bInAir)
	{
		FVector up = PhysicsTransform.GetRotation().GetUpVector();
		UAsyncTickFunctions::ATP_AddImpulse(PrimitiveComponent, up * amount, true);
	}
}


void ARTuneVehicle::SetAirPitchInput(float value)
{
	PitchInput = value;
	ServerSetAirPitchInput(value);
}

void ARTuneVehicle::ServerSetAirPitchInput_Implementation(float value)
{
	PitchInput = value;
}


bool ARTuneVehicle::ServerSetAirPitchInput_Validate(float value)
{
	return FMath::Abs(value) <= 1;
}


void ARTuneVehicle::SetAirRollInput(float value)
{
	RollInput = value;
	ServerSetAirRollInput(value);
}

void ARTuneVehicle::ServerSetAirRollInput_Implementation(float value)
{
	RollInput = value;
}

bool ARTuneVehicle::ServerSetAirRollInput_Validate(float value)
{
	return FMath::Abs(value) <= 1;
}

void ARTuneVehicle::SetAirYawInput(float value)
{
	YawInput = value;
	ServerSetAirYawInput(value);
}

void ARTuneVehicle::ServerSetAirYawInput_Implementation(float value)
{
	YawInput = value;
}


bool ARTuneVehicle::ServerSetAirYawInput_Validate(float value)
{
	return FMath::Abs(value) <= 1;
}


#pragma region ReplicationInput
///

void ARTuneVehicle::SetExtReplicationInput1(float value)
{
	ExtReplicationInput1 = value;
	ServerSetExtReplicationInput1(ExtReplicationInput1);

}

void ARTuneVehicle::ServerSetExtReplicationInput1_Implementation(float value)
{
	ExtReplicationInput1 = value;
}

bool ARTuneVehicle::ServerSetExtReplicationInput1_Validate(float value)
{
	return FMath::Abs(value) <= 1;
}

float ARTuneVehicle::GetExtReplicationInput1()
{
	return ExtReplicationInput1;
}

///

void ARTuneVehicle::SetExtReplicationInput2(float value)
{
	ExtReplicationInput2 = value;
	ServerSetExtReplicationInput2(ExtReplicationInput2);

}

void ARTuneVehicle::ServerSetExtReplicationInput2_Implementation(float value)
{
	ExtReplicationInput2 = value;
}

bool ARTuneVehicle::ServerSetExtReplicationInput2_Validate(float value)
{
	return FMath::Abs(value) <= 1;
}

float ARTuneVehicle::GetExtReplicationInput2()
{
	return ExtReplicationInput2;
}

///

void ARTuneVehicle::SetExtReplicationInput3(float value)
{
	ExtReplicationInput3 = value;
	ServerSetExtReplicationInput3(ExtReplicationInput3);

}

void ARTuneVehicle::ServerSetExtReplicationInput3_Implementation(float value)
{
	ExtReplicationInput3 = value;
}

bool ARTuneVehicle::ServerSetExtReplicationInput3_Validate(float value)
{
	return FMath::Abs(value) <= 1;
}

float ARTuneVehicle::GetExtReplicationInput3()
{
	return ExtReplicationInput3;
}

///

void ARTuneVehicle::SetExtReplicationInput4(float value)
{
	ExtReplicationInput4 = value;
	ServerSetExtReplicationInput4(ExtReplicationInput4);

}

void ARTuneVehicle::ServerSetExtReplicationInput4_Implementation(float value)
{
	ExtReplicationInput4 = value;
}

bool ARTuneVehicle::ServerSetExtReplicationInput4_Validate(float value)
{
	return FMath::Abs(value) <= 1;
}

float ARTuneVehicle::GetExtReplicationInput4()
{
	return ExtReplicationInput4;
}

///

void ARTuneVehicle::SetExtReplicationInput5(float value)
{
	ExtReplicationInput5 = value;
	ServerSetExtReplicationInput5(ExtReplicationInput5);

}

void ARTuneVehicle::ServerSetExtReplicationInput5_Implementation(float value)
{
	ExtReplicationInput5 = value;
}

bool ARTuneVehicle::ServerSetExtReplicationInput5_Validate(float value)
{
	return FMath::Abs(value) <= 1;
}

float ARTuneVehicle::GetExtReplicationInput5()
{
	return ExtReplicationInput5;
}

///

void ARTuneVehicle::SetExtReplicationInput6(float value)
{
	ExtReplicationInput6 = value;
	ServerSetExtReplicationInput5(ExtReplicationInput6);

}

void ARTuneVehicle::ServerSetExtReplicationInput6_Implementation(float value)
{
	ExtReplicationInput6 = value;
}

bool ARTuneVehicle::ServerSetExtReplicationInput6_Validate(float value)
{
	return FMath::Abs(value) <= 1;
}

float ARTuneVehicle::GetExtReplicationInput6()
{
	return ExtReplicationInput6;
}

#pragma endregion

void ARTuneVehicle::SetEngineTorque(float newTorque)
{
	EngineTorque = newTorque;
}

void ARTuneVehicle::SetCurrentGearRatio(float newGearRatio)
{
	Xg = newGearRatio;
}

void ARTuneVehicle::SetDifferentialRatio(float newDifferentialRatio)
{
	Xd = newDifferentialRatio;
}

void ARTuneVehicle::SetPhysicsWheelRadius(float newRadius)
{
	WheelRadius = newRadius;
}

void ARTuneVehicle::SetExternalResistanceForce(float force)
{
	ExternalResistanceForce = force;
}

#pragma endregion

#pragma region Gettors



float ARTuneVehicle::GetSpeedKPH()
{


	return Speed * 3.6f;
}

float ARTuneVehicle::GetLinearVelocity()
{
	return UKismetMathLibrary::InverseTransformDirection(PhysicsTransform, UAsyncTickFunctions::ATP_GetLinearVelocity(PrimitiveComponent)).X * 0.01f;
}

FVector ARTuneVehicle::GetVelocityVector()
{
	return UKismetMathLibrary::InverseTransformDirection(PhysicsTransform, UAsyncTickFunctions::ATP_GetLinearVelocity(PrimitiveComponent)) * 0.01f;
}

float ARTuneVehicle::GetThrottleInput()
{
	return Throttle;
}

float ARTuneVehicle::GetBrakesInput()
{
	return Brakes;
}

float ARTuneVehicle::GetSteeringInput()
{
	return SteeringInput;
}

bool ARTuneVehicle::GetHandbrakeInput()
{
	return bHandbrakeInput;
}

void ARTuneVehicle::SetBrakesEnabled(bool bEnabled)
{
	//float r = BrakeForce;
	BrakeForce = bEnabled ? BrakeForceDuplicate : 0.f;

}

void ARTuneVehicle::SetEngineTorqueEnabled(bool bEnabled, float tempTorque)
{
	EngineTorque = bEnabled ? EngineTorqueDuplicate : tempTorque;
}

void ARTuneVehicle::SetInAir(bool bAirborne)
{
	bInAir = bAirborne;
}


float ARTuneVehicle::GetEngineTorque()
{
	return EngineTorque;
}

float ARTuneVehicle::GetEngineCurrentTorque()
{
	return CurrentTorque;
}

float ARTuneVehicle::GetCurrentGearRatio()
{
	return Xg;
}

float ARTuneVehicle::GetDifferentialRatio()
{
	return Xd;
}

float ARTuneVehicle::GetPhysicsWheelRadius()
{
	return WheelRadius;
}

float ARTuneVehicle::GetExternalResistanceForce()
{
	return ExternalResistanceForce;
}

#pragma endregion