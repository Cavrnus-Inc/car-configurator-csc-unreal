// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef CAVRNUSCONNECTOR_SidebarMenuBase_generated_h
#error "SidebarMenuBase.generated.h already included, missing '#pragma once' in SidebarMenuBase.h"
#endif
#define CAVRNUSCONNECTOR_SidebarMenuBase_generated_h

#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_10_DELEGATE \
struct _Script_CavrnusConnector_eventSecondaryWidgetRequested_Parms \
{ \
	UUserWidget* SecondaryWidget; \
	FString MenuName; \
}; \
static inline void FSecondaryWidgetRequested_DelegateWrapper(const FMulticastScriptDelegate& SecondaryWidgetRequested, UUserWidget* SecondaryWidget, const FString& MenuName) \
{ \
	_Script_CavrnusConnector_eventSecondaryWidgetRequested_Parms Parms; \
	Parms.SecondaryWidget=SecondaryWidget; \
	Parms.MenuName=MenuName; \
	SecondaryWidgetRequested.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_17_SPARSE_DATA
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execForceChildrenRebuild);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execForceChildrenRebuild);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSidebarMenuBase(); \
	friend struct Z_Construct_UClass_USidebarMenuBase_Statics; \
public: \
	DECLARE_CLASS(USidebarMenuBase, UCavrnusBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(USidebarMenuBase)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSidebarMenuBase(); \
	friend struct Z_Construct_UClass_USidebarMenuBase_Statics; \
public: \
	DECLARE_CLASS(USidebarMenuBase, UCavrnusBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(USidebarMenuBase)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USidebarMenuBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USidebarMenuBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USidebarMenuBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USidebarMenuBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USidebarMenuBase(USidebarMenuBase&&); \
	NO_API USidebarMenuBase(const USidebarMenuBase&); \
public:


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USidebarMenuBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USidebarMenuBase(USidebarMenuBase&&); \
	NO_API USidebarMenuBase(const USidebarMenuBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USidebarMenuBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USidebarMenuBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USidebarMenuBase)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_14_PROLOG
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_17_RPC_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_17_INCLASS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class USidebarMenuBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
