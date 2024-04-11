// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAVRNUSCONNECTOR_CavrnusPropertiesContainer_generated_h
#error "CavrnusPropertiesContainer.generated.h already included, missing '#pragma once' in CavrnusPropertiesContainer.h"
#endif
#define CAVRNUSCONNECTOR_CavrnusPropertiesContainer_generated_h

#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_6_DELEGATE \
struct _Script_CavrnusConnector_eventContainerNameUpdated_Parms \
{ \
	FString NewContainerName; \
}; \
static inline void FContainerNameUpdated_DelegateWrapper(const FMulticastScriptDelegate& ContainerNameUpdated, const FString& NewContainerName) \
{ \
	_Script_CavrnusConnector_eventContainerNameUpdated_Parms Parms; \
	Parms.NewContainerName=NewContainerName; \
	ContainerNameUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_12_SPARSE_DATA
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetContainerName); \
	DECLARE_FUNCTION(execGetContainerName);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetContainerName); \
	DECLARE_FUNCTION(execGetContainerName);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCavrnusPropertiesContainer(); \
	friend struct Z_Construct_UClass_UCavrnusPropertiesContainer_Statics; \
public: \
	DECLARE_CLASS(UCavrnusPropertiesContainer, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusPropertiesContainer)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCavrnusPropertiesContainer(); \
	friend struct Z_Construct_UClass_UCavrnusPropertiesContainer_Statics; \
public: \
	DECLARE_CLASS(UCavrnusPropertiesContainer, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusPropertiesContainer)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCavrnusPropertiesContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCavrnusPropertiesContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusPropertiesContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusPropertiesContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusPropertiesContainer(UCavrnusPropertiesContainer&&); \
	NO_API UCavrnusPropertiesContainer(const UCavrnusPropertiesContainer&); \
public:


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusPropertiesContainer(UCavrnusPropertiesContainer&&); \
	NO_API UCavrnusPropertiesContainer(const UCavrnusPropertiesContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusPropertiesContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusPropertiesContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCavrnusPropertiesContainer)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_9_PROLOG
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_12_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_12_RPC_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_12_INCLASS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_12_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_12_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class UCavrnusPropertiesContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
