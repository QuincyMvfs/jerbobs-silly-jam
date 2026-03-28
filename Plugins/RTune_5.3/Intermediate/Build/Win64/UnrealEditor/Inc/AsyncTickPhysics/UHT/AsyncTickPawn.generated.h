// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncTickPawn.h"

#ifdef ASYNCTICKPHYSICS_AsyncTickPawn_generated_h
#error "AsyncTickPawn.generated.h already included, missing '#pragma once' in AsyncTickPawn.h"
#endif
#define ASYNCTICKPHYSICS_AsyncTickPawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAsyncTickPawn ***********************************************************
#define FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickPawn_h_10_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AAsyncTickPawn_Statics;
ASYNCTICKPHYSICS_API UClass* Z_Construct_UClass_AAsyncTickPawn_NoRegister();

#define FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickPawn_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAsyncTickPawn(); \
	friend struct ::Z_Construct_UClass_AAsyncTickPawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCTICKPHYSICS_API UClass* ::Z_Construct_UClass_AAsyncTickPawn_NoRegister(); \
public: \
	DECLARE_CLASS2(AAsyncTickPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AsyncTickPhysics"), Z_Construct_UClass_AAsyncTickPawn_NoRegister) \
	DECLARE_SERIALIZER(AAsyncTickPawn)


#define FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickPawn_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAsyncTickPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAsyncTickPawn(AAsyncTickPawn&&) = delete; \
	AAsyncTickPawn(const AAsyncTickPawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsyncTickPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsyncTickPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAsyncTickPawn) \
	NO_API virtual ~AAsyncTickPawn();


#define FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickPawn_h_7_PROLOG
#define FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickPawn_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickPawn_h_10_CALLBACK_WRAPPERS \
	FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickPawn_h_10_INCLASS_NO_PURE_DECLS \
	FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickPawn_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAsyncTickPawn;

// ********** End Class AAsyncTickPawn *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameJams_JerbalGJ_Plugins_RTune_5_3_Source_ThirdParty_AsyncTickPhysics_Source_AsyncTickPhysics_Public_AsyncTickPawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
