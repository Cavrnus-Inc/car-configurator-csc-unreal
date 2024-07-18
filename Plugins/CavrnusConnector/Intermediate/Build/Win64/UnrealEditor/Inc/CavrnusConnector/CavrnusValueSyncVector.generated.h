// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAVRNUSCONNECTOR_CavrnusValueSyncVector_generated_h
#error "CavrnusValueSyncVector.generated.h already included, missing '#pragma once' in CavrnusValueSyncVector.h"
#endif
#define CAVRNUSCONNECTOR_CavrnusValueSyncVector_generated_h

#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_SPARSE_DATA
#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_RPC_WRAPPERS \
	virtual void SetVector_Implementation(FVector PropertyValue); \
	virtual FVector GetVector_Implementation(); \
 \
	DECLARE_FUNCTION(execSetVector); \
	DECLARE_FUNCTION(execGetVector);


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVector); \
	DECLARE_FUNCTION(execGetVector);


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_EVENT_PARMS \
	struct CavrnusValueSyncVector_eventGetVector_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CavrnusValueSyncVector_eventGetVector_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct CavrnusValueSyncVector_eventSetVector_Parms \
	{ \
		FVector PropertyValue; \
	};


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_CALLBACK_WRAPPERS
#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCavrnusValueSyncVector(); \
	friend struct Z_Construct_UClass_UCavrnusValueSyncVector_Statics; \
public: \
	DECLARE_CLASS(UCavrnusValueSyncVector, UCavrnusValueSyncBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusValueSyncVector)


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCavrnusValueSyncVector(); \
	friend struct Z_Construct_UClass_UCavrnusValueSyncVector_Statics; \
public: \
	DECLARE_CLASS(UCavrnusValueSyncVector, UCavrnusValueSyncBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusValueSyncVector)


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCavrnusValueSyncVector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCavrnusValueSyncVector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusValueSyncVector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusValueSyncVector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusValueSyncVector(UCavrnusValueSyncVector&&); \
	NO_API UCavrnusValueSyncVector(const UCavrnusValueSyncVector&); \
public:


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusValueSyncVector(UCavrnusValueSyncVector&&); \
	NO_API UCavrnusValueSyncVector(const UCavrnusValueSyncVector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusValueSyncVector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusValueSyncVector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCavrnusValueSyncVector)


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_15_PROLOG \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_EVENT_PARMS


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_SPARSE_DATA \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_RPC_WRAPPERS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_CALLBACK_WRAPPERS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_INCLASS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_SPARSE_DATA \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_CALLBACK_WRAPPERS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_INCLASS_NO_PURE_DECLS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class UCavrnusValueSyncVector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncVector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
