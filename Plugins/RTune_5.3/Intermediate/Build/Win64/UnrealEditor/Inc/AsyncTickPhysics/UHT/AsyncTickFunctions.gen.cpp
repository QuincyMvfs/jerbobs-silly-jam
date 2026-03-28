// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncTickFunctions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAsyncTickFunctions() {}

// ********** Begin Cross Module References ********************************************************
ASYNCTICKPHYSICS_API UClass* Z_Construct_UClass_UAsyncTickFunctions();
ASYNCTICKPHYSICS_API UClass* Z_Construct_UClass_UAsyncTickFunctions_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AsyncTickPhysics();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAsyncTickFunctions Function ATP_AddAngularImpulseInDegrees **************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics
{
	struct AsyncTickFunctions_eventATP_AddAngularImpulseInDegrees_Parms
	{
		UPrimitiveComponent* Component;
		FVector Torque;
		bool bVelChange;
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_AddAngularImpulseInDegrees constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Torque;
	static void NewProp_bVelChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVelChange;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_AddAngularImpulseInDegrees constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_AddAngularImpulseInDegrees Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddAngularImpulseInDegrees_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::NewProp_Torque = { "Torque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddAngularImpulseInDegrees_Parms, Torque), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::NewProp_bVelChange_SetBit(void* Obj)
{
	((AsyncTickFunctions_eventATP_AddAngularImpulseInDegrees_Parms*)Obj)->bVelChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::NewProp_bVelChange = { "bVelChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTickFunctions_eventATP_AddAngularImpulseInDegrees_Parms), &Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::NewProp_bVelChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddAngularImpulseInDegrees_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::NewProp_Torque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::NewProp_bVelChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::PropPointers) < 2048);
// ********** End Function ATP_AddAngularImpulseInDegrees Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_AddAngularImpulseInDegrees", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::AsyncTickFunctions_eventATP_AddAngularImpulseInDegrees_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::AsyncTickFunctions_eventATP_AddAngularImpulseInDegrees_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_AddAngularImpulseInDegrees)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_STRUCT(FVector,Z_Param_Torque);
	P_GET_UBOOL(Z_Param_bVelChange);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncTickFunctions::ATP_AddAngularImpulseInDegrees(Z_Param_Component,Z_Param_Torque,Z_Param_bVelChange,Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_AddAngularImpulseInDegrees ****************

// ********** Begin Class UAsyncTickFunctions Function ATP_AddAngularImpulseInRadians **************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics
{
	struct AsyncTickFunctions_eventATP_AddAngularImpulseInRadians_Parms
	{
		UPrimitiveComponent* Component;
		FVector Torque;
		bool bVelChange;
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_AddAngularImpulseInRadians constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Torque;
	static void NewProp_bVelChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVelChange;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_AddAngularImpulseInRadians constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_AddAngularImpulseInRadians Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddAngularImpulseInRadians_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::NewProp_Torque = { "Torque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddAngularImpulseInRadians_Parms, Torque), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::NewProp_bVelChange_SetBit(void* Obj)
{
	((AsyncTickFunctions_eventATP_AddAngularImpulseInRadians_Parms*)Obj)->bVelChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::NewProp_bVelChange = { "bVelChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTickFunctions_eventATP_AddAngularImpulseInRadians_Parms), &Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::NewProp_bVelChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddAngularImpulseInRadians_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::NewProp_Torque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::NewProp_bVelChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::PropPointers) < 2048);
// ********** End Function ATP_AddAngularImpulseInRadians Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_AddAngularImpulseInRadians", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::AsyncTickFunctions_eventATP_AddAngularImpulseInRadians_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::AsyncTickFunctions_eventATP_AddAngularImpulseInRadians_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_AddAngularImpulseInRadians)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_STRUCT(FVector,Z_Param_Torque);
	P_GET_UBOOL(Z_Param_bVelChange);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncTickFunctions::ATP_AddAngularImpulseInRadians(Z_Param_Component,Z_Param_Torque,Z_Param_bVelChange,Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_AddAngularImpulseInRadians ****************

// ********** Begin Class UAsyncTickFunctions Function ATP_AddForce ********************************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics
{
	struct AsyncTickFunctions_eventATP_AddForce_Parms
	{
		UPrimitiveComponent* Component;
		FVector Force;
		bool bAccelChange;
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_AddForce constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static void NewProp_bAccelChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccelChange;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_AddForce constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_AddForce Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddForce_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddForce_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::NewProp_bAccelChange_SetBit(void* Obj)
{
	((AsyncTickFunctions_eventATP_AddForce_Parms*)Obj)->bAccelChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::NewProp_bAccelChange = { "bAccelChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTickFunctions_eventATP_AddForce_Parms), &Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::NewProp_bAccelChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddForce_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::NewProp_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::NewProp_bAccelChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::PropPointers) < 2048);
// ********** End Function ATP_AddForce Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_AddForce", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::AsyncTickFunctions_eventATP_AddForce_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::AsyncTickFunctions_eventATP_AddForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_AddForce)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_STRUCT(FVector,Z_Param_Force);
	P_GET_UBOOL(Z_Param_bAccelChange);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncTickFunctions::ATP_AddForce(Z_Param_Component,Z_Param_Force,Z_Param_bAccelChange,Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_AddForce **********************************

// ********** Begin Class UAsyncTickFunctions Function ATP_AddForceAtPosition **********************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics
{
	struct AsyncTickFunctions_eventATP_AddForceAtPosition_Parms
	{
		UPrimitiveComponent* Component;
		FVector Position;
		FVector Force;
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_AddForceAtPosition constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_AddForceAtPosition constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_AddForceAtPosition Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddForceAtPosition_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddForceAtPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddForceAtPosition_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddForceAtPosition_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::NewProp_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::PropPointers) < 2048);
// ********** End Function ATP_AddForceAtPosition Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_AddForceAtPosition", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::AsyncTickFunctions_eventATP_AddForceAtPosition_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::AsyncTickFunctions_eventATP_AddForceAtPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_AddForceAtPosition)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_STRUCT(FVector,Z_Param_Force);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncTickFunctions::ATP_AddForceAtPosition(Z_Param_Component,Z_Param_Position,Z_Param_Force,Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_AddForceAtPosition ************************

// ********** Begin Class UAsyncTickFunctions Function ATP_AddImpulse ******************************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics
{
	struct AsyncTickFunctions_eventATP_AddImpulse_Parms
	{
		UPrimitiveComponent* Component;
		FVector Impulse;
		bool bVelChange;
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_AddImpulse constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static void NewProp_bVelChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVelChange;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_AddImpulse constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_AddImpulse Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddImpulse_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddImpulse_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::NewProp_bVelChange_SetBit(void* Obj)
{
	((AsyncTickFunctions_eventATP_AddImpulse_Parms*)Obj)->bVelChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::NewProp_bVelChange = { "bVelChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTickFunctions_eventATP_AddImpulse_Parms), &Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::NewProp_bVelChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddImpulse_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::NewProp_Impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::NewProp_bVelChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::PropPointers) < 2048);
// ********** End Function ATP_AddImpulse Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_AddImpulse", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::AsyncTickFunctions_eventATP_AddImpulse_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::AsyncTickFunctions_eventATP_AddImpulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_AddImpulse)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_STRUCT(FVector,Z_Param_Impulse);
	P_GET_UBOOL(Z_Param_bVelChange);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncTickFunctions::ATP_AddImpulse(Z_Param_Component,Z_Param_Impulse,Z_Param_bVelChange,Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_AddImpulse ********************************

// ********** Begin Class UAsyncTickFunctions Function ATP_AddImpulseAtPosition ********************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics
{
	struct AsyncTickFunctions_eventATP_AddImpulseAtPosition_Parms
	{
		UPrimitiveComponent* Component;
		FVector Position;
		FVector Impulse;
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_AddImpulseAtPosition constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_AddImpulseAtPosition constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_AddImpulseAtPosition Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddImpulseAtPosition_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddImpulseAtPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddImpulseAtPosition_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddImpulseAtPosition_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::NewProp_Impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::PropPointers) < 2048);
// ********** End Function ATP_AddImpulseAtPosition Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_AddImpulseAtPosition", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::AsyncTickFunctions_eventATP_AddImpulseAtPosition_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::AsyncTickFunctions_eventATP_AddImpulseAtPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_AddImpulseAtPosition)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_STRUCT(FVector,Z_Param_Impulse);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncTickFunctions::ATP_AddImpulseAtPosition(Z_Param_Component,Z_Param_Position,Z_Param_Impulse,Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_AddImpulseAtPosition **********************

// ********** Begin Class UAsyncTickFunctions Function ATP_AddTorque *******************************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics
{
	struct AsyncTickFunctions_eventATP_AddTorque_Parms
	{
		UPrimitiveComponent* Component;
		FVector Torque;
		bool bAccelChange;
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_AddTorque constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Torque;
	static void NewProp_bAccelChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccelChange;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_AddTorque constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_AddTorque Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddTorque_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::NewProp_Torque = { "Torque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddTorque_Parms, Torque), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::NewProp_bAccelChange_SetBit(void* Obj)
{
	((AsyncTickFunctions_eventATP_AddTorque_Parms*)Obj)->bAccelChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::NewProp_bAccelChange = { "bAccelChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTickFunctions_eventATP_AddTorque_Parms), &Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::NewProp_bAccelChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_AddTorque_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::NewProp_Torque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::NewProp_bAccelChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::PropPointers) < 2048);
// ********** End Function ATP_AddTorque Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_AddTorque", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::AsyncTickFunctions_eventATP_AddTorque_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::AsyncTickFunctions_eventATP_AddTorque_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_AddTorque)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_STRUCT(FVector,Z_Param_Torque);
	P_GET_UBOOL(Z_Param_bAccelChange);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncTickFunctions::ATP_AddTorque(Z_Param_Component,Z_Param_Torque,Z_Param_bAccelChange,Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_AddTorque *********************************

// ********** Begin Class UAsyncTickFunctions Function ATP_GetAngularVelocity **********************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity_Statics
{
	struct AsyncTickFunctions_eventATP_GetAngularVelocity_Parms
	{
		UPrimitiveComponent* Component;
		FName BoneName;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_GetAngularVelocity constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_GetAngularVelocity constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_GetAngularVelocity Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_GetAngularVelocity_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_GetAngularVelocity_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_GetAngularVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity_Statics::PropPointers) < 2048);
// ********** End Function ATP_GetAngularVelocity Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_GetAngularVelocity", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity_Statics::AsyncTickFunctions_eventATP_GetAngularVelocity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity_Statics::AsyncTickFunctions_eventATP_GetAngularVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_GetAngularVelocity)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UAsyncTickFunctions::ATP_GetAngularVelocity(Z_Param_Component,Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_GetAngularVelocity ************************

// ********** Begin Class UAsyncTickFunctions Function ATP_GetCoMPosition **************************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetCoMPosition_Statics
{
	struct AsyncTickFunctions_eventATP_GetCoMPosition_Parms
	{
		UPrimitiveComponent* Component;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_GetCoMPosition constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_GetCoMPosition constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_GetCoMPosition Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetCoMPosition_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_GetCoMPosition_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetCoMPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_GetCoMPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetCoMPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetCoMPosition_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetCoMPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetCoMPosition_Statics::PropPointers) < 2048);
// ********** End Function ATP_GetCoMPosition Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetCoMPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_GetCoMPosition", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetCoMPosition_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetCoMPosition_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetCoMPosition_Statics::AsyncTickFunctions_eventATP_GetCoMPosition_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetCoMPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetCoMPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetCoMPosition_Statics::AsyncTickFunctions_eventATP_GetCoMPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetCoMPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetCoMPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_GetCoMPosition)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UAsyncTickFunctions::ATP_GetCoMPosition(Z_Param_Component);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_GetCoMPosition ****************************

// ********** Begin Class UAsyncTickFunctions Function ATP_GetLinearVelocity ***********************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity_Statics
{
	struct AsyncTickFunctions_eventATP_GetLinearVelocity_Parms
	{
		UPrimitiveComponent* Component;
		FName BoneName;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_GetLinearVelocity constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_GetLinearVelocity constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_GetLinearVelocity Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_GetLinearVelocity_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_GetLinearVelocity_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_GetLinearVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity_Statics::PropPointers) < 2048);
// ********** End Function ATP_GetLinearVelocity Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_GetLinearVelocity", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity_Statics::AsyncTickFunctions_eventATP_GetLinearVelocity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity_Statics::AsyncTickFunctions_eventATP_GetLinearVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_GetLinearVelocity)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UAsyncTickFunctions::ATP_GetLinearVelocity(Z_Param_Component,Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_GetLinearVelocity *************************

// ********** Begin Class UAsyncTickFunctions Function ATP_GetLinearVelocityAtPoint ****************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics
{
	struct AsyncTickFunctions_eventATP_GetLinearVelocityAtPoint_Parms
	{
		UPrimitiveComponent* Component;
		FVector Point;
		FName BoneName;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_GetLinearVelocityAtPoint constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_GetLinearVelocityAtPoint constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_GetLinearVelocityAtPoint Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_GetLinearVelocityAtPoint_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_GetLinearVelocityAtPoint_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_GetLinearVelocityAtPoint_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_GetLinearVelocityAtPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::PropPointers) < 2048);
// ********** End Function ATP_GetLinearVelocityAtPoint Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_GetLinearVelocityAtPoint", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::AsyncTickFunctions_eventATP_GetLinearVelocityAtPoint_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::AsyncTickFunctions_eventATP_GetLinearVelocityAtPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_GetLinearVelocityAtPoint)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_STRUCT(FVector,Z_Param_Point);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UAsyncTickFunctions::ATP_GetLinearVelocityAtPoint(Z_Param_Component,Z_Param_Point,Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_GetLinearVelocityAtPoint ******************

// ********** Begin Class UAsyncTickFunctions Function ATP_GetTransform ****************************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetTransform_Statics
{
	struct AsyncTickFunctions_eventATP_GetTransform_Parms
	{
		UPrimitiveComponent* Component;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_GetTransform constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_GetTransform constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_GetTransform Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetTransform_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_GetTransform_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_GetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetTransform_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetTransform_Statics::PropPointers) < 2048);
// ********** End Function ATP_GetTransform Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_GetTransform", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetTransform_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetTransform_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetTransform_Statics::AsyncTickFunctions_eventATP_GetTransform_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetTransform_Statics::AsyncTickFunctions_eventATP_GetTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_GetTransform)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UAsyncTickFunctions::ATP_GetTransform(Z_Param_Component);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_GetTransform ******************************

// ********** Begin Class UAsyncTickFunctions Function ATP_SetAngularVelocityInDegrees *************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics
{
	struct AsyncTickFunctions_eventATP_SetAngularVelocityInDegrees_Parms
	{
		UPrimitiveComponent* Component;
		FVector AngVelocity;
		bool bAddToCurrent;
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_SetAngularVelocityInDegrees constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngVelocity;
	static void NewProp_bAddToCurrent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToCurrent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_SetAngularVelocityInDegrees constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_SetAngularVelocityInDegrees Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_SetAngularVelocityInDegrees_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::NewProp_AngVelocity = { "AngVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_SetAngularVelocityInDegrees_Parms, AngVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::NewProp_bAddToCurrent_SetBit(void* Obj)
{
	((AsyncTickFunctions_eventATP_SetAngularVelocityInDegrees_Parms*)Obj)->bAddToCurrent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::NewProp_bAddToCurrent = { "bAddToCurrent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTickFunctions_eventATP_SetAngularVelocityInDegrees_Parms), &Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::NewProp_bAddToCurrent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_SetAngularVelocityInDegrees_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::NewProp_AngVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::NewProp_bAddToCurrent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::PropPointers) < 2048);
// ********** End Function ATP_SetAngularVelocityInDegrees Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_SetAngularVelocityInDegrees", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::AsyncTickFunctions_eventATP_SetAngularVelocityInDegrees_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::AsyncTickFunctions_eventATP_SetAngularVelocityInDegrees_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_SetAngularVelocityInDegrees)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_STRUCT(FVector,Z_Param_AngVelocity);
	P_GET_UBOOL(Z_Param_bAddToCurrent);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncTickFunctions::ATP_SetAngularVelocityInDegrees(Z_Param_Component,Z_Param_AngVelocity,Z_Param_bAddToCurrent,Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_SetAngularVelocityInDegrees ***************

// ********** Begin Class UAsyncTickFunctions Function ATP_SetAngularVelocityInRadians *************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics
{
	struct AsyncTickFunctions_eventATP_SetAngularVelocityInRadians_Parms
	{
		UPrimitiveComponent* Component;
		FVector AngVelocity;
		bool bAddToCurrent;
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_SetAngularVelocityInRadians constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngVelocity;
	static void NewProp_bAddToCurrent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToCurrent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_SetAngularVelocityInRadians constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_SetAngularVelocityInRadians Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_SetAngularVelocityInRadians_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::NewProp_AngVelocity = { "AngVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_SetAngularVelocityInRadians_Parms, AngVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::NewProp_bAddToCurrent_SetBit(void* Obj)
{
	((AsyncTickFunctions_eventATP_SetAngularVelocityInRadians_Parms*)Obj)->bAddToCurrent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::NewProp_bAddToCurrent = { "bAddToCurrent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTickFunctions_eventATP_SetAngularVelocityInRadians_Parms), &Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::NewProp_bAddToCurrent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_SetAngularVelocityInRadians_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::NewProp_AngVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::NewProp_bAddToCurrent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::PropPointers) < 2048);
// ********** End Function ATP_SetAngularVelocityInRadians Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_SetAngularVelocityInRadians", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::AsyncTickFunctions_eventATP_SetAngularVelocityInRadians_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::AsyncTickFunctions_eventATP_SetAngularVelocityInRadians_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_SetAngularVelocityInRadians)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_STRUCT(FVector,Z_Param_AngVelocity);
	P_GET_UBOOL(Z_Param_bAddToCurrent);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncTickFunctions::ATP_SetAngularVelocityInRadians(Z_Param_Component,Z_Param_AngVelocity,Z_Param_bAddToCurrent,Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_SetAngularVelocityInRadians ***************

// ********** Begin Class UAsyncTickFunctions Function ATP_SetLinearVelocity ***********************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics
{
	struct AsyncTickFunctions_eventATP_SetLinearVelocity_Parms
	{
		UPrimitiveComponent* Component;
		FVector Velocity;
		bool bAddToCurrent;
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_SetLinearVelocity constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static void NewProp_bAddToCurrent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToCurrent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_SetLinearVelocity constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_SetLinearVelocity Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_SetLinearVelocity_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_SetLinearVelocity_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::NewProp_bAddToCurrent_SetBit(void* Obj)
{
	((AsyncTickFunctions_eventATP_SetLinearVelocity_Parms*)Obj)->bAddToCurrent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::NewProp_bAddToCurrent = { "bAddToCurrent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTickFunctions_eventATP_SetLinearVelocity_Parms), &Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::NewProp_bAddToCurrent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_SetLinearVelocity_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::NewProp_bAddToCurrent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::PropPointers) < 2048);
// ********** End Function ATP_SetLinearVelocity Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_SetLinearVelocity", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::AsyncTickFunctions_eventATP_SetLinearVelocity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::AsyncTickFunctions_eventATP_SetLinearVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_SetLinearVelocity)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_STRUCT(FVector,Z_Param_Velocity);
	P_GET_UBOOL(Z_Param_bAddToCurrent);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncTickFunctions::ATP_SetLinearVelocity(Z_Param_Component,Z_Param_Velocity,Z_Param_bAddToCurrent,Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_SetLinearVelocity *************************

// ********** Begin Class UAsyncTickFunctions Function ATP_SetWorldLocation ************************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocation_Statics
{
	struct AsyncTickFunctions_eventATP_SetWorldLocation_Parms
	{
		USceneComponent* Component;
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_SetWorldLocation constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_SetWorldLocation constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_SetWorldLocation Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocation_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_SetWorldLocation_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_SetWorldLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocation_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocation_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocation_Statics::PropPointers) < 2048);
// ********** End Function ATP_SetWorldLocation Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_SetWorldLocation", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocation_Statics::AsyncTickFunctions_eventATP_SetWorldLocation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocation_Statics::AsyncTickFunctions_eventATP_SetWorldLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_SetWorldLocation)
{
	P_GET_OBJECT(USceneComponent,Z_Param_Component);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncTickFunctions::ATP_SetWorldLocation(Z_Param_Component,Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_SetWorldLocation **************************

// ********** Begin Class UAsyncTickFunctions Function ATP_SetWorldLocationAndRotation *************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation_Statics
{
	struct AsyncTickFunctions_eventATP_SetWorldLocationAndRotation_Parms
	{
		UPrimitiveComponent* Component;
		FVector Location;
		FRotator Rotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_SetWorldLocationAndRotation constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_SetWorldLocationAndRotation constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_SetWorldLocationAndRotation Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_SetWorldLocationAndRotation_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_SetWorldLocationAndRotation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_SetWorldLocationAndRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation_Statics::PropPointers) < 2048);
// ********** End Function ATP_SetWorldLocationAndRotation Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_SetWorldLocationAndRotation", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation_Statics::AsyncTickFunctions_eventATP_SetWorldLocationAndRotation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation_Statics::AsyncTickFunctions_eventATP_SetWorldLocationAndRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_SetWorldLocationAndRotation)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncTickFunctions::ATP_SetWorldLocationAndRotation(Z_Param_Component,Z_Param_Location,Z_Param_Rotation);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_SetWorldLocationAndRotation ***************

// ********** Begin Class UAsyncTickFunctions Function ATP_SetWorldRotation ************************
struct Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldRotation_Statics
{
	struct AsyncTickFunctions_eventATP_SetWorldRotation_Parms
	{
		UPrimitiveComponent* Component;
		FRotator Rotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ATP - AsyncTickPhysics" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ATP_SetWorldRotation constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ATP_SetWorldRotation constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ATP_SetWorldRotation Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldRotation_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_SetWorldRotation_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickFunctions_eventATP_SetWorldRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldRotation_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldRotation_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldRotation_Statics::PropPointers) < 2048);
// ********** End Function ATP_SetWorldRotation Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTickFunctions, nullptr, "ATP_SetWorldRotation", 	Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldRotation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldRotation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldRotation_Statics::AsyncTickFunctions_eventATP_SetWorldRotation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldRotation_Statics::AsyncTickFunctions_eventATP_SetWorldRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTickFunctions::execATP_SetWorldRotation)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncTickFunctions::ATP_SetWorldRotation(Z_Param_Component,Z_Param_Rotation);
	P_NATIVE_END;
}
// ********** End Class UAsyncTickFunctions Function ATP_SetWorldRotation **************************

// ********** Begin Class UAsyncTickFunctions ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncTickFunctions;
UClass* UAsyncTickFunctions::GetPrivateStaticClass()
{
	using TClass = UAsyncTickFunctions;
	if (!Z_Registration_Info_UClass_UAsyncTickFunctions.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AsyncTickFunctions"),
			Z_Registration_Info_UClass_UAsyncTickFunctions.InnerSingleton,
			StaticRegisterNativesUAsyncTickFunctions,
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
	return Z_Registration_Info_UClass_UAsyncTickFunctions.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncTickFunctions_NoRegister()
{
	return UAsyncTickFunctions::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncTickFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AsyncTickFunctions.h" },
		{ "ModuleRelativePath", "Public/AsyncTickFunctions.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UAsyncTickFunctions constinit property declarations **********************
// ********** End Class UAsyncTickFunctions constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ATP_AddAngularImpulseInDegrees"), .Pointer = &UAsyncTickFunctions::execATP_AddAngularImpulseInDegrees },
		{ .NameUTF8 = UTF8TEXT("ATP_AddAngularImpulseInRadians"), .Pointer = &UAsyncTickFunctions::execATP_AddAngularImpulseInRadians },
		{ .NameUTF8 = UTF8TEXT("ATP_AddForce"), .Pointer = &UAsyncTickFunctions::execATP_AddForce },
		{ .NameUTF8 = UTF8TEXT("ATP_AddForceAtPosition"), .Pointer = &UAsyncTickFunctions::execATP_AddForceAtPosition },
		{ .NameUTF8 = UTF8TEXT("ATP_AddImpulse"), .Pointer = &UAsyncTickFunctions::execATP_AddImpulse },
		{ .NameUTF8 = UTF8TEXT("ATP_AddImpulseAtPosition"), .Pointer = &UAsyncTickFunctions::execATP_AddImpulseAtPosition },
		{ .NameUTF8 = UTF8TEXT("ATP_AddTorque"), .Pointer = &UAsyncTickFunctions::execATP_AddTorque },
		{ .NameUTF8 = UTF8TEXT("ATP_GetAngularVelocity"), .Pointer = &UAsyncTickFunctions::execATP_GetAngularVelocity },
		{ .NameUTF8 = UTF8TEXT("ATP_GetCoMPosition"), .Pointer = &UAsyncTickFunctions::execATP_GetCoMPosition },
		{ .NameUTF8 = UTF8TEXT("ATP_GetLinearVelocity"), .Pointer = &UAsyncTickFunctions::execATP_GetLinearVelocity },
		{ .NameUTF8 = UTF8TEXT("ATP_GetLinearVelocityAtPoint"), .Pointer = &UAsyncTickFunctions::execATP_GetLinearVelocityAtPoint },
		{ .NameUTF8 = UTF8TEXT("ATP_GetTransform"), .Pointer = &UAsyncTickFunctions::execATP_GetTransform },
		{ .NameUTF8 = UTF8TEXT("ATP_SetAngularVelocityInDegrees"), .Pointer = &UAsyncTickFunctions::execATP_SetAngularVelocityInDegrees },
		{ .NameUTF8 = UTF8TEXT("ATP_SetAngularVelocityInRadians"), .Pointer = &UAsyncTickFunctions::execATP_SetAngularVelocityInRadians },
		{ .NameUTF8 = UTF8TEXT("ATP_SetLinearVelocity"), .Pointer = &UAsyncTickFunctions::execATP_SetLinearVelocity },
		{ .NameUTF8 = UTF8TEXT("ATP_SetWorldLocation"), .Pointer = &UAsyncTickFunctions::execATP_SetWorldLocation },
		{ .NameUTF8 = UTF8TEXT("ATP_SetWorldLocationAndRotation"), .Pointer = &UAsyncTickFunctions::execATP_SetWorldLocationAndRotation },
		{ .NameUTF8 = UTF8TEXT("ATP_SetWorldRotation"), .Pointer = &UAsyncTickFunctions::execATP_SetWorldRotation },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInDegrees, "ATP_AddAngularImpulseInDegrees" }, // 2350918141
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddAngularImpulseInRadians, "ATP_AddAngularImpulseInRadians" }, // 230401053
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForce, "ATP_AddForce" }, // 2099644011
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddForceAtPosition, "ATP_AddForceAtPosition" }, // 3800877810
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulse, "ATP_AddImpulse" }, // 4190618767
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddImpulseAtPosition, "ATP_AddImpulseAtPosition" }, // 4022278853
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_AddTorque, "ATP_AddTorque" }, // 2655658411
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetAngularVelocity, "ATP_GetAngularVelocity" }, // 2331032864
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetCoMPosition, "ATP_GetCoMPosition" }, // 3442302160
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocity, "ATP_GetLinearVelocity" }, // 2955909766
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetLinearVelocityAtPoint, "ATP_GetLinearVelocityAtPoint" }, // 1442168001
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_GetTransform, "ATP_GetTransform" }, // 1942165362
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInDegrees, "ATP_SetAngularVelocityInDegrees" }, // 3333062659
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetAngularVelocityInRadians, "ATP_SetAngularVelocityInRadians" }, // 2496975805
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetLinearVelocity, "ATP_SetLinearVelocity" }, // 2995268563
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocation, "ATP_SetWorldLocation" }, // 2561174215
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldLocationAndRotation, "ATP_SetWorldLocationAndRotation" }, // 3108653341
		{ &Z_Construct_UFunction_UAsyncTickFunctions_ATP_SetWorldRotation, "ATP_SetWorldRotation" }, // 1903394720
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncTickFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UAsyncTickFunctions_Statics
UObject* (*const Z_Construct_UClass_UAsyncTickFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncTickPhysics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTickFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncTickFunctions_Statics::ClassParams = {
	&UAsyncTickFunctions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTickFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncTickFunctions_Statics::Class_MetaDataParams)
};
void UAsyncTickFunctions::StaticRegisterNativesUAsyncTickFunctions()
{
	UClass* Class = UAsyncTickFunctions::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UAsyncTickFunctions_Statics::Funcs));
}
UClass* Z_Construct_UClass_UAsyncTickFunctions()
{
	if (!Z_Registration_Info_UClass_UAsyncTickFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncTickFunctions.OuterSingleton, Z_Construct_UClass_UAsyncTickFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncTickFunctions.OuterSingleton;
}
UAsyncTickFunctions::UAsyncTickFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UAsyncTickFunctions);
UAsyncTickFunctions::~UAsyncTickFunctions() {}
// ********** End Class UAsyncTickFunctions ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickFunctions_h__Script_AsyncTickPhysics_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncTickFunctions, UAsyncTickFunctions::StaticClass, TEXT("UAsyncTickFunctions"), &Z_Registration_Info_UClass_UAsyncTickFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncTickFunctions), 1482021853U) },
	};
}; // Z_CompiledInDeferFile_FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickFunctions_h__Script_AsyncTickPhysics_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickFunctions_h__Script_AsyncTickPhysics_3325125352{
	TEXT("/Script/AsyncTickPhysics"),
	Z_CompiledInDeferFile_FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickFunctions_h__Script_AsyncTickPhysics_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickFunctions_h__Script_AsyncTickPhysics_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
