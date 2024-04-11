// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Types/CavrnusUser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusUser() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusUser();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CavrnusUser;
class UScriptStruct* FCavrnusUser::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CavrnusUser.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CavrnusUser.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCavrnusUser, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("CavrnusUser"));
	}
	return Z_Registration_Info_UScriptStruct_CavrnusUser.OuterSingleton;
}
template<> CAVRNUSCONNECTOR_API UScriptStruct* StaticStruct<FCavrnusUser>()
{
	return FCavrnusUser::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCavrnusUser_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsLocalUser_MetaData[];
#endif
		static void NewProp_IsLocalUser_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLocalUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertiesContainerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertiesContainerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserConnectionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserConnectionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoFrameTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VideoFrameTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusUser_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Types/CavrnusUser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCavrnusUser>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_IsLocalUser_MetaData[] = {
		{ "Category", "Cavrnus|Users" },
		{ "ModuleRelativePath", "Public/Types/CavrnusUser.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_IsLocalUser_SetBit(void* Obj)
	{
		((FCavrnusUser*)Obj)->IsLocalUser = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_IsLocalUser = { "IsLocalUser", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCavrnusUser), &Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_IsLocalUser_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_IsLocalUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_IsLocalUser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_PropertiesContainerName_MetaData[] = {
		{ "Category", "Cavrnus|Users" },
		{ "ModuleRelativePath", "Public/Types/CavrnusUser.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_PropertiesContainerName = { "PropertiesContainerName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusUser, PropertiesContainerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_PropertiesContainerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_PropertiesContainerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_UserConnectionId_MetaData[] = {
		{ "Category", "Cavrnus|Users" },
		{ "ModuleRelativePath", "Public/Types/CavrnusUser.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_UserConnectionId = { "UserConnectionId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusUser, UserConnectionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_UserConnectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_UserConnectionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_VideoFrameTexture_MetaData[] = {
		{ "Category", "Cavrnus|Users" },
		{ "ModuleRelativePath", "Public/Types/CavrnusUser.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_VideoFrameTexture = { "VideoFrameTexture", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusUser, VideoFrameTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_VideoFrameTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_VideoFrameTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCavrnusUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_IsLocalUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_PropertiesContainerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_UserConnectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewProp_VideoFrameTexture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCavrnusUser_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		&NewStructOps,
		"CavrnusUser",
		sizeof(FCavrnusUser),
		alignof(FCavrnusUser),
		Z_Construct_UScriptStruct_FCavrnusUser_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusUser_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusUser_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusUser_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCavrnusUser()
	{
		if (!Z_Registration_Info_UScriptStruct_CavrnusUser.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CavrnusUser.InnerSingleton, Z_Construct_UScriptStruct_FCavrnusUser_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CavrnusUser.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusUser_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusUser_h_Statics::ScriptStructInfo[] = {
		{ FCavrnusUser::StaticStruct, Z_Construct_UScriptStruct_FCavrnusUser_Statics::NewStructOps, TEXT("CavrnusUser"), &Z_Registration_Info_UScriptStruct_CavrnusUser, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCavrnusUser), 3947004159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusUser_h_1841819673(TEXT("/Script/CavrnusConnector"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusUser_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusUser_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
