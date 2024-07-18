// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Types/CavrnusRemoteContent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusRemoteContent() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusRemoteContent();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CavrnusRemoteContent;
class UScriptStruct* FCavrnusRemoteContent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CavrnusRemoteContent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CavrnusRemoteContent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCavrnusRemoteContent, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("CavrnusRemoteContent"));
	}
	return Z_Registration_Info_UScriptStruct_CavrnusRemoteContent.OuterSingleton;
}
template<> CAVRNUSCONNECTOR_API UScriptStruct* StaticStruct<FCavrnusRemoteContent>()
{
	return FCavrnusRemoteContent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ThumbnailUrl;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* @brief Structure to hold information about remote content in Cavrnus.\n*\n* The FCavrnusRemoteContent structure contains fields representing metadata about content stored on the Cavrnus server.\n* This includes the content ID, name, file name, thumbnail URL, and a map of associated tags.\n*/" },
		{ "ModuleRelativePath", "Public/Types/CavrnusRemoteContent.h" },
		{ "ToolTip", "@brief Structure to hold information about remote content in Cavrnus.\n\nThe FCavrnusRemoteContent structure contains fields representing metadata about content stored on the Cavrnus server.\nThis includes the content ID, name, file name, thumbnail URL, and a map of associated tags." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCavrnusRemoteContent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Cavrnus|Content" },
		{ "Comment", "/** The unique identifier for the remote content. */" },
		{ "ModuleRelativePath", "Public/Types/CavrnusRemoteContent.h" },
		{ "ToolTip", "The unique identifier for the remote content." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusRemoteContent, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Cavrnus|Content" },
		{ "Comment", "/** The name of the remote content. */" },
		{ "ModuleRelativePath", "Public/Types/CavrnusRemoteContent.h" },
		{ "ToolTip", "The name of the remote content." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusRemoteContent, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "Cavrnus|Content" },
		{ "Comment", "/** The file name of the remote content. */" },
		{ "ModuleRelativePath", "Public/Types/CavrnusRemoteContent.h" },
		{ "ToolTip", "The file name of the remote content." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusRemoteContent, FileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_ThumbnailUrl_MetaData[] = {
		{ "Category", "Cavrnus|Content" },
		{ "Comment", "/** The URL for the thumbnail image of the remote content. */" },
		{ "ModuleRelativePath", "Public/Types/CavrnusRemoteContent.h" },
		{ "ToolTip", "The URL for the thumbnail image of the remote content." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_ThumbnailUrl = { "ThumbnailUrl", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusRemoteContent, ThumbnailUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_ThumbnailUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_ThumbnailUrl_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Tags_ValueProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Tags_Key_KeyProp = { "Tags_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Cavrnus|Content" },
		{ "Comment", "/** A map of tags associated with the remote content. */" },
		{ "ModuleRelativePath", "Public/Types/CavrnusRemoteContent.h" },
		{ "ToolTip", "A map of tags associated with the remote content." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusRemoteContent, Tags), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Tags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_ThumbnailUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Tags_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Tags_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewProp_Tags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		&NewStructOps,
		"CavrnusRemoteContent",
		sizeof(FCavrnusRemoteContent),
		alignof(FCavrnusRemoteContent),
		Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCavrnusRemoteContent()
	{
		if (!Z_Registration_Info_UScriptStruct_CavrnusRemoteContent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CavrnusRemoteContent.InnerSingleton, Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CavrnusRemoteContent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusRemoteContent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusRemoteContent_h_Statics::ScriptStructInfo[] = {
		{ FCavrnusRemoteContent::StaticStruct, Z_Construct_UScriptStruct_FCavrnusRemoteContent_Statics::NewStructOps, TEXT("CavrnusRemoteContent"), &Z_Registration_Info_UScriptStruct_CavrnusRemoteContent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCavrnusRemoteContent), 3773410542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusRemoteContent_h_2744296837(TEXT("/Script/CavrnusConnector"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusRemoteContent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusRemoteContent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
