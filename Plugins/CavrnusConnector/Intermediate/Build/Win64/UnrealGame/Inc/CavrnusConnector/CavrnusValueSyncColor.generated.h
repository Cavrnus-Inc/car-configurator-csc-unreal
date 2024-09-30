// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef CAVRNUSCONNECTOR_CavrnusValueSyncColor_generated_h
#error "CavrnusValueSyncColor.generated.h already included, missing '#pragma once' in CavrnusValueSyncColor.h"
#endif
#define CAVRNUSCONNECTOR_CavrnusValueSyncColor_generated_h

#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_SPARSE_DATA
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_RPC_WRAPPERS \
	virtual void SetColor_Implementation(FLinearColor PropertyValue); \
	virtual FLinearColor GetColor_Implementation(); \
 \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execGetColor);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execGetColor);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_EVENT_PARMS \
	struct CavrnusValueSyncColor_eventGetColor_Parms \
	{ \
		FLinearColor ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CavrnusValueSyncColor_eventGetColor_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct CavrnusValueSyncColor_eventSetColor_Parms \
	{ \
		FLinearColor PropertyValue; \
	};


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCavrnusValueSyncColor(); \
	friend struct Z_Construct_UClass_UCavrnusValueSyncColor_Statics; \
public: \
	DECLARE_CLASS(UCavrnusValueSyncColor, UCavrnusValueSyncBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusValueSyncColor)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCavrnusValueSyncColor(); \
	friend struct Z_Construct_UClass_UCavrnusValueSyncColor_Statics; \
public: \
	DECLARE_CLASS(UCavrnusValueSyncColor, UCavrnusValueSyncBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusValueSyncColor)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCavrnusValueSyncColor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCavrnusValueSyncColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusValueSyncColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusValueSyncColor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusValueSyncColor(UCavrnusValueSyncColor&&); \
	NO_API UCavrnusValueSyncColor(const UCavrnusValueSyncColor&); \
public:


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusValueSyncColor(UCavrnusValueSyncColor&&); \
	NO_API UCavrnusValueSyncColor(const UCavrnusValueSyncColor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusValueSyncColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusValueSyncColor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCavrnusValueSyncColor)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_15_PROLOG \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_EVENT_PARMS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_RPC_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_INCLASS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class UCavrnusValueSyncColor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
