// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncTickFunctions.h"

#ifdef ASYNCTICKPHYSICS_AsyncTickFunctions_generated_h
#error "AsyncTickFunctions.generated.h already included, missing '#pragma once' in AsyncTickFunctions.h"
#endif
#define ASYNCTICKPHYSICS_AsyncTickFunctions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class USceneComponent;

// ********** Begin Class UAsyncTickFunctions ******************************************************
#define FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execATP_GetLinearVelocityAtPoint); \
	DECLARE_FUNCTION(execATP_SetWorldLocationAndRotation); \
	DECLARE_FUNCTION(execATP_SetWorldRotation); \
	DECLARE_FUNCTION(execATP_SetWorldLocation); \
	DECLARE_FUNCTION(execATP_SetAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execATP_SetAngularVelocityInRadians); \
	DECLARE_FUNCTION(execATP_SetLinearVelocity); \
	DECLARE_FUNCTION(execATP_GetAngularVelocity); \
	DECLARE_FUNCTION(execATP_GetCoMPosition); \
	DECLARE_FUNCTION(execATP_GetLinearVelocity); \
	DECLARE_FUNCTION(execATP_GetTransform); \
	DECLARE_FUNCTION(execATP_AddAngularImpulseInDegrees); \
	DECLARE_FUNCTION(execATP_AddAngularImpulseInRadians); \
	DECLARE_FUNCTION(execATP_AddImpulseAtPosition); \
	DECLARE_FUNCTION(execATP_AddImpulse); \
	DECLARE_FUNCTION(execATP_AddTorque); \
	DECLARE_FUNCTION(execATP_AddForceAtPosition); \
	DECLARE_FUNCTION(execATP_AddForce);


struct Z_Construct_UClass_UAsyncTickFunctions_Statics;
ASYNCTICKPHYSICS_API UClass* Z_Construct_UClass_UAsyncTickFunctions_NoRegister();

#define FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickFunctions_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncTickFunctions(); \
	friend struct ::Z_Construct_UClass_UAsyncTickFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCTICKPHYSICS_API UClass* ::Z_Construct_UClass_UAsyncTickFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncTickFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsyncTickPhysics"), Z_Construct_UClass_UAsyncTickFunctions_NoRegister) \
	DECLARE_SERIALIZER(UAsyncTickFunctions)


#define FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickFunctions_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncTickFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncTickFunctions(UAsyncTickFunctions&&) = delete; \
	UAsyncTickFunctions(const UAsyncTickFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTickFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTickFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTickFunctions) \
	NO_API virtual ~UAsyncTickFunctions();


#define FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickFunctions_h_13_PROLOG
#define FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickFunctions_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickFunctions_h_16_INCLASS_NO_PURE_DECLS \
	FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickFunctions_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncTickFunctions;

// ********** End Class UAsyncTickFunctions ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickFunctions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
