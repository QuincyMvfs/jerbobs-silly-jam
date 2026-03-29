// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Vehicle/SuspensionComponent.h"

#ifdef RTUNE_SuspensionComponent_generated_h
#error "SuspensionComponent.generated.h already included, missing '#pragma once' in SuspensionComponent.h"
#endif
#define RTUNE_SuspensionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
struct FHitResult;

// ********** Begin Class USuspensionComponent *****************************************************
#define FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_SuspensionComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Steering); \
	DECLARE_FUNCTION(execRecalculateWheelRadius); \
	DECLARE_FUNCTION(execSetWheelScale); \
	DECLARE_FUNCTION(execStaticWheelCallback); \
	DECLARE_FUNCTION(execStaticallyRenderWheel); \
	DECLARE_FUNCTION(execGetWheelLocalRotation); \
	DECLARE_FUNCTION(execGetWheelRelativeOffset); \
	DECLARE_FUNCTION(execGetSteeringRotation); \
	DECLARE_FUNCTION(execIsHandbrakeWheel); \
	DECLARE_FUNCTION(execGetCompression); \
	DECLARE_FUNCTION(execGetHitResult); \
	DECLARE_FUNCTION(execGetCurrentLength); \
	DECLARE_FUNCTION(execIsInAir); \
	DECLARE_FUNCTION(execRenderWheelMesh); \
	DECLARE_FUNCTION(execSetExtensionLength); \
	DECLARE_FUNCTION(execSetDamping); \
	DECLARE_FUNCTION(execSetStiffness); \
	DECLARE_FUNCTION(execGetWheelMeshComponent); \
	DECLARE_FUNCTION(execUpdatePhysics);


struct Z_Construct_UClass_USuspensionComponent_Statics;
RTUNE_API UClass* Z_Construct_UClass_USuspensionComponent_NoRegister();

#define FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_SuspensionComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSuspensionComponent(); \
	friend struct ::Z_Construct_UClass_USuspensionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RTUNE_API UClass* ::Z_Construct_UClass_USuspensionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USuspensionComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTune"), Z_Construct_UClass_USuspensionComponent_NoRegister) \
	DECLARE_SERIALIZER(USuspensionComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ServerSteeringRotation=NETFIELD_REP_START, \
		NETFIELD_REP_END=ServerSteeringRotation	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_SuspensionComponent_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USuspensionComponent(USuspensionComponent&&) = delete; \
	USuspensionComponent(const USuspensionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USuspensionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USuspensionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USuspensionComponent) \
	NO_API virtual ~USuspensionComponent();


#define FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_SuspensionComponent_h_25_PROLOG
#define FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_SuspensionComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_SuspensionComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_SuspensionComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_SuspensionComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USuspensionComponent;

// ********** End Class USuspensionComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Quincy_M_Documents_SourceTree_GameJams_JerbobsSillyJam_Plugins_RTune_5_3_Source_RTune_Public_Vehicle_SuspensionComponent_h

// ********** Begin Enum EHandbrakeWheelType *******************************************************
#define FOREACH_ENUM_EHANDBRAKEWHEELTYPE(op) \
	op(EHandbrakeWheelType::None) \
	op(EHandbrakeWheelType::Front) \
	op(EHandbrakeWheelType::Rear) 

enum class EHandbrakeWheelType : uint8;
template<> struct TIsUEnumClass<EHandbrakeWheelType> { enum { Value = true }; };
template<> RTUNE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHandbrakeWheelType>();
// ********** End Enum EHandbrakeWheelType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
