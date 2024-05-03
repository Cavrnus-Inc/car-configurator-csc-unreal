// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FCavrnusSpawnedObject;
struct FCavrnusRemoteContent;
class UObject;
 
struct FCavrnusVideoInputDevice;
struct FCavrnusOutputDevice;
struct FCavrnusInputDevice;
struct FCavrnusSpaceConnection;
struct FCavrnusUser;
struct FCavrnusBinding;
class AActor;
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

#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_157_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_182_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_207_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_232_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_257_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_282_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_303_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_322_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_408_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_409_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_415_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_421_DELEGATE \
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


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_427_DELEGATE \
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
	DECLARE_FUNCTION(execSetInputModeMix); \
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
	DECLARE_FUNCTION(execGetIfIsSpawnedObject); \
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
	DECLARE_FUNCTION(execUnbind);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFunctionLibrary_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInputModeMix); \
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
	DECLARE_FUNCTION(execGetIfIsSpawnedObject); \
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
