// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class AController;
class UCavrnusUIManager;
class UPDFManager;
class USpawnedObjectsManager;
class UCavrnusAvatarManager;
struct FCavrnusSpaceConnection;
struct FCavrnusAuthentication;
class ACavrnusSpatialConnector;
class UCavrnusSpatialConnectorSubSystemProxy;
#ifdef CAVRNUSCONNECTOR_CavrnusSpatialConnectorSubSystem_generated_h
#error "CavrnusSpatialConnectorSubSystem.generated.h already included, missing '#pragma once' in CavrnusSpatialConnectorSubSystem.h"
#endif
#define CAVRNUSCONNECTOR_CavrnusSpatialConnectorSubSystem_generated_h

#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_23_SPARSE_DATA
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAttachLocalUserComponentToPawn); \
	DECLARE_FUNCTION(execOnPossessedPawnChanged); \
	DECLARE_FUNCTION(execOnPawnControllerChanged); \
	DECLARE_FUNCTION(execGetUIManager); \
	DECLARE_FUNCTION(execGetPDFManager); \
	DECLARE_FUNCTION(execGetSpawnedObjectsManager); \
	DECLARE_FUNCTION(execGetAvatarManager); \
	DECLARE_FUNCTION(execOnSpaceConnectionFailure); \
	DECLARE_FUNCTION(execOnSpaceConnectionSuccess); \
	DECLARE_FUNCTION(execOnAuthFailure); \
	DECLARE_FUNCTION(execOnAuthSuccess); \
	DECLARE_FUNCTION(execGetCavrnusSpatialConnector);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttachLocalUserComponentToPawn); \
	DECLARE_FUNCTION(execOnPossessedPawnChanged); \
	DECLARE_FUNCTION(execOnPawnControllerChanged); \
	DECLARE_FUNCTION(execGetUIManager); \
	DECLARE_FUNCTION(execGetPDFManager); \
	DECLARE_FUNCTION(execGetSpawnedObjectsManager); \
	DECLARE_FUNCTION(execGetAvatarManager); \
	DECLARE_FUNCTION(execOnSpaceConnectionFailure); \
	DECLARE_FUNCTION(execOnSpaceConnectionSuccess); \
	DECLARE_FUNCTION(execOnAuthFailure); \
	DECLARE_FUNCTION(execOnAuthSuccess); \
	DECLARE_FUNCTION(execGetCavrnusSpatialConnector);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCavrnusSpatialConnectorSubSystemProxy(); \
	friend struct Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics; \
public: \
	DECLARE_CLASS(UCavrnusSpatialConnectorSubSystemProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusSpatialConnectorSubSystemProxy)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCavrnusSpatialConnectorSubSystemProxy(); \
	friend struct Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics; \
public: \
	DECLARE_CLASS(UCavrnusSpatialConnectorSubSystemProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusSpatialConnectorSubSystemProxy)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCavrnusSpatialConnectorSubSystemProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCavrnusSpatialConnectorSubSystemProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusSpatialConnectorSubSystemProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusSpatialConnectorSubSystemProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusSpatialConnectorSubSystemProxy(UCavrnusSpatialConnectorSubSystemProxy&&); \
	NO_API UCavrnusSpatialConnectorSubSystemProxy(const UCavrnusSpatialConnectorSubSystemProxy&); \
public:


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusSpatialConnectorSubSystemProxy(UCavrnusSpatialConnectorSubSystemProxy&&); \
	NO_API UCavrnusSpatialConnectorSubSystemProxy(const UCavrnusSpatialConnectorSubSystemProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusSpatialConnectorSubSystemProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusSpatialConnectorSubSystemProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCavrnusSpatialConnectorSubSystemProxy)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_20_PROLOG
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_23_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_23_RPC_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_23_INCLASS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_23_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class UCavrnusSpatialConnectorSubSystemProxy>();

#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_128_SPARSE_DATA
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_128_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSystemProxy);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSystemProxy);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_128_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCavrnusSpatialConnectorSubSystem(); \
	friend struct Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics; \
public: \
	DECLARE_CLASS(UCavrnusSpatialConnectorSubSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusSpatialConnectorSubSystem)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_128_INCLASS \
private: \
	static void StaticRegisterNativesUCavrnusSpatialConnectorSubSystem(); \
	friend struct Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics; \
public: \
	DECLARE_CLASS(UCavrnusSpatialConnectorSubSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusSpatialConnectorSubSystem)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_128_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCavrnusSpatialConnectorSubSystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCavrnusSpatialConnectorSubSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusSpatialConnectorSubSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusSpatialConnectorSubSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusSpatialConnectorSubSystem(UCavrnusSpatialConnectorSubSystem&&); \
	NO_API UCavrnusSpatialConnectorSubSystem(const UCavrnusSpatialConnectorSubSystem&); \
public:


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_128_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusSpatialConnectorSubSystem(UCavrnusSpatialConnectorSubSystem&&); \
	NO_API UCavrnusSpatialConnectorSubSystem(const UCavrnusSpatialConnectorSubSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusSpatialConnectorSubSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusSpatialConnectorSubSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCavrnusSpatialConnectorSubSystem)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_125_PROLOG
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_128_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_128_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_128_RPC_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_128_INCLASS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_128_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_128_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_128_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_128_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class UCavrnusSpatialConnectorSubSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
