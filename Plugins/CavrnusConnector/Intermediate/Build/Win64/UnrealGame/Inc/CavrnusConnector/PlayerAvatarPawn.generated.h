// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAVRNUSCONNECTOR_PlayerAvatarPawn_generated_h
#error "PlayerAvatarPawn.generated.h already included, missing '#pragma once' in PlayerAvatarPawn.h"
#endif
#define CAVRNUSCONNECTOR_PlayerAvatarPawn_generated_h

#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_31_SPARSE_DATA
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLerpMoveTo);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLerpMoveTo);


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerAvatarPawn(); \
	friend struct Z_Construct_UClass_APlayerAvatarPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerAvatarPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(APlayerAvatarPawn)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerAvatarPawn(); \
	friend struct Z_Construct_UClass_APlayerAvatarPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerAvatarPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(APlayerAvatarPawn)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerAvatarPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerAvatarPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerAvatarPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerAvatarPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerAvatarPawn(APlayerAvatarPawn&&); \
	NO_API APlayerAvatarPawn(const APlayerAvatarPawn&); \
public:


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerAvatarPawn(APlayerAvatarPawn&&); \
	NO_API APlayerAvatarPawn(const APlayerAvatarPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerAvatarPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerAvatarPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerAvatarPawn)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_28_PROLOG
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_31_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_31_RPC_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_31_INCLASS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_31_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_31_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class APlayerAvatarPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h


#define FOREACH_ENUM_EMULTITOUCHSTATE(op) \
	op(EMultiTouchState::INDETERMINATE) \
	op(EMultiTouchState::ZOOM) \
	op(EMultiTouchState::SWIPE) \
	op(EMultiTouchState::MOVE) 

enum class EMultiTouchState : uint8;
template<> CAVRNUSCONNECTOR_API UEnum* StaticEnum<EMultiTouchState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
