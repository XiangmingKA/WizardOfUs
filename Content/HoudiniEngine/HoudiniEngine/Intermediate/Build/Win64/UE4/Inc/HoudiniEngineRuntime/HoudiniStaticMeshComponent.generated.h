// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHoudiniStaticMesh;
#ifdef HOUDINIENGINERUNTIME_HoudiniStaticMeshComponent_generated_h
#error "HoudiniStaticMeshComponent.generated.h already included, missing '#pragma once' in HoudiniStaticMeshComponent.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniStaticMeshComponent_generated_h

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_SPARSE_DATA
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetHoudiniIconVisible); \
	DECLARE_FUNCTION(execIsHoudiniIconVisible); \
	DECLARE_FUNCTION(execNotifyMeshUpdated); \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execSetMesh);


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHoudiniIconVisible); \
	DECLARE_FUNCTION(execIsHoudiniIconVisible); \
	DECLARE_FUNCTION(execNotifyMeshUpdated); \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execSetMesh);


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UHoudiniStaticMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniStaticMeshComponent)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UHoudiniStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UHoudiniStaticMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniStaticMeshComponent)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniStaticMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniStaticMeshComponent(UHoudiniStaticMeshComponent&&); \
	NO_API UHoudiniStaticMeshComponent(const UHoudiniStaticMeshComponent&); \
public:


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniStaticMeshComponent(UHoudiniStaticMeshComponent&&); \
	NO_API UHoudiniStaticMeshComponent(const UHoudiniStaticMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniStaticMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniStaticMeshComponent)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(UHoudiniStaticMeshComponent, Mesh); } \
	FORCEINLINE static uint32 __PPO__LocalBounds() { return STRUCT_OFFSET(UHoudiniStaticMeshComponent, LocalBounds); } \
	FORCEINLINE static uint32 __PPO__bHoudiniIconVisible() { return STRUCT_OFFSET(UHoudiniStaticMeshComponent, bHoudiniIconVisible); }


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_37_PROLOG
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_RPC_WRAPPERS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_INCLASS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<class UHoudiniStaticMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniStaticMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
