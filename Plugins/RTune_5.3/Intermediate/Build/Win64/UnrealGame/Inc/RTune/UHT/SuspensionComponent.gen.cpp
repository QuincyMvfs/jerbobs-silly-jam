// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vehicle/SuspensionComponent.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSuspensionComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
RTUNE_API UClass* Z_Construct_UClass_USuspensionComponent();
RTUNE_API UClass* Z_Construct_UClass_USuspensionComponent_NoRegister();
RTUNE_API UEnum* Z_Construct_UEnum_RTune_EHandbrakeWheelType();
UPackage* Z_Construct_UPackage__Script_RTune();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EHandbrakeWheelType *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandbrakeWheelType;
static UEnum* EHandbrakeWheelType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHandbrakeWheelType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHandbrakeWheelType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RTune_EHandbrakeWheelType, (UObject*)Z_Construct_UPackage__Script_RTune(), TEXT("EHandbrakeWheelType"));
	}
	return Z_Registration_Info_UEnum_EHandbrakeWheelType.OuterSingleton;
}
template<> RTUNE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHandbrakeWheelType>()
{
	return EHandbrakeWheelType_StaticEnum();
}
struct Z_Construct_UEnum_RTune_EHandbrakeWheelType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Front.Display", "Front" },
		{ "Front.Name", "EHandbrakeWheelType::Front" },
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
		{ "None.Display", "None" },
		{ "None.Name", "EHandbrakeWheelType::None" },
		{ "Rear.Display", "Rear" },
		{ "Rear.Name", "EHandbrakeWheelType::Rear" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHandbrakeWheelType::None", (int64)EHandbrakeWheelType::None },
		{ "EHandbrakeWheelType::Front", (int64)EHandbrakeWheelType::Front },
		{ "EHandbrakeWheelType::Rear", (int64)EHandbrakeWheelType::Rear },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RTune_EHandbrakeWheelType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RTune_EHandbrakeWheelType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RTune,
	nullptr,
	"EHandbrakeWheelType",
	"EHandbrakeWheelType",
	Z_Construct_UEnum_RTune_EHandbrakeWheelType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RTune_EHandbrakeWheelType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RTune_EHandbrakeWheelType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RTune_EHandbrakeWheelType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RTune_EHandbrakeWheelType()
{
	if (!Z_Registration_Info_UEnum_EHandbrakeWheelType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandbrakeWheelType.InnerSingleton, Z_Construct_UEnum_RTune_EHandbrakeWheelType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHandbrakeWheelType.InnerSingleton;
}
// ********** End Enum EHandbrakeWheelType *********************************************************

// ********** Begin Class USuspensionComponent Function GetCompression *****************************
struct Z_Construct_UFunction_USuspensionComponent_GetCompression_Statics
{
	struct SuspensionComponent_eventGetCompression_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SuspensionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns how much compression the spring is undergoing. This is a normalized value between 0 and 1.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns how much compression the spring is undergoing. This is a normalized value between 0 and 1." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCompression constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCompression constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCompression Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USuspensionComponent_GetCompression_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuspensionComponent_eventGetCompression_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuspensionComponent_GetCompression_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuspensionComponent_GetCompression_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetCompression_Statics::PropPointers) < 2048);
// ********** End Function GetCompression Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_GetCompression_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "GetCompression", 	Z_Construct_UFunction_USuspensionComponent_GetCompression_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetCompression_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USuspensionComponent_GetCompression_Statics::SuspensionComponent_eventGetCompression_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetCompression_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_GetCompression_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USuspensionComponent_GetCompression_Statics::SuspensionComponent_eventGetCompression_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USuspensionComponent_GetCompression()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_GetCompression_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execGetCompression)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCompression();
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function GetCompression *******************************

// ********** Begin Class USuspensionComponent Function GetCurrentLength ***************************
struct Z_Construct_UFunction_USuspensionComponent_GetCurrentLength_Statics
{
	struct SuspensionComponent_eventGetCurrentLength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SuspensionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the current length of the suspension. This is the difference between the maximum extension length and the compression distance due to the total weight.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current length of the suspension. This is the difference between the maximum extension length and the compression distance due to the total weight." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentLength constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentLength constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentLength Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USuspensionComponent_GetCurrentLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuspensionComponent_eventGetCurrentLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuspensionComponent_GetCurrentLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuspensionComponent_GetCurrentLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetCurrentLength_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentLength Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_GetCurrentLength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "GetCurrentLength", 	Z_Construct_UFunction_USuspensionComponent_GetCurrentLength_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetCurrentLength_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USuspensionComponent_GetCurrentLength_Statics::SuspensionComponent_eventGetCurrentLength_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetCurrentLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_GetCurrentLength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USuspensionComponent_GetCurrentLength_Statics::SuspensionComponent_eventGetCurrentLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USuspensionComponent_GetCurrentLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_GetCurrentLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execGetCurrentLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentLength();
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function GetCurrentLength *****************************

// ********** Begin Class USuspensionComponent Function GetHitResult *******************************
struct Z_Construct_UFunction_USuspensionComponent_GetHitResult_Statics
{
	struct SuspensionComponent_eventGetHitResult_Parms
	{
		FHitResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SuspensionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the hit result data from the raycast.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the hit result data from the raycast." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetHitResult constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHitResult constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHitResult Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USuspensionComponent_GetHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuspensionComponent_eventGetHitResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuspensionComponent_GetHitResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuspensionComponent_GetHitResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetHitResult_Statics::PropPointers) < 2048);
// ********** End Function GetHitResult Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_GetHitResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "GetHitResult", 	Z_Construct_UFunction_USuspensionComponent_GetHitResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetHitResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USuspensionComponent_GetHitResult_Statics::SuspensionComponent_eventGetHitResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetHitResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_GetHitResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USuspensionComponent_GetHitResult_Statics::SuspensionComponent_eventGetHitResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USuspensionComponent_GetHitResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_GetHitResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execGetHitResult)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHitResult*)Z_Param__Result=P_THIS->GetHitResult();
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function GetHitResult *********************************

// ********** Begin Class USuspensionComponent Function GetSteeringRotation ************************
struct Z_Construct_UFunction_USuspensionComponent_GetSteeringRotation_Statics
{
	struct SuspensionComponent_eventGetSteeringRotation_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SuspensionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the steering rotation amount in degrees.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the steering rotation amount in degrees." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSteeringRotation constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSteeringRotation constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSteeringRotation Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USuspensionComponent_GetSteeringRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuspensionComponent_eventGetSteeringRotation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuspensionComponent_GetSteeringRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuspensionComponent_GetSteeringRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetSteeringRotation_Statics::PropPointers) < 2048);
// ********** End Function GetSteeringRotation Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_GetSteeringRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "GetSteeringRotation", 	Z_Construct_UFunction_USuspensionComponent_GetSteeringRotation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetSteeringRotation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USuspensionComponent_GetSteeringRotation_Statics::SuspensionComponent_eventGetSteeringRotation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetSteeringRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_GetSteeringRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USuspensionComponent_GetSteeringRotation_Statics::SuspensionComponent_eventGetSteeringRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USuspensionComponent_GetSteeringRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_GetSteeringRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execGetSteeringRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSteeringRotation();
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function GetSteeringRotation **************************

// ********** Begin Class USuspensionComponent Function GetWheelLocalRotation **********************
struct Z_Construct_UFunction_USuspensionComponent_GetWheelLocalRotation_Statics
{
	struct SuspensionComponent_eventGetWheelLocalRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SuspensionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the wheel local rotation used for animating the wheel. Units are Radians per second.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the wheel local rotation used for animating the wheel. Units are Radians per second." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetWheelLocalRotation constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWheelLocalRotation constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWheelLocalRotation Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USuspensionComponent_GetWheelLocalRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuspensionComponent_eventGetWheelLocalRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuspensionComponent_GetWheelLocalRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuspensionComponent_GetWheelLocalRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetWheelLocalRotation_Statics::PropPointers) < 2048);
// ********** End Function GetWheelLocalRotation Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_GetWheelLocalRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "GetWheelLocalRotation", 	Z_Construct_UFunction_USuspensionComponent_GetWheelLocalRotation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetWheelLocalRotation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USuspensionComponent_GetWheelLocalRotation_Statics::SuspensionComponent_eventGetWheelLocalRotation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetWheelLocalRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_GetWheelLocalRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USuspensionComponent_GetWheelLocalRotation_Statics::SuspensionComponent_eventGetWheelLocalRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USuspensionComponent_GetWheelLocalRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_GetWheelLocalRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execGetWheelLocalRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetWheelLocalRotation();
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function GetWheelLocalRotation ************************

// ********** Begin Class USuspensionComponent Function GetWheelMeshComponent **********************
struct Z_Construct_UFunction_USuspensionComponent_GetWheelMeshComponent_Statics
{
	struct SuspensionComponent_eventGetWheelMeshComponent_Parms
	{
		UStaticMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SuspensionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the static mesh component, not to be confused with a pure static mesh. If the wheel's current static mesh is required, use 'GetStaticMesh' on this return.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the static mesh component, not to be confused with a pure static mesh. If the wheel's current static mesh is required, use 'GetStaticMesh' on this return." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWheelMeshComponent constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWheelMeshComponent constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWheelMeshComponent Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USuspensionComponent_GetWheelMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuspensionComponent_eventGetWheelMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuspensionComponent_GetWheelMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuspensionComponent_GetWheelMeshComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetWheelMeshComponent_Statics::PropPointers) < 2048);
// ********** End Function GetWheelMeshComponent Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_GetWheelMeshComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "GetWheelMeshComponent", 	Z_Construct_UFunction_USuspensionComponent_GetWheelMeshComponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetWheelMeshComponent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USuspensionComponent_GetWheelMeshComponent_Statics::SuspensionComponent_eventGetWheelMeshComponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetWheelMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_GetWheelMeshComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USuspensionComponent_GetWheelMeshComponent_Statics::SuspensionComponent_eventGetWheelMeshComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USuspensionComponent_GetWheelMeshComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_GetWheelMeshComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execGetWheelMeshComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetWheelMeshComponent();
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function GetWheelMeshComponent ************************

// ********** Begin Class USuspensionComponent Function GetWheelRelativeOffset *********************
struct Z_Construct_UFunction_USuspensionComponent_GetWheelRelativeOffset_Statics
{
	struct SuspensionComponent_eventGetWheelRelativeOffset_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SuspensionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the relative offset in the Z axis used to locate the wheel.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the relative offset in the Z axis used to locate the wheel." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetWheelRelativeOffset constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWheelRelativeOffset constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWheelRelativeOffset Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USuspensionComponent_GetWheelRelativeOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuspensionComponent_eventGetWheelRelativeOffset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuspensionComponent_GetWheelRelativeOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuspensionComponent_GetWheelRelativeOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetWheelRelativeOffset_Statics::PropPointers) < 2048);
// ********** End Function GetWheelRelativeOffset Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_GetWheelRelativeOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "GetWheelRelativeOffset", 	Z_Construct_UFunction_USuspensionComponent_GetWheelRelativeOffset_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetWheelRelativeOffset_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USuspensionComponent_GetWheelRelativeOffset_Statics::SuspensionComponent_eventGetWheelRelativeOffset_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_GetWheelRelativeOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_GetWheelRelativeOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USuspensionComponent_GetWheelRelativeOffset_Statics::SuspensionComponent_eventGetWheelRelativeOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USuspensionComponent_GetWheelRelativeOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_GetWheelRelativeOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execGetWheelRelativeOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWheelRelativeOffset();
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function GetWheelRelativeOffset ***********************

// ********** Begin Class USuspensionComponent Function IsHandbrakeWheel ***************************
struct Z_Construct_UFunction_USuspensionComponent_IsHandbrakeWheel_Statics
{
	struct SuspensionComponent_eventIsHandbrakeWheel_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SuspensionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returnw whether the wheel affects the handbrake;\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returnw whether the wheel affects the handbrake;" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsHandbrakeWheel constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsHandbrakeWheel constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsHandbrakeWheel Property Definitions *********************************
void Z_Construct_UFunction_USuspensionComponent_IsHandbrakeWheel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SuspensionComponent_eventIsHandbrakeWheel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USuspensionComponent_IsHandbrakeWheel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SuspensionComponent_eventIsHandbrakeWheel_Parms), &Z_Construct_UFunction_USuspensionComponent_IsHandbrakeWheel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuspensionComponent_IsHandbrakeWheel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuspensionComponent_IsHandbrakeWheel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_IsHandbrakeWheel_Statics::PropPointers) < 2048);
// ********** End Function IsHandbrakeWheel Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_IsHandbrakeWheel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "IsHandbrakeWheel", 	Z_Construct_UFunction_USuspensionComponent_IsHandbrakeWheel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_IsHandbrakeWheel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USuspensionComponent_IsHandbrakeWheel_Statics::SuspensionComponent_eventIsHandbrakeWheel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_IsHandbrakeWheel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_IsHandbrakeWheel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USuspensionComponent_IsHandbrakeWheel_Statics::SuspensionComponent_eventIsHandbrakeWheel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USuspensionComponent_IsHandbrakeWheel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_IsHandbrakeWheel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execIsHandbrakeWheel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHandbrakeWheel();
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function IsHandbrakeWheel *****************************

// ********** Begin Class USuspensionComponent Function IsInAir ************************************
struct Z_Construct_UFunction_USuspensionComponent_IsInAir_Statics
{
	struct SuspensionComponent_eventIsInAir_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SuspensionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns if the suspension component, or more specifically the wheel, is in contact with the surface.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if the suspension component, or more specifically the wheel, is in contact with the surface." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsInAir constinit property declarations *******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInAir constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInAir Property Definitions ******************************************
void Z_Construct_UFunction_USuspensionComponent_IsInAir_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SuspensionComponent_eventIsInAir_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USuspensionComponent_IsInAir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SuspensionComponent_eventIsInAir_Parms), &Z_Construct_UFunction_USuspensionComponent_IsInAir_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuspensionComponent_IsInAir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuspensionComponent_IsInAir_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_IsInAir_Statics::PropPointers) < 2048);
// ********** End Function IsInAir Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_IsInAir_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "IsInAir", 	Z_Construct_UFunction_USuspensionComponent_IsInAir_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_IsInAir_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USuspensionComponent_IsInAir_Statics::SuspensionComponent_eventIsInAir_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_IsInAir_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_IsInAir_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USuspensionComponent_IsInAir_Statics::SuspensionComponent_eventIsInAir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USuspensionComponent_IsInAir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_IsInAir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execIsInAir)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInAir();
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function IsInAir **************************************

// ********** Begin Class USuspensionComponent Function OnRep_Steering *****************************
struct Z_Construct_UFunction_USuspensionComponent_OnRep_Steering_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_Steering constinit property declarations ************************
// ********** End Function OnRep_Steering constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_OnRep_Steering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "OnRep_Steering", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_OnRep_Steering_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_OnRep_Steering_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USuspensionComponent_OnRep_Steering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_OnRep_Steering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execOnRep_Steering)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Steering();
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function OnRep_Steering *******************************

// ********** Begin Class USuspensionComponent Function RecalculateWheelRadius *********************
struct Z_Construct_UFunction_USuspensionComponent_RecalculateWheelRadius_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SuspensionComponent" },
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RecalculateWheelRadius constinit property declarations ****************
// ********** End Function RecalculateWheelRadius constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_RecalculateWheelRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "RecalculateWheelRadius", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_RecalculateWheelRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_RecalculateWheelRadius_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USuspensionComponent_RecalculateWheelRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_RecalculateWheelRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execRecalculateWheelRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecalculateWheelRadius();
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function RecalculateWheelRadius ***********************

// ********** Begin Class USuspensionComponent Function RenderWheelMesh ****************************
struct Z_Construct_UFunction_USuspensionComponent_RenderWheelMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SuspensionComponent Construction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//To render the wheels in the editor/viewport/blueprint editor, call this function inside the construction script.\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Function has been deprecated. Wheels will be rendered during play" },
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To render the wheels in the editor/viewport/blueprint editor, call this function inside the construction script." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RenderWheelMesh constinit property declarations ***********************
// ********** End Function RenderWheelMesh constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_RenderWheelMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "RenderWheelMesh", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_RenderWheelMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_RenderWheelMesh_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USuspensionComponent_RenderWheelMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_RenderWheelMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execRenderWheelMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RenderWheelMesh();
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function RenderWheelMesh ******************************

// ********** Begin Class USuspensionComponent Function SetDamping *********************************
struct Z_Construct_UFunction_USuspensionComponent_SetDamping_Statics
{
	struct SuspensionComponent_eventSetDamping_Parms
	{
		float inDamping;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SuspensionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set the stiffness of the suspension.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the stiffness of the suspension." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetDamping constinit property declarations ****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inDamping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDamping constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDamping Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USuspensionComponent_SetDamping_Statics::NewProp_inDamping = { "inDamping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuspensionComponent_eventSetDamping_Parms, inDamping), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuspensionComponent_SetDamping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuspensionComponent_SetDamping_Statics::NewProp_inDamping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_SetDamping_Statics::PropPointers) < 2048);
// ********** End Function SetDamping Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_SetDamping_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "SetDamping", 	Z_Construct_UFunction_USuspensionComponent_SetDamping_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_SetDamping_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USuspensionComponent_SetDamping_Statics::SuspensionComponent_eventSetDamping_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_SetDamping_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_SetDamping_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USuspensionComponent_SetDamping_Statics::SuspensionComponent_eventSetDamping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USuspensionComponent_SetDamping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_SetDamping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execSetDamping)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_inDamping);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDamping(Z_Param_inDamping);
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function SetDamping ***********************************

// ********** Begin Class USuspensionComponent Function SetExtensionLength *************************
struct Z_Construct_UFunction_USuspensionComponent_SetExtensionLength_Statics
{
	struct SuspensionComponent_eventSetExtensionLength_Parms
	{
		float inLength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SuspensionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set the stiffness of the suspension.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the stiffness of the suspension." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetExtensionLength constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExtensionLength constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExtensionLength Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USuspensionComponent_SetExtensionLength_Statics::NewProp_inLength = { "inLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuspensionComponent_eventSetExtensionLength_Parms, inLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuspensionComponent_SetExtensionLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuspensionComponent_SetExtensionLength_Statics::NewProp_inLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_SetExtensionLength_Statics::PropPointers) < 2048);
// ********** End Function SetExtensionLength Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_SetExtensionLength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "SetExtensionLength", 	Z_Construct_UFunction_USuspensionComponent_SetExtensionLength_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_SetExtensionLength_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USuspensionComponent_SetExtensionLength_Statics::SuspensionComponent_eventSetExtensionLength_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_SetExtensionLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_SetExtensionLength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USuspensionComponent_SetExtensionLength_Statics::SuspensionComponent_eventSetExtensionLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USuspensionComponent_SetExtensionLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_SetExtensionLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execSetExtensionLength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_inLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExtensionLength(Z_Param_inLength);
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function SetExtensionLength ***************************

// ********** Begin Class USuspensionComponent Function SetStiffness *******************************
struct Z_Construct_UFunction_USuspensionComponent_SetStiffness_Statics
{
	struct SuspensionComponent_eventSetStiffness_Parms
	{
		float inStifness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SuspensionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set the stiffness of the suspension.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the stiffness of the suspension." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetStiffness constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inStifness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStiffness constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStiffness Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USuspensionComponent_SetStiffness_Statics::NewProp_inStifness = { "inStifness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuspensionComponent_eventSetStiffness_Parms, inStifness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuspensionComponent_SetStiffness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuspensionComponent_SetStiffness_Statics::NewProp_inStifness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_SetStiffness_Statics::PropPointers) < 2048);
// ********** End Function SetStiffness Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_SetStiffness_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "SetStiffness", 	Z_Construct_UFunction_USuspensionComponent_SetStiffness_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_SetStiffness_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USuspensionComponent_SetStiffness_Statics::SuspensionComponent_eventSetStiffness_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_SetStiffness_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_SetStiffness_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USuspensionComponent_SetStiffness_Statics::SuspensionComponent_eventSetStiffness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USuspensionComponent_SetStiffness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_SetStiffness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execSetStiffness)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_inStifness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStiffness(Z_Param_inStifness);
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function SetStiffness *********************************

// ********** Begin Class USuspensionComponent Function SetWheelScale ******************************
struct Z_Construct_UFunction_USuspensionComponent_SetWheelScale_Statics
{
	struct SuspensionComponent_eventSetWheelScale_Parms
	{
		float inScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SuspensionComponent" },
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetWheelScale constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetWheelScale constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetWheelScale Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USuspensionComponent_SetWheelScale_Statics::NewProp_inScale = { "inScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuspensionComponent_eventSetWheelScale_Parms, inScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuspensionComponent_SetWheelScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuspensionComponent_SetWheelScale_Statics::NewProp_inScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_SetWheelScale_Statics::PropPointers) < 2048);
// ********** End Function SetWheelScale Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_SetWheelScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "SetWheelScale", 	Z_Construct_UFunction_USuspensionComponent_SetWheelScale_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_SetWheelScale_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USuspensionComponent_SetWheelScale_Statics::SuspensionComponent_eventSetWheelScale_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_SetWheelScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_SetWheelScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USuspensionComponent_SetWheelScale_Statics::SuspensionComponent_eventSetWheelScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USuspensionComponent_SetWheelScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_SetWheelScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execSetWheelScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_inScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWheelScale(Z_Param_inScale);
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function SetWheelScale ********************************

// ********** Begin Class USuspensionComponent Function StaticallyRenderWheel **********************
struct Z_Construct_UFunction_USuspensionComponent_StaticallyRenderWheel_Statics
{
	struct SuspensionComponent_eventStaticallyRenderWheel_Parms
	{
		UStaticMeshComponent* MeshComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Suspension|Procedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Approximate function for rendering wheel position in editor. Call only in construction script.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Approximate function for rendering wheel position in editor. Call only in construction script." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function StaticallyRenderWheel constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StaticallyRenderWheel constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StaticallyRenderWheel Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USuspensionComponent_StaticallyRenderWheel_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuspensionComponent_eventStaticallyRenderWheel_Parms, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuspensionComponent_StaticallyRenderWheel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuspensionComponent_StaticallyRenderWheel_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_StaticallyRenderWheel_Statics::PropPointers) < 2048);
// ********** End Function StaticallyRenderWheel Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_StaticallyRenderWheel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "StaticallyRenderWheel", 	Z_Construct_UFunction_USuspensionComponent_StaticallyRenderWheel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_StaticallyRenderWheel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USuspensionComponent_StaticallyRenderWheel_Statics::SuspensionComponent_eventStaticallyRenderWheel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_StaticallyRenderWheel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_StaticallyRenderWheel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USuspensionComponent_StaticallyRenderWheel_Statics::SuspensionComponent_eventStaticallyRenderWheel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USuspensionComponent_StaticallyRenderWheel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_StaticallyRenderWheel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execStaticallyRenderWheel)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_MeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StaticallyRenderWheel(Z_Param_MeshComponent);
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function StaticallyRenderWheel ************************

// ********** Begin Class USuspensionComponent Function StaticWheelCallback ************************
struct Z_Construct_UFunction_USuspensionComponent_StaticWheelCallback_Statics
{
	struct SuspensionComponent_eventStaticWheelCallback_Parms
	{
		UStaticMeshComponent* MeshComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Suspension|Procedural" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If 'StaticallyRenderWheel' is used, this must be used. Call only in event begin play.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If 'StaticallyRenderWheel' is used, this must be used. Call only in event begin play." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function StaticWheelCallback constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StaticWheelCallback constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StaticWheelCallback Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USuspensionComponent_StaticWheelCallback_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuspensionComponent_eventStaticWheelCallback_Parms, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuspensionComponent_StaticWheelCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuspensionComponent_StaticWheelCallback_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_StaticWheelCallback_Statics::PropPointers) < 2048);
// ********** End Function StaticWheelCallback Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_StaticWheelCallback_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "StaticWheelCallback", 	Z_Construct_UFunction_USuspensionComponent_StaticWheelCallback_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_StaticWheelCallback_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USuspensionComponent_StaticWheelCallback_Statics::SuspensionComponent_eventStaticWheelCallback_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_StaticWheelCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_StaticWheelCallback_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USuspensionComponent_StaticWheelCallback_Statics::SuspensionComponent_eventStaticWheelCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USuspensionComponent_StaticWheelCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_StaticWheelCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execStaticWheelCallback)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_MeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StaticWheelCallback(Z_Param_MeshComponent);
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function StaticWheelCallback **************************

// ********** Begin Class USuspensionComponent Function UpdatePhysics ******************************
struct Z_Construct_UFunction_USuspensionComponent_UpdatePhysics_Statics
{
	struct SuspensionComponent_eventUpdatePhysics_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SuspensionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Core update function. This will automatically be called if used inside the RTuneVehicle pawn, however, if this is used inside a pawn not inheriting from this class it needs to be called inside a tick function - preferably an Async based tick.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Core update function. This will automatically be called if used inside the RTuneVehicle pawn, however, if this is used inside a pawn not inheriting from this class it needs to be called inside a tick function - preferably an Async based tick." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdatePhysics constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdatePhysics constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdatePhysics Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USuspensionComponent_UpdatePhysics_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SuspensionComponent_eventUpdatePhysics_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USuspensionComponent_UpdatePhysics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USuspensionComponent_UpdatePhysics_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_UpdatePhysics_Statics::PropPointers) < 2048);
// ********** End Function UpdatePhysics Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USuspensionComponent_UpdatePhysics_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USuspensionComponent, nullptr, "UpdatePhysics", 	Z_Construct_UFunction_USuspensionComponent_UpdatePhysics_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_UpdatePhysics_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USuspensionComponent_UpdatePhysics_Statics::SuspensionComponent_eventUpdatePhysics_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USuspensionComponent_UpdatePhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_USuspensionComponent_UpdatePhysics_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USuspensionComponent_UpdatePhysics_Statics::SuspensionComponent_eventUpdatePhysics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USuspensionComponent_UpdatePhysics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USuspensionComponent_UpdatePhysics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USuspensionComponent::execUpdatePhysics)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePhysics(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class USuspensionComponent Function UpdatePhysics ********************************

// ********** Begin Class USuspensionComponent *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USuspensionComponent;
UClass* USuspensionComponent::GetPrivateStaticClass()
{
	using TClass = USuspensionComponent;
	if (!Z_Registration_Info_UClass_USuspensionComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SuspensionComponent"),
			Z_Registration_Info_UClass_USuspensionComponent.InnerSingleton,
			StaticRegisterNativesUSuspensionComponent,
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
	return Z_Registration_Info_UClass_USuspensionComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USuspensionComponent_NoRegister()
{
	return USuspensionComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USuspensionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "RTune" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Vehicle/SuspensionComponent.h" },
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerSteeringRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stiffness of the suspension in Newtons per meter N/m. A higher stiffness will result in a higher resting length and springier behaviour.\n// This can be thought of as the resistance to a deforming force, such as weight.\n// It should be noted that the heavier the mass, the higher the stiffness needed to support that weight.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stiffness of the suspension in Newtons per meter N/m. A higher stiffness will result in a higher resting length and springier behaviour.\nThis can be thought of as the resistance to a deforming force, such as weight.\nIt should be noted that the heavier the mass, the higher the stiffness needed to support that weight." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a dimensionless coefficient and affects the rate at which the suspension spring reaches static equilibrium.\n// A higher damping value will result in less bouncy behaviour.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a dimensionless coefficient and affects the rate at which the suspension spring reaches static equilibrium.\nA higher damping value will result in less bouncy behaviour." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionLength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the maximum length that the spring will extend to from it's starting location. Units are in centimeters (cm).\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the maximum length that the spring will extend to from it's starting location. Units are in centimeters (cm)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideContact_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Allows contact forces to be applied, even if no contact is present. This should almost always be left off and is an unsafe option. \n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows contact forces to be applied, even if no contact is present. This should almost always be left off and is an unsafe option." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSteeringWheel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether or not this wheel will have steering input applied to.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not this wheel will have steering input applied to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Core" },
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritMeshFromComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Wheel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This allows a wheel mesh components to be used in both editor and runtime.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This allows a wheel mesh components to be used in both editor and runtime." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Wheel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Suspension|Wheel\", meta = (AllowPrivateAccess = \"true\"), meta = (EditCondition = \"bInheritMeshFromComponent==true\", EditConditionHides))\n//\x09""FName WheelTag = FName(\"None\");\n" },
#endif
		{ "EditCondition", "bInheritMeshFromComponent==false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Suspension|Wheel\", meta = (AllowPrivateAccess = \"true\"), meta = (EditCondition = \"bInheritMeshFromComponent==true\", EditConditionHides))\n       FName WheelTag = FName(\"None\");" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotateWheel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Wheel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a purely visual variable. If the wheel is facing in the wrong direction (ussually the left set of wheels), set this to true.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a purely visual variable. If the wheel is facing in the wrong direction (ussually the left set of wheels), set this to true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelZOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Wheel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This can be used to offset the wheel location in the Z Axis. This has no effect on physics.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This can be used to offset the wheel location in the Z Axis. This has no effect on physics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandbrakeWheel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Wheel|Handbrake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Whether the wheel will be affected by the handbrake\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the wheel will be affected by the handbrake" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeWheelType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Handbrake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Which axle will the handbrake affect. Since vehicles can have any number of wheels, this must be specified. The axel specified will affect the rotation (physics) behaviour.\n" },
#endif
		{ "EditCondition", "bHandbrakeWheel==true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which axle will the handbrake affect. Since vehicles can have any number of wheels, this must be specified. The axel specified will affect the rotation (physics) behaviour." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateralForceScalar_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Tyre" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a dimensionless scalar. It affects how much lateral force is produced, a higher value will result in more grip.\n// It is imperitive that these values are balanced between all tyres (in SuspensionComponent) of the vehicle. \n// Higher LateralForceScalar values at the front tyres than the rear will result in oversteer behaviour.\n// Higher LateralForceScalar values at the rear tyres than the front will result in understeer behaviour.\n// It is generally a good idea to set the rear tyres LateralForceScalar higher than at the front for stable behaviour, \n// but of course depends on your subjective design requirements - in which case anything goes!\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a dimensionless scalar. It affects how much lateral force is produced, a higher value will result in more grip.\nIt is imperitive that these values are balanced between all tyres (in SuspensionComponent) of the vehicle.\nHigher LateralForceScalar values at the front tyres than the rear will result in oversteer behaviour.\nHigher LateralForceScalar values at the rear tyres than the front will result in understeer behaviour.\nIt is generally a good idea to set the rear tyres LateralForceScalar higher than at the front for stable behaviour,\nbut of course depends on your subjective design requirements - in which case anything goes!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLateralForce_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Tyre" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the maximum force that a tyre will produce in Newtons (N).\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the maximum force that a tyre will produce in Newtons (N)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowSpeedLateralForceScalar_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Tyre" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is behaves exactly the same as the LateralForceScalar, however it used only for very low speeds for stability.\n// To prevent low speed slipping this value should generally be larger than the LateralForceScalar.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is behaves exactly the same as the LateralForceScalar, however it used only for very low speeds for stability.\n To prevent low speed slipping this value should generally be larger than the LateralForceScalar." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurnoutRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Burnout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This adds rotation to the wheel as a constant. This is useful for burnout at zero speed.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This adds rotation to the wheel as a constant. This is useful for burnout at zero speed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContactForceOffsetLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Tyre" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the distance offset of the force application point to the center of mass. Changing this value affects how much the vehicle will rolls. \n// Negative values are also valid and may even be necessary to correct for the desired roll amount.\n// It can be seen as somewhat of an anti-roll bar scaling factor.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the distance offset of the force application point to the center of mass. Changing this value affects how much the vehicle will rolls.\nNegative values are also valid and may even be necessary to correct for the desired roll amount.\nIt can be seen as somewhat of an anti-roll bar scaling factor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelAngularVelocityMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Tyre" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is simply a scalar for wheel velocity. E.g during a burnout or drifting this can be increased in blueprints to reflect that state.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is simply a scalar for wheel velocity. E.g during a burnout or drifting this can be increased in blueprints to reflect that state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResistanceForceCoefficient_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Tyre" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This can be used to oppose motion in the longitudinal direction applied at the tyre contact point.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This can be used to oppose motion in the longitudinal direction applied at the tyre contact point." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxResistanceForce_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Tyre" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is the maximum resistance force in Newtons [N] that can be applied. If the Resistance Force Coefficient is zero, this property will take no effect.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the maximum resistance force in Newtons [N] that can be applied. If the Resistance Force Coefficient is zero, this property will take no effect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSteeringAngle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|InputResponse" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the maximum angle of wheels set to steer. This affets the lateral force direction, and consequently the vehicle behaviour.\n// Lateral force is applied perpendicular to the forward direction of the wheel.\n" },
#endif
		{ "EditCondition", "bIsSteeringWheel==true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the maximum angle of wheels set to steer. This affets the lateral force direction, and consequently the vehicle behaviour.\nLateral force is applied perpendicular to the forward direction of the wheel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringReleaseSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|InputResponse" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is how quickly the steer wheel rotates to zero degrees. \n" },
#endif
		{ "EditCondition", "bIsSteeringWheel==true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is how quickly the steer wheel rotates to zero degrees." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHybridRaycast_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Raycast" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This uses spheretrace and switches to a line raycast when the spheretrace becomes unsuitable. \n// If this is set to false, a pure line raycast will be used which may be more suitable for arcade behaviour \n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This uses spheretrace and switches to a line raycast when the spheretrace becomes unsuitable.\nIf this is set to false, a pure line raycast will be used which may be more suitable for arcade behaviour" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Raycast" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The radius used for the sphere trace. The radius will automatically be set by the wheelMesh. If no mesh is specified then this value will be used. This value is in meters (m).\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The radius used for the sphere trace. The radius will automatically be set by the wheelMesh. If no mesh is specified then this value will be used. This value is in meters (m)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactNormalTolerance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Raycast" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is one of the conditions for switching to a line raycast. This is the normalized impact normal threshold, values closer to 1 are of a higher tolerance which will result in the trace being predominantly a sphere trace.\n" },
#endif
		{ "EditCondition", "bHybridRaycast==true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is one of the conditions for switching to a line raycast. This is the normalized impact normal threshold, values closer to 1 are of a higher tolerance which will result in the trace being predominantly a sphere trace." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactHeightTolerance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|Raycast" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// In centimeters (cm). This is the second of the conditions for switching to a line raycast. This is the maximum height of the wheel that is valid for a sphere trace collision.\n// Lower this value to limit the sphere contact region closer to the base of the wheel.\n" },
#endif
		{ "EditCondition", "bHybridRaycast==true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In centimeters (cm). This is the second of the conditions for switching to a line raycast. This is the maximum height of the wheel that is valid for a sphere trace collision.\nLower this value to limit the sphere contact region closer to the base of the wheel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseIdleLock_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|IdleLock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether or not to lock to wheels animation when completely stationary to prevent micro rotations.\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to lock to wheels animation when completely stationary to prevent micro rotations." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleLockTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Suspension|IdleLock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How long after stationary to lock the wheels. In seconds (s).\n" },
#endif
		{ "ModuleRelativePath", "Public/Vehicle/SuspensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long after stationary to lock the wheels. In seconds (s)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USuspensionComponent constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerSteeringRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtensionLength;
	static void NewProp_bOverrideContact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideContact;
	static void NewProp_bIsSteeringWheel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSteeringWheel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static void NewProp_bInheritMeshFromComponent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritMeshFromComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WheelMesh;
	static void NewProp_bRotateWheel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateWheel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelZOffset;
	static void NewProp_bHandbrakeWheel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandbrakeWheel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HandbrakeWheelType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HandbrakeWheelType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LateralForceScalar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLateralForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowSpeedLateralForceScalar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BurnoutRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ContactForceOffsetLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelAngularVelocityMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResistanceForceCoefficient;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxResistanceForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSteeringAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringReleaseSpeed;
	static void NewProp_bHybridRaycast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHybridRaycast;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactNormalTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactHeightTolerance;
	static void NewProp_bUseIdleLock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseIdleLock;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IdleLockTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USuspensionComponent constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCompression"), .Pointer = &USuspensionComponent::execGetCompression },
		{ .NameUTF8 = UTF8TEXT("GetCurrentLength"), .Pointer = &USuspensionComponent::execGetCurrentLength },
		{ .NameUTF8 = UTF8TEXT("GetHitResult"), .Pointer = &USuspensionComponent::execGetHitResult },
		{ .NameUTF8 = UTF8TEXT("GetSteeringRotation"), .Pointer = &USuspensionComponent::execGetSteeringRotation },
		{ .NameUTF8 = UTF8TEXT("GetWheelLocalRotation"), .Pointer = &USuspensionComponent::execGetWheelLocalRotation },
		{ .NameUTF8 = UTF8TEXT("GetWheelMeshComponent"), .Pointer = &USuspensionComponent::execGetWheelMeshComponent },
		{ .NameUTF8 = UTF8TEXT("GetWheelRelativeOffset"), .Pointer = &USuspensionComponent::execGetWheelRelativeOffset },
		{ .NameUTF8 = UTF8TEXT("IsHandbrakeWheel"), .Pointer = &USuspensionComponent::execIsHandbrakeWheel },
		{ .NameUTF8 = UTF8TEXT("IsInAir"), .Pointer = &USuspensionComponent::execIsInAir },
		{ .NameUTF8 = UTF8TEXT("OnRep_Steering"), .Pointer = &USuspensionComponent::execOnRep_Steering },
		{ .NameUTF8 = UTF8TEXT("RecalculateWheelRadius"), .Pointer = &USuspensionComponent::execRecalculateWheelRadius },
		{ .NameUTF8 = UTF8TEXT("RenderWheelMesh"), .Pointer = &USuspensionComponent::execRenderWheelMesh },
		{ .NameUTF8 = UTF8TEXT("SetDamping"), .Pointer = &USuspensionComponent::execSetDamping },
		{ .NameUTF8 = UTF8TEXT("SetExtensionLength"), .Pointer = &USuspensionComponent::execSetExtensionLength },
		{ .NameUTF8 = UTF8TEXT("SetStiffness"), .Pointer = &USuspensionComponent::execSetStiffness },
		{ .NameUTF8 = UTF8TEXT("SetWheelScale"), .Pointer = &USuspensionComponent::execSetWheelScale },
		{ .NameUTF8 = UTF8TEXT("StaticallyRenderWheel"), .Pointer = &USuspensionComponent::execStaticallyRenderWheel },
		{ .NameUTF8 = UTF8TEXT("StaticWheelCallback"), .Pointer = &USuspensionComponent::execStaticWheelCallback },
		{ .NameUTF8 = UTF8TEXT("UpdatePhysics"), .Pointer = &USuspensionComponent::execUpdatePhysics },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USuspensionComponent_GetCompression, "GetCompression" }, // 914165373
		{ &Z_Construct_UFunction_USuspensionComponent_GetCurrentLength, "GetCurrentLength" }, // 3401375397
		{ &Z_Construct_UFunction_USuspensionComponent_GetHitResult, "GetHitResult" }, // 3769942139
		{ &Z_Construct_UFunction_USuspensionComponent_GetSteeringRotation, "GetSteeringRotation" }, // 3448375975
		{ &Z_Construct_UFunction_USuspensionComponent_GetWheelLocalRotation, "GetWheelLocalRotation" }, // 2496035891
		{ &Z_Construct_UFunction_USuspensionComponent_GetWheelMeshComponent, "GetWheelMeshComponent" }, // 1560581240
		{ &Z_Construct_UFunction_USuspensionComponent_GetWheelRelativeOffset, "GetWheelRelativeOffset" }, // 227038692
		{ &Z_Construct_UFunction_USuspensionComponent_IsHandbrakeWheel, "IsHandbrakeWheel" }, // 961816194
		{ &Z_Construct_UFunction_USuspensionComponent_IsInAir, "IsInAir" }, // 3986349352
		{ &Z_Construct_UFunction_USuspensionComponent_OnRep_Steering, "OnRep_Steering" }, // 134106804
		{ &Z_Construct_UFunction_USuspensionComponent_RecalculateWheelRadius, "RecalculateWheelRadius" }, // 1016930832
		{ &Z_Construct_UFunction_USuspensionComponent_RenderWheelMesh, "RenderWheelMesh" }, // 464950756
		{ &Z_Construct_UFunction_USuspensionComponent_SetDamping, "SetDamping" }, // 2425609308
		{ &Z_Construct_UFunction_USuspensionComponent_SetExtensionLength, "SetExtensionLength" }, // 3698640157
		{ &Z_Construct_UFunction_USuspensionComponent_SetStiffness, "SetStiffness" }, // 2476707621
		{ &Z_Construct_UFunction_USuspensionComponent_SetWheelScale, "SetWheelScale" }, // 1070990278
		{ &Z_Construct_UFunction_USuspensionComponent_StaticallyRenderWheel, "StaticallyRenderWheel" }, // 957842551
		{ &Z_Construct_UFunction_USuspensionComponent_StaticWheelCallback, "StaticWheelCallback" }, // 1546661676
		{ &Z_Construct_UFunction_USuspensionComponent_UpdatePhysics, "UpdatePhysics" }, // 691111396
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USuspensionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USuspensionComponent_Statics

// ********** Begin Class USuspensionComponent Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_ServerSteeringRotation = { "ServerSteeringRotation", "OnRep_Steering", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, ServerSteeringRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerSteeringRotation_MetaData), NewProp_ServerSteeringRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, Stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stiffness_MetaData), NewProp_Stiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, Damping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damping_MetaData), NewProp_Damping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_ExtensionLength = { "ExtensionLength", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, ExtensionLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtensionLength_MetaData), NewProp_ExtensionLength_MetaData) };
void Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bOverrideContact_SetBit(void* Obj)
{
	((USuspensionComponent*)Obj)->bOverrideContact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bOverrideContact = { "bOverrideContact", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USuspensionComponent), &Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bOverrideContact_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideContact_MetaData), NewProp_bOverrideContact_MetaData) };
void Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bIsSteeringWheel_SetBit(void* Obj)
{
	((USuspensionComponent*)Obj)->bIsSteeringWheel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bIsSteeringWheel = { "bIsSteeringWheel", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USuspensionComponent), &Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bIsSteeringWheel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSteeringWheel_MetaData), NewProp_bIsSteeringWheel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 838391399
void Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bInheritMeshFromComponent_SetBit(void* Obj)
{
	((USuspensionComponent*)Obj)->bInheritMeshFromComponent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bInheritMeshFromComponent = { "bInheritMeshFromComponent", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USuspensionComponent), &Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bInheritMeshFromComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritMeshFromComponent_MetaData), NewProp_bInheritMeshFromComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_WheelMesh = { "WheelMesh", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, WheelMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelMesh_MetaData), NewProp_WheelMesh_MetaData) };
void Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bRotateWheel_SetBit(void* Obj)
{
	((USuspensionComponent*)Obj)->bRotateWheel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bRotateWheel = { "bRotateWheel", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USuspensionComponent), &Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bRotateWheel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotateWheel_MetaData), NewProp_bRotateWheel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_WheelZOffset = { "WheelZOffset", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, WheelZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelZOffset_MetaData), NewProp_WheelZOffset_MetaData) };
void Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bHandbrakeWheel_SetBit(void* Obj)
{
	((USuspensionComponent*)Obj)->bHandbrakeWheel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bHandbrakeWheel = { "bHandbrakeWheel", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USuspensionComponent), &Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bHandbrakeWheel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandbrakeWheel_MetaData), NewProp_bHandbrakeWheel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_HandbrakeWheelType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_HandbrakeWheelType = { "HandbrakeWheelType", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, HandbrakeWheelType), Z_Construct_UEnum_RTune_EHandbrakeWheelType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandbrakeWheelType_MetaData), NewProp_HandbrakeWheelType_MetaData) }; // 3370160254
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_LateralForceScalar = { "LateralForceScalar", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, LateralForceScalar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateralForceScalar_MetaData), NewProp_LateralForceScalar_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_MaxLateralForce = { "MaxLateralForce", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, MaxLateralForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLateralForce_MetaData), NewProp_MaxLateralForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_LowSpeedLateralForceScalar = { "LowSpeedLateralForceScalar", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, LowSpeedLateralForceScalar), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowSpeedLateralForceScalar_MetaData), NewProp_LowSpeedLateralForceScalar_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_BurnoutRotation = { "BurnoutRotation", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, BurnoutRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurnoutRotation_MetaData), NewProp_BurnoutRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_ContactForceOffsetLocation = { "ContactForceOffsetLocation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, ContactForceOffsetLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContactForceOffsetLocation_MetaData), NewProp_ContactForceOffsetLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_WheelAngularVelocityMultiplier = { "WheelAngularVelocityMultiplier", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, WheelAngularVelocityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelAngularVelocityMultiplier_MetaData), NewProp_WheelAngularVelocityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_ResistanceForceCoefficient = { "ResistanceForceCoefficient", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, ResistanceForceCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResistanceForceCoefficient_MetaData), NewProp_ResistanceForceCoefficient_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_MaxResistanceForce = { "MaxResistanceForce", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, MaxResistanceForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxResistanceForce_MetaData), NewProp_MaxResistanceForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_MaxSteeringAngle = { "MaxSteeringAngle", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, MaxSteeringAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSteeringAngle_MetaData), NewProp_MaxSteeringAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_SteeringReleaseSpeed = { "SteeringReleaseSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, SteeringReleaseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringReleaseSpeed_MetaData), NewProp_SteeringReleaseSpeed_MetaData) };
void Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bHybridRaycast_SetBit(void* Obj)
{
	((USuspensionComponent*)Obj)->bHybridRaycast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bHybridRaycast = { "bHybridRaycast", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USuspensionComponent), &Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bHybridRaycast_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHybridRaycast_MetaData), NewProp_bHybridRaycast_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_ImpactNormalTolerance = { "ImpactNormalTolerance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, ImpactNormalTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactNormalTolerance_MetaData), NewProp_ImpactNormalTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_ImpactHeightTolerance = { "ImpactHeightTolerance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, ImpactHeightTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactHeightTolerance_MetaData), NewProp_ImpactHeightTolerance_MetaData) };
void Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bUseIdleLock_SetBit(void* Obj)
{
	((USuspensionComponent*)Obj)->bUseIdleLock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bUseIdleLock = { "bUseIdleLock", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USuspensionComponent), &Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bUseIdleLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseIdleLock_MetaData), NewProp_bUseIdleLock_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USuspensionComponent_Statics::NewProp_IdleLockTime = { "IdleLockTime", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USuspensionComponent, IdleLockTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleLockTime_MetaData), NewProp_IdleLockTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USuspensionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_ServerSteeringRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_Stiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_Damping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_ExtensionLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bOverrideContact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bIsSteeringWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bInheritMeshFromComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_WheelMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bRotateWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_WheelZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bHandbrakeWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_HandbrakeWheelType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_HandbrakeWheelType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_LateralForceScalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_MaxLateralForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_LowSpeedLateralForceScalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_BurnoutRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_ContactForceOffsetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_WheelAngularVelocityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_ResistanceForceCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_MaxResistanceForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_MaxSteeringAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_SteeringReleaseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bHybridRaycast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_ImpactNormalTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_ImpactHeightTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_bUseIdleLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USuspensionComponent_Statics::NewProp_IdleLockTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USuspensionComponent_Statics::PropPointers) < 2048);
// ********** End Class USuspensionComponent Property Definitions **********************************
UObject* (*const Z_Construct_UClass_USuspensionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RTune,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USuspensionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USuspensionComponent_Statics::ClassParams = {
	&USuspensionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USuspensionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USuspensionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USuspensionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USuspensionComponent_Statics::Class_MetaDataParams)
};
void USuspensionComponent::StaticRegisterNativesUSuspensionComponent()
{
	UClass* Class = USuspensionComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USuspensionComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_USuspensionComponent()
{
	if (!Z_Registration_Info_UClass_USuspensionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USuspensionComponent.OuterSingleton, Z_Construct_UClass_USuspensionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USuspensionComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void USuspensionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_ServerSteeringRotation(TEXT("ServerSteeringRotation"));
	const bool bIsValid = true
		&& Name_ServerSteeringRotation == ClassReps[(int32)ENetFields_Private::ServerSteeringRotation].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USuspensionComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USuspensionComponent);
USuspensionComponent::~USuspensionComponent() {}
// ********** End Class USuspensionComponent *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_SuspensionComponent_h__Script_RTune_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHandbrakeWheelType_StaticEnum, TEXT("EHandbrakeWheelType"), &Z_Registration_Info_UEnum_EHandbrakeWheelType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3370160254U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USuspensionComponent, USuspensionComponent::StaticClass, TEXT("USuspensionComponent"), &Z_Registration_Info_UClass_USuspensionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USuspensionComponent), 3920969468U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_SuspensionComponent_h__Script_RTune_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_SuspensionComponent_h__Script_RTune_3365349471{
	TEXT("/Script/RTune"),
	Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_SuspensionComponent_h__Script_RTune_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_SuspensionComponent_h__Script_RTune_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_SuspensionComponent_h__Script_RTune_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_SuspensionComponent_h__Script_RTune_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
