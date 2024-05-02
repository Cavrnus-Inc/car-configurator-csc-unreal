// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
 
struct FCavrnusVideoInputDevice;
struct FCavrnusOutputDevice;
struct FCavrnusInputDevice;
struct FCavrnusSpaceConnection;
struct FCavrnusUser;
struct FCavrnusBinding;
class AActor;
struct FCavrnusSpawnedObject;
class UCavrnusLiveTransformPropertyUpdate;
class UCavrnusLiveVectorPropertyUpdate;
class UCavrnusLiveStringPropertyUpdate;
class UCavrnusLiveFloatPropertyUpdate;
class UCavrnusLiveBoolPropertyUpdate;
struct FLinearColor;
class UCavrnusLiveColorPropertyUpdate;
class ACavrnusSpatialConnector;
class UCavrnusSpatialConnectorSubSystemProxy;
#ifdef CAVRNUSCONNECTOR_CavrnusFunctionLibrary_generated_h
#error "CavrnusFunctionLibrary.generated.h already included, missing '#pragma once' in CavrnusFunctionLibrary.h"
#endif
#define CAVRNUSCONNECTOR_CavrnusFunctionLibrary_generated_h

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
