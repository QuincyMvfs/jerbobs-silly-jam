// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Vehicle/RTuneVehicle.h"

#ifdef RTUNE_RTuneVehicle_generated_h
#error "RTuneVehicle.generated.h already included, missing '#pragma once' in RTuneVehicle.h"
#endif
#define RTUNE_RTuneVehicle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class USceneComponent;
class UStaticMeshComponent;

// ********** Begin ScriptStruct FRangedClamp ******************************************************
struct Z_Construct_UScriptStruct_FRangedClamp_Statics;
#define FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRangedClamp_Statics; \
	RTUNE_API static class UScriptStruct* StaticStruct();


struct FRangedClamp;
// ********** End ScriptStruct FRangedClamp ********************************************************

// ********** Begin ScriptStruct FServerState ******************************************************
struct Z_Construct_UScriptStruct_FServerState_Statics;
#define FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FServerState_Statics; \
	RTUNE_API static class UScriptStruct* StaticStruct();


struct FServerState;
// ********** End ScriptStruct FServerState ********************************************************

// ********** Begin Class ARTuneVehicle ************************************************************
#define FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerSetExtReplicationInput6_Validate(float ); \
	virtual void ServerSetExtReplicationInput6_Implementation(float value); \
	virtual bool ServerSetExtReplicationInput5_Validate(float ); \
	virtual void ServerSetExtReplicationInput5_Implementation(float value); \
	virtual bool ServerSetExtReplicationInput4_Validate(float ); \
	virtual void ServerSetExtReplicationInput4_Implementation(float value); \
	virtual bool ServerSetExtReplicationInput3_Validate(float ); \
	virtual void ServerSetExtReplicationInput3_Implementation(float value); \
	virtual bool ServerSetExtReplicationInput2_Validate(float ); \
	virtual void ServerSetExtReplicationInput2_Implementation(float value); \
	virtual bool ServerSetExtReplicationInput1_Validate(float ); \
	virtual void ServerSetExtReplicationInput1_Implementation(float value); \
	virtual bool ServerSetAirRollInput_Validate(float ); \
	virtual void ServerSetAirRollInput_Implementation(float value); \
	virtual bool ServerSetAirYawInput_Validate(float ); \
	virtual void ServerSetAirYawInput_Implementation(float value); \
	virtual bool ServerSetAirPitchInput_Validate(float ); \
	virtual void ServerSetAirPitchInput_Implementation(float value); \
	virtual bool ServerSetSteeringInput_Validate(float ); \
	virtual void ServerSetSteeringInput_Implementation(float value); \
	virtual bool ServerSetBrakeInput_Validate(float ); \
	virtual void ServerSetBrakeInput_Implementation(float value); \
	virtual bool ServerSetThrottleInput_Validate(float ); \
	virtual void ServerSetThrottleInput_Implementation(float value); \
	DECLARE_FUNCTION(execGetVerticalG); \
	DECLARE_FUNCTION(execGetLateralG); \
	DECLARE_FUNCTION(execGetLongitudinalG); \
	DECLARE_FUNCTION(execIsAntiGravityActive); \
	DECLARE_FUNCTION(execGetPrimitiveRoot); \
	DECLARE_FUNCTION(execGetHandbrakeStrength); \
	DECLARE_FUNCTION(execGetSideSlipAngle); \
	DECLARE_FUNCTION(execGetIsHandbrakeActive); \
	DECLARE_FUNCTION(execGetPhysicsTransform); \
	DECLARE_FUNCTION(execGetCurrentGear); \
	DECLARE_FUNCTION(execIsGearboxDownshifting); \
	DECLARE_FUNCTION(execIsGearboxUpshifting); \
	DECLARE_FUNCTION(execGetRPM); \
	DECLARE_FUNCTION(execGetExternalResistanceForce); \
	DECLARE_FUNCTION(execGetPhysicsWheelRadius); \
	DECLARE_FUNCTION(execGetDifferentialRatio); \
	DECLARE_FUNCTION(execGetCurrentGearRatio); \
	DECLARE_FUNCTION(execGetEngineCurrentTorque); \
	DECLARE_FUNCTION(execGetEngineTorque); \
	DECLARE_FUNCTION(execGetHandbrakeInput); \
	DECLARE_FUNCTION(execGetSteeringInput); \
	DECLARE_FUNCTION(execGetBrakesInput); \
	DECLARE_FUNCTION(execGetThrottleInput); \
	DECLARE_FUNCTION(execGetVelocityVector); \
	DECLARE_FUNCTION(execGetLinearVelocity); \
	DECLARE_FUNCTION(execGetSpeedKPH); \
	DECLARE_FUNCTION(execRTWakeRigidBodies); \
	DECLARE_FUNCTION(execOverrideAntiGravityState); \
	DECLARE_FUNCTION(execOverrideRPM); \
	DECLARE_FUNCTION(execDownshift); \
	DECLARE_FUNCTION(execUpshift); \
	DECLARE_FUNCTION(execSetInAir); \
	DECLARE_FUNCTION(execSetEngineTorqueEnabled); \
	DECLARE_FUNCTION(execSetBrakesEnabled); \
	DECLARE_FUNCTION(execSetExternalResistanceForce); \
	DECLARE_FUNCTION(execSetPhysicsWheelRadius); \
	DECLARE_FUNCTION(execSetDifferentialRatio); \
	DECLARE_FUNCTION(execSetCurrentGearRatio); \
	DECLARE_FUNCTION(execSetEngineTorque); \
	DECLARE_FUNCTION(execGetExtReplicationInput6); \
	DECLARE_FUNCTION(execServerSetExtReplicationInput6); \
	DECLARE_FUNCTION(execSetExtReplicationInput6); \
	DECLARE_FUNCTION(execGetExtReplicationInput5); \
	DECLARE_FUNCTION(execServerSetExtReplicationInput5); \
	DECLARE_FUNCTION(execSetExtReplicationInput5); \
	DECLARE_FUNCTION(execGetExtReplicationInput4); \
	DECLARE_FUNCTION(execServerSetExtReplicationInput4); \
	DECLARE_FUNCTION(execSetExtReplicationInput4); \
	DECLARE_FUNCTION(execGetExtReplicationInput3); \
	DECLARE_FUNCTION(execServerSetExtReplicationInput3); \
	DECLARE_FUNCTION(execSetExtReplicationInput3); \
	DECLARE_FUNCTION(execGetExtReplicationInput2); \
	DECLARE_FUNCTION(execServerSetExtReplicationInput2); \
	DECLARE_FUNCTION(execSetExtReplicationInput2); \
	DECLARE_FUNCTION(execGetExtReplicationInput1); \
	DECLARE_FUNCTION(execServerSetExtReplicationInput1); \
	DECLARE_FUNCTION(execSetExtReplicationInput1); \
	DECLARE_FUNCTION(execServerSetAirRollInput); \
	DECLARE_FUNCTION(execSetAirRollInput); \
	DECLARE_FUNCTION(execServerSetAirYawInput); \
	DECLARE_FUNCTION(execSetAirYawInput); \
	DECLARE_FUNCTION(execServerSetAirPitchInput); \
	DECLARE_FUNCTION(execSetAirPitchInput); \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execServerSetSteeringInput); \
	DECLARE_FUNCTION(execSetSteeringInput); \
	DECLARE_FUNCTION(execServerSetBrakeInput); \
	DECLARE_FUNCTION(execSetBrakeInput); \
	DECLARE_FUNCTION(execApplyHandbrakeInput); \
	DECLARE_FUNCTION(execServerSetThrottleInput); \
	DECLARE_FUNCTION(execSetThrottleInput); \
	DECLARE_FUNCTION(execInitializeAntiGravity); \
	DECLARE_FUNCTION(execAsyncReplicatedTick);


#define FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h_136_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ARTuneVehicle_Statics;
RTUNE_API UClass* Z_Construct_UClass_ARTuneVehicle_NoRegister();

#define FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h_136_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARTuneVehicle(); \
	friend struct ::Z_Construct_UClass_ARTuneVehicle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RTUNE_API UClass* ::Z_Construct_UClass_ARTuneVehicle_NoRegister(); \
public: \
	DECLARE_CLASS2(ARTuneVehicle, AAsyncTickPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTune"), Z_Construct_UClass_ARTuneVehicle_NoRegister) \
	DECLARE_SERIALIZER(ARTuneVehicle) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ServerState=NETFIELD_REP_START, \
		ServerVelocity, \
		ServerAngularVelocity, \
		NETFIELD_REP_END=ServerAngularVelocity	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h_136_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARTuneVehicle(ARTuneVehicle&&) = delete; \
	ARTuneVehicle(const ARTuneVehicle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTuneVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTuneVehicle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTuneVehicle) \
	NO_API virtual ~ARTuneVehicle();


#define FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h_133_PROLOG
#define FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h_136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h_136_CALLBACK_WRAPPERS \
	FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h_136_INCLASS_NO_PURE_DECLS \
	FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h_136_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARTuneVehicle;

// ********** End Class ARTuneVehicle **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h

// ********** Begin Enum ESpeedClamp ***************************************************************
#define FOREACH_ENUM_ESPEEDCLAMP(op) \
	op(ESpeedClamp::NoClamp) \
	op(ESpeedClamp::Constant) \
	op(ESpeedClamp::Linear) \
	op(ESpeedClamp::Curve) 

enum class ESpeedClamp : uint8;
template<> struct TIsUEnumClass<ESpeedClamp> { enum { Value = true }; };
template<> RTUNE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESpeedClamp>();
// ********** End Enum ESpeedClamp *****************************************************************

// ********** Begin Enum EBehaviourType ************************************************************
#define FOREACH_ENUM_EBEHAVIOURTYPE(op) \
	op(EBehaviourType::Standard) \
	op(EBehaviourType::Arcade) 

enum class EBehaviourType : uint8;
template<> struct TIsUEnumClass<EBehaviourType> { enum { Value = true }; };
template<> RTUNE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBehaviourType>();
// ********** End Enum EBehaviourType **************************************************************

// ********** Begin Enum ETorqueImplementation *****************************************************
#define FOREACH_ENUM_ETORQUEIMPLEMENTATION(op) \
	op(ETorqueImplementation::ETI_Constant) \
	op(ETorqueImplementation::ETI_Curve) 

enum class ETorqueImplementation : uint8;
template<> struct TIsUEnumClass<ETorqueImplementation> { enum { Value = true }; };
template<> RTUNE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETorqueImplementation>();
// ********** End Enum ETorqueImplementation *******************************************************

// ********** Begin Enum EReplicationType **********************************************************
#define FOREACH_ENUM_EREPLICATIONTYPE(op) \
	op(EReplicationType::ERT_Full) \
	op(EReplicationType::ERT_DataOnly) \
	op(EReplicationType::ERT_None) 

enum class EReplicationType : uint8;
template<> struct TIsUEnumClass<EReplicationType> { enum { Value = true }; };
template<> RTUNE_NON_ATTRIBUTED_API UEnum* StaticEnum<EReplicationType>();
// ********** End Enum EReplicationType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
