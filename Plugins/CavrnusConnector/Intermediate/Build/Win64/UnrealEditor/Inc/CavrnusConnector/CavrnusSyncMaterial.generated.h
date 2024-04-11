// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterial;
#ifdef CAVRNUSCONNECTOR_CavrnusSyncMaterial_generated_h
#error "CavrnusSyncMaterial.generated.h already included, missing '#pragma once' in CavrnusSyncMaterial.h"
#endif
#define CAVRNUSCONNECTOR_CavrnusSyncMaterial_generated_h

#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_SPARSE_DATA
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_RPC_WRAPPERS \
	virtual void SetMaterialInstance_Implementation(UMaterialInstanceDynamic* NewMaterialInstance); \
	virtual UMaterialInstanceDynamic* GetMaterialInstance_Implementation() const; \
	virtual UMaterial* GetMaterial_Implementation() const; \
 \
	DECLARE_FUNCTION(execSetMaterialInstance); \
	DECLARE_FUNCTION(execGetMaterialInstance); \
	DECLARE_FUNCTION(execGetMaterial);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaterialInstance); \
	DECLARE_FUNCTION(execGetMaterialInstance); \
	DECLARE_FUNCTION(execGetMaterial);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_EVENT_PARMS \
	struct CavrnusSyncMaterial_eventGetMaterial_Parms \
	{ \
		UMaterial* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CavrnusSyncMaterial_eventGetMaterial_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct CavrnusSyncMaterial_eventGetMaterialInstance_Parms \
	{ \
		UMaterialInstanceDynamic* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CavrnusSyncMaterial_eventGetMaterialInstance_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct CavrnusSyncMaterial_eventSetMaterialInstance_Parms \
	{ \
		UMaterialInstanceDynamic* NewMaterialInstance; \
	};


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCavrnusSyncMaterial(); \
	friend struct Z_Construct_UClass_UCavrnusSyncMaterial_Statics; \
public: \
	DECLARE_CLASS(UCavrnusSyncMaterial, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusSyncMaterial)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCavrnusSyncMaterial(); \
	friend struct Z_Construct_UClass_UCavrnusSyncMaterial_Statics; \
public: \
	DECLARE_CLASS(UCavrnusSyncMaterial, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusSyncMaterial)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCavrnusSyncMaterial(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCavrnusSyncMaterial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusSyncMaterial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusSyncMaterial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusSyncMaterial(UCavrnusSyncMaterial&&); \
	NO_API UCavrnusSyncMaterial(const UCavrnusSyncMaterial&); \
public:


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusSyncMaterial(UCavrnusSyncMaterial&&); \
	NO_API UCavrnusSyncMaterial(const UCavrnusSyncMaterial&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusSyncMaterial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusSyncMaterial); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCavrnusSyncMaterial)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_11_PROLOG \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_EVENT_PARMS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_RPC_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_INCLASS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class UCavrnusSyncMaterial>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
