// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAVRNUSCONNECTOR_CavrnusValueSyncBoolean_generated_h
#error "CavrnusValueSyncBoolean.generated.h already included, missing '#pragma once' in CavrnusValueSyncBoolean.h"
#endif
#define CAVRNUSCONNECTOR_CavrnusValueSyncBoolean_generated_h

#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_SPARSE_DATA
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_RPC_WRAPPERS \
	virtual void SetBoolean_Implementation(bool bPropertyValue); \
	virtual bool GetBoolean_Implementation(); \
 \
	DECLARE_FUNCTION(execSetBoolean); \
	DECLARE_FUNCTION(execGetBoolean);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBoolean); \
	DECLARE_FUNCTION(execGetBoolean);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_EVENT_PARMS \
	struct CavrnusValueSyncBoolean_eventGetBoolean_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CavrnusValueSyncBoolean_eventGetBoolean_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct CavrnusValueSyncBoolean_eventSetBoolean_Parms \
	{ \
		bool bPropertyValue; \
	};


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCavrnusValueSyncBoolean(); \
	friend struct Z_Construct_UClass_UCavrnusValueSyncBoolean_Statics; \
public: \
	DECLARE_CLASS(UCavrnusValueSyncBoolean, UCavrnusValueSyncBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusValueSyncBoolean)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCavrnusValueSyncBoolean(); \
	friend struct Z_Construct_UClass_UCavrnusValueSyncBoolean_Statics; \
public: \
	DECLARE_CLASS(UCavrnusValueSyncBoolean, UCavrnusValueSyncBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusValueSyncBoolean)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCavrnusValueSyncBoolean(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCavrnusValueSyncBoolean) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusValueSyncBoolean); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusValueSyncBoolean); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusValueSyncBoolean(UCavrnusValueSyncBoolean&&); \
	NO_API UCavrnusValueSyncBoolean(const UCavrnusValueSyncBoolean&); \
public:


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusValueSyncBoolean(UCavrnusValueSyncBoolean&&); \
	NO_API UCavrnusValueSyncBoolean(const UCavrnusValueSyncBoolean&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusValueSyncBoolean); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusValueSyncBoolean); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCavrnusValueSyncBoolean)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_11_PROLOG \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_EVENT_PARMS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_RPC_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_INCLASS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class UCavrnusValueSyncBoolean>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
