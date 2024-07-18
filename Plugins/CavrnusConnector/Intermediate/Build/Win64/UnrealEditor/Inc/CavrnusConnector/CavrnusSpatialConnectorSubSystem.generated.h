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
struct FCavrnusSpaceConnection;
struct FCavrnusAuthentication;
class ACavrnusSpatialConnector;
class UCavrnusSpatialConnectorSubSystemProxy;
#ifdef CAVRNUSCONNECTOR_CavrnusSpatialConnectorSubSystem_generated_h
#error "CavrnusSpatialConnectorSubSystem.generated.h already included, missing '#pragma once' in CavrnusSpatialConnectorSubSystem.h"
#endif
#define CAVRNUSCONNECTOR_CavrnusSpatialConnectorSubSystem_generated_h

#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_31_SPARSE_DATA
#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupLocalUserPawn); \
	DECLARE_FUNCTION(execOnPossessedPawnChanged); \
	DECLARE_FUNCTION(execOnPawnControllerChanged); \
	DECLARE_FUNCTION(execOnSpaceConnectionFailure); \
	DECLARE_FUNCTION(execOnSpaceConnectionSuccess); \
	DECLARE_FUNCTION(execOnAuthFailure); \
	DECLARE_FUNCTION(execOnAuthSuccess); \
	DECLARE_FUNCTION(execGetCavrnusSpatialConnector);


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupLocalUserPawn); \
	DECLARE_FUNCTION(execOnPossessedPawnChanged); \
	DECLARE_FUNCTION(execOnPawnControllerChanged); \
	DECLARE_FUNCTION(execOnSpaceConnectionFailure); \
	DECLARE_FUNCTION(execOnSpaceConnectionSuccess); \
	DECLARE_FUNCTION(execOnAuthFailure); \
	DECLARE_FUNCTION(execOnAuthSuccess); \
	DECLARE_FUNCTION(execGetCavrnusSpatialConnector);


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCavrnusSpatialConnectorSubSystemProxy(); \
	friend struct Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics; \
public: \
	DECLARE_CLASS(UCavrnusSpatialConnectorSubSystemProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusSpatialConnectorSubSystemProxy)


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUCavrnusSpatialConnectorSubSystemProxy(); \
	friend struct Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics; \
public: \
	DECLARE_CLASS(UCavrnusSpatialConnectorSubSystemProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusSpatialConnectorSubSystemProxy)


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_31_STANDARD_CONSTRUCTORS \
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


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusSpatialConnectorSubSystemProxy(UCavrnusSpatialConnectorSubSystemProxy&&); \
	NO_API UCavrnusSpatialConnectorSubSystemProxy(const UCavrnusSpatialConnectorSubSystemProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusSpatialConnectorSubSystemProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusSpatialConnectorSubSystemProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCavrnusSpatialConnectorSubSystemProxy)


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_28_PROLOG
#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_31_SPARSE_DATA \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_31_RPC_WRAPPERS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_31_INCLASS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_31_SPARSE_DATA \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_31_INCLASS_NO_PURE_DECLS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class UCavrnusSpatialConnectorSubSystemProxy>();

#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_274_SPARSE_DATA
#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_274_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSystemProxy);


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_274_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSystemProxy);


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_274_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCavrnusSpatialConnectorSubSystem(); \
	friend struct Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics; \
public: \
	DECLARE_CLASS(UCavrnusSpatialConnectorSubSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusSpatialConnectorSubSystem)


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_274_INCLASS \
private: \
	static void StaticRegisterNativesUCavrnusSpatialConnectorSubSystem(); \
	friend struct Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics; \
public: \
	DECLARE_CLASS(UCavrnusSpatialConnectorSubSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(UCavrnusSpatialConnectorSubSystem)


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_274_STANDARD_CONSTRUCTORS \
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


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_274_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCavrnusSpatialConnectorSubSystem(UCavrnusSpatialConnectorSubSystem&&); \
	NO_API UCavrnusSpatialConnectorSubSystem(const UCavrnusSpatialConnectorSubSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCavrnusSpatialConnectorSubSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCavrnusSpatialConnectorSubSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCavrnusSpatialConnectorSubSystem)


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_271_PROLOG
#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_274_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_274_SPARSE_DATA \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_274_RPC_WRAPPERS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_274_INCLASS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_274_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_274_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_274_SPARSE_DATA \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_274_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_274_INCLASS_NO_PURE_DECLS \
	FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_274_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class UCavrnusSpatialConnectorSubSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
