// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FCavrnusAuthentication;
struct FCavrnusSpaceInfo;
struct FCavrnusSpaceConnection;
struct FCavrnusUser;
class UTexture2D;
struct FCavrnusInputDevice;
struct FCavrnusOutputDevice;
struct FCavrnusVideoInputDevice;
#ifdef CAVRNUSCONNECTOR_CavrnusCallbackTypes_generated_h
#error "CavrnusCallbackTypes.generated.h already included, missing '#pragma once' in CavrnusCallbackTypes.h"
#endif
#define CAVRNUSCONNECTOR_CavrnusCallbackTypes_generated_h

#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_28_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_30_DELEGATE \
struct _Script_CavrnusConnector_eventStringPropertyUpdated_Parms \
{ \
	FString Value; \
	FString ContainerName; \
	FString PropertyName; \
}; \
static inline void FStringPropertyUpdated_DelegateWrapper(const FScriptDelegate& StringPropertyUpdated, const FString& Value, const FString& ContainerName, const FString& PropertyName) \
{ \
	_Script_CavrnusConnector_eventStringPropertyUpdated_Parms Parms; \
	Parms.Value=Value; \
	Parms.ContainerName=ContainerName; \
	Parms.PropertyName=PropertyName; \
	StringPropertyUpdated.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_31_DELEGATE \
struct _Script_CavrnusConnector_eventBoolPropertyUpdated_Parms \
{ \
	bool Value; \
	FString ContainerName; \
	FString PropertyName; \
}; \
static inline void FBoolPropertyUpdated_DelegateWrapper(const FScriptDelegate& BoolPropertyUpdated, bool Value, const FString& ContainerName, const FString& PropertyName) \
{ \
	_Script_CavrnusConnector_eventBoolPropertyUpdated_Parms Parms; \
	Parms.Value=Value ? true : false; \
	Parms.ContainerName=ContainerName; \
	Parms.PropertyName=PropertyName; \
	BoolPropertyUpdated.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_32_DELEGATE \
struct _Script_CavrnusConnector_eventFloatPropertyUpdated_Parms \
{ \
	float Value; \
	FString ContainerName; \
	FString PropertyName; \
}; \
static inline void FFloatPropertyUpdated_DelegateWrapper(const FScriptDelegate& FloatPropertyUpdated, float Value, const FString& ContainerName, const FString& PropertyName) \
{ \
	_Script_CavrnusConnector_eventFloatPropertyUpdated_Parms Parms; \
	Parms.Value=Value; \
	Parms.ContainerName=ContainerName; \
	Parms.PropertyName=PropertyName; \
	FloatPropertyUpdated.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_33_DELEGATE \
struct _Script_CavrnusConnector_eventVectorPropertyUpdated_Parms \
{ \
	FVector4 Value; \
	FString ContainerName; \
	FString PropertyName; \
}; \
static inline void FVectorPropertyUpdated_DelegateWrapper(const FScriptDelegate& VectorPropertyUpdated, FVector4 Value, const FString& ContainerName, const FString& PropertyName) \
{ \
	_Script_CavrnusConnector_eventVectorPropertyUpdated_Parms Parms; \
	Parms.Value=Value; \
	Parms.ContainerName=ContainerName; \
	Parms.PropertyName=PropertyName; \
	VectorPropertyUpdated.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_34_DELEGATE \
struct _Script_CavrnusConnector_eventColorPropertyUpdated_Parms \
{ \
	FLinearColor Value; \
	FString ContainerName; \
	FString PropertyName; \
}; \
static inline void FColorPropertyUpdated_DelegateWrapper(const FScriptDelegate& ColorPropertyUpdated, FLinearColor Value, const FString& ContainerName, const FString& PropertyName) \
{ \
	_Script_CavrnusConnector_eventColorPropertyUpdated_Parms Parms; \
	Parms.Value=Value; \
	Parms.ContainerName=ContainerName; \
	Parms.PropertyName=PropertyName; \
	ColorPropertyUpdated.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_35_DELEGATE \
struct _Script_CavrnusConnector_eventTransformPropertyUpdated_Parms \
{ \
	FTransform Value; \
	FString ContainerName; \
	FString PropertyName; \
}; \
static inline void FTransformPropertyUpdated_DelegateWrapper(const FScriptDelegate& TransformPropertyUpdated, FTransform Value, const FString& ContainerName, const FString& PropertyName) \
{ \
	_Script_CavrnusConnector_eventTransformPropertyUpdated_Parms Parms; \
	Parms.Value=Value; \
	Parms.ContainerName=ContainerName; \
	Parms.PropertyName=PropertyName; \
	TransformPropertyUpdated.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_37_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_38_DELEGATE \
struct _Script_CavrnusConnector_eventCavrnusLinkAuthRecv_Parms \
{ \
	FCavrnusAuthentication Auth; \
	FString SpaceToJoin; \
}; \
static inline void FCavrnusLinkAuthRecv_DelegateWrapper(const FScriptDelegate& CavrnusLinkAuthRecv, FCavrnusAuthentication Auth, const FString& SpaceToJoin) \
{ \
	_Script_CavrnusConnector_eventCavrnusLinkAuthRecv_Parms Parms; \
	Parms.Auth=Auth; \
	Parms.SpaceToJoin=SpaceToJoin; \
	CavrnusLinkAuthRecv.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_40_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_41_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_42_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_43_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_45_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_46_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_48_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_49_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_50_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_52_DELEGATE \
struct _Script_CavrnusConnector_eventCavrnusPolicyUpdated_Parms \
{ \
	FString Policy; \
	bool IsAllowed; \
}; \
static inline void FCavrnusPolicyUpdated_DelegateWrapper(const FScriptDelegate& CavrnusPolicyUpdated, const FString& Policy, bool IsAllowed) \
{ \
	_Script_CavrnusConnector_eventCavrnusPolicyUpdated_Parms Parms; \
	Parms.Policy=Policy; \
	Parms.IsAllowed=IsAllowed ? true : false; \
	CavrnusPolicyUpdated.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_SPARSE_DATA
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_RPC_WRAPPERS
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCavrnusCallbackTypes(); \
	friend struct Z_Construct_UClass_UCavrnusCallbackTypes_Statics; \
public: \
	DECLARE_CLASS(UCavrnusCallbackTypes, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusCallbackTypes)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUCavrnusCallbackTypes(); \
	friend struct Z_Construct_UClass_UCavrnusCallbackTypes_Statics; \
public: \
	DECLARE_CLASS(UCavrnusCallbackTypes, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusCallbackTypes)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_STANDARD_CONSTRUCTORS \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_ENHANCED_CONSTRUCTORS \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_54_PROLOG
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_RPC_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_INCLASS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class UCavrnusCallbackTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
