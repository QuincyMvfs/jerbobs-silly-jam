// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncTickPawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeAsyncTickPawn() {}

// ********** Begin Cross Module References ********************************************************
ASYNCTICKPHYSICS_API UClass* Z_Construct_UClass_AAsyncTickPawn();
ASYNCTICKPHYSICS_API UClass* Z_Construct_UClass_AAsyncTickPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
UPackage* Z_Construct_UPackage__Script_AsyncTickPhysics();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAsyncTickPawn Function AsyncTick ****************************************
struct AsyncTickPawn_eventAsyncTick_Parms
{
	float DeltaTime;
};
static FName NAME_AAsyncTickPawn_AsyncTick = FName(TEXT("AsyncTick"));
void AAsyncTickPawn::AsyncTick(float DeltaTime)
{
	AsyncTickPawn_eventAsyncTick_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	UFunction* Func = FindFunctionChecked(NAME_AAsyncTickPawn_AsyncTick);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AAsyncTickPawn_AsyncTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AsyncTick" },
		{ "ModuleRelativePath", "Public/AsyncTickPawn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AsyncTick constinit property declarations *****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AsyncTick constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AsyncTick Property Definitions ****************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAsyncTickPawn_AsyncTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTickPawn_eventAsyncTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsyncTickPawn_AsyncTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsyncTickPawn_AsyncTick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAsyncTickPawn_AsyncTick_Statics::PropPointers) < 2048);
// ********** End Function AsyncTick Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsyncTickPawn_AsyncTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAsyncTickPawn, nullptr, "AsyncTick", 	Z_Construct_UFunction_AAsyncTickPawn_AsyncTick_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AAsyncTickPawn_AsyncTick_Statics::PropPointers), 
sizeof(AsyncTickPawn_eventAsyncTick_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAsyncTickPawn_AsyncTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAsyncTickPawn_AsyncTick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AsyncTickPawn_eventAsyncTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAsyncTickPawn_AsyncTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAsyncTickPawn_AsyncTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AAsyncTickPawn Function AsyncTick ******************************************

// ********** Begin Class AAsyncTickPawn ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AAsyncTickPawn;
UClass* AAsyncTickPawn::GetPrivateStaticClass()
{
	using TClass = AAsyncTickPawn;
	if (!Z_Registration_Info_UClass_AAsyncTickPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("AsyncTickPawn"),
			Z_Registration_Info_UClass_AAsyncTickPawn.InnerSingleton,
			StaticRegisterNativesAAsyncTickPawn,
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
	return Z_Registration_Info_UClass_AAsyncTickPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_AAsyncTickPawn_NoRegister()
{
	return AAsyncTickPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAsyncTickPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AsyncTickPawn.h" },
		{ "ModuleRelativePath", "Public/AsyncTickPawn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AAsyncTickPawn constinit property declarations ***************************
// ********** End Class AAsyncTickPawn constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAsyncTickPawn_AsyncTick, "AsyncTick" }, // 2796593579
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsyncTickPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AAsyncTickPawn_Statics
UObject* (*const Z_Construct_UClass_AAsyncTickPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncTickPhysics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsyncTickPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAsyncTickPawn_Statics::ClassParams = {
	&AAsyncTickPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsyncTickPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AAsyncTickPawn_Statics::Class_MetaDataParams)
};
void AAsyncTickPawn::StaticRegisterNativesAAsyncTickPawn()
{
}
UClass* Z_Construct_UClass_AAsyncTickPawn()
{
	if (!Z_Registration_Info_UClass_AAsyncTickPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAsyncTickPawn.OuterSingleton, Z_Construct_UClass_AAsyncTickPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAsyncTickPawn.OuterSingleton;
}
AAsyncTickPawn::AAsyncTickPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AAsyncTickPawn);
AAsyncTickPawn::~AAsyncTickPawn() {}
// ********** End Class AAsyncTickPawn *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickPawn_h__Script_AsyncTickPhysics_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAsyncTickPawn, AAsyncTickPawn::StaticClass, TEXT("AAsyncTickPawn"), &Z_Registration_Info_UClass_AAsyncTickPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAsyncTickPawn), 3648762711U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickPawn_h__Script_AsyncTickPhysics_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickPawn_h__Script_AsyncTickPhysics_4057099881{
	TEXT("/Script/AsyncTickPhysics"),
	Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickPawn_h__Script_AsyncTickPhysics_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickPawn_h__Script_AsyncTickPhysics_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
