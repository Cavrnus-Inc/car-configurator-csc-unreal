// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ANoMeshObject;
class UCanvas;
struct FCavrnusSpaceConnection;
#ifdef CAVRNUSCONNECTOR_NoMeshObject_generated_h
#error "NoMeshObject.generated.h already included, missing '#pragma once' in NoMeshObject.h"
#endif
#define CAVRNUSCONNECTOR_NoMeshObject_generated_h

#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_15_DELEGATE \
struct _Script_CavrnusConnector_eventOnContentCreated_Parms \
{ \
	ANoMeshObject* Actor; \
	FString ContentPath; \
}; \
static inline void FOnContentCreated_DelegateWrapper(const FScriptDelegate& OnContentCreated, ANoMeshObject* Actor, const FString& ContentPath) \
{ \
	_Script_CavrnusConnector_eventOnContentCreated_Parms Parms; \
	Parms.Actor=Actor; \
	Parms.ContentPath=ContentPath; \
	OnContentCreated.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_51_SPARSE_DATA
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMainRenderTargetUpdated); \
	DECLARE_FUNCTION(execSpaceConnected); \
	DECLARE_FUNCTION(execCreateContent); \
	DECLARE_FUNCTION(execAdjustAspectRatio);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMainRenderTargetUpdated); \
	DECLARE_FUNCTION(execSpaceConnected); \
	DECLARE_FUNCTION(execCreateContent); \
	DECLARE_FUNCTION(execAdjustAspectRatio);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANoMeshObject(); \
	friend struct Z_Construct_UClass_ANoMeshObject_Statics; \
public: \
	DECLARE_CLASS(ANoMeshObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(ANoMeshObject)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_51_INCLASS \
private: \
	static void StaticRegisterNativesANoMeshObject(); \
	friend struct Z_Construct_UClass_ANoMeshObject_Statics; \
public: \
	DECLARE_CLASS(ANoMeshObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(ANoMeshObject)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANoMeshObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANoMeshObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANoMeshObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANoMeshObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANoMeshObject(ANoMeshObject&&); \
	NO_API ANoMeshObject(const ANoMeshObject&); \
public:


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANoMeshObject(ANoMeshObject&&); \
	NO_API ANoMeshObject(const ANoMeshObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANoMeshObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANoMeshObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANoMeshObject)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_48_PROLOG
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_51_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_51_RPC_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_51_INCLASS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_51_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_51_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class ANoMeshObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h


#define FOREACH_ENUM_ENOMESHOBJECTTYPE(op) \
	op(ENoMeshObjectType::None) \
	op(ENoMeshObjectType::ContentId) \
	op(ENoMeshObjectType::Whiteboard) \
	op(ENoMeshObjectType::StreamBoardOwner) \
	op(ENoMeshObjectType::VideoBoard) \
	op(ENoMeshObjectType::ImageBoard) \
	op(ENoMeshObjectType::UserBoard) \
	op(ENoMeshObjectType::ObjectProgress) \
	op(ENoMeshObjectType::BoardProgress) \
	op(ENoMeshObjectType::Textboard) \
	op(ENoMeshObjectType::Script) \
	op(ENoMeshObjectType::ArTracker) \
	op(ENoMeshObjectType::PDFBoard) \
	op(ENoMeshObjectType::CustomContentID) 

enum class ENoMeshObjectType;
template<> CAVRNUSCONNECTOR_API UEnum* StaticEnum<ENoMeshObjectType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
