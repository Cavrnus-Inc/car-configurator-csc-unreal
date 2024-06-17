// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAVRNUSCONNECTOR_CavrnusSpatialConnector_generated_h
#error "CavrnusSpatialConnector.generated.h already included, missing '#pragma once' in CavrnusSpatialConnector.h"
#endif
#define CAVRNUSCONNECTOR_CavrnusSpatialConnector_generated_h

#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_52_SPARSE_DATA
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_52_RPC_WRAPPERS
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_52_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACavrnusSpatialConnector(); \
	friend struct Z_Construct_UClass_ACavrnusSpatialConnector_Statics; \
public: \
	DECLARE_CLASS(ACavrnusSpatialConnector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(ACavrnusSpatialConnector)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_52_INCLASS \
private: \
	static void StaticRegisterNativesACavrnusSpatialConnector(); \
	friend struct Z_Construct_UClass_ACavrnusSpatialConnector_Statics; \
public: \
	DECLARE_CLASS(ACavrnusSpatialConnector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CavrnusConnector"), NO_API) \
	DECLARE_SERIALIZER(ACavrnusSpatialConnector)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACavrnusSpatialConnector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACavrnusSpatialConnector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACavrnusSpatialConnector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACavrnusSpatialConnector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACavrnusSpatialConnector(ACavrnusSpatialConnector&&); \
	NO_API ACavrnusSpatialConnector(const ACavrnusSpatialConnector&); \
public:


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACavrnusSpatialConnector(ACavrnusSpatialConnector&&); \
	NO_API ACavrnusSpatialConnector(const ACavrnusSpatialConnector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACavrnusSpatialConnector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACavrnusSpatialConnector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACavrnusSpatialConnector)


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_49_PROLOG
#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_52_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_52_RPC_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_52_INCLASS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_52_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_52_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAVRNUSCONNECTOR_API UClass* StaticClass<class ACavrnusSpatialConnector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h


#define FOREACH_ENUM_ECAVRNUSAUTHMETHOD(op) \
	op(ECavrnusAuthMethod::None) \
	op(ECavrnusAuthMethod::JoinAsMember) \
	op(ECavrnusAuthMethod::JoinAsGuest) 

enum class ECavrnusAuthMethod;
template<> CAVRNUSCONNECTOR_API UEnum* StaticEnum<ECavrnusAuthMethod>();

#define FOREACH_ENUM_ECAVRNUSMEMBERLOGINMETHOD(op) \
	op(ECavrnusMemberLoginMethod::None) \
	op(ECavrnusMemberLoginMethod::EnterMemberLoginCredentials) \
	op(ECavrnusMemberLoginMethod::PromptMemberToLogin) 

enum class ECavrnusMemberLoginMethod;
template<> CAVRNUSCONNECTOR_API UEnum* StaticEnum<ECavrnusMemberLoginMethod>();

#define FOREACH_ENUM_ECAVRNUSGUESTLOGINMETHOD(op) \
	op(ECavrnusGuestLoginMethod::None) \
	op(ECavrnusGuestLoginMethod::EnterNameBelow) \
	op(ECavrnusGuestLoginMethod::PromptToEnterName) 

enum class ECavrnusGuestLoginMethod;
template<> CAVRNUSCONNECTOR_API UEnum* StaticEnum<ECavrnusGuestLoginMethod>();

#define FOREACH_ENUM_ECAVRNUSSPACEJOINMETHOD(op) \
	op(ECavrnusSpaceJoinMethod::None) \
	op(ECavrnusSpaceJoinMethod::EnterSpaceId) \
	op(ECavrnusSpaceJoinMethod::SpacesList) 

enum class ECavrnusSpaceJoinMethod;
template<> CAVRNUSCONNECTOR_API UEnum* StaticEnum<ECavrnusSpaceJoinMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
