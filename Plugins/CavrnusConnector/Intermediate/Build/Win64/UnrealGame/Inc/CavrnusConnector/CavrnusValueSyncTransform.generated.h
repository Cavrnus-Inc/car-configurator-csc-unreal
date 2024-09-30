// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAVRNUSCONNECTOR_CavrnusValueSyncTransform_generated_h
#error "CavrnusValueSyncTransform.generated.h already included, missing '#pragma once' in CavrnusValueSyncTransform.h"
#endif
#define CAVRNUSCONNECTOR_CavrnusValueSyncTransform_generated_h

#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_SPARSE_DATA
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_RPC_WRAPPERS \
	virtual void SetTransform_Implementation(FTransform PropertyValue); \
	virtual FTransform GetTransform_Implementation(); \
 \
	DECLARE_FUNCTION(execSetTransform); \
	DECLARE_FUNCTION(execGetTransform);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTransform); \
	DECLARE_FUNCTION(execGetTransform);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_EVENT_PARMS \
	struct CavrnusValueSyncTransform_eventGetTransform_Parms \
	{ \
		FTransform ReturnValue; \
	}; \
	struct CavrnusValueSyncTransform_eventSetTransform_Parms \
	{ \
		FTransform PropertyValue; \
	};


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCavrnusValueSyncTransform(); \
	friend struct Z_Construct_UClass_UCavrnusValueSyncTransform_Statics; \
public: \
	DECLARE_CLASS(UCavrnusValueSyncTransform, UCavrnusValueSyncBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusValueSyncTransform)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCavrnusValueSyncTransform(); \
	friend struct Z_Construct_UClass_UCavrnusValueSyncTransform_Statics; \
public: \
	DECLARE_CLASS(UCavrnusValueSyncTransform, UCavrnusValueSyncBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusValueSyncTransform)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCavrnusValueSyncTransform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCavrnusValueSyncTransform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusValueSyncTransform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusValueSyncTransform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusValueSyncTransform(UCavrnusValueSyncTransform&&); \
	NO_API UCavrnusValueSyncTransform(const UCavrnusValueSyncTransform&); \
public:


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusValueSyncTransform(UCavrnusValueSyncTransform&&); \
	NO_API UCavrnusValueSyncTransform(const UCavrnusValueSyncTransform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusValueSyncTransform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusValueSyncTransform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCavrnusValueSyncTransform)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_15_PROLOG \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_EVENT_PARMS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_RPC_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_INCLASS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class UCavrnusValueSyncTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
