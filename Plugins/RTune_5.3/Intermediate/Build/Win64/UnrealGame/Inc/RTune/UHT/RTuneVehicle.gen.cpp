// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vehicle/RTuneVehicle.h"
#include "UObject/CoreNet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRTuneVehicle() {}

// ********** Begin Cross Module References ********************************************************
ASYNCTICKPHYSICS_API UClass* Z_Construct_UClass_AAsyncTickPawn();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
RTUNE_API UClass* Z_Construct_UClass_ARTuneVehicle();
RTUNE_API UClass* Z_Construct_UClass_ARTuneVehicle_NoRegister();
RTUNE_API UEnum* Z_Construct_UEnum_RTune_EBehaviourType();
RTUNE_API UEnum* Z_Construct_UEnum_RTune_EReplicationType();
RTUNE_API UEnum* Z_Construct_UEnum_RTune_ESpeedClamp();
RTUNE_API UEnum* Z_Construct_UEnum_RTune_ETorqueImplementation();
RTUNE_API UScriptStruct* Z_Construct_UScriptStruct_FRangedClamp();
RTUNE_API UScriptStruct* Z_Construct_UScriptStruct_FServerState();
UPackage* Z_Construct_UPackage__Script_RTune();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESpeedClamp ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeedClamp;
static UEnum* ESpeedClamp_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpeedClamp.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpeedClamp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RTune_ESpeedClamp, (UObject*)Z_Construct_UPackage__Script_RTune(), TEXT("ESpeedClamp"));
	}
	return Z_Registration_Info_UEnum_ESpeedClamp.OuterSingleton;
}
template<> RTUNE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESpeedClamp>()
{
	return ESpeedClamp_StaticEnum();
}
struct Z_Construct_UEnum_RTune_ESpeedClamp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Constant.Display", "Constant" },
		{ "Constant.Name", "ESpeedClamp::Constant" },
		{ "Curve.Display", "Curve" },
		{ "Curve.Name", "ESpeedClamp::Curve" },
		{ "Linear.Display", "Linear" },
		{ "Linear.Name", "ESpeedClamp::Linear" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
		{ "NoClamp.Display", "No Clamp" },
		{ "NoClamp.Name", "ESpeedClamp::NoClamp" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpeedClamp::NoClamp", (int64)ESpeedClamp::NoClamp },
		{ "ESpeedClamp::Constant", (int64)ESpeedClamp::Constant },
		{ "ESpeedClamp::Linear", (int64)ESpeedClamp::Linear },
		{ "ESpeedClamp::Curve", (int64)ESpeedClamp::Curve },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RTune_ESpeedClamp_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RTune_ESpeedClamp_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RTune,
	nullptr,
	"ESpeedClamp",
	"ESpeedClamp",
	Z_Construct_UEnum_RTune_ESpeedClamp_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RTune_ESpeedClamp_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RTune_ESpeedClamp_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RTune_ESpeedClamp_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RTune_ESpeedClamp()
{
	if (!Z_Registration_Info_UEnum_ESpeedClamp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeedClamp.InnerSingleton, Z_Construct_UEnum_RTune_ESpeedClamp_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpeedClamp.InnerSingleton;
}
// ********** End Enum ESpeedClamp *****************************************************************

// ********** Begin Enum EBehaviourType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBehaviourType;
static UEnum* EBehaviourType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBehaviourType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBehaviourType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RTune_EBehaviourType, (UObject*)Z_Construct_UPackage__Script_RTune(), TEXT("EBehaviourType"));
	}
	return Z_Registration_Info_UEnum_EBehaviourType.OuterSingleton;
}
template<> RTUNE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBehaviourType>()
{
	return EBehaviourType_StaticEnum();
}
struct Z_Construct_UEnum_RTune_EBehaviourType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Arcade.Display", "Arcade" },
		{ "Arcade.Name", "EBehaviourType::Arcade" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
		{ "Standard.Display", "Standard" },
		{ "Standard.Name", "EBehaviourType::Standard" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBehaviourType::Standard", (int64)EBehaviourType::Standard },
		{ "EBehaviourType::Arcade", (int64)EBehaviourType::Arcade },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RTune_EBehaviourType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RTune_EBehaviourType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RTune,
	nullptr,
	"EBehaviourType",
	"EBehaviourType",
	Z_Construct_UEnum_RTune_EBehaviourType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RTune_EBehaviourType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RTune_EBehaviourType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RTune_EBehaviourType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RTune_EBehaviourType()
{
	if (!Z_Registration_Info_UEnum_EBehaviourType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBehaviourType.InnerSingleton, Z_Construct_UEnum_RTune_EBehaviourType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBehaviourType.InnerSingleton;
}
// ********** End Enum EBehaviourType **************************************************************

// ********** Begin Enum ETorqueImplementation *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETorqueImplementation;
static UEnum* ETorqueImplementation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETorqueImplementation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETorqueImplementation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RTune_ETorqueImplementation, (UObject*)Z_Construct_UPackage__Script_RTune(), TEXT("ETorqueImplementation"));
	}
	return Z_Registration_Info_UEnum_ETorqueImplementation.OuterSingleton;
}
template<> RTUNE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETorqueImplementation>()
{
	return ETorqueImplementation_StaticEnum();
}
struct Z_Construct_UEnum_RTune_ETorqueImplementation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ETI_Constant.DisplayName", "Constant" },
		{ "ETI_Constant.Name", "ETorqueImplementation::ETI_Constant" },
		{ "ETI_Curve.DisplayName", "Curve" },
		{ "ETI_Curve.Name", "ETorqueImplementation::ETI_Curve" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETorqueImplementation::ETI_Constant", (int64)ETorqueImplementation::ETI_Constant },
		{ "ETorqueImplementation::ETI_Curve", (int64)ETorqueImplementation::ETI_Curve },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RTune_ETorqueImplementation_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RTune_ETorqueImplementation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RTune,
	nullptr,
	"ETorqueImplementation",
	"ETorqueImplementation",
	Z_Construct_UEnum_RTune_ETorqueImplementation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RTune_ETorqueImplementation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RTune_ETorqueImplementation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RTune_ETorqueImplementation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RTune_ETorqueImplementation()
{
	if (!Z_Registration_Info_UEnum_ETorqueImplementation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETorqueImplementation.InnerSingleton, Z_Construct_UEnum_RTune_ETorqueImplementation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETorqueImplementation.InnerSingleton;
}
// ********** End Enum ETorqueImplementation *******************************************************

// ********** Begin Enum EReplicationType **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReplicationType;
static UEnum* EReplicationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EReplicationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EReplicationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RTune_EReplicationType, (UObject*)Z_Construct_UPackage__Script_RTune(), TEXT("EReplicationType"));
	}
	return Z_Registration_Info_UEnum_EReplicationType.OuterSingleton;
}
template<> RTUNE_NON_ATTRIBUTED_API UEnum* StaticEnum<EReplicationType>()
{
	return EReplicationType_StaticEnum();
}
struct Z_Construct_UEnum_RTune_EReplicationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ERT_DataOnly.DisplayName", "Data Only" },
		{ "ERT_DataOnly.Name", "EReplicationType::ERT_DataOnly" },
		{ "ERT_Full.DisplayName", "Full" },
		{ "ERT_Full.Name", "EReplicationType::ERT_Full" },
		{ "ERT_None.DisplayName", "None" },
		{ "ERT_None.Name", "EReplicationType::ERT_None" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EReplicationType::ERT_Full", (int64)EReplicationType::ERT_Full },
		{ "EReplicationType::ERT_DataOnly", (int64)EReplicationType::ERT_DataOnly },
		{ "EReplicationType::ERT_None", (int64)EReplicationType::ERT_None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RTune_EReplicationType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RTune_EReplicationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RTune,
	nullptr,
	"EReplicationType",
	"EReplicationType",
	Z_Construct_UEnum_RTune_EReplicationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RTune_EReplicationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RTune_EReplicationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RTune_EReplicationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RTune_EReplicationType()
{
	if (!Z_Registration_Info_UEnum_EReplicationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReplicationType.InnerSingleton, Z_Construct_UEnum_RTune_EReplicationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EReplicationType.InnerSingleton;
}
// ********** End Enum EReplicationType ************************************************************

// ********** Begin ScriptStruct FRangedClamp ******************************************************
struct Z_Construct_UScriptStruct_FRangedClamp_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRangedClamp); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRangedClamp); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputRange_MetaData[] = {
		{ "Category", "Custom Data" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputRange_MetaData[] = {
		{ "Category", "Custom Data" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRangedClamp constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRangedClamp constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRangedClamp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRangedClamp_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRangedClamp;
class UScriptStruct* FRangedClamp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRangedClamp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRangedClamp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRangedClamp, (UObject*)Z_Construct_UPackage__Script_RTune(), TEXT("RangedClamp"));
	}
	return Z_Registration_Info_UScriptStruct_FRangedClamp.OuterSingleton;
	}

// ********** Begin ScriptStruct FRangedClamp Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRangedClamp_Statics::NewProp_InputRange = { "InputRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRangedClamp, InputRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputRange_MetaData), NewProp_InputRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRangedClamp_Statics::NewProp_OutputRange = { "OutputRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRangedClamp, OutputRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputRange_MetaData), NewProp_OutputRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRangedClamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRangedClamp_Statics::NewProp_InputRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRangedClamp_Statics::NewProp_OutputRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRangedClamp_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRangedClamp Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRangedClamp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RTune,
	nullptr,
	&NewStructOps,
	"RangedClamp",
	Z_Construct_UScriptStruct_FRangedClamp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRangedClamp_Statics::PropPointers),
	sizeof(FRangedClamp),
	alignof(FRangedClamp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRangedClamp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRangedClamp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRangedClamp()
{
	if (!Z_Registration_Info_UScriptStruct_FRangedClamp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRangedClamp.InnerSingleton, Z_Construct_UScriptStruct_FRangedClamp_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRangedClamp.InnerSingleton);
}
// ********** End ScriptStruct FRangedClamp ********************************************************

// ********** Begin ScriptStruct FServerState ******************************************************
struct Z_Construct_UScriptStruct_FServerState_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FServerState); }
	static inline consteval int16 GetStructAlignment() { return alignof(FServerState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerLinearVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerAngularVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerRPM_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerCurrentGear_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerCurrentGearRatio_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerThrottle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerSteering_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerBrakes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerIsUpshifting_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerIsDownshifting_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FServerState constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerLinearVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerAngularVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerTransform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerRPM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerCurrentGear;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerCurrentGearRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerThrottle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerSteering;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerBrakes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerSpeed;
	static void NewProp_ServerIsUpshifting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ServerIsUpshifting;
	static void NewProp_ServerIsDownshifting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ServerIsDownshifting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FServerState constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FServerState_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FServerState;
class UScriptStruct* FServerState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FServerState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FServerState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerState, (UObject*)Z_Construct_UPackage__Script_RTune(), TEXT("ServerState"));
	}
	return Z_Registration_Info_UScriptStruct_FServerState.OuterSingleton;
	}

// ********** Begin ScriptStruct FServerState Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerLinearVelocity = { "ServerLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerState, ServerLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerLinearVelocity_MetaData), NewProp_ServerLinearVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerAngularVelocity = { "ServerAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerState, ServerAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerAngularVelocity_MetaData), NewProp_ServerAngularVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerTransform = { "ServerTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerState, ServerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerTransform_MetaData), NewProp_ServerTransform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerRPM = { "ServerRPM", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerState, ServerRPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerRPM_MetaData), NewProp_ServerRPM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerCurrentGear = { "ServerCurrentGear", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerState, ServerCurrentGear), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerCurrentGear_MetaData), NewProp_ServerCurrentGear_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerCurrentGearRatio = { "ServerCurrentGearRatio", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerState, ServerCurrentGearRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerCurrentGearRatio_MetaData), NewProp_ServerCurrentGearRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerThrottle = { "ServerThrottle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerState, ServerThrottle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerThrottle_MetaData), NewProp_ServerThrottle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerSteering = { "ServerSteering", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerState, ServerSteering), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerSteering_MetaData), NewProp_ServerSteering_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerBrakes = { "ServerBrakes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerState, ServerBrakes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerBrakes_MetaData), NewProp_ServerBrakes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerSpeed = { "ServerSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerState, ServerSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerSpeed_MetaData), NewProp_ServerSpeed_MetaData) };
void Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerIsUpshifting_SetBit(void* Obj)
{
	((FServerState*)Obj)->ServerIsUpshifting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerIsUpshifting = { "ServerIsUpshifting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FServerState), &Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerIsUpshifting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerIsUpshifting_MetaData), NewProp_ServerIsUpshifting_MetaData) };
void Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerIsDownshifting_SetBit(void* Obj)
{
	((FServerState*)Obj)->ServerIsDownshifting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerIsDownshifting = { "ServerIsDownshifting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FServerState), &Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerIsDownshifting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerIsDownshifting_MetaData), NewProp_ServerIsDownshifting_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerLinearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerAngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerRPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerCurrentGear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerCurrentGearRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerThrottle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerSteering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerBrakes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerIsUpshifting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerState_Statics::NewProp_ServerIsDownshifting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerState_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FServerState Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RTune,
	nullptr,
	&NewStructOps,
	"ServerState",
	Z_Construct_UScriptStruct_FServerState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerState_Statics::PropPointers),
	sizeof(FServerState),
	alignof(FServerState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FServerState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FServerState()
{
	if (!Z_Registration_Info_UScriptStruct_FServerState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FServerState.InnerSingleton, Z_Construct_UScriptStruct_FServerState_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FServerState.InnerSingleton);
}
// ********** End ScriptStruct FServerState ********************************************************

// ********** Begin Class ARTuneVehicle Function ApplyHandbrakeInput *******************************
struct Z_Construct_UFunction_ARTuneVehicle_ApplyHandbrakeInput_Statics
{
	struct RTuneVehicle_eventApplyHandbrakeInput_Parms
	{
		bool value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyHandbrakeInput constinit property declarations *******************
	static void NewProp_value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyHandbrakeInput constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyHandbrakeInput Property Definitions ******************************
void Z_Construct_UFunction_ARTuneVehicle_ApplyHandbrakeInput_Statics::NewProp_value_SetBit(void* Obj)
{
	((RTuneVehicle_eventApplyHandbrakeInput_Parms*)Obj)->value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARTuneVehicle_ApplyHandbrakeInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTuneVehicle_eventApplyHandbrakeInput_Parms), &Z_Construct_UFunction_ARTuneVehicle_ApplyHandbrakeInput_Statics::NewProp_value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_ApplyHandbrakeInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_ApplyHandbrakeInput_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ApplyHandbrakeInput_Statics::PropPointers) < 2048);
// ********** End Function ApplyHandbrakeInput Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_ApplyHandbrakeInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "ApplyHandbrakeInput", 	Z_Construct_UFunction_ARTuneVehicle_ApplyHandbrakeInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ApplyHandbrakeInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_ApplyHandbrakeInput_Statics::RTuneVehicle_eventApplyHandbrakeInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ApplyHandbrakeInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_ApplyHandbrakeInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_ApplyHandbrakeInput_Statics::RTuneVehicle_eventApplyHandbrakeInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_ApplyHandbrakeInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_ApplyHandbrakeInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execApplyHandbrakeInput)
{
	P_GET_UBOOL(Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyHandbrakeInput(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function ApplyHandbrakeInput *********************************

// ********** Begin Class ARTuneVehicle Function AsyncReplicatedTick *******************************
struct Z_Construct_UFunction_ARTuneVehicle_AsyncReplicatedTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AsyncReplicatedTick constinit property declarations *******************
// ********** End Function AsyncReplicatedTick constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_AsyncReplicatedTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "AsyncReplicatedTick", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_AsyncReplicatedTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_AsyncReplicatedTick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARTuneVehicle_AsyncReplicatedTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_AsyncReplicatedTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execAsyncReplicatedTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AsyncReplicatedTick();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function AsyncReplicatedTick *********************************

// ********** Begin Class ARTuneVehicle Function Downshift *****************************************
struct Z_Construct_UFunction_ARTuneVehicle_Downshift_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Downshift constinit property declarations *****************************
// ********** End Function Downshift constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_Downshift_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "Downshift", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_Downshift_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_Downshift_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARTuneVehicle_Downshift()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_Downshift_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execDownshift)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Downshift();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function Downshift *******************************************

// ********** Begin Class ARTuneVehicle Function GetBrakesInput ************************************
struct Z_Construct_UFunction_ARTuneVehicle_GetBrakesInput_Statics
{
	struct RTuneVehicle_eventGetBrakesInput_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBrakesInput constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBrakesInput constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBrakesInput Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetBrakesInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetBrakesInput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetBrakesInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetBrakesInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetBrakesInput_Statics::PropPointers) < 2048);
// ********** End Function GetBrakesInput Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetBrakesInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetBrakesInput", 	Z_Construct_UFunction_ARTuneVehicle_GetBrakesInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetBrakesInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetBrakesInput_Statics::RTuneVehicle_eventGetBrakesInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetBrakesInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetBrakesInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetBrakesInput_Statics::RTuneVehicle_eventGetBrakesInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetBrakesInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetBrakesInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetBrakesInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBrakesInput();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetBrakesInput **************************************

// ********** Begin Class ARTuneVehicle Function GetCurrentGear ************************************
struct Z_Construct_UFunction_ARTuneVehicle_GetCurrentGear_Statics
{
	struct RTuneVehicle_eventGetCurrentGear_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current gear index.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current gear index." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentGear constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentGear constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentGear Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetCurrentGear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetCurrentGear_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetCurrentGear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetCurrentGear_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetCurrentGear_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentGear Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetCurrentGear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetCurrentGear", 	Z_Construct_UFunction_ARTuneVehicle_GetCurrentGear_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetCurrentGear_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetCurrentGear_Statics::RTuneVehicle_eventGetCurrentGear_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetCurrentGear_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetCurrentGear_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetCurrentGear_Statics::RTuneVehicle_eventGetCurrentGear_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetCurrentGear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetCurrentGear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetCurrentGear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentGear();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetCurrentGear **************************************

// ********** Begin Class ARTuneVehicle Function GetCurrentGearRatio *******************************
struct Z_Construct_UFunction_ARTuneVehicle_GetCurrentGearRatio_Statics
{
	struct RTuneVehicle_eventGetCurrentGearRatio_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentGearRatio constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentGearRatio constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentGearRatio Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetCurrentGearRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetCurrentGearRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetCurrentGearRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetCurrentGearRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetCurrentGearRatio_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentGearRatio Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetCurrentGearRatio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetCurrentGearRatio", 	Z_Construct_UFunction_ARTuneVehicle_GetCurrentGearRatio_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetCurrentGearRatio_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetCurrentGearRatio_Statics::RTuneVehicle_eventGetCurrentGearRatio_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetCurrentGearRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetCurrentGearRatio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetCurrentGearRatio_Statics::RTuneVehicle_eventGetCurrentGearRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetCurrentGearRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetCurrentGearRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetCurrentGearRatio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentGearRatio();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetCurrentGearRatio *********************************

// ********** Begin Class ARTuneVehicle Function GetDifferentialRatio ******************************
struct Z_Construct_UFunction_ARTuneVehicle_GetDifferentialRatio_Statics
{
	struct RTuneVehicle_eventGetDifferentialRatio_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDifferentialRatio constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDifferentialRatio constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDifferentialRatio Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetDifferentialRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetDifferentialRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetDifferentialRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetDifferentialRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetDifferentialRatio_Statics::PropPointers) < 2048);
// ********** End Function GetDifferentialRatio Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetDifferentialRatio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetDifferentialRatio", 	Z_Construct_UFunction_ARTuneVehicle_GetDifferentialRatio_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetDifferentialRatio_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetDifferentialRatio_Statics::RTuneVehicle_eventGetDifferentialRatio_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetDifferentialRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetDifferentialRatio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetDifferentialRatio_Statics::RTuneVehicle_eventGetDifferentialRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetDifferentialRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetDifferentialRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetDifferentialRatio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDifferentialRatio();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetDifferentialRatio ********************************

// ********** Begin Class ARTuneVehicle Function GetEngineCurrentTorque ****************************
struct Z_Construct_UFunction_ARTuneVehicle_GetEngineCurrentTorque_Statics
{
	struct RTuneVehicle_eventGetEngineCurrentTorque_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current engine torque.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current engine torque." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetEngineCurrentTorque constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEngineCurrentTorque constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEngineCurrentTorque Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetEngineCurrentTorque_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetEngineCurrentTorque_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetEngineCurrentTorque_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetEngineCurrentTorque_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetEngineCurrentTorque_Statics::PropPointers) < 2048);
// ********** End Function GetEngineCurrentTorque Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetEngineCurrentTorque_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetEngineCurrentTorque", 	Z_Construct_UFunction_ARTuneVehicle_GetEngineCurrentTorque_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetEngineCurrentTorque_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetEngineCurrentTorque_Statics::RTuneVehicle_eventGetEngineCurrentTorque_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetEngineCurrentTorque_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetEngineCurrentTorque_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetEngineCurrentTorque_Statics::RTuneVehicle_eventGetEngineCurrentTorque_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetEngineCurrentTorque()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetEngineCurrentTorque_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetEngineCurrentTorque)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEngineCurrentTorque();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetEngineCurrentTorque ******************************

// ********** Begin Class ARTuneVehicle Function GetEngineTorque ***********************************
struct Z_Construct_UFunction_ARTuneVehicle_GetEngineTorque_Statics
{
	struct RTuneVehicle_eventGetEngineTorque_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the peak engine torque. To get the current engine torque use 'GetEngineCurrentTorque'.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the peak engine torque. To get the current engine torque use 'GetEngineCurrentTorque'." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetEngineTorque constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEngineTorque constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEngineTorque Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetEngineTorque_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetEngineTorque_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetEngineTorque_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetEngineTorque_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetEngineTorque_Statics::PropPointers) < 2048);
// ********** End Function GetEngineTorque Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetEngineTorque_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetEngineTorque", 	Z_Construct_UFunction_ARTuneVehicle_GetEngineTorque_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetEngineTorque_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetEngineTorque_Statics::RTuneVehicle_eventGetEngineTorque_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetEngineTorque_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetEngineTorque_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetEngineTorque_Statics::RTuneVehicle_eventGetEngineTorque_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetEngineTorque()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetEngineTorque_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetEngineTorque)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEngineTorque();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetEngineTorque *************************************

// ********** Begin Class ARTuneVehicle Function GetExternalResistanceForce ************************
struct Z_Construct_UFunction_ARTuneVehicle_GetExternalResistanceForce_Statics
{
	struct RTuneVehicle_eventGetExternalResistanceForce_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExternalResistanceForce constinit property declarations ************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExternalResistanceForce constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExternalResistanceForce Property Definitions ***********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetExternalResistanceForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetExternalResistanceForce_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetExternalResistanceForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetExternalResistanceForce_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExternalResistanceForce_Statics::PropPointers) < 2048);
// ********** End Function GetExternalResistanceForce Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetExternalResistanceForce_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetExternalResistanceForce", 	Z_Construct_UFunction_ARTuneVehicle_GetExternalResistanceForce_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExternalResistanceForce_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetExternalResistanceForce_Statics::RTuneVehicle_eventGetExternalResistanceForce_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExternalResistanceForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetExternalResistanceForce_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetExternalResistanceForce_Statics::RTuneVehicle_eventGetExternalResistanceForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetExternalResistanceForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetExternalResistanceForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetExternalResistanceForce)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetExternalResistanceForce();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetExternalResistanceForce **************************

// ********** Begin Class ARTuneVehicle Function GetExtReplicationInput1 ***************************
struct Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput1_Statics
{
	struct RTuneVehicle_eventGetExtReplicationInput1_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExtReplicationInput1 constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExtReplicationInput1 constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExtReplicationInput1 Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetExtReplicationInput1_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput1_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput1_Statics::PropPointers) < 2048);
// ********** End Function GetExtReplicationInput1 Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput1_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetExtReplicationInput1", 	Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput1_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput1_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput1_Statics::RTuneVehicle_eventGetExtReplicationInput1_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput1_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput1_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput1_Statics::RTuneVehicle_eventGetExtReplicationInput1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetExtReplicationInput1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetExtReplicationInput1();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetExtReplicationInput1 *****************************

// ********** Begin Class ARTuneVehicle Function GetExtReplicationInput2 ***************************
struct Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput2_Statics
{
	struct RTuneVehicle_eventGetExtReplicationInput2_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExtReplicationInput2 constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExtReplicationInput2 constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExtReplicationInput2 Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetExtReplicationInput2_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput2_Statics::PropPointers) < 2048);
// ********** End Function GetExtReplicationInput2 Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetExtReplicationInput2", 	Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput2_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput2_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput2_Statics::RTuneVehicle_eventGetExtReplicationInput2_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput2_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput2_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput2_Statics::RTuneVehicle_eventGetExtReplicationInput2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetExtReplicationInput2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetExtReplicationInput2();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetExtReplicationInput2 *****************************

// ********** Begin Class ARTuneVehicle Function GetExtReplicationInput3 ***************************
struct Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput3_Statics
{
	struct RTuneVehicle_eventGetExtReplicationInput3_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExtReplicationInput3 constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExtReplicationInput3 constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExtReplicationInput3 Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetExtReplicationInput3_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput3_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput3_Statics::PropPointers) < 2048);
// ********** End Function GetExtReplicationInput3 Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput3_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetExtReplicationInput3", 	Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput3_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput3_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput3_Statics::RTuneVehicle_eventGetExtReplicationInput3_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput3_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput3_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput3_Statics::RTuneVehicle_eventGetExtReplicationInput3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetExtReplicationInput3)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetExtReplicationInput3();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetExtReplicationInput3 *****************************

// ********** Begin Class ARTuneVehicle Function GetExtReplicationInput4 ***************************
struct Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput4_Statics
{
	struct RTuneVehicle_eventGetExtReplicationInput4_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExtReplicationInput4 constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExtReplicationInput4 constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExtReplicationInput4 Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetExtReplicationInput4_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput4_Statics::PropPointers) < 2048);
// ********** End Function GetExtReplicationInput4 Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput4_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetExtReplicationInput4", 	Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput4_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput4_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput4_Statics::RTuneVehicle_eventGetExtReplicationInput4_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput4_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput4_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput4_Statics::RTuneVehicle_eventGetExtReplicationInput4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetExtReplicationInput4)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetExtReplicationInput4();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetExtReplicationInput4 *****************************

// ********** Begin Class ARTuneVehicle Function GetExtReplicationInput5 ***************************
struct Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput5_Statics
{
	struct RTuneVehicle_eventGetExtReplicationInput5_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExtReplicationInput5 constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExtReplicationInput5 constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExtReplicationInput5 Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput5_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetExtReplicationInput5_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput5_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput5_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput5_Statics::PropPointers) < 2048);
// ********** End Function GetExtReplicationInput5 Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput5_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetExtReplicationInput5", 	Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput5_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput5_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput5_Statics::RTuneVehicle_eventGetExtReplicationInput5_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput5_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput5_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput5_Statics::RTuneVehicle_eventGetExtReplicationInput5_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput5()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput5_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetExtReplicationInput5)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetExtReplicationInput5();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetExtReplicationInput5 *****************************

// ********** Begin Class ARTuneVehicle Function GetExtReplicationInput6 ***************************
struct Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput6_Statics
{
	struct RTuneVehicle_eventGetExtReplicationInput6_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExtReplicationInput6 constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExtReplicationInput6 constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExtReplicationInput6 Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput6_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetExtReplicationInput6_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput6_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput6_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput6_Statics::PropPointers) < 2048);
// ********** End Function GetExtReplicationInput6 Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput6_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetExtReplicationInput6", 	Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput6_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput6_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput6_Statics::RTuneVehicle_eventGetExtReplicationInput6_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput6_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput6_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput6_Statics::RTuneVehicle_eventGetExtReplicationInput6_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput6()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput6_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetExtReplicationInput6)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetExtReplicationInput6();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetExtReplicationInput6 *****************************

// ********** Begin Class ARTuneVehicle Function GetHandbrakeInput *********************************
struct Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeInput_Statics
{
	struct RTuneVehicle_eventGetHandbrakeInput_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHandbrakeInput constinit property declarations *********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHandbrakeInput constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHandbrakeInput Property Definitions ********************************
void Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTuneVehicle_eventGetHandbrakeInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTuneVehicle_eventGetHandbrakeInput_Parms), &Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeInput_Statics::PropPointers) < 2048);
// ********** End Function GetHandbrakeInput Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetHandbrakeInput", 	Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeInput_Statics::RTuneVehicle_eventGetHandbrakeInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeInput_Statics::RTuneVehicle_eventGetHandbrakeInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetHandbrakeInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHandbrakeInput();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetHandbrakeInput ***********************************

// ********** Begin Class ARTuneVehicle Function GetHandbrakeStrength ******************************
struct Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeStrength_Statics
{
	struct RTuneVehicle_eventGetHandbrakeStrength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHandbrakeStrength constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHandbrakeStrength constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHandbrakeStrength Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetHandbrakeStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeStrength_Statics::PropPointers) < 2048);
// ********** End Function GetHandbrakeStrength Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeStrength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetHandbrakeStrength", 	Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeStrength_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeStrength_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeStrength_Statics::RTuneVehicle_eventGetHandbrakeStrength_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeStrength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeStrength_Statics::RTuneVehicle_eventGetHandbrakeStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetHandbrakeStrength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHandbrakeStrength();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetHandbrakeStrength ********************************

// ********** Begin Class ARTuneVehicle Function GetIsHandbrakeActive ******************************
struct Z_Construct_UFunction_ARTuneVehicle_GetIsHandbrakeActive_Statics
{
	struct RTuneVehicle_eventGetIsHandbrakeActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetIsHandbrakeActive constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetIsHandbrakeActive constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetIsHandbrakeActive Property Definitions *****************************
void Z_Construct_UFunction_ARTuneVehicle_GetIsHandbrakeActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTuneVehicle_eventGetIsHandbrakeActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetIsHandbrakeActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTuneVehicle_eventGetIsHandbrakeActive_Parms), &Z_Construct_UFunction_ARTuneVehicle_GetIsHandbrakeActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetIsHandbrakeActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetIsHandbrakeActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetIsHandbrakeActive_Statics::PropPointers) < 2048);
// ********** End Function GetIsHandbrakeActive Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetIsHandbrakeActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetIsHandbrakeActive", 	Z_Construct_UFunction_ARTuneVehicle_GetIsHandbrakeActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetIsHandbrakeActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetIsHandbrakeActive_Statics::RTuneVehicle_eventGetIsHandbrakeActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetIsHandbrakeActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetIsHandbrakeActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetIsHandbrakeActive_Statics::RTuneVehicle_eventGetIsHandbrakeActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetIsHandbrakeActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetIsHandbrakeActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetIsHandbrakeActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsHandbrakeActive();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetIsHandbrakeActive ********************************

// ********** Begin Class ARTuneVehicle Function GetLateralG ***************************************
struct Z_Construct_UFunction_ARTuneVehicle_GetLateralG_Statics
{
	struct RTuneVehicle_eventGetLateralG_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the G's (m/s^2) in the sideways direction.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the G's (m/s^2) in the sideways direction." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetLateralG constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLateralG constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLateralG Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetLateralG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetLateralG_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetLateralG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetLateralG_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetLateralG_Statics::PropPointers) < 2048);
// ********** End Function GetLateralG Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetLateralG_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetLateralG", 	Z_Construct_UFunction_ARTuneVehicle_GetLateralG_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetLateralG_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetLateralG_Statics::RTuneVehicle_eventGetLateralG_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetLateralG_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetLateralG_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetLateralG_Statics::RTuneVehicle_eventGetLateralG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetLateralG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetLateralG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetLateralG)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLateralG();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetLateralG *****************************************

// ********** Begin Class ARTuneVehicle Function GetLinearVelocity *********************************
struct Z_Construct_UFunction_ARTuneVehicle_GetLinearVelocity_Statics
{
	struct RTuneVehicle_eventGetLinearVelocity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the local velocity in the forward direction of the vehicle in meters per second (m/s).\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the local velocity in the forward direction of the vehicle in meters per second (m/s)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetLinearVelocity constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLinearVelocity constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLinearVelocity Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetLinearVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetLinearVelocity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetLinearVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetLinearVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetLinearVelocity_Statics::PropPointers) < 2048);
// ********** End Function GetLinearVelocity Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetLinearVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetLinearVelocity", 	Z_Construct_UFunction_ARTuneVehicle_GetLinearVelocity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetLinearVelocity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetLinearVelocity_Statics::RTuneVehicle_eventGetLinearVelocity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetLinearVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetLinearVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetLinearVelocity_Statics::RTuneVehicle_eventGetLinearVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetLinearVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetLinearVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetLinearVelocity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLinearVelocity();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetLinearVelocity ***********************************

// ********** Begin Class ARTuneVehicle Function GetLongitudinalG **********************************
struct Z_Construct_UFunction_ARTuneVehicle_GetLongitudinalG_Statics
{
	struct RTuneVehicle_eventGetLongitudinalG_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the G's (m/s^2) in the forward direction.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the G's (m/s^2) in the forward direction." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetLongitudinalG constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLongitudinalG constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLongitudinalG Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetLongitudinalG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetLongitudinalG_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetLongitudinalG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetLongitudinalG_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetLongitudinalG_Statics::PropPointers) < 2048);
// ********** End Function GetLongitudinalG Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetLongitudinalG_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetLongitudinalG", 	Z_Construct_UFunction_ARTuneVehicle_GetLongitudinalG_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetLongitudinalG_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetLongitudinalG_Statics::RTuneVehicle_eventGetLongitudinalG_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetLongitudinalG_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetLongitudinalG_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetLongitudinalG_Statics::RTuneVehicle_eventGetLongitudinalG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetLongitudinalG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetLongitudinalG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetLongitudinalG)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLongitudinalG();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetLongitudinalG ************************************

// ********** Begin Class ARTuneVehicle Function GetPhysicsTransform *******************************
struct Z_Construct_UFunction_ARTuneVehicle_GetPhysicsTransform_Statics
{
	struct RTuneVehicle_eventGetPhysicsTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the async tick physics transform of the vehicle.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the async tick physics transform of the vehicle." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPhysicsTransform constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPhysicsTransform constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPhysicsTransform Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetPhysicsTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetPhysicsTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetPhysicsTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetPhysicsTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetPhysicsTransform_Statics::PropPointers) < 2048);
// ********** End Function GetPhysicsTransform Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetPhysicsTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetPhysicsTransform", 	Z_Construct_UFunction_ARTuneVehicle_GetPhysicsTransform_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetPhysicsTransform_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetPhysicsTransform_Statics::RTuneVehicle_eventGetPhysicsTransform_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetPhysicsTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetPhysicsTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetPhysicsTransform_Statics::RTuneVehicle_eventGetPhysicsTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetPhysicsTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetPhysicsTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetPhysicsTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetPhysicsTransform();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetPhysicsTransform *********************************

// ********** Begin Class ARTuneVehicle Function GetPhysicsWheelRadius *****************************
struct Z_Construct_UFunction_ARTuneVehicle_GetPhysicsWheelRadius_Statics
{
	struct RTuneVehicle_eventGetPhysicsWheelRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the wheel radius of the drivetrain.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the wheel radius of the drivetrain." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPhysicsWheelRadius constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPhysicsWheelRadius constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPhysicsWheelRadius Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetPhysicsWheelRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetPhysicsWheelRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetPhysicsWheelRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetPhysicsWheelRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetPhysicsWheelRadius_Statics::PropPointers) < 2048);
// ********** End Function GetPhysicsWheelRadius Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetPhysicsWheelRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetPhysicsWheelRadius", 	Z_Construct_UFunction_ARTuneVehicle_GetPhysicsWheelRadius_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetPhysicsWheelRadius_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetPhysicsWheelRadius_Statics::RTuneVehicle_eventGetPhysicsWheelRadius_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetPhysicsWheelRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetPhysicsWheelRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetPhysicsWheelRadius_Statics::RTuneVehicle_eventGetPhysicsWheelRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetPhysicsWheelRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetPhysicsWheelRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetPhysicsWheelRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPhysicsWheelRadius();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetPhysicsWheelRadius *******************************

// ********** Begin Class ARTuneVehicle Function GetPrimitiveRoot **********************************
struct Z_Construct_UFunction_ARTuneVehicle_GetPrimitiveRoot_Statics
{
	struct RTuneVehicle_eventGetPrimitiveRoot_Parms
	{
		UPrimitiveComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPrimitiveRoot constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPrimitiveRoot constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPrimitiveRoot Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetPrimitiveRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetPrimitiveRoot_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetPrimitiveRoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetPrimitiveRoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetPrimitiveRoot_Statics::PropPointers) < 2048);
// ********** End Function GetPrimitiveRoot Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetPrimitiveRoot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetPrimitiveRoot", 	Z_Construct_UFunction_ARTuneVehicle_GetPrimitiveRoot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetPrimitiveRoot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetPrimitiveRoot_Statics::RTuneVehicle_eventGetPrimitiveRoot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetPrimitiveRoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetPrimitiveRoot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetPrimitiveRoot_Statics::RTuneVehicle_eventGetPrimitiveRoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetPrimitiveRoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetPrimitiveRoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetPrimitiveRoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetPrimitiveRoot();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetPrimitiveRoot ************************************

// ********** Begin Class ARTuneVehicle Function GetRPM ********************************************
struct Z_Construct_UFunction_ARTuneVehicle_GetRPM_Statics
{
	struct RTuneVehicle_eventGetRPM_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current RPM.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current RPM." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRPM constinit property declarations ********************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRPM constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRPM Property Definitions *******************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetRPM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetRPM_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetRPM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetRPM_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetRPM_Statics::PropPointers) < 2048);
// ********** End Function GetRPM Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetRPM_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetRPM", 	Z_Construct_UFunction_ARTuneVehicle_GetRPM_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetRPM_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetRPM_Statics::RTuneVehicle_eventGetRPM_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetRPM_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetRPM_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetRPM_Statics::RTuneVehicle_eventGetRPM_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetRPM()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetRPM_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetRPM)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRPM();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetRPM **********************************************

// ********** Begin Class ARTuneVehicle Function GetSideSlipAngle **********************************
struct Z_Construct_UFunction_ARTuneVehicle_GetSideSlipAngle_Statics
{
	struct RTuneVehicle_eventGetSideSlipAngle_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the angle between the vehicle's forward direction and velocity angle, in degrees.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the angle between the vehicle's forward direction and velocity angle, in degrees." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSideSlipAngle constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSideSlipAngle constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSideSlipAngle Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetSideSlipAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetSideSlipAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetSideSlipAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetSideSlipAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetSideSlipAngle_Statics::PropPointers) < 2048);
// ********** End Function GetSideSlipAngle Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetSideSlipAngle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetSideSlipAngle", 	Z_Construct_UFunction_ARTuneVehicle_GetSideSlipAngle_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetSideSlipAngle_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetSideSlipAngle_Statics::RTuneVehicle_eventGetSideSlipAngle_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetSideSlipAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetSideSlipAngle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetSideSlipAngle_Statics::RTuneVehicle_eventGetSideSlipAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetSideSlipAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetSideSlipAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetSideSlipAngle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSideSlipAngle();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetSideSlipAngle ************************************

// ********** Begin Class ARTuneVehicle Function GetSpeedKPH ***************************************
struct Z_Construct_UFunction_ARTuneVehicle_GetSpeedKPH_Statics
{
	struct RTuneVehicle_eventGetSpeedKPH_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the speed of the vehicle in kilometers per hour.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the speed of the vehicle in kilometers per hour." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSpeedKPH constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSpeedKPH constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSpeedKPH Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetSpeedKPH_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetSpeedKPH_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetSpeedKPH_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetSpeedKPH_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetSpeedKPH_Statics::PropPointers) < 2048);
// ********** End Function GetSpeedKPH Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetSpeedKPH_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetSpeedKPH", 	Z_Construct_UFunction_ARTuneVehicle_GetSpeedKPH_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetSpeedKPH_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetSpeedKPH_Statics::RTuneVehicle_eventGetSpeedKPH_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetSpeedKPH_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetSpeedKPH_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetSpeedKPH_Statics::RTuneVehicle_eventGetSpeedKPH_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetSpeedKPH()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetSpeedKPH_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetSpeedKPH)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSpeedKPH();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetSpeedKPH *****************************************

// ********** Begin Class ARTuneVehicle Function GetSteeringInput **********************************
struct Z_Construct_UFunction_ARTuneVehicle_GetSteeringInput_Statics
{
	struct RTuneVehicle_eventGetSteeringInput_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSteeringInput constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSteeringInput constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSteeringInput Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetSteeringInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetSteeringInput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetSteeringInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetSteeringInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetSteeringInput_Statics::PropPointers) < 2048);
// ********** End Function GetSteeringInput Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetSteeringInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetSteeringInput", 	Z_Construct_UFunction_ARTuneVehicle_GetSteeringInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetSteeringInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetSteeringInput_Statics::RTuneVehicle_eventGetSteeringInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetSteeringInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetSteeringInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetSteeringInput_Statics::RTuneVehicle_eventGetSteeringInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetSteeringInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetSteeringInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetSteeringInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSteeringInput();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetSteeringInput ************************************

// ********** Begin Class ARTuneVehicle Function GetThrottleInput **********************************
struct Z_Construct_UFunction_ARTuneVehicle_GetThrottleInput_Statics
{
	struct RTuneVehicle_eventGetThrottleInput_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetThrottleInput constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetThrottleInput constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetThrottleInput Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetThrottleInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetThrottleInput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetThrottleInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetThrottleInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetThrottleInput_Statics::PropPointers) < 2048);
// ********** End Function GetThrottleInput Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetThrottleInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetThrottleInput", 	Z_Construct_UFunction_ARTuneVehicle_GetThrottleInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetThrottleInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetThrottleInput_Statics::RTuneVehicle_eventGetThrottleInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetThrottleInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetThrottleInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetThrottleInput_Statics::RTuneVehicle_eventGetThrottleInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetThrottleInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetThrottleInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetThrottleInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetThrottleInput();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetThrottleInput ************************************

// ********** Begin Class ARTuneVehicle Function GetVelocityVector *********************************
struct Z_Construct_UFunction_ARTuneVehicle_GetVelocityVector_Statics
{
	struct RTuneVehicle_eventGetVelocityVector_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the local velocity vector in meters per second (m/s).\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the local velocity vector in meters per second (m/s)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetVelocityVector constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVelocityVector constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVelocityVector Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetVelocityVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetVelocityVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetVelocityVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetVelocityVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetVelocityVector_Statics::PropPointers) < 2048);
// ********** End Function GetVelocityVector Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetVelocityVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetVelocityVector", 	Z_Construct_UFunction_ARTuneVehicle_GetVelocityVector_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetVelocityVector_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetVelocityVector_Statics::RTuneVehicle_eventGetVelocityVector_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetVelocityVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetVelocityVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetVelocityVector_Statics::RTuneVehicle_eventGetVelocityVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetVelocityVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetVelocityVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetVelocityVector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVelocityVector();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetVelocityVector ***********************************

// ********** Begin Class ARTuneVehicle Function GetVerticalG **************************************
struct Z_Construct_UFunction_ARTuneVehicle_GetVerticalG_Statics
{
	struct RTuneVehicle_eventGetVerticalG_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the G's (m/s^2) in the upwards direction.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the G's (m/s^2) in the upwards direction." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetVerticalG constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVerticalG constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVerticalG Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_GetVerticalG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventGetVerticalG_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_GetVerticalG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_GetVerticalG_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetVerticalG_Statics::PropPointers) < 2048);
// ********** End Function GetVerticalG Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_GetVerticalG_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "GetVerticalG", 	Z_Construct_UFunction_ARTuneVehicle_GetVerticalG_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetVerticalG_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_GetVerticalG_Statics::RTuneVehicle_eventGetVerticalG_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_GetVerticalG_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_GetVerticalG_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_GetVerticalG_Statics::RTuneVehicle_eventGetVerticalG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_GetVerticalG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_GetVerticalG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execGetVerticalG)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVerticalG();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function GetVerticalG ****************************************

// ********** Begin Class ARTuneVehicle Function InitializeAntiGravity *****************************
struct Z_Construct_UFunction_ARTuneVehicle_InitializeAntiGravity_Statics
{
	struct RTuneVehicle_eventInitializeAntiGravity_Parms
	{
		USceneComponent* antiGravityComponent;
		UStaticMeshComponent* coreMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_antiGravityComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_coreMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeAntiGravity constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_antiGravityComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_coreMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeAntiGravity constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeAntiGravity Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARTuneVehicle_InitializeAntiGravity_Statics::NewProp_antiGravityComponent = { "antiGravityComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventInitializeAntiGravity_Parms, antiGravityComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_antiGravityComponent_MetaData), NewProp_antiGravityComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARTuneVehicle_InitializeAntiGravity_Statics::NewProp_coreMesh = { "coreMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventInitializeAntiGravity_Parms, coreMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_coreMesh_MetaData), NewProp_coreMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_InitializeAntiGravity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_InitializeAntiGravity_Statics::NewProp_antiGravityComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_InitializeAntiGravity_Statics::NewProp_coreMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_InitializeAntiGravity_Statics::PropPointers) < 2048);
// ********** End Function InitializeAntiGravity Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_InitializeAntiGravity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "InitializeAntiGravity", 	Z_Construct_UFunction_ARTuneVehicle_InitializeAntiGravity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_InitializeAntiGravity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_InitializeAntiGravity_Statics::RTuneVehicle_eventInitializeAntiGravity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_InitializeAntiGravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_InitializeAntiGravity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_InitializeAntiGravity_Statics::RTuneVehicle_eventInitializeAntiGravity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_InitializeAntiGravity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_InitializeAntiGravity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execInitializeAntiGravity)
{
	P_GET_OBJECT(USceneComponent,Z_Param_antiGravityComponent);
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_coreMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeAntiGravity(Z_Param_antiGravityComponent,Z_Param_coreMesh);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function InitializeAntiGravity *******************************

// ********** Begin Class ARTuneVehicle Function IsAntiGravityActive *******************************
struct Z_Construct_UFunction_ARTuneVehicle_IsAntiGravityActive_Statics
{
	struct RTuneVehicle_eventIsAntiGravityActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsAntiGravityActive constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsAntiGravityActive constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsAntiGravityActive Property Definitions ******************************
void Z_Construct_UFunction_ARTuneVehicle_IsAntiGravityActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTuneVehicle_eventIsAntiGravityActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARTuneVehicle_IsAntiGravityActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTuneVehicle_eventIsAntiGravityActive_Parms), &Z_Construct_UFunction_ARTuneVehicle_IsAntiGravityActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_IsAntiGravityActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_IsAntiGravityActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_IsAntiGravityActive_Statics::PropPointers) < 2048);
// ********** End Function IsAntiGravityActive Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_IsAntiGravityActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "IsAntiGravityActive", 	Z_Construct_UFunction_ARTuneVehicle_IsAntiGravityActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_IsAntiGravityActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_IsAntiGravityActive_Statics::RTuneVehicle_eventIsAntiGravityActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_IsAntiGravityActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_IsAntiGravityActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_IsAntiGravityActive_Statics::RTuneVehicle_eventIsAntiGravityActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_IsAntiGravityActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_IsAntiGravityActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execIsAntiGravityActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAntiGravityActive();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function IsAntiGravityActive *********************************

// ********** Begin Class ARTuneVehicle Function IsGearboxDownshifting *****************************
struct Z_Construct_UFunction_ARTuneVehicle_IsGearboxDownshifting_Statics
{
	struct RTuneVehicle_eventIsGearboxDownshifting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether or not the gearbox is downshifting.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether or not the gearbox is downshifting." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsGearboxDownshifting constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsGearboxDownshifting constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsGearboxDownshifting Property Definitions ****************************
void Z_Construct_UFunction_ARTuneVehicle_IsGearboxDownshifting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTuneVehicle_eventIsGearboxDownshifting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARTuneVehicle_IsGearboxDownshifting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTuneVehicle_eventIsGearboxDownshifting_Parms), &Z_Construct_UFunction_ARTuneVehicle_IsGearboxDownshifting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_IsGearboxDownshifting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_IsGearboxDownshifting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_IsGearboxDownshifting_Statics::PropPointers) < 2048);
// ********** End Function IsGearboxDownshifting Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_IsGearboxDownshifting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "IsGearboxDownshifting", 	Z_Construct_UFunction_ARTuneVehicle_IsGearboxDownshifting_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_IsGearboxDownshifting_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_IsGearboxDownshifting_Statics::RTuneVehicle_eventIsGearboxDownshifting_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_IsGearboxDownshifting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_IsGearboxDownshifting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_IsGearboxDownshifting_Statics::RTuneVehicle_eventIsGearboxDownshifting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_IsGearboxDownshifting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_IsGearboxDownshifting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execIsGearboxDownshifting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGearboxDownshifting();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function IsGearboxDownshifting *******************************

// ********** Begin Class ARTuneVehicle Function IsGearboxUpshifting *******************************
struct Z_Construct_UFunction_ARTuneVehicle_IsGearboxUpshifting_Statics
{
	struct RTuneVehicle_eventIsGearboxUpshifting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether or not the gearbox is upshifting.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether or not the gearbox is upshifting." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsGearboxUpshifting constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsGearboxUpshifting constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsGearboxUpshifting Property Definitions ******************************
void Z_Construct_UFunction_ARTuneVehicle_IsGearboxUpshifting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTuneVehicle_eventIsGearboxUpshifting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARTuneVehicle_IsGearboxUpshifting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTuneVehicle_eventIsGearboxUpshifting_Parms), &Z_Construct_UFunction_ARTuneVehicle_IsGearboxUpshifting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_IsGearboxUpshifting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_IsGearboxUpshifting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_IsGearboxUpshifting_Statics::PropPointers) < 2048);
// ********** End Function IsGearboxUpshifting Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_IsGearboxUpshifting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "IsGearboxUpshifting", 	Z_Construct_UFunction_ARTuneVehicle_IsGearboxUpshifting_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_IsGearboxUpshifting_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_IsGearboxUpshifting_Statics::RTuneVehicle_eventIsGearboxUpshifting_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_IsGearboxUpshifting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_IsGearboxUpshifting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_IsGearboxUpshifting_Statics::RTuneVehicle_eventIsGearboxUpshifting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_IsGearboxUpshifting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_IsGearboxUpshifting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execIsGearboxUpshifting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGearboxUpshifting();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function IsGearboxUpshifting *********************************

// ********** Begin Class ARTuneVehicle Function Jump **********************************************
struct Z_Construct_UFunction_ARTuneVehicle_Jump_Statics
{
	struct RTuneVehicle_eventJump_Parms
	{
		float amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Values for the amount that are around the same as the mass generally work well.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Values for the amount that are around the same as the mass generally work well." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function Jump constinit property declarations **********************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Jump constinit property declarations ************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Jump Property Definitions *********************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_Jump_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventJump_Parms, amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_Jump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_Jump_Statics::NewProp_amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_Jump_Statics::PropPointers) < 2048);
// ********** End Function Jump Property Definitions ***********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_Jump_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "Jump", 	Z_Construct_UFunction_ARTuneVehicle_Jump_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_Jump_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_Jump_Statics::RTuneVehicle_eventJump_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_Jump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_Jump_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_Jump_Statics::RTuneVehicle_eventJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_Jump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_Jump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execJump)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Jump(Z_Param_amount);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function Jump ************************************************

// ********** Begin Class ARTuneVehicle Function OverrideAntiGravityState **************************
struct Z_Construct_UFunction_ARTuneVehicle_OverrideAntiGravityState_Statics
{
	struct RTuneVehicle_eventOverrideAntiGravityState_Parms
	{
		bool bOn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OverrideAntiGravityState constinit property declarations **************
	static void NewProp_bOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OverrideAntiGravityState constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OverrideAntiGravityState Property Definitions *************************
void Z_Construct_UFunction_ARTuneVehicle_OverrideAntiGravityState_Statics::NewProp_bOn_SetBit(void* Obj)
{
	((RTuneVehicle_eventOverrideAntiGravityState_Parms*)Obj)->bOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARTuneVehicle_OverrideAntiGravityState_Statics::NewProp_bOn = { "bOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTuneVehicle_eventOverrideAntiGravityState_Parms), &Z_Construct_UFunction_ARTuneVehicle_OverrideAntiGravityState_Statics::NewProp_bOn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_OverrideAntiGravityState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_OverrideAntiGravityState_Statics::NewProp_bOn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_OverrideAntiGravityState_Statics::PropPointers) < 2048);
// ********** End Function OverrideAntiGravityState Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_OverrideAntiGravityState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "OverrideAntiGravityState", 	Z_Construct_UFunction_ARTuneVehicle_OverrideAntiGravityState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_OverrideAntiGravityState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_OverrideAntiGravityState_Statics::RTuneVehicle_eventOverrideAntiGravityState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_OverrideAntiGravityState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_OverrideAntiGravityState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_OverrideAntiGravityState_Statics::RTuneVehicle_eventOverrideAntiGravityState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_OverrideAntiGravityState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_OverrideAntiGravityState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execOverrideAntiGravityState)
{
	P_GET_UBOOL(Z_Param_bOn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverrideAntiGravityState(Z_Param_bOn);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function OverrideAntiGravityState ****************************

// ********** Begin Class ARTuneVehicle Function OverrideRPM ***************************************
struct Z_Construct_UFunction_ARTuneVehicle_OverrideRPM_Statics
{
	struct RTuneVehicle_eventOverrideRPM_Parms
	{
		float newRPM;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OverrideRPM constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_newRPM;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OverrideRPM constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OverrideRPM Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_OverrideRPM_Statics::NewProp_newRPM = { "newRPM", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventOverrideRPM_Parms, newRPM), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_OverrideRPM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_OverrideRPM_Statics::NewProp_newRPM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_OverrideRPM_Statics::PropPointers) < 2048);
// ********** End Function OverrideRPM Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_OverrideRPM_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "OverrideRPM", 	Z_Construct_UFunction_ARTuneVehicle_OverrideRPM_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_OverrideRPM_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_OverrideRPM_Statics::RTuneVehicle_eventOverrideRPM_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_OverrideRPM_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_OverrideRPM_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_OverrideRPM_Statics::RTuneVehicle_eventOverrideRPM_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_OverrideRPM()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_OverrideRPM_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execOverrideRPM)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_newRPM);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverrideRPM(Z_Param_newRPM);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function OverrideRPM *****************************************

// ********** Begin Class ARTuneVehicle Function RTWakeRigidBodies *********************************
struct Z_Construct_UFunction_ARTuneVehicle_RTWakeRigidBodies_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Resume physics wake state\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resume physics wake state" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RTWakeRigidBodies constinit property declarations *********************
// ********** End Function RTWakeRigidBodies constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_RTWakeRigidBodies_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "RTWakeRigidBodies", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_RTWakeRigidBodies_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_RTWakeRigidBodies_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARTuneVehicle_RTWakeRigidBodies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_RTWakeRigidBodies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execRTWakeRigidBodies)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RTWakeRigidBodies();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function RTWakeRigidBodies ***********************************

// ********** Begin Class ARTuneVehicle Function ServerSetAirPitchInput ****************************
struct RTuneVehicle_eventServerSetAirPitchInput_Parms
{
	float value;
};
static FName NAME_ARTuneVehicle_ServerSetAirPitchInput = FName(TEXT("ServerSetAirPitchInput"));
void ARTuneVehicle::ServerSetAirPitchInput(float value)
{
	RTuneVehicle_eventServerSetAirPitchInput_Parms Parms;
	Parms.value=value;
	UFunction* Func = FindFunctionChecked(NAME_ARTuneVehicle_ServerSetAirPitchInput);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARTuneVehicle_ServerSetAirPitchInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerSetAirPitchInput constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerSetAirPitchInput constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerSetAirPitchInput Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_ServerSetAirPitchInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventServerSetAirPitchInput_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_ServerSetAirPitchInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_ServerSetAirPitchInput_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetAirPitchInput_Statics::PropPointers) < 2048);
// ********** End Function ServerSetAirPitchInput Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_ServerSetAirPitchInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "ServerSetAirPitchInput", 	Z_Construct_UFunction_ARTuneVehicle_ServerSetAirPitchInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetAirPitchInput_Statics::PropPointers), 
sizeof(RTuneVehicle_eventServerSetAirPitchInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetAirPitchInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_ServerSetAirPitchInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RTuneVehicle_eventServerSetAirPitchInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_ServerSetAirPitchInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_ServerSetAirPitchInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execServerSetAirPitchInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetAirPitchInput_Validate(Z_Param_value))
	{
		RPC_ValidateFailed(TEXT("ServerSetAirPitchInput_Validate"));
		return;
	}
	P_THIS->ServerSetAirPitchInput_Implementation(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function ServerSetAirPitchInput ******************************

// ********** Begin Class ARTuneVehicle Function ServerSetAirRollInput *****************************
struct RTuneVehicle_eventServerSetAirRollInput_Parms
{
	float value;
};
static FName NAME_ARTuneVehicle_ServerSetAirRollInput = FName(TEXT("ServerSetAirRollInput"));
void ARTuneVehicle::ServerSetAirRollInput(float value)
{
	RTuneVehicle_eventServerSetAirRollInput_Parms Parms;
	Parms.value=value;
	UFunction* Func = FindFunctionChecked(NAME_ARTuneVehicle_ServerSetAirRollInput);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARTuneVehicle_ServerSetAirRollInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerSetAirRollInput constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerSetAirRollInput constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerSetAirRollInput Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_ServerSetAirRollInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventServerSetAirRollInput_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_ServerSetAirRollInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_ServerSetAirRollInput_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetAirRollInput_Statics::PropPointers) < 2048);
// ********** End Function ServerSetAirRollInput Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_ServerSetAirRollInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "ServerSetAirRollInput", 	Z_Construct_UFunction_ARTuneVehicle_ServerSetAirRollInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetAirRollInput_Statics::PropPointers), 
sizeof(RTuneVehicle_eventServerSetAirRollInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetAirRollInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_ServerSetAirRollInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RTuneVehicle_eventServerSetAirRollInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_ServerSetAirRollInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_ServerSetAirRollInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execServerSetAirRollInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetAirRollInput_Validate(Z_Param_value))
	{
		RPC_ValidateFailed(TEXT("ServerSetAirRollInput_Validate"));
		return;
	}
	P_THIS->ServerSetAirRollInput_Implementation(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function ServerSetAirRollInput *******************************

// ********** Begin Class ARTuneVehicle Function ServerSetAirYawInput ******************************
struct RTuneVehicle_eventServerSetAirYawInput_Parms
{
	float value;
};
static FName NAME_ARTuneVehicle_ServerSetAirYawInput = FName(TEXT("ServerSetAirYawInput"));
void ARTuneVehicle::ServerSetAirYawInput(float value)
{
	RTuneVehicle_eventServerSetAirYawInput_Parms Parms;
	Parms.value=value;
	UFunction* Func = FindFunctionChecked(NAME_ARTuneVehicle_ServerSetAirYawInput);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARTuneVehicle_ServerSetAirYawInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerSetAirYawInput constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerSetAirYawInput constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerSetAirYawInput Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_ServerSetAirYawInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventServerSetAirYawInput_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_ServerSetAirYawInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_ServerSetAirYawInput_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetAirYawInput_Statics::PropPointers) < 2048);
// ********** End Function ServerSetAirYawInput Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_ServerSetAirYawInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "ServerSetAirYawInput", 	Z_Construct_UFunction_ARTuneVehicle_ServerSetAirYawInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetAirYawInput_Statics::PropPointers), 
sizeof(RTuneVehicle_eventServerSetAirYawInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetAirYawInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_ServerSetAirYawInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RTuneVehicle_eventServerSetAirYawInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_ServerSetAirYawInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_ServerSetAirYawInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execServerSetAirYawInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetAirYawInput_Validate(Z_Param_value))
	{
		RPC_ValidateFailed(TEXT("ServerSetAirYawInput_Validate"));
		return;
	}
	P_THIS->ServerSetAirYawInput_Implementation(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function ServerSetAirYawInput ********************************

// ********** Begin Class ARTuneVehicle Function ServerSetBrakeInput *******************************
struct RTuneVehicle_eventServerSetBrakeInput_Parms
{
	float value;
};
static FName NAME_ARTuneVehicle_ServerSetBrakeInput = FName(TEXT("ServerSetBrakeInput"));
void ARTuneVehicle::ServerSetBrakeInput(float value)
{
	RTuneVehicle_eventServerSetBrakeInput_Parms Parms;
	Parms.value=value;
	UFunction* Func = FindFunctionChecked(NAME_ARTuneVehicle_ServerSetBrakeInput);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARTuneVehicle_ServerSetBrakeInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerSetBrakeInput constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerSetBrakeInput constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerSetBrakeInput Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_ServerSetBrakeInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventServerSetBrakeInput_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_ServerSetBrakeInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_ServerSetBrakeInput_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetBrakeInput_Statics::PropPointers) < 2048);
// ********** End Function ServerSetBrakeInput Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_ServerSetBrakeInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "ServerSetBrakeInput", 	Z_Construct_UFunction_ARTuneVehicle_ServerSetBrakeInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetBrakeInput_Statics::PropPointers), 
sizeof(RTuneVehicle_eventServerSetBrakeInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetBrakeInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_ServerSetBrakeInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RTuneVehicle_eventServerSetBrakeInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_ServerSetBrakeInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_ServerSetBrakeInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execServerSetBrakeInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetBrakeInput_Validate(Z_Param_value))
	{
		RPC_ValidateFailed(TEXT("ServerSetBrakeInput_Validate"));
		return;
	}
	P_THIS->ServerSetBrakeInput_Implementation(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function ServerSetBrakeInput *********************************

// ********** Begin Class ARTuneVehicle Function ServerSetExtReplicationInput1 *********************
struct RTuneVehicle_eventServerSetExtReplicationInput1_Parms
{
	float value;
};
static FName NAME_ARTuneVehicle_ServerSetExtReplicationInput1 = FName(TEXT("ServerSetExtReplicationInput1"));
void ARTuneVehicle::ServerSetExtReplicationInput1(float value)
{
	RTuneVehicle_eventServerSetExtReplicationInput1_Parms Parms;
	Parms.value=value;
	UFunction* Func = FindFunctionChecked(NAME_ARTuneVehicle_ServerSetExtReplicationInput1);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerSetExtReplicationInput1 constinit property declarations *********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerSetExtReplicationInput1 constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerSetExtReplicationInput1 Property Definitions ********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput1_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventServerSetExtReplicationInput1_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput1_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput1_Statics::PropPointers) < 2048);
// ********** End Function ServerSetExtReplicationInput1 Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput1_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "ServerSetExtReplicationInput1", 	Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput1_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput1_Statics::PropPointers), 
sizeof(RTuneVehicle_eventServerSetExtReplicationInput1_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput1_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput1_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RTuneVehicle_eventServerSetExtReplicationInput1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execServerSetExtReplicationInput1)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetExtReplicationInput1_Validate(Z_Param_value))
	{
		RPC_ValidateFailed(TEXT("ServerSetExtReplicationInput1_Validate"));
		return;
	}
	P_THIS->ServerSetExtReplicationInput1_Implementation(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function ServerSetExtReplicationInput1 ***********************

// ********** Begin Class ARTuneVehicle Function ServerSetExtReplicationInput2 *********************
struct RTuneVehicle_eventServerSetExtReplicationInput2_Parms
{
	float value;
};
static FName NAME_ARTuneVehicle_ServerSetExtReplicationInput2 = FName(TEXT("ServerSetExtReplicationInput2"));
void ARTuneVehicle::ServerSetExtReplicationInput2(float value)
{
	RTuneVehicle_eventServerSetExtReplicationInput2_Parms Parms;
	Parms.value=value;
	UFunction* Func = FindFunctionChecked(NAME_ARTuneVehicle_ServerSetExtReplicationInput2);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerSetExtReplicationInput2 constinit property declarations *********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerSetExtReplicationInput2 constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerSetExtReplicationInput2 Property Definitions ********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput2_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventServerSetExtReplicationInput2_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput2_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput2_Statics::PropPointers) < 2048);
// ********** End Function ServerSetExtReplicationInput2 Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "ServerSetExtReplicationInput2", 	Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput2_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput2_Statics::PropPointers), 
sizeof(RTuneVehicle_eventServerSetExtReplicationInput2_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput2_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput2_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RTuneVehicle_eventServerSetExtReplicationInput2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execServerSetExtReplicationInput2)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetExtReplicationInput2_Validate(Z_Param_value))
	{
		RPC_ValidateFailed(TEXT("ServerSetExtReplicationInput2_Validate"));
		return;
	}
	P_THIS->ServerSetExtReplicationInput2_Implementation(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function ServerSetExtReplicationInput2 ***********************

// ********** Begin Class ARTuneVehicle Function ServerSetExtReplicationInput3 *********************
struct RTuneVehicle_eventServerSetExtReplicationInput3_Parms
{
	float value;
};
static FName NAME_ARTuneVehicle_ServerSetExtReplicationInput3 = FName(TEXT("ServerSetExtReplicationInput3"));
void ARTuneVehicle::ServerSetExtReplicationInput3(float value)
{
	RTuneVehicle_eventServerSetExtReplicationInput3_Parms Parms;
	Parms.value=value;
	UFunction* Func = FindFunctionChecked(NAME_ARTuneVehicle_ServerSetExtReplicationInput3);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerSetExtReplicationInput3 constinit property declarations *********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerSetExtReplicationInput3 constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerSetExtReplicationInput3 Property Definitions ********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput3_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventServerSetExtReplicationInput3_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput3_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput3_Statics::PropPointers) < 2048);
// ********** End Function ServerSetExtReplicationInput3 Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput3_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "ServerSetExtReplicationInput3", 	Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput3_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput3_Statics::PropPointers), 
sizeof(RTuneVehicle_eventServerSetExtReplicationInput3_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput3_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput3_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RTuneVehicle_eventServerSetExtReplicationInput3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execServerSetExtReplicationInput3)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetExtReplicationInput3_Validate(Z_Param_value))
	{
		RPC_ValidateFailed(TEXT("ServerSetExtReplicationInput3_Validate"));
		return;
	}
	P_THIS->ServerSetExtReplicationInput3_Implementation(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function ServerSetExtReplicationInput3 ***********************

// ********** Begin Class ARTuneVehicle Function ServerSetExtReplicationInput4 *********************
struct RTuneVehicle_eventServerSetExtReplicationInput4_Parms
{
	float value;
};
static FName NAME_ARTuneVehicle_ServerSetExtReplicationInput4 = FName(TEXT("ServerSetExtReplicationInput4"));
void ARTuneVehicle::ServerSetExtReplicationInput4(float value)
{
	RTuneVehicle_eventServerSetExtReplicationInput4_Parms Parms;
	Parms.value=value;
	UFunction* Func = FindFunctionChecked(NAME_ARTuneVehicle_ServerSetExtReplicationInput4);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput4_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerSetExtReplicationInput4 constinit property declarations *********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerSetExtReplicationInput4 constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerSetExtReplicationInput4 Property Definitions ********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput4_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventServerSetExtReplicationInput4_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput4_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput4_Statics::PropPointers) < 2048);
// ********** End Function ServerSetExtReplicationInput4 Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput4_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "ServerSetExtReplicationInput4", 	Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput4_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput4_Statics::PropPointers), 
sizeof(RTuneVehicle_eventServerSetExtReplicationInput4_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput4_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput4_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RTuneVehicle_eventServerSetExtReplicationInput4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execServerSetExtReplicationInput4)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetExtReplicationInput4_Validate(Z_Param_value))
	{
		RPC_ValidateFailed(TEXT("ServerSetExtReplicationInput4_Validate"));
		return;
	}
	P_THIS->ServerSetExtReplicationInput4_Implementation(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function ServerSetExtReplicationInput4 ***********************

// ********** Begin Class ARTuneVehicle Function ServerSetExtReplicationInput5 *********************
struct RTuneVehicle_eventServerSetExtReplicationInput5_Parms
{
	float value;
};
static FName NAME_ARTuneVehicle_ServerSetExtReplicationInput5 = FName(TEXT("ServerSetExtReplicationInput5"));
void ARTuneVehicle::ServerSetExtReplicationInput5(float value)
{
	RTuneVehicle_eventServerSetExtReplicationInput5_Parms Parms;
	Parms.value=value;
	UFunction* Func = FindFunctionChecked(NAME_ARTuneVehicle_ServerSetExtReplicationInput5);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput5_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerSetExtReplicationInput5 constinit property declarations *********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerSetExtReplicationInput5 constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerSetExtReplicationInput5 Property Definitions ********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput5_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventServerSetExtReplicationInput5_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput5_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput5_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput5_Statics::PropPointers) < 2048);
// ********** End Function ServerSetExtReplicationInput5 Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput5_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "ServerSetExtReplicationInput5", 	Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput5_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput5_Statics::PropPointers), 
sizeof(RTuneVehicle_eventServerSetExtReplicationInput5_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput5_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput5_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RTuneVehicle_eventServerSetExtReplicationInput5_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput5()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput5_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execServerSetExtReplicationInput5)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetExtReplicationInput5_Validate(Z_Param_value))
	{
		RPC_ValidateFailed(TEXT("ServerSetExtReplicationInput5_Validate"));
		return;
	}
	P_THIS->ServerSetExtReplicationInput5_Implementation(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function ServerSetExtReplicationInput5 ***********************

// ********** Begin Class ARTuneVehicle Function ServerSetExtReplicationInput6 *********************
struct RTuneVehicle_eventServerSetExtReplicationInput6_Parms
{
	float value;
};
static FName NAME_ARTuneVehicle_ServerSetExtReplicationInput6 = FName(TEXT("ServerSetExtReplicationInput6"));
void ARTuneVehicle::ServerSetExtReplicationInput6(float value)
{
	RTuneVehicle_eventServerSetExtReplicationInput6_Parms Parms;
	Parms.value=value;
	UFunction* Func = FindFunctionChecked(NAME_ARTuneVehicle_ServerSetExtReplicationInput6);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput6_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerSetExtReplicationInput6 constinit property declarations *********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerSetExtReplicationInput6 constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerSetExtReplicationInput6 Property Definitions ********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput6_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventServerSetExtReplicationInput6_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput6_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput6_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput6_Statics::PropPointers) < 2048);
// ********** End Function ServerSetExtReplicationInput6 Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput6_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "ServerSetExtReplicationInput6", 	Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput6_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput6_Statics::PropPointers), 
sizeof(RTuneVehicle_eventServerSetExtReplicationInput6_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput6_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput6_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RTuneVehicle_eventServerSetExtReplicationInput6_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput6()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput6_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execServerSetExtReplicationInput6)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetExtReplicationInput6_Validate(Z_Param_value))
	{
		RPC_ValidateFailed(TEXT("ServerSetExtReplicationInput6_Validate"));
		return;
	}
	P_THIS->ServerSetExtReplicationInput6_Implementation(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function ServerSetExtReplicationInput6 ***********************

// ********** Begin Class ARTuneVehicle Function ServerSetSteeringInput ****************************
struct RTuneVehicle_eventServerSetSteeringInput_Parms
{
	float value;
};
static FName NAME_ARTuneVehicle_ServerSetSteeringInput = FName(TEXT("ServerSetSteeringInput"));
void ARTuneVehicle::ServerSetSteeringInput(float value)
{
	RTuneVehicle_eventServerSetSteeringInput_Parms Parms;
	Parms.value=value;
	UFunction* Func = FindFunctionChecked(NAME_ARTuneVehicle_ServerSetSteeringInput);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARTuneVehicle_ServerSetSteeringInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerSetSteeringInput constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerSetSteeringInput constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerSetSteeringInput Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_ServerSetSteeringInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventServerSetSteeringInput_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_ServerSetSteeringInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_ServerSetSteeringInput_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetSteeringInput_Statics::PropPointers) < 2048);
// ********** End Function ServerSetSteeringInput Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_ServerSetSteeringInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "ServerSetSteeringInput", 	Z_Construct_UFunction_ARTuneVehicle_ServerSetSteeringInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetSteeringInput_Statics::PropPointers), 
sizeof(RTuneVehicle_eventServerSetSteeringInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetSteeringInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_ServerSetSteeringInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RTuneVehicle_eventServerSetSteeringInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_ServerSetSteeringInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_ServerSetSteeringInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execServerSetSteeringInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetSteeringInput_Validate(Z_Param_value))
	{
		RPC_ValidateFailed(TEXT("ServerSetSteeringInput_Validate"));
		return;
	}
	P_THIS->ServerSetSteeringInput_Implementation(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function ServerSetSteeringInput ******************************

// ********** Begin Class ARTuneVehicle Function ServerSetThrottleInput ****************************
struct RTuneVehicle_eventServerSetThrottleInput_Parms
{
	float value;
};
static FName NAME_ARTuneVehicle_ServerSetThrottleInput = FName(TEXT("ServerSetThrottleInput"));
void ARTuneVehicle::ServerSetThrottleInput(float value)
{
	RTuneVehicle_eventServerSetThrottleInput_Parms Parms;
	Parms.value=value;
	UFunction* Func = FindFunctionChecked(NAME_ARTuneVehicle_ServerSetThrottleInput);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARTuneVehicle_ServerSetThrottleInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ServerSetThrottleInput constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ServerSetThrottleInput constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ServerSetThrottleInput Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_ServerSetThrottleInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventServerSetThrottleInput_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_ServerSetThrottleInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_ServerSetThrottleInput_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetThrottleInput_Statics::PropPointers) < 2048);
// ********** End Function ServerSetThrottleInput Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_ServerSetThrottleInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "ServerSetThrottleInput", 	Z_Construct_UFunction_ARTuneVehicle_ServerSetThrottleInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetThrottleInput_Statics::PropPointers), 
sizeof(RTuneVehicle_eventServerSetThrottleInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_ServerSetThrottleInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_ServerSetThrottleInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(RTuneVehicle_eventServerSetThrottleInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_ServerSetThrottleInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_ServerSetThrottleInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execServerSetThrottleInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetThrottleInput_Validate(Z_Param_value))
	{
		RPC_ValidateFailed(TEXT("ServerSetThrottleInput_Validate"));
		return;
	}
	P_THIS->ServerSetThrottleInput_Implementation(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function ServerSetThrottleInput ******************************

// ********** Begin Class ARTuneVehicle Function SetAirPitchInput **********************************
struct Z_Construct_UFunction_ARTuneVehicle_SetAirPitchInput_Statics
{
	struct RTuneVehicle_eventSetAirPitchInput_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAirPitchInput constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAirPitchInput constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAirPitchInput Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetAirPitchInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetAirPitchInput_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetAirPitchInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetAirPitchInput_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetAirPitchInput_Statics::PropPointers) < 2048);
// ********** End Function SetAirPitchInput Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetAirPitchInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetAirPitchInput", 	Z_Construct_UFunction_ARTuneVehicle_SetAirPitchInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetAirPitchInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetAirPitchInput_Statics::RTuneVehicle_eventSetAirPitchInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetAirPitchInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetAirPitchInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetAirPitchInput_Statics::RTuneVehicle_eventSetAirPitchInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetAirPitchInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetAirPitchInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetAirPitchInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAirPitchInput(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetAirPitchInput ************************************

// ********** Begin Class ARTuneVehicle Function SetAirRollInput ***********************************
struct Z_Construct_UFunction_ARTuneVehicle_SetAirRollInput_Statics
{
	struct RTuneVehicle_eventSetAirRollInput_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAirRollInput constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAirRollInput constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAirRollInput Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetAirRollInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetAirRollInput_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetAirRollInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetAirRollInput_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetAirRollInput_Statics::PropPointers) < 2048);
// ********** End Function SetAirRollInput Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetAirRollInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetAirRollInput", 	Z_Construct_UFunction_ARTuneVehicle_SetAirRollInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetAirRollInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetAirRollInput_Statics::RTuneVehicle_eventSetAirRollInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetAirRollInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetAirRollInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetAirRollInput_Statics::RTuneVehicle_eventSetAirRollInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetAirRollInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetAirRollInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetAirRollInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAirRollInput(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetAirRollInput *************************************

// ********** Begin Class ARTuneVehicle Function SetAirYawInput ************************************
struct Z_Construct_UFunction_ARTuneVehicle_SetAirYawInput_Statics
{
	struct RTuneVehicle_eventSetAirYawInput_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAirYawInput constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAirYawInput constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAirYawInput Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetAirYawInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetAirYawInput_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetAirYawInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetAirYawInput_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetAirYawInput_Statics::PropPointers) < 2048);
// ********** End Function SetAirYawInput Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetAirYawInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetAirYawInput", 	Z_Construct_UFunction_ARTuneVehicle_SetAirYawInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetAirYawInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetAirYawInput_Statics::RTuneVehicle_eventSetAirYawInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetAirYawInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetAirYawInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetAirYawInput_Statics::RTuneVehicle_eventSetAirYawInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetAirYawInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetAirYawInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetAirYawInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAirYawInput(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetAirYawInput **************************************

// ********** Begin Class ARTuneVehicle Function SetBrakeInput *************************************
struct Z_Construct_UFunction_ARTuneVehicle_SetBrakeInput_Statics
{
	struct RTuneVehicle_eventSetBrakeInput_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(Server, Reliable, WithValidation)\n//void ServerSetHandbrakeInput(bool value);\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(Server, Reliable, WithValidation)\nvoid ServerSetHandbrakeInput(bool value);" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetBrakeInput constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBrakeInput constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBrakeInput Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetBrakeInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetBrakeInput_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetBrakeInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetBrakeInput_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetBrakeInput_Statics::PropPointers) < 2048);
// ********** End Function SetBrakeInput Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetBrakeInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetBrakeInput", 	Z_Construct_UFunction_ARTuneVehicle_SetBrakeInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetBrakeInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetBrakeInput_Statics::RTuneVehicle_eventSetBrakeInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetBrakeInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetBrakeInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetBrakeInput_Statics::RTuneVehicle_eventSetBrakeInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetBrakeInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetBrakeInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetBrakeInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrakeInput(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetBrakeInput ***************************************

// ********** Begin Class ARTuneVehicle Function SetBrakesEnabled **********************************
struct Z_Construct_UFunction_ARTuneVehicle_SetBrakesEnabled_Statics
{
	struct RTuneVehicle_eventSetBrakesEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBrakesEnabled constinit property declarations **********************
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBrakesEnabled constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBrakesEnabled Property Definitions *********************************
void Z_Construct_UFunction_ARTuneVehicle_SetBrakesEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((RTuneVehicle_eventSetBrakesEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetBrakesEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTuneVehicle_eventSetBrakesEnabled_Parms), &Z_Construct_UFunction_ARTuneVehicle_SetBrakesEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetBrakesEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetBrakesEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetBrakesEnabled_Statics::PropPointers) < 2048);
// ********** End Function SetBrakesEnabled Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetBrakesEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetBrakesEnabled", 	Z_Construct_UFunction_ARTuneVehicle_SetBrakesEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetBrakesEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetBrakesEnabled_Statics::RTuneVehicle_eventSetBrakesEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetBrakesEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetBrakesEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetBrakesEnabled_Statics::RTuneVehicle_eventSetBrakesEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetBrakesEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetBrakesEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetBrakesEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrakesEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetBrakesEnabled ************************************

// ********** Begin Class ARTuneVehicle Function SetCurrentGearRatio *******************************
struct Z_Construct_UFunction_ARTuneVehicle_SetCurrentGearRatio_Statics
{
	struct RTuneVehicle_eventSetCurrentGearRatio_Parms
	{
		float newGearRatio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCurrentGearRatio constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_newGearRatio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCurrentGearRatio constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCurrentGearRatio Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetCurrentGearRatio_Statics::NewProp_newGearRatio = { "newGearRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetCurrentGearRatio_Parms, newGearRatio), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetCurrentGearRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetCurrentGearRatio_Statics::NewProp_newGearRatio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetCurrentGearRatio_Statics::PropPointers) < 2048);
// ********** End Function SetCurrentGearRatio Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetCurrentGearRatio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetCurrentGearRatio", 	Z_Construct_UFunction_ARTuneVehicle_SetCurrentGearRatio_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetCurrentGearRatio_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetCurrentGearRatio_Statics::RTuneVehicle_eventSetCurrentGearRatio_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetCurrentGearRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetCurrentGearRatio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetCurrentGearRatio_Statics::RTuneVehicle_eventSetCurrentGearRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetCurrentGearRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetCurrentGearRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetCurrentGearRatio)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_newGearRatio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentGearRatio(Z_Param_newGearRatio);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetCurrentGearRatio *********************************

// ********** Begin Class ARTuneVehicle Function SetDifferentialRatio ******************************
struct Z_Construct_UFunction_ARTuneVehicle_SetDifferentialRatio_Statics
{
	struct RTuneVehicle_eventSetDifferentialRatio_Parms
	{
		float newDifferentialRatio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDifferentialRatio constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_newDifferentialRatio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDifferentialRatio constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDifferentialRatio Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetDifferentialRatio_Statics::NewProp_newDifferentialRatio = { "newDifferentialRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetDifferentialRatio_Parms, newDifferentialRatio), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetDifferentialRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetDifferentialRatio_Statics::NewProp_newDifferentialRatio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetDifferentialRatio_Statics::PropPointers) < 2048);
// ********** End Function SetDifferentialRatio Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetDifferentialRatio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetDifferentialRatio", 	Z_Construct_UFunction_ARTuneVehicle_SetDifferentialRatio_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetDifferentialRatio_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetDifferentialRatio_Statics::RTuneVehicle_eventSetDifferentialRatio_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetDifferentialRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetDifferentialRatio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetDifferentialRatio_Statics::RTuneVehicle_eventSetDifferentialRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetDifferentialRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetDifferentialRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetDifferentialRatio)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_newDifferentialRatio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDifferentialRatio(Z_Param_newDifferentialRatio);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetDifferentialRatio ********************************

// ********** Begin Class ARTuneVehicle Function SetEngineTorque ***********************************
struct Z_Construct_UFunction_ARTuneVehicle_SetEngineTorque_Statics
{
	struct RTuneVehicle_eventSetEngineTorque_Parms
	{
		float newTorque;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetEngineTorque constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_newTorque;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEngineTorque constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEngineTorque Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetEngineTorque_Statics::NewProp_newTorque = { "newTorque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetEngineTorque_Parms, newTorque), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetEngineTorque_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetEngineTorque_Statics::NewProp_newTorque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetEngineTorque_Statics::PropPointers) < 2048);
// ********** End Function SetEngineTorque Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetEngineTorque_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetEngineTorque", 	Z_Construct_UFunction_ARTuneVehicle_SetEngineTorque_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetEngineTorque_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetEngineTorque_Statics::RTuneVehicle_eventSetEngineTorque_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetEngineTorque_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetEngineTorque_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetEngineTorque_Statics::RTuneVehicle_eventSetEngineTorque_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetEngineTorque()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetEngineTorque_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetEngineTorque)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_newTorque);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEngineTorque(Z_Param_newTorque);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetEngineTorque *************************************

// ********** Begin Class ARTuneVehicle Function SetEngineTorqueEnabled ****************************
struct Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled_Statics
{
	struct RTuneVehicle_eventSetEngineTorqueEnabled_Parms
	{
		bool bEnabled;
		float tempTorque;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetEngineTorqueEnabled constinit property declarations ****************
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_tempTorque;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEngineTorqueEnabled constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEngineTorqueEnabled Property Definitions ***************************
void Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((RTuneVehicle_eventSetEngineTorqueEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTuneVehicle_eventSetEngineTorqueEnabled_Parms), &Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled_Statics::NewProp_tempTorque = { "tempTorque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetEngineTorqueEnabled_Parms, tempTorque), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled_Statics::NewProp_tempTorque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled_Statics::PropPointers) < 2048);
// ********** End Function SetEngineTorqueEnabled Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetEngineTorqueEnabled", 	Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled_Statics::RTuneVehicle_eventSetEngineTorqueEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled_Statics::RTuneVehicle_eventSetEngineTorqueEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetEngineTorqueEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_GET_PROPERTY(FFloatProperty,Z_Param_tempTorque);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEngineTorqueEnabled(Z_Param_bEnabled,Z_Param_tempTorque);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetEngineTorqueEnabled ******************************

// ********** Begin Class ARTuneVehicle Function SetExternalResistanceForce ************************
struct Z_Construct_UFunction_ARTuneVehicle_SetExternalResistanceForce_Statics
{
	struct RTuneVehicle_eventSetExternalResistanceForce_Parms
	{
		float force;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExternalResistanceForce constinit property declarations ************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_force;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExternalResistanceForce constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExternalResistanceForce Property Definitions ***********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetExternalResistanceForce_Statics::NewProp_force = { "force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetExternalResistanceForce_Parms, force), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetExternalResistanceForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetExternalResistanceForce_Statics::NewProp_force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExternalResistanceForce_Statics::PropPointers) < 2048);
// ********** End Function SetExternalResistanceForce Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetExternalResistanceForce_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetExternalResistanceForce", 	Z_Construct_UFunction_ARTuneVehicle_SetExternalResistanceForce_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExternalResistanceForce_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetExternalResistanceForce_Statics::RTuneVehicle_eventSetExternalResistanceForce_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExternalResistanceForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetExternalResistanceForce_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetExternalResistanceForce_Statics::RTuneVehicle_eventSetExternalResistanceForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetExternalResistanceForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetExternalResistanceForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetExternalResistanceForce)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_force);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExternalResistanceForce(Z_Param_force);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetExternalResistanceForce **************************

// ********** Begin Class ARTuneVehicle Function SetExtReplicationInput1 ***************************
struct Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput1_Statics
{
	struct RTuneVehicle_eventSetExtReplicationInput1_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle|Replication|Input" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExtReplicationInput1 constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExtReplicationInput1 constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExtReplicationInput1 Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput1_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetExtReplicationInput1_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput1_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput1_Statics::PropPointers) < 2048);
// ********** End Function SetExtReplicationInput1 Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput1_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetExtReplicationInput1", 	Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput1_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput1_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput1_Statics::RTuneVehicle_eventSetExtReplicationInput1_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput1_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput1_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput1_Statics::RTuneVehicle_eventSetExtReplicationInput1_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetExtReplicationInput1)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExtReplicationInput1(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetExtReplicationInput1 *****************************

// ********** Begin Class ARTuneVehicle Function SetExtReplicationInput2 ***************************
struct Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput2_Statics
{
	struct RTuneVehicle_eventSetExtReplicationInput2_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle|Replication|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExtReplicationInput2 constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExtReplicationInput2 constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExtReplicationInput2 Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput2_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetExtReplicationInput2_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput2_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput2_Statics::PropPointers) < 2048);
// ********** End Function SetExtReplicationInput2 Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput2_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetExtReplicationInput2", 	Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput2_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput2_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput2_Statics::RTuneVehicle_eventSetExtReplicationInput2_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput2_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput2_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput2_Statics::RTuneVehicle_eventSetExtReplicationInput2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetExtReplicationInput2)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExtReplicationInput2(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetExtReplicationInput2 *****************************

// ********** Begin Class ARTuneVehicle Function SetExtReplicationInput3 ***************************
struct Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput3_Statics
{
	struct RTuneVehicle_eventSetExtReplicationInput3_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle|Replication|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExtReplicationInput3 constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExtReplicationInput3 constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExtReplicationInput3 Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput3_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetExtReplicationInput3_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput3_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput3_Statics::PropPointers) < 2048);
// ********** End Function SetExtReplicationInput3 Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput3_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetExtReplicationInput3", 	Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput3_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput3_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput3_Statics::RTuneVehicle_eventSetExtReplicationInput3_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput3_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput3_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput3_Statics::RTuneVehicle_eventSetExtReplicationInput3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetExtReplicationInput3)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExtReplicationInput3(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetExtReplicationInput3 *****************************

// ********** Begin Class ARTuneVehicle Function SetExtReplicationInput4 ***************************
struct Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput4_Statics
{
	struct RTuneVehicle_eventSetExtReplicationInput4_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle|Replication|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExtReplicationInput4 constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExtReplicationInput4 constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExtReplicationInput4 Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput4_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetExtReplicationInput4_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput4_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput4_Statics::PropPointers) < 2048);
// ********** End Function SetExtReplicationInput4 Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput4_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetExtReplicationInput4", 	Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput4_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput4_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput4_Statics::RTuneVehicle_eventSetExtReplicationInput4_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput4_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput4_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput4_Statics::RTuneVehicle_eventSetExtReplicationInput4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetExtReplicationInput4)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExtReplicationInput4(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetExtReplicationInput4 *****************************

// ********** Begin Class ARTuneVehicle Function SetExtReplicationInput5 ***************************
struct Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput5_Statics
{
	struct RTuneVehicle_eventSetExtReplicationInput5_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle|Replication|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExtReplicationInput5 constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExtReplicationInput5 constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExtReplicationInput5 Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput5_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetExtReplicationInput5_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput5_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput5_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput5_Statics::PropPointers) < 2048);
// ********** End Function SetExtReplicationInput5 Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput5_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetExtReplicationInput5", 	Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput5_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput5_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput5_Statics::RTuneVehicle_eventSetExtReplicationInput5_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput5_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput5_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput5_Statics::RTuneVehicle_eventSetExtReplicationInput5_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput5()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput5_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetExtReplicationInput5)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExtReplicationInput5(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetExtReplicationInput5 *****************************

// ********** Begin Class ARTuneVehicle Function SetExtReplicationInput6 ***************************
struct Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput6_Statics
{
	struct RTuneVehicle_eventSetExtReplicationInput6_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle|Replication|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExtReplicationInput6 constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExtReplicationInput6 constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExtReplicationInput6 Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput6_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetExtReplicationInput6_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput6_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput6_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput6_Statics::PropPointers) < 2048);
// ********** End Function SetExtReplicationInput6 Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput6_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetExtReplicationInput6", 	Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput6_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput6_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput6_Statics::RTuneVehicle_eventSetExtReplicationInput6_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput6_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput6_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput6_Statics::RTuneVehicle_eventSetExtReplicationInput6_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput6()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput6_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetExtReplicationInput6)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExtReplicationInput6(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetExtReplicationInput6 *****************************

// ********** Begin Class ARTuneVehicle Function SetInAir ******************************************
struct Z_Construct_UFunction_ARTuneVehicle_SetInAir_Statics
{
	struct RTuneVehicle_eventSetInAir_Parms
	{
		bool bAirborne;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetInAir constinit property declarations ******************************
	static void NewProp_bAirborne_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAirborne;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetInAir constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetInAir Property Definitions *****************************************
void Z_Construct_UFunction_ARTuneVehicle_SetInAir_Statics::NewProp_bAirborne_SetBit(void* Obj)
{
	((RTuneVehicle_eventSetInAir_Parms*)Obj)->bAirborne = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetInAir_Statics::NewProp_bAirborne = { "bAirborne", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTuneVehicle_eventSetInAir_Parms), &Z_Construct_UFunction_ARTuneVehicle_SetInAir_Statics::NewProp_bAirborne_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetInAir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetInAir_Statics::NewProp_bAirborne,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetInAir_Statics::PropPointers) < 2048);
// ********** End Function SetInAir Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetInAir_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetInAir", 	Z_Construct_UFunction_ARTuneVehicle_SetInAir_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetInAir_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetInAir_Statics::RTuneVehicle_eventSetInAir_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetInAir_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetInAir_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetInAir_Statics::RTuneVehicle_eventSetInAir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetInAir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetInAir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetInAir)
{
	P_GET_UBOOL(Z_Param_bAirborne);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInAir(Z_Param_bAirborne);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetInAir ********************************************

// ********** Begin Class ARTuneVehicle Function SetPhysicsWheelRadius *****************************
struct Z_Construct_UFunction_ARTuneVehicle_SetPhysicsWheelRadius_Statics
{
	struct RTuneVehicle_eventSetPhysicsWheelRadius_Parms
	{
		float newRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPhysicsWheelRadius constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_newRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPhysicsWheelRadius constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPhysicsWheelRadius Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetPhysicsWheelRadius_Statics::NewProp_newRadius = { "newRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetPhysicsWheelRadius_Parms, newRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetPhysicsWheelRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetPhysicsWheelRadius_Statics::NewProp_newRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetPhysicsWheelRadius_Statics::PropPointers) < 2048);
// ********** End Function SetPhysicsWheelRadius Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetPhysicsWheelRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetPhysicsWheelRadius", 	Z_Construct_UFunction_ARTuneVehicle_SetPhysicsWheelRadius_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetPhysicsWheelRadius_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetPhysicsWheelRadius_Statics::RTuneVehicle_eventSetPhysicsWheelRadius_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetPhysicsWheelRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetPhysicsWheelRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetPhysicsWheelRadius_Statics::RTuneVehicle_eventSetPhysicsWheelRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetPhysicsWheelRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetPhysicsWheelRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetPhysicsWheelRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_newRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPhysicsWheelRadius(Z_Param_newRadius);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetPhysicsWheelRadius *******************************

// ********** Begin Class ARTuneVehicle Function SetSteeringInput **********************************
struct Z_Construct_UFunction_ARTuneVehicle_SetSteeringInput_Statics
{
	struct RTuneVehicle_eventSetSteeringInput_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSteeringInput constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSteeringInput constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSteeringInput Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetSteeringInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetSteeringInput_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetSteeringInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetSteeringInput_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetSteeringInput_Statics::PropPointers) < 2048);
// ********** End Function SetSteeringInput Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetSteeringInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetSteeringInput", 	Z_Construct_UFunction_ARTuneVehicle_SetSteeringInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetSteeringInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetSteeringInput_Statics::RTuneVehicle_eventSetSteeringInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetSteeringInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetSteeringInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetSteeringInput_Statics::RTuneVehicle_eventSetSteeringInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetSteeringInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetSteeringInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetSteeringInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSteeringInput(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetSteeringInput ************************************

// ********** Begin Class ARTuneVehicle Function SetThrottleInput **********************************
struct Z_Construct_UFunction_ARTuneVehicle_SetThrottleInput_Statics
{
	struct RTuneVehicle_eventSetThrottleInput_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetThrottleInput constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetThrottleInput constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetThrottleInput Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARTuneVehicle_SetThrottleInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTuneVehicle_eventSetThrottleInput_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTuneVehicle_SetThrottleInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTuneVehicle_SetThrottleInput_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetThrottleInput_Statics::PropPointers) < 2048);
// ********** End Function SetThrottleInput Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_SetThrottleInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "SetThrottleInput", 	Z_Construct_UFunction_ARTuneVehicle_SetThrottleInput_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetThrottleInput_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARTuneVehicle_SetThrottleInput_Statics::RTuneVehicle_eventSetThrottleInput_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_SetThrottleInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_SetThrottleInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARTuneVehicle_SetThrottleInput_Statics::RTuneVehicle_eventSetThrottleInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTuneVehicle_SetThrottleInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_SetThrottleInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execSetThrottleInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetThrottleInput(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function SetThrottleInput ************************************

// ********** Begin Class ARTuneVehicle Function Upshift *******************************************
struct Z_Construct_UFunction_ARTuneVehicle_Upshift_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTuneVehicle" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Upshift constinit property declarations *******************************
// ********** End Function Upshift constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTuneVehicle_Upshift_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARTuneVehicle, nullptr, "Upshift", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTuneVehicle_Upshift_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTuneVehicle_Upshift_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ARTuneVehicle_Upshift()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTuneVehicle_Upshift_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARTuneVehicle::execUpshift)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Upshift();
	P_NATIVE_END;
}
// ********** End Class ARTuneVehicle Function Upshift *********************************************

// ********** Begin Class ARTuneVehicle ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARTuneVehicle;
UClass* ARTuneVehicle::GetPrivateStaticClass()
{
	using TClass = ARTuneVehicle;
	if (!Z_Registration_Info_UClass_ARTuneVehicle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RTuneVehicle"),
			Z_Registration_Info_UClass_ARTuneVehicle.InnerSingleton,
			StaticRegisterNativesARTuneVehicle,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ARTuneVehicle.InnerSingleton;
}
UClass* Z_Construct_UClass_ARTuneVehicle_NoRegister()
{
	return ARTuneVehicle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARTuneVehicle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Vehicle/RTuneVehicle.h" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerAngularVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PowertrainType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Engine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Specifies the powertrain behaviour.\n// Arcade: Torque is constant with no gearbox in place.\n// Standard: Full powertrain with variable torque as a function of RPM.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the powertrain behaviour.\nArcade: Torque is constant with no gearbox in place.\nStandard: Full powertrain with variable torque as a function of RPM." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineTorque_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Engine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//In Newton-Meters. This is the maximum torque that the engine will produce. If the standard powertrain is used, the peak value on the curve will be this value.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In Newton-Meters. This is the maximum torque that the engine will produce. If the standard powertrain is used, the peak value on the curve will be this value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Engine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Arcade maximum speed clamp. In KPH. This is an approximate top speed, the actual top speed will be slightly lower than this value.\n" },
#endif
		{ "EditCondition", "PowertrainType==EBehaviourType::Arcade" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Arcade maximum speed clamp. In KPH. This is an approximate top speed, the actual top speed will be slightly lower than this value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRPM_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Engine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum RPM, engine RPM will not exceed this value unless an override is applied during runtime. \n" },
#endif
		{ "EditCondition", "PowertrainType==EBehaviourType::Standard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum RPM, engine RPM will not exceed this value unless an override is applied during runtime." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPM_Multiplier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Engine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This can be used to scale RPM. Be very cautious when modifying this as it can cause erratic behaviour, but in some applications be be useful. The default value of 1 is perfectly stable and will not have any impact.\n" },
#endif
		{ "EditCondition", "PowertrainType==EBehaviourType::Standard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This can be used to scale RPM. Be very cautious when modifying this as it can cause erratic behaviour, but in some applications be be useful. The default value of 1 is perfectly stable and will not have any impact." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TorqueImplementation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Engine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How torque is implemented. Either it is a constant value, i.e. acceleration through a gear will not change, or it is a function of RPM. \n" },
#endif
		{ "EditCondition", "PowertrainType==EBehaviourType::Standard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How torque is implemented. Either it is a constant value, i.e. acceleration through a gear will not change, or it is a function of RPM." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineTorqueCurve_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Engine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a normalized torque curve which should be from 0 to 1. The delivered engine torque will be the value at a point on this curve multiplied by the EngineTorque.\n// X axis: RPM\n// Y axis: Torque multiplier\n" },
#endif
		{ "EditCondition", "PowertrainType==EBehaviourType::Standard &&TorqueImplementation==ETorqueImplementation::ETI_Curve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a normalized torque curve which should be from 0 to 1. The delivered engine torque will be the value at a point on this curve multiplied by the EngineTorque.\nX axis: RPM\nY axis: Torque multiplier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineBrakeCoefficient_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Engine" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This affects how quickly the RPM decreases when the throttle is no applied. Higher values result in a quicker decrease. Lower values result in less off-throttle deceleration.\n" },
#endif
		{ "EditCondition", "PowertrainType==EBehaviourType::Standard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This affects how quickly the RPM decreases when the throttle is no applied. Higher values result in a quicker decrease. Lower values result in less off-throttle deceleration." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionEfficiency_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Transmission" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A simple scalar that affects only acceleration at any given gear. Higher values result in a higher efficiency which increases acceleration. This does not affect top speed. \n" },
#endif
		{ "EditCondition", "PowertrainType==EBehaviourType::Standard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple scalar that affects only acceleration at any given gear. Higher values result in a higher efficiency which increases acceleration. This does not affect top speed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShiftDelay_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Transmission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//How long do shifts (upshift/downshift) take in seconds.\n" },
#endif
		{ "EditCondition", "PowertrainType==EBehaviourType::Standard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long do shifts (upshift/downshift) take in seconds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DifferentialRatio_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Transmission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is the the ratio between the number of revolutions the drive wheels make and the number of revolutions the engine makes.\n" },
#endif
		{ "EditCondition", "PowertrainType==EBehaviourType::Standard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the the ratio between the number of revolutions the drive wheels make and the number of revolutions the engine makes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GearRatios_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Transmission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//A gear ratio, single element, is the the ratio between the number of revolutions the gear makes and the number of revolutions the engine makes.\n" },
#endif
		{ "EditCondition", "PowertrainType==EBehaviourType::Standard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A gear ratio, single element, is the the ratio between the number of revolutions the gear makes and the number of revolutions the engine makes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Transmission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is independant from the actual wheel radius in the suspension component. This is used in the wheel torque calculation and is in meters (m).\n" },
#endif
		{ "EditCondition", "PowertrainType==EBehaviourType::Standard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is independant from the actual wheel radius in the suspension component. This is used in the wheel torque calculation and is in meters (m)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomatic_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Transmission" },
		{ "EditCondition", "PowertrainType==EBehaviourType::Standard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpshiftRatio_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Transmission" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ratio threshold of RPM to MaxRPM for an upshift to take place. \n" },
#endif
		{ "EditCondition", "bAutomatic==true&&PowertrainType==EBehaviourType::Standard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ratio threshold of RPM to MaxRPM for an upshift to take place." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownshiftRatio_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Transmission" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ratio threshold of RPM to MaxRPM for an downshift to take place. Gear ratios should be spaced out such that an instance of intersection between an upshift and downshift ratio occur. \n" },
#endif
		{ "EditCondition", "bAutomatic==true&&PowertrainType==EBehaviourType::Standard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ratio threshold of RPM to MaxRPM for an downshift to take place. Gear ratios should be spaced out such that an instance of intersection between an upshift and downshift ratio occur." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockShift_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Transmission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This prevents the gearbox from shifting when set to true. This is useful under certain conditions\n" },
#endif
		{ "EditCondition", "PowertrainType==EBehaviourType::Standard" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This prevents the gearbox from shifting when set to true. This is useful under certain conditions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakeForce_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Brakes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Brake force in Newtons. If UseBrakesAsReverse is used, then this will be the force used to reverse.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Brake force in Newtons. If UseBrakesAsReverse is used, then this will be the force used to reverse." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBrakeAsReverse_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Brakes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default for arcade powertrain\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default for arcade powertrain" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedInReverse_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Brakes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is the maximum speed (KPH) that can be acheived in reverse if UsedBrakesAsReverse is used. If not the maximum speed in reverse will be determined by the gear ratio set.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the maximum speed (KPH) that can be acheived in reverse if UsedBrakesAsReverse is used. If not the maximum speed in reverse will be determined by the gear ratio set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriftTorque_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Handling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is an assistance/helper torque (in Unreal Torque Units) that is tied to steering input and can be used to increase the rotation rate of the vehicle.\n// It is fully compliant with the rest of the vehicle behaviour and will conform to all of it's other systems.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an assistance/helper torque (in Unreal Torque Units) that is tied to steering input and can be used to increase the rotation rate of the vehicle.\nIt is fully compliant with the rest of the vehicle behaviour and will conform to all of it's other systems." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringInputClamp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Handling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clamp the steering input as a function of speed. I.E. at higher speeds the maximum steering input will be lower, which is how vehicles generally behave.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clamp the steering input as a function of speed. I.E. at higher speeds the maximum steering input will be lower, which is how vehicles generally behave." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantSteeringClamp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Handling" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clamp the max steering input across all speeds.\n" },
#endif
		{ "EditCondition", "SteeringInputClamp==ESpeedClamp::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clamp the max steering input across all speeds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearSteeringInputClamp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Handling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Linear mapping: 1-to-1 input to speed decrease. The input range is the speed range Input.X = min speed, Input.Y = max speed. The output range is the maximum steering input.\n" },
#endif
		{ "EditCondition", "SteeringInputClamp==ESpeedClamp::Linear" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Linear mapping: 1-to-1 input to speed decrease. The input range is the speed range Input.X = min speed, Input.Y = max speed. The output range is the maximum steering input." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveSteeringInputClamp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Handling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Steering input decrease as a function of this curve. The x axis is speed, the y axis is the maximum steering value.\n" },
#endif
		{ "EditCondition", "SteeringInputClamp==ESpeedClamp::Curve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steering input decrease as a function of this curve. The x axis is speed, the y axis is the maximum steering value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSensitivityClamp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Handling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Limit the steering sensitivity as a function of speed. I.E at higher speeds the steering response will be slower.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Limit the steering sensitivity as a function of speed. I.E at higher speeds the steering response will be slower." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringSensitivity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Handling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Constant sensitivity\n" },
#endif
		{ "EditCondition", "bUseSensitivityClamp==false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constant sensitivity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringSensitivityClamp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Handling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Linear mapping. Input range is speed, output range is the sensitivity.\n" },
#endif
		{ "EditCondition", "bUseSensitivityClamp==true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Linear mapping. Input range is speed, output range is the sensitivity." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeStrength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Handbrake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This the handbrake force used to slow down the vehicle\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This the handbrake force used to slow down the vehicle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicPitchMomentMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Dynamics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This affects the pitch moment. I.E increasing this value increases the amount the vehicle leans under acceleration.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This affects the pitch moment. I.E increasing this value increases the amount the vehicle leans under acceleration." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicBrakeMomentMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Dynamics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This affects the pitch moment under braking. I.E increasing this value increases the amount the vehicle leans under braking. This can be problematic in certain cases - caution is advised.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This affects the pitch moment under braking. I.E increasing this value increases the amount the vehicle leans under braking. This can be problematic in certain cases - caution is advised." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoefficientOfDrag_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Aerodynamics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a dimensionless scalar. Higher values result in more drag. Generally this value ranges from 0.25-0.4 for most road cars.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a dimensionless scalar. Higher values result in more drag. Generally this value ranges from 0.25-0.4 for most road cars." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossSectionArea_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Aerodynamics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Frontal cross sectional area. In meters squared. m^2\n//This is the area that drag acts on. Higher values will result in more drag.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Frontal cross sectional area. In meters squared. m^2\nThis is the area that drag acts on. Higher values will result in more drag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirDensity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Aerodynamics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is the atmosphere air density used drag force calculations. Default value is the air density at sea level. In kg/m^3.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the atmosphere air density used drag force calculations. Default value is the air density at sea level. In kg/m^3." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchStrength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Air" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawStrength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Air" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollStrength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Air" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAirWheelCount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Air" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This controls the in air condition where forces and torques cannot be applied. This variables controls how many wheels have to be off the ground for the vehicle to be considered airborne.\n// When the vehicle is airborne forces and torques are no longer applied.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This controls the in air condition where forces and torques cannot be applied. This variables controls how many wheels have to be off the ground for the vehicle to be considered airborne.\nWhen the vehicle is airborne forces and torques are no longer applied." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAntiGravityEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|AntiGravity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enabling this activates the Anti Gravity System.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enabling this activates the Anti Gravity System." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravityStrength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|AntiGravity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Actual magnitude of gravity. In cm/s^2\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actual magnitude of gravity. In cm/s^2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AntiGravityZStrength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|AntiGravity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much to scale the anti-gravity on the Z axis. Increasing this value will increase the anti gravity surface suction. A value of 1 - 2 generally works well. This can be increased higher.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much to scale the anti-gravity on the Z axis. Increasing this value will increase the anti gravity surface suction. A value of 1 - 2 generally works well. This can be increased higher." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AntiGravityXStrength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|AntiGravity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much to scale the anti-gravity on the planar X axis. A value greater than 1 will prevent rolling backwards on inclines. Set this value to zero to allow for forwards and backwards rolling.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much to scale the anti-gravity on the planar X axis. A value greater than 1 will prevent rolling backwards on inclines. Set this value to zero to allow for forwards and backwards rolling." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AntiGravityYStrength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|AntiGravity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much to scale the anti-gravity on the planar Y axis. A value greater than 1 will prevent sideways slipping on inclines. Set this value to zero to allow for sideways slipping.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much to scale the anti-gravity on the planar Y axis. A value greater than 1 will prevent sideways slipping on inclines. Set this value to zero to allow for sideways slipping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AntiGravityOffContactThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|AntiGravity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is the time, in seconds, to keep the Anti Gravity system active when the wheels have lost contact with the surface.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the time, in seconds, to keep the Anti Gravity system active when the wheels have lost contact with the surface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddedMass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|AntiGravity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The added mass used for the anti gravity simulation to maintain equilibrium. Using multiple components that have masses will add to this simulation\n//This can be used if there is a mass change during runtime.\n//This is a highly efficient mass change implementation and will not impact performance.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The added mass used for the anti gravity simulation to maintain equilibrium. Using multiple components that have masses will add to this simulation\nThis can be used if there is a mass change during runtime.\nThis is a highly efficient mass change implementation and will not impact performance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseIdleLock_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|IdleLock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This system is used to hold a vehicle in place when stationary or travelling very slowly after a certain amount of time and prevent micro slipping. \n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This system is used to hold a vehicle in place when stationary or travelling very slowly after a certain amount of time and prevent micro slipping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleLockTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|IdleLock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How long to wait (in seconds) to lock vehicle in place.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long to wait (in seconds) to lock vehicle in place." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsIdleLocked_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|IdleLock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is effectively an override variable that can be called during runtime to disable the idle lock. This may be useful for edge cases that require more precise control of this system.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is effectively an override variable that can be called during runtime to disable the idle lock. This may be useful for edge cases that require more precise control of this system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleLockSpeedThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|IdleLock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Speed at which to begin transitioning to idle locked state.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed at which to begin transitioning to idle locked state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleLockStiffness_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|IdleLock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the force used on inclines to prevent slipping and micro slipping. If the force is too high it may cause an impulse and move the vehicle out of the idle locked state.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the force used on inclines to prevent slipping and micro slipping. If the force is too high it may cause an impulse and move the vehicle out of the idle locked state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationMethod_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is how replication is implemented.\n// Full - Complete replication\n// Data Only - Movement is not replicated. Only data is replicated. This is useful if a 3rd party movement replication system is used (like 'Smooth Sync').\n// None - No data or movement is replicated. This is useful if you are implementing a custom replication system or do not need replication.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is how replication is implemented.\n Full - Complete replication\n Data Only - Movement is not replicated. Only data is replicated. This is useful if a 3rd party movement replication system is used (like 'Smooth Sync').\n None - No data or movement is replicated. This is useful if you are implementing a custom replication system or do not need replication." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseServerFastSync_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This periodically forces the server to sync transform data to the client for absolute synchronization.  \n//The is optional and not needed most cases.\n" },
#endif
		{ "EditCondition", "ReplicationMethod==EReplicationType::ERT_Full" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This periodically forces the server to sync transform data to the client for absolute synchronization.\nThe is optional and not needed most cases." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerFastSyncLatency_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The sync period running on the game thread (not physics thread). \n" },
#endif
		{ "EditCondition", "bUseServerFastSync==true&&ReplicationMethod==EReplicationType::ERT_Full" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The sync period running on the game thread (not physics thread)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoWakeRigidBodies_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RTuneVehicle|Physics|Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This controls whether to automatically wake rigid body components. Disabling this option can resolve issues with having lots of replicated vehicles.\n//If disabled use the function 'RTWakeRigidBodies' to resume wake state\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/RTuneVehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This controls whether to automatically wake rigid body components. Disabling this option can resolve issues with having lots of replicated vehicles.\nIf disabled use the function 'RTWakeRigidBodies' to resume wake state" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ARTuneVehicle constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerAngularVelocity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PowertrainType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PowertrainType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineTorque;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRPM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RPM_Multiplier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TorqueImplementation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TorqueImplementation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EngineTorqueCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EngineBrakeCoefficient;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransmissionEfficiency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShiftDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DifferentialRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GearRatios_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GearRatios;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelRadius;
	static void NewProp_bAutomatic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomatic;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpshiftRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DownshiftRatio;
	static void NewProp_bLockShift_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockShift;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakeForce;
	static void NewProp_bUseBrakeAsReverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBrakeAsReverse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedInReverse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DriftTorque;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SteeringInputClamp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SteeringInputClamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstantSteeringClamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearSteeringInputClamp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveSteeringInputClamp;
	static void NewProp_bUseSensitivityClamp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSensitivityClamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringSensitivity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteeringSensitivityClamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HandbrakeStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicPitchMomentMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicBrakeMomentMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoefficientOfDrag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrossSectionArea;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirDensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InAirWheelCount;
	static void NewProp_bAntiGravityEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAntiGravityEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AntiGravityZStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AntiGravityXStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AntiGravityYStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AntiGravityOffContactThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AddedMass;
	static void NewProp_bUseIdleLock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseIdleLock;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IdleLockTime;
	static void NewProp_bIsIdleLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIdleLocked;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IdleLockSpeedThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IdleLockStiffness;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReplicationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReplicationMethod;
	static void NewProp_bUseServerFastSync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseServerFastSync;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerFastSyncLatency;
	static void NewProp_bAutoWakeRigidBodies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoWakeRigidBodies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARTuneVehicle constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyHandbrakeInput"), .Pointer = &ARTuneVehicle::execApplyHandbrakeInput },
		{ .NameUTF8 = UTF8TEXT("AsyncReplicatedTick"), .Pointer = &ARTuneVehicle::execAsyncReplicatedTick },
		{ .NameUTF8 = UTF8TEXT("Downshift"), .Pointer = &ARTuneVehicle::execDownshift },
		{ .NameUTF8 = UTF8TEXT("GetBrakesInput"), .Pointer = &ARTuneVehicle::execGetBrakesInput },
		{ .NameUTF8 = UTF8TEXT("GetCurrentGear"), .Pointer = &ARTuneVehicle::execGetCurrentGear },
		{ .NameUTF8 = UTF8TEXT("GetCurrentGearRatio"), .Pointer = &ARTuneVehicle::execGetCurrentGearRatio },
		{ .NameUTF8 = UTF8TEXT("GetDifferentialRatio"), .Pointer = &ARTuneVehicle::execGetDifferentialRatio },
		{ .NameUTF8 = UTF8TEXT("GetEngineCurrentTorque"), .Pointer = &ARTuneVehicle::execGetEngineCurrentTorque },
		{ .NameUTF8 = UTF8TEXT("GetEngineTorque"), .Pointer = &ARTuneVehicle::execGetEngineTorque },
		{ .NameUTF8 = UTF8TEXT("GetExternalResistanceForce"), .Pointer = &ARTuneVehicle::execGetExternalResistanceForce },
		{ .NameUTF8 = UTF8TEXT("GetExtReplicationInput1"), .Pointer = &ARTuneVehicle::execGetExtReplicationInput1 },
		{ .NameUTF8 = UTF8TEXT("GetExtReplicationInput2"), .Pointer = &ARTuneVehicle::execGetExtReplicationInput2 },
		{ .NameUTF8 = UTF8TEXT("GetExtReplicationInput3"), .Pointer = &ARTuneVehicle::execGetExtReplicationInput3 },
		{ .NameUTF8 = UTF8TEXT("GetExtReplicationInput4"), .Pointer = &ARTuneVehicle::execGetExtReplicationInput4 },
		{ .NameUTF8 = UTF8TEXT("GetExtReplicationInput5"), .Pointer = &ARTuneVehicle::execGetExtReplicationInput5 },
		{ .NameUTF8 = UTF8TEXT("GetExtReplicationInput6"), .Pointer = &ARTuneVehicle::execGetExtReplicationInput6 },
		{ .NameUTF8 = UTF8TEXT("GetHandbrakeInput"), .Pointer = &ARTuneVehicle::execGetHandbrakeInput },
		{ .NameUTF8 = UTF8TEXT("GetHandbrakeStrength"), .Pointer = &ARTuneVehicle::execGetHandbrakeStrength },
		{ .NameUTF8 = UTF8TEXT("GetIsHandbrakeActive"), .Pointer = &ARTuneVehicle::execGetIsHandbrakeActive },
		{ .NameUTF8 = UTF8TEXT("GetLateralG"), .Pointer = &ARTuneVehicle::execGetLateralG },
		{ .NameUTF8 = UTF8TEXT("GetLinearVelocity"), .Pointer = &ARTuneVehicle::execGetLinearVelocity },
		{ .NameUTF8 = UTF8TEXT("GetLongitudinalG"), .Pointer = &ARTuneVehicle::execGetLongitudinalG },
		{ .NameUTF8 = UTF8TEXT("GetPhysicsTransform"), .Pointer = &ARTuneVehicle::execGetPhysicsTransform },
		{ .NameUTF8 = UTF8TEXT("GetPhysicsWheelRadius"), .Pointer = &ARTuneVehicle::execGetPhysicsWheelRadius },
		{ .NameUTF8 = UTF8TEXT("GetPrimitiveRoot"), .Pointer = &ARTuneVehicle::execGetPrimitiveRoot },
		{ .NameUTF8 = UTF8TEXT("GetRPM"), .Pointer = &ARTuneVehicle::execGetRPM },
		{ .NameUTF8 = UTF8TEXT("GetSideSlipAngle"), .Pointer = &ARTuneVehicle::execGetSideSlipAngle },
		{ .NameUTF8 = UTF8TEXT("GetSpeedKPH"), .Pointer = &ARTuneVehicle::execGetSpeedKPH },
		{ .NameUTF8 = UTF8TEXT("GetSteeringInput"), .Pointer = &ARTuneVehicle::execGetSteeringInput },
		{ .NameUTF8 = UTF8TEXT("GetThrottleInput"), .Pointer = &ARTuneVehicle::execGetThrottleInput },
		{ .NameUTF8 = UTF8TEXT("GetVelocityVector"), .Pointer = &ARTuneVehicle::execGetVelocityVector },
		{ .NameUTF8 = UTF8TEXT("GetVerticalG"), .Pointer = &ARTuneVehicle::execGetVerticalG },
		{ .NameUTF8 = UTF8TEXT("InitializeAntiGravity"), .Pointer = &ARTuneVehicle::execInitializeAntiGravity },
		{ .NameUTF8 = UTF8TEXT("IsAntiGravityActive"), .Pointer = &ARTuneVehicle::execIsAntiGravityActive },
		{ .NameUTF8 = UTF8TEXT("IsGearboxDownshifting"), .Pointer = &ARTuneVehicle::execIsGearboxDownshifting },
		{ .NameUTF8 = UTF8TEXT("IsGearboxUpshifting"), .Pointer = &ARTuneVehicle::execIsGearboxUpshifting },
		{ .NameUTF8 = UTF8TEXT("Jump"), .Pointer = &ARTuneVehicle::execJump },
		{ .NameUTF8 = UTF8TEXT("OverrideAntiGravityState"), .Pointer = &ARTuneVehicle::execOverrideAntiGravityState },
		{ .NameUTF8 = UTF8TEXT("OverrideRPM"), .Pointer = &ARTuneVehicle::execOverrideRPM },
		{ .NameUTF8 = UTF8TEXT("RTWakeRigidBodies"), .Pointer = &ARTuneVehicle::execRTWakeRigidBodies },
		{ .NameUTF8 = UTF8TEXT("ServerSetAirPitchInput"), .Pointer = &ARTuneVehicle::execServerSetAirPitchInput },
		{ .NameUTF8 = UTF8TEXT("ServerSetAirRollInput"), .Pointer = &ARTuneVehicle::execServerSetAirRollInput },
		{ .NameUTF8 = UTF8TEXT("ServerSetAirYawInput"), .Pointer = &ARTuneVehicle::execServerSetAirYawInput },
		{ .NameUTF8 = UTF8TEXT("ServerSetBrakeInput"), .Pointer = &ARTuneVehicle::execServerSetBrakeInput },
		{ .NameUTF8 = UTF8TEXT("ServerSetExtReplicationInput1"), .Pointer = &ARTuneVehicle::execServerSetExtReplicationInput1 },
		{ .NameUTF8 = UTF8TEXT("ServerSetExtReplicationInput2"), .Pointer = &ARTuneVehicle::execServerSetExtReplicationInput2 },
		{ .NameUTF8 = UTF8TEXT("ServerSetExtReplicationInput3"), .Pointer = &ARTuneVehicle::execServerSetExtReplicationInput3 },
		{ .NameUTF8 = UTF8TEXT("ServerSetExtReplicationInput4"), .Pointer = &ARTuneVehicle::execServerSetExtReplicationInput4 },
		{ .NameUTF8 = UTF8TEXT("ServerSetExtReplicationInput5"), .Pointer = &ARTuneVehicle::execServerSetExtReplicationInput5 },
		{ .NameUTF8 = UTF8TEXT("ServerSetExtReplicationInput6"), .Pointer = &ARTuneVehicle::execServerSetExtReplicationInput6 },
		{ .NameUTF8 = UTF8TEXT("ServerSetSteeringInput"), .Pointer = &ARTuneVehicle::execServerSetSteeringInput },
		{ .NameUTF8 = UTF8TEXT("ServerSetThrottleInput"), .Pointer = &ARTuneVehicle::execServerSetThrottleInput },
		{ .NameUTF8 = UTF8TEXT("SetAirPitchInput"), .Pointer = &ARTuneVehicle::execSetAirPitchInput },
		{ .NameUTF8 = UTF8TEXT("SetAirRollInput"), .Pointer = &ARTuneVehicle::execSetAirRollInput },
		{ .NameUTF8 = UTF8TEXT("SetAirYawInput"), .Pointer = &ARTuneVehicle::execSetAirYawInput },
		{ .NameUTF8 = UTF8TEXT("SetBrakeInput"), .Pointer = &ARTuneVehicle::execSetBrakeInput },
		{ .NameUTF8 = UTF8TEXT("SetBrakesEnabled"), .Pointer = &ARTuneVehicle::execSetBrakesEnabled },
		{ .NameUTF8 = UTF8TEXT("SetCurrentGearRatio"), .Pointer = &ARTuneVehicle::execSetCurrentGearRatio },
		{ .NameUTF8 = UTF8TEXT("SetDifferentialRatio"), .Pointer = &ARTuneVehicle::execSetDifferentialRatio },
		{ .NameUTF8 = UTF8TEXT("SetEngineTorque"), .Pointer = &ARTuneVehicle::execSetEngineTorque },
		{ .NameUTF8 = UTF8TEXT("SetEngineTorqueEnabled"), .Pointer = &ARTuneVehicle::execSetEngineTorqueEnabled },
		{ .NameUTF8 = UTF8TEXT("SetExternalResistanceForce"), .Pointer = &ARTuneVehicle::execSetExternalResistanceForce },
		{ .NameUTF8 = UTF8TEXT("SetExtReplicationInput1"), .Pointer = &ARTuneVehicle::execSetExtReplicationInput1 },
		{ .NameUTF8 = UTF8TEXT("SetExtReplicationInput2"), .Pointer = &ARTuneVehicle::execSetExtReplicationInput2 },
		{ .NameUTF8 = UTF8TEXT("SetExtReplicationInput3"), .Pointer = &ARTuneVehicle::execSetExtReplicationInput3 },
		{ .NameUTF8 = UTF8TEXT("SetExtReplicationInput4"), .Pointer = &ARTuneVehicle::execSetExtReplicationInput4 },
		{ .NameUTF8 = UTF8TEXT("SetExtReplicationInput5"), .Pointer = &ARTuneVehicle::execSetExtReplicationInput5 },
		{ .NameUTF8 = UTF8TEXT("SetExtReplicationInput6"), .Pointer = &ARTuneVehicle::execSetExtReplicationInput6 },
		{ .NameUTF8 = UTF8TEXT("SetInAir"), .Pointer = &ARTuneVehicle::execSetInAir },
		{ .NameUTF8 = UTF8TEXT("SetPhysicsWheelRadius"), .Pointer = &ARTuneVehicle::execSetPhysicsWheelRadius },
		{ .NameUTF8 = UTF8TEXT("SetSteeringInput"), .Pointer = &ARTuneVehicle::execSetSteeringInput },
		{ .NameUTF8 = UTF8TEXT("SetThrottleInput"), .Pointer = &ARTuneVehicle::execSetThrottleInput },
		{ .NameUTF8 = UTF8TEXT("Upshift"), .Pointer = &ARTuneVehicle::execUpshift },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTuneVehicle_ApplyHandbrakeInput, "ApplyHandbrakeInput" }, // 648241930
		{ &Z_Construct_UFunction_ARTuneVehicle_AsyncReplicatedTick, "AsyncReplicatedTick" }, // 2667787236
		{ &Z_Construct_UFunction_ARTuneVehicle_Downshift, "Downshift" }, // 767760625
		{ &Z_Construct_UFunction_ARTuneVehicle_GetBrakesInput, "GetBrakesInput" }, // 1149690175
		{ &Z_Construct_UFunction_ARTuneVehicle_GetCurrentGear, "GetCurrentGear" }, // 550259219
		{ &Z_Construct_UFunction_ARTuneVehicle_GetCurrentGearRatio, "GetCurrentGearRatio" }, // 3876076419
		{ &Z_Construct_UFunction_ARTuneVehicle_GetDifferentialRatio, "GetDifferentialRatio" }, // 291850894
		{ &Z_Construct_UFunction_ARTuneVehicle_GetEngineCurrentTorque, "GetEngineCurrentTorque" }, // 538448964
		{ &Z_Construct_UFunction_ARTuneVehicle_GetEngineTorque, "GetEngineTorque" }, // 2054779286
		{ &Z_Construct_UFunction_ARTuneVehicle_GetExternalResistanceForce, "GetExternalResistanceForce" }, // 890689737
		{ &Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput1, "GetExtReplicationInput1" }, // 2028984115
		{ &Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput2, "GetExtReplicationInput2" }, // 32053919
		{ &Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput3, "GetExtReplicationInput3" }, // 496554250
		{ &Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput4, "GetExtReplicationInput4" }, // 2148470949
		{ &Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput5, "GetExtReplicationInput5" }, // 2815320759
		{ &Z_Construct_UFunction_ARTuneVehicle_GetExtReplicationInput6, "GetExtReplicationInput6" }, // 946706256
		{ &Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeInput, "GetHandbrakeInput" }, // 3187556054
		{ &Z_Construct_UFunction_ARTuneVehicle_GetHandbrakeStrength, "GetHandbrakeStrength" }, // 1842445183
		{ &Z_Construct_UFunction_ARTuneVehicle_GetIsHandbrakeActive, "GetIsHandbrakeActive" }, // 2991432769
		{ &Z_Construct_UFunction_ARTuneVehicle_GetLateralG, "GetLateralG" }, // 2354421882
		{ &Z_Construct_UFunction_ARTuneVehicle_GetLinearVelocity, "GetLinearVelocity" }, // 1099857379
		{ &Z_Construct_UFunction_ARTuneVehicle_GetLongitudinalG, "GetLongitudinalG" }, // 2018591866
		{ &Z_Construct_UFunction_ARTuneVehicle_GetPhysicsTransform, "GetPhysicsTransform" }, // 1498799797
		{ &Z_Construct_UFunction_ARTuneVehicle_GetPhysicsWheelRadius, "GetPhysicsWheelRadius" }, // 4107260192
		{ &Z_Construct_UFunction_ARTuneVehicle_GetPrimitiveRoot, "GetPrimitiveRoot" }, // 1207045827
		{ &Z_Construct_UFunction_ARTuneVehicle_GetRPM, "GetRPM" }, // 4022445519
		{ &Z_Construct_UFunction_ARTuneVehicle_GetSideSlipAngle, "GetSideSlipAngle" }, // 2389138613
		{ &Z_Construct_UFunction_ARTuneVehicle_GetSpeedKPH, "GetSpeedKPH" }, // 2922631554
		{ &Z_Construct_UFunction_ARTuneVehicle_GetSteeringInput, "GetSteeringInput" }, // 4166658395
		{ &Z_Construct_UFunction_ARTuneVehicle_GetThrottleInput, "GetThrottleInput" }, // 217064286
		{ &Z_Construct_UFunction_ARTuneVehicle_GetVelocityVector, "GetVelocityVector" }, // 566133098
		{ &Z_Construct_UFunction_ARTuneVehicle_GetVerticalG, "GetVerticalG" }, // 1863399989
		{ &Z_Construct_UFunction_ARTuneVehicle_InitializeAntiGravity, "InitializeAntiGravity" }, // 439498410
		{ &Z_Construct_UFunction_ARTuneVehicle_IsAntiGravityActive, "IsAntiGravityActive" }, // 3798314406
		{ &Z_Construct_UFunction_ARTuneVehicle_IsGearboxDownshifting, "IsGearboxDownshifting" }, // 3821827420
		{ &Z_Construct_UFunction_ARTuneVehicle_IsGearboxUpshifting, "IsGearboxUpshifting" }, // 1449220491
		{ &Z_Construct_UFunction_ARTuneVehicle_Jump, "Jump" }, // 735612086
		{ &Z_Construct_UFunction_ARTuneVehicle_OverrideAntiGravityState, "OverrideAntiGravityState" }, // 183741987
		{ &Z_Construct_UFunction_ARTuneVehicle_OverrideRPM, "OverrideRPM" }, // 79490242
		{ &Z_Construct_UFunction_ARTuneVehicle_RTWakeRigidBodies, "RTWakeRigidBodies" }, // 4185601942
		{ &Z_Construct_UFunction_ARTuneVehicle_ServerSetAirPitchInput, "ServerSetAirPitchInput" }, // 664186866
		{ &Z_Construct_UFunction_ARTuneVehicle_ServerSetAirRollInput, "ServerSetAirRollInput" }, // 291277275
		{ &Z_Construct_UFunction_ARTuneVehicle_ServerSetAirYawInput, "ServerSetAirYawInput" }, // 2831727683
		{ &Z_Construct_UFunction_ARTuneVehicle_ServerSetBrakeInput, "ServerSetBrakeInput" }, // 3611785018
		{ &Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput1, "ServerSetExtReplicationInput1" }, // 2300299431
		{ &Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput2, "ServerSetExtReplicationInput2" }, // 2995146326
		{ &Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput3, "ServerSetExtReplicationInput3" }, // 1201615359
		{ &Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput4, "ServerSetExtReplicationInput4" }, // 1702976129
		{ &Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput5, "ServerSetExtReplicationInput5" }, // 4150203545
		{ &Z_Construct_UFunction_ARTuneVehicle_ServerSetExtReplicationInput6, "ServerSetExtReplicationInput6" }, // 2892852608
		{ &Z_Construct_UFunction_ARTuneVehicle_ServerSetSteeringInput, "ServerSetSteeringInput" }, // 3513544794
		{ &Z_Construct_UFunction_ARTuneVehicle_ServerSetThrottleInput, "ServerSetThrottleInput" }, // 191667109
		{ &Z_Construct_UFunction_ARTuneVehicle_SetAirPitchInput, "SetAirPitchInput" }, // 2046143680
		{ &Z_Construct_UFunction_ARTuneVehicle_SetAirRollInput, "SetAirRollInput" }, // 1420052592
		{ &Z_Construct_UFunction_ARTuneVehicle_SetAirYawInput, "SetAirYawInput" }, // 933641693
		{ &Z_Construct_UFunction_ARTuneVehicle_SetBrakeInput, "SetBrakeInput" }, // 2532350230
		{ &Z_Construct_UFunction_ARTuneVehicle_SetBrakesEnabled, "SetBrakesEnabled" }, // 770973025
		{ &Z_Construct_UFunction_ARTuneVehicle_SetCurrentGearRatio, "SetCurrentGearRatio" }, // 4190315427
		{ &Z_Construct_UFunction_ARTuneVehicle_SetDifferentialRatio, "SetDifferentialRatio" }, // 277672309
		{ &Z_Construct_UFunction_ARTuneVehicle_SetEngineTorque, "SetEngineTorque" }, // 3007594056
		{ &Z_Construct_UFunction_ARTuneVehicle_SetEngineTorqueEnabled, "SetEngineTorqueEnabled" }, // 3423085299
		{ &Z_Construct_UFunction_ARTuneVehicle_SetExternalResistanceForce, "SetExternalResistanceForce" }, // 916406345
		{ &Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput1, "SetExtReplicationInput1" }, // 828579755
		{ &Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput2, "SetExtReplicationInput2" }, // 2239138418
		{ &Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput3, "SetExtReplicationInput3" }, // 478312457
		{ &Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput4, "SetExtReplicationInput4" }, // 221317792
		{ &Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput5, "SetExtReplicationInput5" }, // 1356036287
		{ &Z_Construct_UFunction_ARTuneVehicle_SetExtReplicationInput6, "SetExtReplicationInput6" }, // 1888876675
		{ &Z_Construct_UFunction_ARTuneVehicle_SetInAir, "SetInAir" }, // 1691656358
		{ &Z_Construct_UFunction_ARTuneVehicle_SetPhysicsWheelRadius, "SetPhysicsWheelRadius" }, // 3639451660
		{ &Z_Construct_UFunction_ARTuneVehicle_SetSteeringInput, "SetSteeringInput" }, // 2553550920
		{ &Z_Construct_UFunction_ARTuneVehicle_SetThrottleInput, "SetThrottleInput" }, // 4040630777
		{ &Z_Construct_UFunction_ARTuneVehicle_Upshift, "Upshift" }, // 888857691
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTuneVehicle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARTuneVehicle_Statics

// ********** Begin Class ARTuneVehicle Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_ServerState = { "ServerState", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, ServerState), Z_Construct_UScriptStruct_FServerState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerState_MetaData), NewProp_ServerState_MetaData) }; // 517209474
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_ServerVelocity = { "ServerVelocity", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, ServerVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerVelocity_MetaData), NewProp_ServerVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_ServerAngularVelocity = { "ServerAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, ServerAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerAngularVelocity_MetaData), NewProp_ServerAngularVelocity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_PowertrainType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_PowertrainType = { "PowertrainType", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, PowertrainType), Z_Construct_UEnum_RTune_EBehaviourType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PowertrainType_MetaData), NewProp_PowertrainType_MetaData) }; // 1189784788
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_EngineTorque = { "EngineTorque", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, EngineTorque), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineTorque_MetaData), NewProp_EngineTorque_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_MaxRPM = { "MaxRPM", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, MaxRPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRPM_MetaData), NewProp_MaxRPM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_RPM_Multiplier = { "RPM_Multiplier", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, RPM_Multiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPM_Multiplier_MetaData), NewProp_RPM_Multiplier_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_TorqueImplementation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_TorqueImplementation = { "TorqueImplementation", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, TorqueImplementation), Z_Construct_UEnum_RTune_ETorqueImplementation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TorqueImplementation_MetaData), NewProp_TorqueImplementation_MetaData) }; // 2387300461
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_EngineTorqueCurve = { "EngineTorqueCurve", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, EngineTorqueCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineTorqueCurve_MetaData), NewProp_EngineTorqueCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_EngineBrakeCoefficient = { "EngineBrakeCoefficient", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, EngineBrakeCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineBrakeCoefficient_MetaData), NewProp_EngineBrakeCoefficient_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_TransmissionEfficiency = { "TransmissionEfficiency", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, TransmissionEfficiency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransmissionEfficiency_MetaData), NewProp_TransmissionEfficiency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_ShiftDelay = { "ShiftDelay", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, ShiftDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShiftDelay_MetaData), NewProp_ShiftDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_DifferentialRatio = { "DifferentialRatio", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, DifferentialRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DifferentialRatio_MetaData), NewProp_DifferentialRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_GearRatios_Inner = { "GearRatios", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_GearRatios = { "GearRatios", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, GearRatios), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GearRatios_MetaData), NewProp_GearRatios_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_WheelRadius = { "WheelRadius", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, WheelRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelRadius_MetaData), NewProp_WheelRadius_MetaData) };
void Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bAutomatic_SetBit(void* Obj)
{
	((ARTuneVehicle*)Obj)->bAutomatic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bAutomatic = { "bAutomatic", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTuneVehicle), &Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bAutomatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomatic_MetaData), NewProp_bAutomatic_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_UpshiftRatio = { "UpshiftRatio", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, UpshiftRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpshiftRatio_MetaData), NewProp_UpshiftRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_DownshiftRatio = { "DownshiftRatio", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, DownshiftRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownshiftRatio_MetaData), NewProp_DownshiftRatio_MetaData) };
void Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bLockShift_SetBit(void* Obj)
{
	((ARTuneVehicle*)Obj)->bLockShift = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bLockShift = { "bLockShift", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTuneVehicle), &Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bLockShift_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockShift_MetaData), NewProp_bLockShift_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_BrakeForce = { "BrakeForce", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, BrakeForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakeForce_MetaData), NewProp_BrakeForce_MetaData) };
void Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bUseBrakeAsReverse_SetBit(void* Obj)
{
	((ARTuneVehicle*)Obj)->bUseBrakeAsReverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bUseBrakeAsReverse = { "bUseBrakeAsReverse", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTuneVehicle), &Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bUseBrakeAsReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBrakeAsReverse_MetaData), NewProp_bUseBrakeAsReverse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_MaxSpeedInReverse = { "MaxSpeedInReverse", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, MaxSpeedInReverse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeedInReverse_MetaData), NewProp_MaxSpeedInReverse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_DriftTorque = { "DriftTorque", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, DriftTorque), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriftTorque_MetaData), NewProp_DriftTorque_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_SteeringInputClamp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_SteeringInputClamp = { "SteeringInputClamp", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, SteeringInputClamp), Z_Construct_UEnum_RTune_ESpeedClamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringInputClamp_MetaData), NewProp_SteeringInputClamp_MetaData) }; // 352529721
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_ConstantSteeringClamp = { "ConstantSteeringClamp", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, ConstantSteeringClamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantSteeringClamp_MetaData), NewProp_ConstantSteeringClamp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_LinearSteeringInputClamp = { "LinearSteeringInputClamp", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, LinearSteeringInputClamp), Z_Construct_UScriptStruct_FRangedClamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearSteeringInputClamp_MetaData), NewProp_LinearSteeringInputClamp_MetaData) }; // 1333299513
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_CurveSteeringInputClamp = { "CurveSteeringInputClamp", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, CurveSteeringInputClamp), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveSteeringInputClamp_MetaData), NewProp_CurveSteeringInputClamp_MetaData) };
void Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bUseSensitivityClamp_SetBit(void* Obj)
{
	((ARTuneVehicle*)Obj)->bUseSensitivityClamp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bUseSensitivityClamp = { "bUseSensitivityClamp", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTuneVehicle), &Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bUseSensitivityClamp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSensitivityClamp_MetaData), NewProp_bUseSensitivityClamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_SteeringSensitivity = { "SteeringSensitivity", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, SteeringSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringSensitivity_MetaData), NewProp_SteeringSensitivity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_SteeringSensitivityClamp = { "SteeringSensitivityClamp", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, SteeringSensitivityClamp), Z_Construct_UScriptStruct_FRangedClamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringSensitivityClamp_MetaData), NewProp_SteeringSensitivityClamp_MetaData) }; // 1333299513
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_HandbrakeStrength = { "HandbrakeStrength", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, HandbrakeStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandbrakeStrength_MetaData), NewProp_HandbrakeStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_DynamicPitchMomentMultiplier = { "DynamicPitchMomentMultiplier", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, DynamicPitchMomentMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicPitchMomentMultiplier_MetaData), NewProp_DynamicPitchMomentMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_DynamicBrakeMomentMultiplier = { "DynamicBrakeMomentMultiplier", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, DynamicBrakeMomentMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicBrakeMomentMultiplier_MetaData), NewProp_DynamicBrakeMomentMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_CoefficientOfDrag = { "CoefficientOfDrag", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, CoefficientOfDrag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoefficientOfDrag_MetaData), NewProp_CoefficientOfDrag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_CrossSectionArea = { "CrossSectionArea", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, CrossSectionArea), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossSectionArea_MetaData), NewProp_CrossSectionArea_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_AirDensity = { "AirDensity", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, AirDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirDensity_MetaData), NewProp_AirDensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_PitchStrength = { "PitchStrength", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, PitchStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchStrength_MetaData), NewProp_PitchStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_YawStrength = { "YawStrength", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, YawStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawStrength_MetaData), NewProp_YawStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_RollStrength = { "RollStrength", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, RollStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollStrength_MetaData), NewProp_RollStrength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_InAirWheelCount = { "InAirWheelCount", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, InAirWheelCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAirWheelCount_MetaData), NewProp_InAirWheelCount_MetaData) };
void Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bAntiGravityEnabled_SetBit(void* Obj)
{
	((ARTuneVehicle*)Obj)->bAntiGravityEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bAntiGravityEnabled = { "bAntiGravityEnabled", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTuneVehicle), &Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bAntiGravityEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAntiGravityEnabled_MetaData), NewProp_bAntiGravityEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_GravityStrength = { "GravityStrength", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, GravityStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravityStrength_MetaData), NewProp_GravityStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_AntiGravityZStrength = { "AntiGravityZStrength", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, AntiGravityZStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AntiGravityZStrength_MetaData), NewProp_AntiGravityZStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_AntiGravityXStrength = { "AntiGravityXStrength", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, AntiGravityXStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AntiGravityXStrength_MetaData), NewProp_AntiGravityXStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_AntiGravityYStrength = { "AntiGravityYStrength", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, AntiGravityYStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AntiGravityYStrength_MetaData), NewProp_AntiGravityYStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_AntiGravityOffContactThreshold = { "AntiGravityOffContactThreshold", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, AntiGravityOffContactThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AntiGravityOffContactThreshold_MetaData), NewProp_AntiGravityOffContactThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_AddedMass = { "AddedMass", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, AddedMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddedMass_MetaData), NewProp_AddedMass_MetaData) };
void Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bUseIdleLock_SetBit(void* Obj)
{
	((ARTuneVehicle*)Obj)->bUseIdleLock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bUseIdleLock = { "bUseIdleLock", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTuneVehicle), &Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bUseIdleLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseIdleLock_MetaData), NewProp_bUseIdleLock_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_IdleLockTime = { "IdleLockTime", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, IdleLockTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleLockTime_MetaData), NewProp_IdleLockTime_MetaData) };
void Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bIsIdleLocked_SetBit(void* Obj)
{
	((ARTuneVehicle*)Obj)->bIsIdleLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bIsIdleLocked = { "bIsIdleLocked", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTuneVehicle), &Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bIsIdleLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsIdleLocked_MetaData), NewProp_bIsIdleLocked_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_IdleLockSpeedThreshold = { "IdleLockSpeedThreshold", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, IdleLockSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleLockSpeedThreshold_MetaData), NewProp_IdleLockSpeedThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_IdleLockStiffness = { "IdleLockStiffness", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, IdleLockStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleLockStiffness_MetaData), NewProp_IdleLockStiffness_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_ReplicationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_ReplicationMethod = { "ReplicationMethod", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, ReplicationMethod), Z_Construct_UEnum_RTune_EReplicationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationMethod_MetaData), NewProp_ReplicationMethod_MetaData) }; // 607107290
void Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bUseServerFastSync_SetBit(void* Obj)
{
	((ARTuneVehicle*)Obj)->bUseServerFastSync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bUseServerFastSync = { "bUseServerFastSync", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTuneVehicle), &Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bUseServerFastSync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseServerFastSync_MetaData), NewProp_bUseServerFastSync_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_ServerFastSyncLatency = { "ServerFastSyncLatency", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTuneVehicle, ServerFastSyncLatency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerFastSyncLatency_MetaData), NewProp_ServerFastSyncLatency_MetaData) };
void Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bAutoWakeRigidBodies_SetBit(void* Obj)
{
	((ARTuneVehicle*)Obj)->bAutoWakeRigidBodies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bAutoWakeRigidBodies = { "bAutoWakeRigidBodies", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTuneVehicle), &Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bAutoWakeRigidBodies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoWakeRigidBodies_MetaData), NewProp_bAutoWakeRigidBodies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTuneVehicle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_ServerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_ServerVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_ServerAngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_PowertrainType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_PowertrainType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_EngineTorque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_MaxRPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_RPM_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_TorqueImplementation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_TorqueImplementation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_EngineTorqueCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_EngineBrakeCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_TransmissionEfficiency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_ShiftDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_DifferentialRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_GearRatios_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_GearRatios,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_WheelRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bAutomatic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_UpshiftRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_DownshiftRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bLockShift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_BrakeForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bUseBrakeAsReverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_MaxSpeedInReverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_DriftTorque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_SteeringInputClamp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_SteeringInputClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_ConstantSteeringClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_LinearSteeringInputClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_CurveSteeringInputClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bUseSensitivityClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_SteeringSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_SteeringSensitivityClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_HandbrakeStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_DynamicPitchMomentMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_DynamicBrakeMomentMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_CoefficientOfDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_CrossSectionArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_AirDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_PitchStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_YawStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_RollStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_InAirWheelCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bAntiGravityEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_GravityStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_AntiGravityZStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_AntiGravityXStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_AntiGravityYStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_AntiGravityOffContactThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_AddedMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bUseIdleLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_IdleLockTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bIsIdleLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_IdleLockSpeedThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_IdleLockStiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_ReplicationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_ReplicationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bUseServerFastSync,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_ServerFastSyncLatency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTuneVehicle_Statics::NewProp_bAutoWakeRigidBodies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTuneVehicle_Statics::PropPointers) < 2048);
// ********** End Class ARTuneVehicle Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_ARTuneVehicle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAsyncTickPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_RTune,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTuneVehicle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTuneVehicle_Statics::ClassParams = {
	&ARTuneVehicle::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARTuneVehicle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARTuneVehicle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTuneVehicle_Statics::Class_MetaDataParams), Z_Construct_UClass_ARTuneVehicle_Statics::Class_MetaDataParams)
};
void ARTuneVehicle::StaticRegisterNativesARTuneVehicle()
{
	UClass* Class = ARTuneVehicle::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ARTuneVehicle_Statics::Funcs));
}
UClass* Z_Construct_UClass_ARTuneVehicle()
{
	if (!Z_Registration_Info_UClass_ARTuneVehicle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTuneVehicle.OuterSingleton, Z_Construct_UClass_ARTuneVehicle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARTuneVehicle.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ARTuneVehicle::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_ServerState(TEXT("ServerState"));
	static FName Name_ServerVelocity(TEXT("ServerVelocity"));
	static FName Name_ServerAngularVelocity(TEXT("ServerAngularVelocity"));
	const bool bIsValid = true
		&& Name_ServerState == ClassReps[(int32)ENetFields_Private::ServerState].Property->GetFName()
		&& Name_ServerVelocity == ClassReps[(int32)ENetFields_Private::ServerVelocity].Property->GetFName()
		&& Name_ServerAngularVelocity == ClassReps[(int32)ENetFields_Private::ServerAngularVelocity].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ARTuneVehicle"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARTuneVehicle);
ARTuneVehicle::~ARTuneVehicle() {}
// ********** End Class ARTuneVehicle **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h__Script_RTune_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpeedClamp_StaticEnum, TEXT("ESpeedClamp"), &Z_Registration_Info_UEnum_ESpeedClamp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 352529721U) },
		{ EBehaviourType_StaticEnum, TEXT("EBehaviourType"), &Z_Registration_Info_UEnum_EBehaviourType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1189784788U) },
		{ ETorqueImplementation_StaticEnum, TEXT("ETorqueImplementation"), &Z_Registration_Info_UEnum_ETorqueImplementation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2387300461U) },
		{ EReplicationType_StaticEnum, TEXT("EReplicationType"), &Z_Registration_Info_UEnum_EReplicationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 607107290U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRangedClamp::StaticStruct, Z_Construct_UScriptStruct_FRangedClamp_Statics::NewStructOps, TEXT("RangedClamp"),&Z_Registration_Info_UScriptStruct_FRangedClamp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRangedClamp), 1333299513U) },
		{ FServerState::StaticStruct, Z_Construct_UScriptStruct_FServerState_Statics::NewStructOps, TEXT("ServerState"),&Z_Registration_Info_UScriptStruct_FServerState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FServerState), 517209474U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARTuneVehicle, ARTuneVehicle::StaticClass, TEXT("ARTuneVehicle"), &Z_Registration_Info_UClass_ARTuneVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTuneVehicle), 183903146U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h__Script_RTune_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h__Script_RTune_3936402276{
	TEXT("/Script/RTune"),
	Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h__Script_RTune_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h__Script_RTune_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h__Script_RTune_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h__Script_RTune_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h__Script_RTune_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_RTuneVehicle_h__Script_RTune_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
