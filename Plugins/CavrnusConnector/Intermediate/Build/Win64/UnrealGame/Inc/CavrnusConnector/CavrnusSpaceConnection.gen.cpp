// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Types/CavrnusSpaceConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusSpaceConnection() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusSpaceConnection();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CavrnusSpaceConnection;
class UScriptStruct* FCavrnusSpaceConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CavrnusSpaceConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CavrnusSpaceConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCavrnusSpaceConnection, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("CavrnusSpaceConnection"));
	}
	return Z_Registration_Info_UScriptStruct_CavrnusSpaceConnection.OuterSingleton;
}
template<> CAVRNUSCONNECTOR_API UScriptStruct* StaticStruct<FCavrnusSpaceConnection>()
{
	return FCavrnusSpaceConnection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceConnectionId_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SpaceConnectionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserConnectionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalUserConnectionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserContainerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalUserContainerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Types/CavrnusSpaceConnection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCavrnusSpaceConnection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::NewProp_SpaceConnectionId_MetaData[] = {
		{ "Category", "Cavrnus|Spaces" },
		{ "ModuleRelativePath", "Public/Types/CavrnusSpaceConnection.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::NewProp_SpaceConnectionId = { "SpaceConnectionId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusSpaceConnection, SpaceConnectionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::NewProp_SpaceConnectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::NewProp_SpaceConnectionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::NewProp_LocalUserConnectionId_MetaData[] = {
		{ "Category", "Cavrnus|Spaces" },
		{ "ModuleRelativePath", "Public/Types/CavrnusSpaceConnection.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::NewProp_LocalUserConnectionId = { "LocalUserConnectionId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusSpaceConnection, LocalUserConnectionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::NewProp_LocalUserConnectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::NewProp_LocalUserConnectionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::NewProp_LocalUserContainerName_MetaData[] = {
		{ "Category", "Cavrnus|Spaces" },
		{ "ModuleRelativePath", "Public/Types/CavrnusSpaceConnection.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::NewProp_LocalUserContainerName = { "LocalUserContainerName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusSpaceConnection, LocalUserContainerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::NewProp_LocalUserContainerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::NewProp_LocalUserContainerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::NewProp_SpaceConnectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::NewProp_LocalUserConnectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::NewProp_LocalUserContainerName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		&NewStructOps,
		"CavrnusSpaceConnection",
		sizeof(FCavrnusSpaceConnection),
		alignof(FCavrnusSpaceConnection),
		Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCavrnusSpaceConnection()
	{
		if (!Z_Registration_Info_UScriptStruct_CavrnusSpaceConnection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CavrnusSpaceConnection.InnerSingleton, Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CavrnusSpaceConnection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusSpaceConnection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusSpaceConnection_h_Statics::ScriptStructInfo[] = {
		{ FCavrnusSpaceConnection::StaticStruct, Z_Construct_UScriptStruct_FCavrnusSpaceConnection_Statics::NewStructOps, TEXT("CavrnusSpaceConnection"), &Z_Registration_Info_UScriptStruct_CavrnusSpaceConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCavrnusSpaceConnection), 3908145014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusSpaceConnection_h_2671445911(TEXT("/Script/CavrnusConnector"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusSpaceConnection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusSpaceConnection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
