// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAVRNUSCONNECTOR_CavrnusValueSyncFloat_generated_h
#error "CavrnusValueSyncFloat.generated.h already included, missing '#pragma once' in CavrnusValueSyncFloat.h"
#endif
#define CAVRNUSCONNECTOR_CavrnusValueSyncFloat_generated_h

#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_SPARSE_DATA
#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_RPC_WRAPPERS \
	virtual void SetFloat_Implementation(float PropertyValue); \
	virtual float GetFloat_Implementation(); \
 \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execGetFloat);


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execGetFloat);


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_EVENT_PARMS \
	struct CavrnusValueSyncFloat_eventGetFloat_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CavrnusValueSyncFloat_eventGetFloat_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct CavrnusValueSyncFloat_eventSetFloat_Parms \
	{ \
		float PropertyValue; \
	};


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_CALLBACK_WRAPPERS
#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCavrnusValueSyncFloat(); \
	friend struct Z_Construct_UClass_UCavrnusValueSyncFloat_Statics; \
public: \
	DECLARE_CLASS(UCavrnusValueSyncFloat, UCavrnusValueSyncBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusValueSyncFloat)


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCavrnusValueSyncFloat(); \
	friend struct Z_Construct_UClass_UCavrnusValueSyncFloat_Statics; \
public: \
	DECLARE_CLASS(UCavrnusValueSyncFloat, UCavrnusValueSyncBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusValueSyncFloat)


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCavrnusValueSyncFloat(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCavrnusValueSyncFloat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusValueSyncFloat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusValueSyncFloat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusValueSyncFloat(UCavrnusValueSyncFloat&&); \
	NO_API UCavrnusValueSyncFloat(const UCavrnusValueSyncFloat&); \
public:


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusValueSyncFloat(UCavrnusValueSyncFloat&&); \
	NO_API UCavrnusValueSyncFloat(const UCavrnusValueSyncFloat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusValueSyncFloat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusValueSyncFloat); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCavrnusValueSyncFloat)


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_15_PROLOG \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_EVENT_PARMS


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_SPARSE_DATA \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_RPC_WRAPPERS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_CALLBACK_WRAPPERS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_INCLASS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_SPARSE_DATA \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_CALLBACK_WRAPPERS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_INCLASS_NO_PURE_DECLS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class UCavrnusValueSyncFloat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncFloat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
