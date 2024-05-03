// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCavrnusAuthentication;
struct FCavrnusSpaceInfo;
struct FCavrnusUser;
class UTexture2D;
struct FCavrnusInputDevice;
struct FCavrnusOutputDevice;
struct FCavrnusVideoInputDevice;
struct FCavrnusSpaceConnection;
#ifdef CAVRNUSCONNECTOR_CavrnusCallbackTypes_generated_h
#error "CavrnusCallbackTypes.generated.h already included, missing '#pragma once' in CavrnusCallbackTypes.h"
#endif
#define CAVRNUSCONNECTOR_CavrnusCallbackTypes_generated_h

#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_50_DELEGATE \
struct _Script_CavrnusConnector_eventCavrnusError_Parms \
{ \
	FString Error; \
}; \
static inline void FCavrnusError_DelegateWrapper(const FScriptDelegate& CavrnusError, const FString& Error) \
{ \
	_Script_CavrnusConnector_eventCavrnusError_Parms Parms; \
	Parms.Error=Error; \
	CavrnusError.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_52_DELEGATE \
struct _Script_CavrnusConnector_eventCavrnusAuthRecv_Parms \
{ \
	FCavrnusAuthentication Auth; \
}; \
static inline void FCavrnusAuthRecv_DelegateWrapper(const FScriptDelegate& CavrnusAuthRecv, FCavrnusAuthentication Auth) \
{ \
	_Script_CavrnusConnector_eventCavrnusAuthRecv_Parms Parms; \
	Parms.Auth=Auth; \
	CavrnusAuthRecv.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_54_DELEGATE \
struct _Script_CavrnusConnector_eventCavrnusAllSpacesInfoEvent_Parms \
{ \
	TArray<FCavrnusSpaceInfo> SpacesInfo; \
}; \
static inline void FCavrnusAllSpacesInfoEvent_DelegateWrapper(const FScriptDelegate& CavrnusAllSpacesInfoEvent, const TArray<FCavrnusSpaceInfo>& SpacesInfo) \
{ \
	_Script_CavrnusConnector_eventCavrnusAllSpacesInfoEvent_Parms Parms; \
	Parms.SpacesInfo=SpacesInfo; \
	CavrnusAllSpacesInfoEvent.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_55_DELEGATE \
struct _Script_CavrnusConnector_eventCavrnusSpaceInfoEvent_Parms \
{ \
	FCavrnusSpaceInfo SpaceInfo; \
}; \
static inline void FCavrnusSpaceInfoEvent_DelegateWrapper(const FScriptDelegate& CavrnusSpaceInfoEvent, FCavrnusSpaceInfo SpaceInfo) \
{ \
	_Script_CavrnusConnector_eventCavrnusSpaceInfoEvent_Parms Parms; \
	Parms.SpaceInfo=SpaceInfo; \
	CavrnusSpaceInfoEvent.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_DELEGATE \
struct _Script_CavrnusConnector_eventCavrnusSpaceUserEvent_Parms \
{ \
	FCavrnusUser User; \
}; \
static inline void FCavrnusSpaceUserEvent_DelegateWrapper(const FScriptDelegate& CavrnusSpaceUserEvent, FCavrnusUser User) \
{ \
	_Script_CavrnusConnector_eventCavrnusSpaceUserEvent_Parms Parms; \
	Parms.User=User; \
	CavrnusSpaceUserEvent.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_58_DELEGATE \
struct _Script_CavrnusConnector_eventCavrnusUserVideoFrameEvent_Parms \
{ \
	UTexture2D* UserVideoFrame; \
}; \
static inline void FCavrnusUserVideoFrameEvent_DelegateWrapper(const FScriptDelegate& CavrnusUserVideoFrameEvent, UTexture2D* UserVideoFrame) \
{ \
	_Script_CavrnusConnector_eventCavrnusUserVideoFrameEvent_Parms Parms; \
	Parms.UserVideoFrame=UserVideoFrame; \
	CavrnusUserVideoFrameEvent.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_60_DELEGATE \
struct _Script_CavrnusConnector_eventCavrnusAvailableInputDevices_Parms \
{ \
	TArray<FCavrnusInputDevice> InputDevices; \
}; \
static inline void FCavrnusAvailableInputDevices_DelegateWrapper(const FScriptDelegate& CavrnusAvailableInputDevices, TArray<FCavrnusInputDevice> const& InputDevices) \
{ \
	_Script_CavrnusConnector_eventCavrnusAvailableInputDevices_Parms Parms; \
	Parms.InputDevices=InputDevices; \
	CavrnusAvailableInputDevices.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_61_DELEGATE \
struct _Script_CavrnusConnector_eventCavrnusAvailableOutputDevices_Parms \
{ \
	TArray<FCavrnusOutputDevice> OutputDevices; \
}; \
static inline void FCavrnusAvailableOutputDevices_DelegateWrapper(const FScriptDelegate& CavrnusAvailableOutputDevices, TArray<FCavrnusOutputDevice> const& OutputDevices) \
{ \
	_Script_CavrnusConnector_eventCavrnusAvailableOutputDevices_Parms Parms; \
	Parms.OutputDevices=OutputDevices; \
	CavrnusAvailableOutputDevices.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_62_DELEGATE \
struct _Script_CavrnusConnector_eventCavrnusAvailableVideoInputDevices_Parms \
{ \
	TArray<FCavrnusVideoInputDevice> VideoInputDevices; \
}; \
static inline void FCavrnusAvailableVideoInputDevices_DelegateWrapper(const FScriptDelegate& CavrnusAvailableVideoInputDevices, TArray<FCavrnusVideoInputDevice> const& VideoInputDevices) \
{ \
	_Script_CavrnusConnector_eventCavrnusAvailableVideoInputDevices_Parms Parms; \
	Parms.VideoInputDevices=VideoInputDevices; \
	CavrnusAvailableVideoInputDevices.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_65_DELEGATE \
struct _Script_CavrnusConnector_eventCavrnusSpaceConnected_Parms \
{ \
	FCavrnusSpaceConnection SpaceConnection; \
}; \
static inline void FCavrnusSpaceConnected_DelegateWrapper(const FScriptDelegate& CavrnusSpaceConnected, FCavrnusSpaceConnection SpaceConnection) \
{ \
	_Script_CavrnusConnector_eventCavrnusSpaceConnected_Parms Parms; \
	Parms.SpaceConnection=SpaceConnection; \
	CavrnusSpaceConnected.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_66_DELEGATE \
struct _Script_CavrnusConnector_eventCavrnusSpaceBeginLoading_Parms \
{ \
	FString SpaceIdBeingLoaded; \
}; \
static inline void FCavrnusSpaceBeginLoading_DelegateWrapper(const FScriptDelegate& CavrnusSpaceBeginLoading, const FString& SpaceIdBeingLoaded) \
{ \
	_Script_CavrnusConnector_eventCavrnusSpaceBeginLoading_Parms Parms; \
	Parms.SpaceIdBeingLoaded=SpaceIdBeingLoaded; \
	CavrnusSpaceBeginLoading.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_75_SPARSE_DATA
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_75_RPC_WRAPPERS
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_75_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCavrnusCallbackTypes(); \
	friend struct Z_Construct_UClass_UCavrnusCallbackTypes_Statics; \
public: \
	DECLARE_CLASS(UCavrnusCallbackTypes, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusCallbackTypes)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUCavrnusCallbackTypes(); \
	friend struct Z_Construct_UClass_UCavrnusCallbackTypes_Statics; \
public: \
	DECLARE_CLASS(UCavrnusCallbackTypes, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusCallbackTypes)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCavrnusCallbackTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCavrnusCallbackTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusCallbackTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusCallbackTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusCallbackTypes(UCavrnusCallbackTypes&&); \
	NO_API UCavrnusCallbackTypes(const UCavrnusCallbackTypes&); \
public:


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCavrnusCallbackTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusCallbackTypes(UCavrnusCallbackTypes&&); \
	NO_API UCavrnusCallbackTypes(const UCavrnusCallbackTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusCallbackTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusCallbackTypes); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCavrnusCallbackTypes)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_72_PROLOG
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_75_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_75_RPC_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_75_INCLASS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_75_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_75_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class UCavrnusCallbackTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
