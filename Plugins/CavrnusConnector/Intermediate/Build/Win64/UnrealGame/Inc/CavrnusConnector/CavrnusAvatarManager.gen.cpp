// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/CavrnusAvatarManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusAvatarManager() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusAvatarManager_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusAvatarManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusUser();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusSpaceConnection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusAvatarManager::execSpawnNewAvatar)
	{
		P_GET_OBJECT(UClass,Z_Param_AvatarClass);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertiesContainerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->SpawnNewAvatar(Z_Param_AvatarClass,Z_Param_Location,Z_Param_Rotation,Z_Param_PropertiesContainerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusAvatarManager::execSwapAvatars)
	{
		P_GET_STRUCT(FCavrnusUser,Z_Param_User);
		P_GET_OBJECT(UClass,Z_Param_AvatarClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapAvatars(Z_Param_User,Z_Param_AvatarClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusAvatarManager::execOnUserLeft)
	{
		P_GET_STRUCT(FCavrnusUser,Z_Param_User);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUserLeft(Z_Param_User);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusAvatarManager::execOnUserJoined)
	{
		P_GET_STRUCT(FCavrnusUser,Z_Param_User);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUserJoined(Z_Param_User);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusAvatarManager::execSpaceConnected)
	{
		P_GET_STRUCT(FCavrnusSpaceConnection,Z_Param_SpaceConn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpaceConnected(Z_Param_SpaceConn);
		P_NATIVE_END;
	}
	void UCavrnusAvatarManager::StaticRegisterNativesUCavrnusAvatarManager()
	{
		UClass* Class = UCavrnusAvatarManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnUserJoined", &UCavrnusAvatarManager::execOnUserJoined },
			{ "OnUserLeft", &UCavrnusAvatarManager::execOnUserLeft },
			{ "SpaceConnected", &UCavrnusAvatarManager::execSpaceConnected },
			{ "SpawnNewAvatar", &UCavrnusAvatarManager::execSpawnNewAvatar },
			{ "SwapAvatars", &UCavrnusAvatarManager::execSwapAvatars },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusAvatarManager_OnUserJoined_Statics
	{
		struct CavrnusAvatarManager_eventOnUserJoined_Parms
		{
			FCavrnusUser User;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_User;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusAvatarManager_OnUserJoined_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusAvatarManager_eventOnUserJoined_Parms, User), Z_Construct_UScriptStruct_FCavrnusUser, METADATA_PARAMS(nullptr, 0) }; // 3947004159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusAvatarManager_OnUserJoined_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusAvatarManager_OnUserJoined_Statics::NewProp_User,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusAvatarManager_OnUserJoined_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusAvatarManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusAvatarManager_OnUserJoined_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusAvatarManager, nullptr, "OnUserJoined", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusAvatarManager_OnUserJoined_Statics::CavrnusAvatarManager_eventOnUserJoined_Parms), Z_Construct_UFunction_UCavrnusAvatarManager_OnUserJoined_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusAvatarManager_OnUserJoined_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusAvatarManager_OnUserJoined_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusAvatarManager_OnUserJoined_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusAvatarManager_OnUserJoined()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusAvatarManager_OnUserJoined_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusAvatarManager_OnUserLeft_Statics
	{
		struct CavrnusAvatarManager_eventOnUserLeft_Parms
		{
			FCavrnusUser User;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_User;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusAvatarManager_OnUserLeft_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusAvatarManager_eventOnUserLeft_Parms, User), Z_Construct_UScriptStruct_FCavrnusUser, METADATA_PARAMS(nullptr, 0) }; // 3947004159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusAvatarManager_OnUserLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusAvatarManager_OnUserLeft_Statics::NewProp_User,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusAvatarManager_OnUserLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusAvatarManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusAvatarManager_OnUserLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusAvatarManager, nullptr, "OnUserLeft", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusAvatarManager_OnUserLeft_Statics::CavrnusAvatarManager_eventOnUserLeft_Parms), Z_Construct_UFunction_UCavrnusAvatarManager_OnUserLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusAvatarManager_OnUserLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusAvatarManager_OnUserLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusAvatarManager_OnUserLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusAvatarManager_OnUserLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusAvatarManager_OnUserLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusAvatarManager_SpaceConnected_Statics
	{
		struct CavrnusAvatarManager_eventSpaceConnected_Parms
		{
			FCavrnusSpaceConnection SpaceConn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceConn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusAvatarManager_SpaceConnected_Statics::NewProp_SpaceConn = { "SpaceConn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusAvatarManager_eventSpaceConnected_Parms, SpaceConn), Z_Construct_UScriptStruct_FCavrnusSpaceConnection, METADATA_PARAMS(nullptr, 0) }; // 3908145014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusAvatarManager_SpaceConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusAvatarManager_SpaceConnected_Statics::NewProp_SpaceConn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusAvatarManager_SpaceConnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusAvatarManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusAvatarManager_SpaceConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusAvatarManager, nullptr, "SpaceConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusAvatarManager_SpaceConnected_Statics::CavrnusAvatarManager_eventSpaceConnected_Parms), Z_Construct_UFunction_UCavrnusAvatarManager_SpaceConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusAvatarManager_SpaceConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusAvatarManager_SpaceConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusAvatarManager_SpaceConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusAvatarManager_SpaceConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusAvatarManager_SpaceConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics
	{
		struct CavrnusAvatarManager_eventSpawnNewAvatar_Parms
		{
			TSubclassOf<AActor>  AvatarClass;
			FVector Location;
			FRotator Rotation;
			FString PropertiesContainerName;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AvatarClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertiesContainerName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::NewProp_AvatarClass = { "AvatarClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusAvatarManager_eventSpawnNewAvatar_Parms, AvatarClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusAvatarManager_eventSpawnNewAvatar_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusAvatarManager_eventSpawnNewAvatar_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::NewProp_PropertiesContainerName = { "PropertiesContainerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusAvatarManager_eventSpawnNewAvatar_Parms, PropertiesContainerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusAvatarManager_eventSpawnNewAvatar_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::NewProp_AvatarClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::NewProp_PropertiesContainerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusAvatarManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusAvatarManager, nullptr, "SpawnNewAvatar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::CavrnusAvatarManager_eventSpawnNewAvatar_Parms), Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusAvatarManager_SwapAvatars_Statics
	{
		struct CavrnusAvatarManager_eventSwapAvatars_Parms
		{
			FCavrnusUser User;
			TSubclassOf<AActor>  AvatarClass;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_User;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AvatarClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusAvatarManager_SwapAvatars_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusAvatarManager_eventSwapAvatars_Parms, User), Z_Construct_UScriptStruct_FCavrnusUser, METADATA_PARAMS(nullptr, 0) }; // 3947004159
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCavrnusAvatarManager_SwapAvatars_Statics::NewProp_AvatarClass = { "AvatarClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusAvatarManager_eventSwapAvatars_Parms, AvatarClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusAvatarManager_SwapAvatars_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusAvatarManager_SwapAvatars_Statics::NewProp_User,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusAvatarManager_SwapAvatars_Statics::NewProp_AvatarClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusAvatarManager_SwapAvatars_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusAvatarManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusAvatarManager_SwapAvatars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusAvatarManager, nullptr, "SwapAvatars", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusAvatarManager_SwapAvatars_Statics::CavrnusAvatarManager_eventSwapAvatars_Parms), Z_Construct_UFunction_UCavrnusAvatarManager_SwapAvatars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusAvatarManager_SwapAvatars_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusAvatarManager_SwapAvatars_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusAvatarManager_SwapAvatars_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusAvatarManager_SwapAvatars()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusAvatarManager_SwapAvatars_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusAvatarManager);
	UClass* Z_Construct_UClass_UCavrnusAvatarManager_NoRegister()
	{
		return UCavrnusAvatarManager::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusAvatarManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusAvatarManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusAvatarManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusAvatarManager_OnUserJoined, "OnUserJoined" }, // 2448638811
		{ &Z_Construct_UFunction_UCavrnusAvatarManager_OnUserLeft, "OnUserLeft" }, // 828916833
		{ &Z_Construct_UFunction_UCavrnusAvatarManager_SpaceConnected, "SpaceConnected" }, // 1849814919
		{ &Z_Construct_UFunction_UCavrnusAvatarManager_SpawnNewAvatar, "SpawnNewAvatar" }, // 1760594883
		{ &Z_Construct_UFunction_UCavrnusAvatarManager_SwapAvatars, "SwapAvatars" }, // 4030956449
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusAvatarManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Class definition\n" },
		{ "IncludePath", "CavrnusAvatarManager.h" },
		{ "ModuleRelativePath", "Public/CavrnusAvatarManager.h" },
		{ "ToolTip", "Class definition" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusAvatarManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusAvatarManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusAvatarManager_Statics::ClassParams = {
		&UCavrnusAvatarManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusAvatarManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusAvatarManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusAvatarManager()
	{
		if (!Z_Registration_Info_UClass_UCavrnusAvatarManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusAvatarManager.OuterSingleton, Z_Construct_UClass_UCavrnusAvatarManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusAvatarManager.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusAvatarManager>()
	{
		return UCavrnusAvatarManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusAvatarManager);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusAvatarManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusAvatarManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusAvatarManager, UCavrnusAvatarManager::StaticClass, TEXT("UCavrnusAvatarManager"), &Z_Registration_Info_UClass_UCavrnusAvatarManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusAvatarManager), 3920482742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusAvatarManager_h_3477174337(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusAvatarManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusAvatarManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
