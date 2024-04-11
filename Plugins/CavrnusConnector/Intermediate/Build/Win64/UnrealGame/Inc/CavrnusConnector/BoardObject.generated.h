// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidgetComponent;
#ifdef CAVRNUSCONNECTOR_BoardObject_generated_h
#error "BoardObject.generated.h already included, missing '#pragma once' in BoardObject.h"
#endif
#define CAVRNUSCONNECTOR_BoardObject_generated_h

#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_40_SPARSE_DATA
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleBoardHandleCollisions); \
	DECLARE_FUNCTION(execToggleBoardCollisions); \
	DECLARE_FUNCTION(execIsFrameVisible); \
	DECLARE_FUNCTION(execToggleBoardFrame); \
	DECLARE_FUNCTION(execRayCastOnToBoard);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleBoardHandleCollisions); \
	DECLARE_FUNCTION(execToggleBoardCollisions); \
	DECLARE_FUNCTION(execIsFrameVisible); \
	DECLARE_FUNCTION(execToggleBoardFrame); \
	DECLARE_FUNCTION(execRayCastOnToBoard);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoardObject(); \
	friend struct Z_Construct_UClass_ABoardObject_Statics; \
public: \
	DECLARE_CLASS(ABoardObject, ANoMeshObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(ABoardObject)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_40_INCLASS \
private: \
	static void StaticRegisterNativesABoardObject(); \
	friend struct Z_Construct_UClass_ABoardObject_Statics; \
public: \
	DECLARE_CLASS(ABoardObject, ANoMeshObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(ABoardObject)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoardObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoardObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoardObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoardObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoardObject(ABoardObject&&); \
	NO_API ABoardObject(const ABoardObject&); \
public:


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoardObject(ABoardObject&&); \
	NO_API ABoardObject(const ABoardObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoardObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoardObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoardObject)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_37_PROLOG
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_40_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_40_RPC_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_40_INCLASS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_40_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_40_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class ABoardObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h


#define FOREACH_ENUM_ENOMESHWIDGETTYPE(op) \
	op(ENomeshWidgetType::ActionBar) \
	op(ENomeshWidgetType::LeftHandle) \
	op(ENomeshWidgetType::RightHandle) \
	op(ENomeshWidgetType::BottomHandle) \
	op(ENomeshWidgetType::HeaderBar) 

enum class ENomeshWidgetType : uint8;
template<> CAVRNUSCONNECTOR_API UEnum* StaticEnum<ENomeshWidgetType>();

#define FOREACH_ENUM_EPROPERTYEVENTTYPE(op) \
	op(EPropertyEventType::Transient) \
	op(EPropertyEventType::Final) \
	op(EPropertyEventType::Cancel) 

enum class EPropertyEventType : uint8;
template<> CAVRNUSCONNECTOR_API UEnum* StaticEnum<EPropertyEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
