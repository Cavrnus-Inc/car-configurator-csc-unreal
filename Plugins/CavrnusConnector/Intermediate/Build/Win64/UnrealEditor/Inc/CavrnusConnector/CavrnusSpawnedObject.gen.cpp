// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Types/CavrnusSpawnedObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusSpawnedObject() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusSpawnedObject();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusSpaceConnection();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CavrnusSpawnedObject;
class UScriptStruct* FCavrnusSpawnedObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CavrnusSpawnedObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CavrnusSpawnedObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCavrnusSpawnedObject, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("CavrnusSpawnedObject"));
	}
	return Z_Registration_Info_UScriptStruct_CavrnusSpawnedObject.OuterSingleton;
}
template<> CAVRNUSCONNECTOR_API UScriptStruct* StaticStruct<FCavrnusSpawnedObject>()
{
	return FCavrnusSpawnedObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceConnection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertiesContainerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertiesContainerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreationOpId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CreationOpId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActorInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActorInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* @brief Structure to hold information about a spawned object in a Cavrnus space.\n*\n* The FCavrnusSpawnedObject structure contains fields representing the state and identity of a spawned object in a Cavrnus space.\n*/" },
		{ "ModuleRelativePath", "Public/Types/CavrnusSpawnedObject.h" },
		{ "ToolTip", "@brief Structure to hold information about a spawned object in a Cavrnus space.\n\nThe FCavrnusSpawnedObject structure contains fields representing the state and identity of a spawned object in a Cavrnus space." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCavrnusSpawnedObject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_SpaceConnection_MetaData[] = {
		{ "Category", "Cavrnus|Objects" },
		{ "Comment", "/** The connection to the space where this object is spawned. */" },
		{ "ModuleRelativePath", "Public/Types/CavrnusSpawnedObject.h" },
		{ "ToolTip", "The connection to the space where this object is spawned." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_SpaceConnection = { "SpaceConnection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusSpawnedObject, SpaceConnection), Z_Construct_UScriptStruct_FCavrnusSpaceConnection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_SpaceConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_SpaceConnection_MetaData)) }; // 423510165
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_PropertiesContainerName_MetaData[] = {
		{ "Category", "Cavrnus|Objects" },
		{ "Comment", "/** The name of the properties container associated with this object instance. */" },
		{ "ModuleRelativePath", "Public/Types/CavrnusSpawnedObject.h" },
		{ "ToolTip", "The name of the properties container associated with this object instance." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_PropertiesContainerName = { "PropertiesContainerName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusSpawnedObject, PropertiesContainerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_PropertiesContainerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_PropertiesContainerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_CreationOpId_MetaData[] = {
		{ "Category", "Cavrnus|Objects" },
		{ "Comment", "/** The unique ID of the operation that created this object instance. */" },
		{ "ModuleRelativePath", "Public/Types/CavrnusSpawnedObject.h" },
		{ "ToolTip", "The unique ID of the operation that created this object instance." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_CreationOpId = { "CreationOpId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusSpawnedObject, CreationOpId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_CreationOpId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_CreationOpId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_SpawnedActorInstance_MetaData[] = {
		{ "Category", "Cavrnus|Objects" },
		{ "Comment", "/** The Actor instance corresponding to this creation. */" },
		{ "ModuleRelativePath", "Public/Types/CavrnusSpawnedObject.h" },
		{ "ToolTip", "The Actor instance corresponding to this creation." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_SpawnedActorInstance = { "SpawnedActorInstance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusSpawnedObject, SpawnedActorInstance), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_SpawnedActorInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_SpawnedActorInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_SpaceConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_PropertiesContainerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_CreationOpId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewProp_SpawnedActorInstance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		&NewStructOps,
		"CavrnusSpawnedObject",
		sizeof(FCavrnusSpawnedObject),
		alignof(FCavrnusSpawnedObject),
		Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCavrnusSpawnedObject()
	{
		if (!Z_Registration_Info_UScriptStruct_CavrnusSpawnedObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CavrnusSpawnedObject.InnerSingleton, Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CavrnusSpawnedObject.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusSpawnedObject_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusSpawnedObject_h_Statics::ScriptStructInfo[] = {
		{ FCavrnusSpawnedObject::StaticStruct, Z_Construct_UScriptStruct_FCavrnusSpawnedObject_Statics::NewStructOps, TEXT("CavrnusSpawnedObject"), &Z_Registration_Info_UScriptStruct_CavrnusSpawnedObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCavrnusSpawnedObject), 2128721561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusSpawnedObject_h_283647185(TEXT("/Script/CavrnusConnector"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusSpawnedObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusSpawnedObject_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
