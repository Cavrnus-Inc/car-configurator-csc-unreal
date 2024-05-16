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
struct FCavrnusSpaceConnection;
struct FLinearColor;
struct FCavrnusSpawnedObject;
struct FCavrnusUser;
class UTexture2D;
struct FCavrnusInputDevice;
struct FCavrnusOutputDevice;
struct FCavrnusVideoInputDevice;
struct FCavrnusRemoteContent;
 
struct FCavrnusBinding;
class UCavrnusLiveTransformPropertyUpdate;
class UCavrnusLiveVectorPropertyUpdate;
class UCavrnusLiveStringPropertyUpdate;
class UCavrnusLiveFloatPropertyUpdate;
class UCavrnusLiveBoolPropertyUpdate;
class UCavrnusLiveColorPropertyUpdate;
class ACavrnusSpatialConnector;
class UCavrnusSpatialConnectorSubSystemProxy;
#ifdef CAVRNUSCONNECTOR_CavrnusFunctionLibrary_generated_h
#error "CavrnusFunctionLibrary.generated.h already included, missing '#pragma once' in CavrnusFunctionLibrary.h"
#endif
#define CAVRNUSCONNECTOR_CavrnusFunctionLibrary_generated_h

#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_71_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusError_Parms \
{ \
	FString Error; \
}; \
static inline void FCavrnusError_DelegateWrapper(const FScriptDelegate& CavrnusError, const FString& Error) \
{ \
	CavrnusFunctionLibrary_eventCavrnusError_Parms Parms; \
	Parms.Error=Error; \
	CavrnusError.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_83_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusAuthRecv_Parms \
{ \
	FCavrnusAuthentication Auth; \
}; \
static inline void FCavrnusAuthRecv_DelegateWrapper(const FScriptDelegate& CavrnusAuthRecv, FCavrnusAuthentication Auth) \
{ \
	CavrnusFunctionLibrary_eventCavrnusAuthRecv_Parms Parms; \
	Parms.Auth=Auth; \
	CavrnusAuthRecv.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_110_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusAllSpacesInfoEvent_Parms \
{ \
	TArray<FCavrnusSpaceInfo> SpacesInfo; \
}; \
static inline void FCavrnusAllSpacesInfoEvent_DelegateWrapper(const FScriptDelegate& CavrnusAllSpacesInfoEvent, const TArray<FCavrnusSpaceInfo>& SpacesInfo) \
{ \
	CavrnusFunctionLibrary_eventCavrnusAllSpacesInfoEvent_Parms Parms; \
	Parms.SpacesInfo=SpacesInfo; \
	CavrnusAllSpacesInfoEvent.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_118_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusSpaceInfoEvent_Parms \
{ \
	FCavrnusSpaceInfo SpaceInfo; \
}; \
static inline void FCavrnusSpaceInfoEvent_DelegateWrapper(const FScriptDelegate& CavrnusSpaceInfoEvent, FCavrnusSpaceInfo SpaceInfo) \
{ \
	CavrnusFunctionLibrary_eventCavrnusSpaceInfoEvent_Parms Parms; \
	Parms.SpaceInfo=SpaceInfo; \
	CavrnusSpaceInfoEvent.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_129_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusSpaceConnected_Parms \
{ \
	FCavrnusSpaceConnection SpaceConnection; \
}; \
static inline void FCavrnusSpaceConnected_DelegateWrapper(const FScriptDelegate& CavrnusSpaceConnected, FCavrnusSpaceConnection SpaceConnection) \
{ \
	CavrnusFunctionLibrary_eventCavrnusSpaceConnected_Parms Parms; \
	Parms.SpaceConnection=SpaceConnection; \
	CavrnusSpaceConnected.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_136_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusSpaceBeginLoading_Parms \
{ \
	FString SpaceIdBeingLoaded; \
}; \
static inline void FCavrnusSpaceBeginLoading_DelegateWrapper(const FScriptDelegate& CavrnusSpaceBeginLoading, const FString& SpaceIdBeingLoaded) \
{ \
	CavrnusFunctionLibrary_eventCavrnusSpaceBeginLoading_Parms Parms; \
	Parms.SpaceIdBeingLoaded=SpaceIdBeingLoaded; \
	CavrnusSpaceBeginLoading.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_179_DELEGATE \
struct CavrnusFunctionLibrary_eventColorPropertyUpdated_Parms \
{ \
	FLinearColor Value; \
	FString ContainerName; \
	FString PropertyName; \
}; \
static inline void FColorPropertyUpdated_DelegateWrapper(const FScriptDelegate& ColorPropertyUpdated, FLinearColor Value, const FString& ContainerName, const FString& PropertyName) \
{ \
	CavrnusFunctionLibrary_eventColorPropertyUpdated_Parms Parms; \
	Parms.Value=Value; \
	Parms.ContainerName=ContainerName; \
	Parms.PropertyName=PropertyName; \
	ColorPropertyUpdated.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_204_DELEGATE \
struct CavrnusFunctionLibrary_eventBoolPropertyUpdated_Parms \
{ \
	bool Value; \
	FString ContainerName; \
	FString PropertyName; \
}; \
static inline void FBoolPropertyUpdated_DelegateWrapper(const FScriptDelegate& BoolPropertyUpdated, bool Value, const FString& ContainerName, const FString& PropertyName) \
{ \
	CavrnusFunctionLibrary_eventBoolPropertyUpdated_Parms Parms; \
	Parms.Value=Value ? true : false; \
	Parms.ContainerName=ContainerName; \
	Parms.PropertyName=PropertyName; \
	BoolPropertyUpdated.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_229_DELEGATE \
struct CavrnusFunctionLibrary_eventFloatPropertyUpdated_Parms \
{ \
	float Value; \
	FString ContainerName; \
	FString PropertyName; \
}; \
static inline void FFloatPropertyUpdated_DelegateWrapper(const FScriptDelegate& FloatPropertyUpdated, float Value, const FString& ContainerName, const FString& PropertyName) \
{ \
	CavrnusFunctionLibrary_eventFloatPropertyUpdated_Parms Parms; \
	Parms.Value=Value; \
	Parms.ContainerName=ContainerName; \
	Parms.PropertyName=PropertyName; \
	FloatPropertyUpdated.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_254_DELEGATE \
struct CavrnusFunctionLibrary_eventStringPropertyUpdated_Parms \
{ \
	FString Value; \
	FString ContainerName; \
	FString PropertyName; \
}; \
static inline void FStringPropertyUpdated_DelegateWrapper(const FScriptDelegate& StringPropertyUpdated, const FString& Value, const FString& ContainerName, const FString& PropertyName) \
{ \
	CavrnusFunctionLibrary_eventStringPropertyUpdated_Parms Parms; \
	Parms.Value=Value; \
	Parms.ContainerName=ContainerName; \
	Parms.PropertyName=PropertyName; \
	StringPropertyUpdated.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_279_DELEGATE \
struct CavrnusFunctionLibrary_eventVectorPropertyUpdated_Parms \
{ \
	FVector4 Value; \
	FString ContainerName; \
	FString PropertyName; \
}; \
static inline void FVectorPropertyUpdated_DelegateWrapper(const FScriptDelegate& VectorPropertyUpdated, FVector4 Value, const FString& ContainerName, const FString& PropertyName) \
{ \
	CavrnusFunctionLibrary_eventVectorPropertyUpdated_Parms Parms; \
	Parms.Value=Value; \
	Parms.ContainerName=ContainerName; \
	Parms.PropertyName=PropertyName; \
	VectorPropertyUpdated.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_304_DELEGATE \
struct CavrnusFunctionLibrary_eventTransformPropertyUpdated_Parms \
{ \
	FTransform Value; \
	FString ContainerName; \
	FString PropertyName; \
}; \
static inline void FTransformPropertyUpdated_DelegateWrapper(const FScriptDelegate& TransformPropertyUpdated, FTransform Value, const FString& ContainerName, const FString& PropertyName) \
{ \
	CavrnusFunctionLibrary_eventTransformPropertyUpdated_Parms Parms; \
	Parms.Value=Value; \
	Parms.ContainerName=ContainerName; \
	Parms.PropertyName=PropertyName; \
	TransformPropertyUpdated.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_325_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusPolicyUpdated_Parms \
{ \
	FString Policy; \
	bool IsAllowed; \
}; \
static inline void FCavrnusPolicyUpdated_DelegateWrapper(const FScriptDelegate& CavrnusPolicyUpdated, const FString& Policy, bool IsAllowed) \
{ \
	CavrnusFunctionLibrary_eventCavrnusPolicyUpdated_Parms Parms; \
	Parms.Policy=Policy; \
	Parms.IsAllowed=IsAllowed ? true : false; \
	CavrnusPolicyUpdated.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_344_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusSpawnedObjectArrived_Parms \
{ \
	FCavrnusSpawnedObject spawnedObject; \
}; \
static inline void FCavrnusSpawnedObjectArrived_DelegateWrapper(const FScriptDelegate& CavrnusSpawnedObjectArrived, FCavrnusSpawnedObject spawnedObject) \
{ \
	CavrnusFunctionLibrary_eventCavrnusSpawnedObjectArrived_Parms Parms; \
	Parms.spawnedObject=spawnedObject; \
	CavrnusSpawnedObjectArrived.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_364_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusSpaceUserEvent_Parms \
{ \
	FCavrnusUser User; \
}; \
static inline void FCavrnusSpaceUserEvent_DelegateWrapper(const FScriptDelegate& CavrnusSpaceUserEvent, FCavrnusUser User) \
{ \
	CavrnusFunctionLibrary_eventCavrnusSpaceUserEvent_Parms Parms; \
	Parms.User=User; \
	CavrnusSpaceUserEvent.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_381_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusUserVideoFrameEvent_Parms \
{ \
	UTexture2D* UserVideoFrame; \
}; \
static inline void FCavrnusUserVideoFrameEvent_DelegateWrapper(const FScriptDelegate& CavrnusUserVideoFrameEvent, UTexture2D* UserVideoFrame) \
{ \
	CavrnusFunctionLibrary_eventCavrnusUserVideoFrameEvent_Parms Parms; \
	Parms.UserVideoFrame=UserVideoFrame; \
	CavrnusUserVideoFrameEvent.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_403_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusAvailableInputDevices_Parms \
{ \
	TArray<FCavrnusInputDevice> InputDevices; \
}; \
static inline void FCavrnusAvailableInputDevices_DelegateWrapper(const FScriptDelegate& CavrnusAvailableInputDevices, TArray<FCavrnusInputDevice> const& InputDevices) \
{ \
	CavrnusFunctionLibrary_eventCavrnusAvailableInputDevices_Parms Parms; \
	Parms.InputDevices=InputDevices; \
	CavrnusAvailableInputDevices.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_414_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusAvailableOutputDevices_Parms \
{ \
	TArray<FCavrnusOutputDevice> OutputDevices; \
}; \
static inline void FCavrnusAvailableOutputDevices_DelegateWrapper(const FScriptDelegate& CavrnusAvailableOutputDevices, TArray<FCavrnusOutputDevice> const& OutputDevices) \
{ \
	CavrnusFunctionLibrary_eventCavrnusAvailableOutputDevices_Parms Parms; \
	Parms.OutputDevices=OutputDevices; \
	CavrnusAvailableOutputDevices.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_425_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusAvailableVideoInputDevices_Parms \
{ \
	TArray<FCavrnusVideoInputDevice> VideoInputDevices; \
}; \
static inline void FCavrnusAvailableVideoInputDevices_DelegateWrapper(const FScriptDelegate& CavrnusAvailableVideoInputDevices, TArray<FCavrnusVideoInputDevice> const& VideoInputDevices) \
{ \
	CavrnusFunctionLibrary_eventCavrnusAvailableVideoInputDevices_Parms Parms; \
	Parms.VideoInputDevices=VideoInputDevices; \
	CavrnusAvailableVideoInputDevices.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_440_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusContentProgressFunction_Parms \
{ \
	float Progress; \
	FString Step; \
}; \
static inline void FCavrnusContentProgressFunction_DelegateWrapper(const FScriptDelegate& CavrnusContentProgressFunction, float Progress, const FString& Step) \
{ \
	CavrnusFunctionLibrary_eventCavrnusContentProgressFunction_Parms Parms; \
	Parms.Progress=Progress; \
	Parms.Step=Step; \
	CavrnusContentProgressFunction.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_441_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusContentFunction_Parms \
{ \
	TArray<uint8> bytes; \
}; \
static inline void FCavrnusContentFunction_DelegateWrapper(const FScriptDelegate& CavrnusContentFunction, TArray<uint8> const& bytes) \
{ \
	CavrnusFunctionLibrary_eventCavrnusContentFunction_Parms Parms; \
	Parms.bytes=bytes; \
	CavrnusContentFunction.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_447_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusContentFileFunction_Parms \
{ \
	FString fileDest; \
}; \
static inline void FCavrnusContentFileFunction_DelegateWrapper(const FScriptDelegate& CavrnusContentFileFunction, const FString& fileDest) \
{ \
	CavrnusFunctionLibrary_eventCavrnusContentFileFunction_Parms Parms; \
	Parms.fileDest=fileDest; \
	CavrnusContentFileFunction.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_453_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusRemoteContentFunction_Parms \
{ \
	TArray<FCavrnusRemoteContent> availableContent; \
}; \
static inline void FCavrnusRemoteContentFunction_DelegateWrapper(const FScriptDelegate& CavrnusRemoteContentFunction, TArray<FCavrnusRemoteContent> const& availableContent) \
{ \
	CavrnusFunctionLibrary_eventCavrnusRemoteContentFunction_Parms Parms; \
	Parms.availableContent=availableContent; \
	CavrnusRemoteContentFunction.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_459_DELEGATE \
struct CavrnusFunctionLibrary_eventCavrnusUploadCompleteFunction_Parms \
{ \
	FCavrnusRemoteContent uploadedContent; \
}; \
static inline void FCavrnusUploadCompleteFunction_DelegateWrapper(const FScriptDelegate& CavrnusUploadCompleteFunction, FCavrnusRemoteContent const& uploadedContent) \
{ \
	CavrnusFunctionLibrary_eventCavrnusUploadCompleteFunction_Parms Parms; \
	Parms.uploadedContent=uploadedContent; \
	CavrnusUploadCompleteFunction.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_SPARSE_DATA
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUploadContentWithTags); \
	DECLARE_FUNCTION(execUploadContent); \
	DECLARE_FUNCTION(execFetchAllUploadedContent); \
	DECLARE_FUNCTION(execFetchFileByIdToDisk); \
	DECLARE_FUNCTION(execFetchFileById); \
	DECLARE_FUNCTION(execUpdateVideoInput); \
	DECLARE_FUNCTION(execFetchVideoInputs); \
	DECLARE_FUNCTION(execUpdateAudioOutput); \
	DECLARE_FUNCTION(execFetchAudioOutputs); \
	DECLARE_FUNCTION(execUpdateAudioInput); \
	DECLARE_FUNCTION(execFetchAudioInputs); \
	DECLARE_FUNCTION(execSetLocalUserStreamingState); \
	DECLARE_FUNCTION(execSetLocalUserMutedState); \
	DECLARE_FUNCTION(execBindUserVideoFrames); \
	DECLARE_FUNCTION(execBindSpaceUsers); \
	DECLARE_FUNCTION(execGetCurrentSpaceUsers); \
	DECLARE_FUNCTION(execAwaitLocalUser); \
	DECLARE_FUNCTION(execDestroyObject); \
	DECLARE_FUNCTION(execSpawnObject); \
	DECLARE_FUNCTION(execBindSpacePolicy); \
	DECLARE_FUNCTION(execBindGlobalPolicy); \
	DECLARE_FUNCTION(execPostTransformPropertyUpdate); \
	DECLARE_FUNCTION(execBeginTransientTransformPropertyUpdate); \
	DECLARE_FUNCTION(execBindTransformPropertyValue); \
	DECLARE_FUNCTION(execGetTransformPropertyValue); \
	DECLARE_FUNCTION(execDefineTransformPropertyDefaultValue); \
	DECLARE_FUNCTION(execPostVectorPropertyUpdate); \
	DECLARE_FUNCTION(execBeginTransientVectorPropertyUpdate); \
	DECLARE_FUNCTION(execBindVectorPropertyValue); \
	DECLARE_FUNCTION(execGetVectorPropertyValue); \
	DECLARE_FUNCTION(execDefineVectorPropertyDefaultValue); \
	DECLARE_FUNCTION(execPostStringPropertyUpdate); \
	DECLARE_FUNCTION(execBeginTransientStringPropertyUpdate); \
	DECLARE_FUNCTION(execBindStringPropertyValue); \
	DECLARE_FUNCTION(execGetStringPropertyValue); \
	DECLARE_FUNCTION(execDefineStringPropertyDefaultValue); \
	DECLARE_FUNCTION(execPostFloatPropertyUpdate); \
	DECLARE_FUNCTION(execBeginTransientFloatPropertyUpdate); \
	DECLARE_FUNCTION(execBindFloatPropertyValue); \
	DECLARE_FUNCTION(execGetFloatPropertyValue); \
	DECLARE_FUNCTION(execDefineFloatPropertyDefaultValue); \
	DECLARE_FUNCTION(execPostBoolPropertyUpdate); \
	DECLARE_FUNCTION(execBeginTransientBoolPropertyUpdate); \
	DECLARE_FUNCTION(execBindBooleanPropertyValue); \
	DECLARE_FUNCTION(execGetBoolPropertyValue); \
	DECLARE_FUNCTION(execDefineBoolPropertyDefaultValue); \
	DECLARE_FUNCTION(execPostColorPropertyUpdate); \
	DECLARE_FUNCTION(execBeginTransientColorPropertyUpdate); \
	DECLARE_FUNCTION(execBindColorPropertyValue); \
	DECLARE_FUNCTION(execGetColorPropertyValue); \
	DECLARE_FUNCTION(execDefineColorPropertyDefaultValue); \
	DECLARE_FUNCTION(execExitSpace); \
	DECLARE_FUNCTION(execAwaitAnySpaceConnection); \
	DECLARE_FUNCTION(execAwaitAnySpaceBeginLoading); \
	DECLARE_FUNCTION(execJoinSpace); \
	DECLARE_FUNCTION(execIsConnectedToAnySpace); \
	DECLARE_FUNCTION(execBindJoinableSpaces); \
	DECLARE_FUNCTION(execFetchJoinableSpaces); \
	DECLARE_FUNCTION(execAwaitAuthentication); \
	DECLARE_FUNCTION(execAuthenticateAsGuest); \
	DECLARE_FUNCTION(execAuthenticateWithPassword); \
	DECLARE_FUNCTION(execIsLoggedIn); \
	DECLARE_FUNCTION(execGetCavrnusSpatialConnector); \
	DECLARE_FUNCTION(execGetCavrnusSpatialConnectorSubSystemProxy); \
	DECLARE_FUNCTION(execIsBound); \
	DECLARE_FUNCTION(execUnbind);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUploadContentWithTags); \
	DECLARE_FUNCTION(execUploadContent); \
	DECLARE_FUNCTION(execFetchAllUploadedContent); \
	DECLARE_FUNCTION(execFetchFileByIdToDisk); \
	DECLARE_FUNCTION(execFetchFileById); \
	DECLARE_FUNCTION(execUpdateVideoInput); \
	DECLARE_FUNCTION(execFetchVideoInputs); \
	DECLARE_FUNCTION(execUpdateAudioOutput); \
	DECLARE_FUNCTION(execFetchAudioOutputs); \
	DECLARE_FUNCTION(execUpdateAudioInput); \
	DECLARE_FUNCTION(execFetchAudioInputs); \
	DECLARE_FUNCTION(execSetLocalUserStreamingState); \
	DECLARE_FUNCTION(execSetLocalUserMutedState); \
	DECLARE_FUNCTION(execBindUserVideoFrames); \
	DECLARE_FUNCTION(execBindSpaceUsers); \
	DECLARE_FUNCTION(execGetCurrentSpaceUsers); \
	DECLARE_FUNCTION(execAwaitLocalUser); \
	DECLARE_FUNCTION(execDestroyObject); \
	DECLARE_FUNCTION(execSpawnObject); \
	DECLARE_FUNCTION(execBindSpacePolicy); \
	DECLARE_FUNCTION(execBindGlobalPolicy); \
	DECLARE_FUNCTION(execPostTransformPropertyUpdate); \
	DECLARE_FUNCTION(execBeginTransientTransformPropertyUpdate); \
	DECLARE_FUNCTION(execBindTransformPropertyValue); \
	DECLARE_FUNCTION(execGetTransformPropertyValue); \
	DECLARE_FUNCTION(execDefineTransformPropertyDefaultValue); \
	DECLARE_FUNCTION(execPostVectorPropertyUpdate); \
	DECLARE_FUNCTION(execBeginTransientVectorPropertyUpdate); \
	DECLARE_FUNCTION(execBindVectorPropertyValue); \
	DECLARE_FUNCTION(execGetVectorPropertyValue); \
	DECLARE_FUNCTION(execDefineVectorPropertyDefaultValue); \
	DECLARE_FUNCTION(execPostStringPropertyUpdate); \
	DECLARE_FUNCTION(execBeginTransientStringPropertyUpdate); \
	DECLARE_FUNCTION(execBindStringPropertyValue); \
	DECLARE_FUNCTION(execGetStringPropertyValue); \
	DECLARE_FUNCTION(execDefineStringPropertyDefaultValue); \
	DECLARE_FUNCTION(execPostFloatPropertyUpdate); \
	DECLARE_FUNCTION(execBeginTransientFloatPropertyUpdate); \
	DECLARE_FUNCTION(execBindFloatPropertyValue); \
	DECLARE_FUNCTION(execGetFloatPropertyValue); \
	DECLARE_FUNCTION(execDefineFloatPropertyDefaultValue); \
	DECLARE_FUNCTION(execPostBoolPropertyUpdate); \
	DECLARE_FUNCTION(execBeginTransientBoolPropertyUpdate); \
	DECLARE_FUNCTION(execBindBooleanPropertyValue); \
	DECLARE_FUNCTION(execGetBoolPropertyValue); \
	DECLARE_FUNCTION(execDefineBoolPropertyDefaultValue); \
	DECLARE_FUNCTION(execPostColorPropertyUpdate); \
	DECLARE_FUNCTION(execBeginTransientColorPropertyUpdate); \
	DECLARE_FUNCTION(execBindColorPropertyValue); \
	DECLARE_FUNCTION(execGetColorPropertyValue); \
	DECLARE_FUNCTION(execDefineColorPropertyDefaultValue); \
	DECLARE_FUNCTION(execExitSpace); \
	DECLARE_FUNCTION(execAwaitAnySpaceConnection); \
	DECLARE_FUNCTION(execAwaitAnySpaceBeginLoading); \
	DECLARE_FUNCTION(execJoinSpace); \
	DECLARE_FUNCTION(execIsConnectedToAnySpace); \
	DECLARE_FUNCTION(execBindJoinableSpaces); \
	DECLARE_FUNCTION(execFetchJoinableSpaces); \
	DECLARE_FUNCTION(execAwaitAuthentication); \
	DECLARE_FUNCTION(execAuthenticateAsGuest); \
	DECLARE_FUNCTION(execAuthenticateWithPassword); \
	DECLARE_FUNCTION(execIsLoggedIn); \
	DECLARE_FUNCTION(execGetCavrnusSpatialConnector); \
	DECLARE_FUNCTION(execGetCavrnusSpatialConnectorSubSystemProxy); \
	DECLARE_FUNCTION(execIsBound); \
	DECLARE_FUNCTION(execUnbind);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCavrnusFunctionLibrary(); \
	friend struct Z_Construct_UClass_UCavrnusFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UCavrnusFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusFunctionLibrary)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUCavrnusFunctionLibrary(); \
	friend struct Z_Construct_UClass_UCavrnusFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UCavrnusFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusFunctionLibrary)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCavrnusFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCavrnusFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusFunctionLibrary(UCavrnusFunctionLibrary&&); \
	NO_API UCavrnusFunctionLibrary(const UCavrnusFunctionLibrary&); \
public:


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCavrnusFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusFunctionLibrary(UCavrnusFunctionLibrary&&); \
	NO_API UCavrnusFunctionLibrary(const UCavrnusFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusFunctionLibrary); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCavrnusFunctionLibrary)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_40_PROLOG
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_RPC_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_INCLASS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class UCavrnusFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
