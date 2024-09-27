// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Types/CavrnusAuthentication.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusAuthentication() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusAuthentication();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CavrnusAuthentication;
class UScriptStruct* FCavrnusAuthentication::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CavrnusAuthentication.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CavrnusAuthentication.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCavrnusAuthentication, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("CavrnusAuthentication"));
	}
	return Z_Registration_Info_UScriptStruct_CavrnusAuthentication.OuterSingleton;
}
template<> CAVRNUSCONNECTOR_API UScriptStruct* StaticStruct<FCavrnusAuthentication>()
{
	return FCavrnusAuthentication::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCavrnusAuthentication_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusAuthentication_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Structure to hold authentication data.\n *\n * The FCavrnusAuthentication structure contains the token received from a successful login attempt.\n * This token can be used to keep a user logged in, although this is typically managed automatically by the CavrnusSpatialConnector component.\n */" },
		{ "ModuleRelativePath", "Public/Types/CavrnusAuthentication.h" },
		{ "ToolTip", "@brief Structure to hold authentication data.\n\nThe FCavrnusAuthentication structure contains the token received from a successful login attempt.\nThis token can be used to keep a user logged in, although this is typically managed automatically by the CavrnusSpatialConnector component." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCavrnusAuthentication_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCavrnusAuthentication>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusAuthentication_Statics::NewProp_Token_MetaData[] = {
		{ "Category", "Cavrnus|Authorization" },
		{ "Comment", "/** The authentication token received after a successful login. */" },
		{ "ModuleRelativePath", "Public/Types/CavrnusAuthentication.h" },
		{ "ToolTip", "The authentication token received after a successful login." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCavrnusAuthentication_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusAuthentication, Token), METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusAuthentication_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusAuthentication_Statics::NewProp_Token_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCavrnusAuthentication_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusAuthentication_Statics::NewProp_Token,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCavrnusAuthentication_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		&NewStructOps,
		"CavrnusAuthentication",
		sizeof(FCavrnusAuthentication),
		alignof(FCavrnusAuthentication),
		Z_Construct_UScriptStruct_FCavrnusAuthentication_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusAuthentication_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusAuthentication_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusAuthentication_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCavrnusAuthentication()
	{
		if (!Z_Registration_Info_UScriptStruct_CavrnusAuthentication.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CavrnusAuthentication.InnerSingleton, Z_Construct_UScriptStruct_FCavrnusAuthentication_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CavrnusAuthentication.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusAuthentication_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusAuthentication_h_Statics::ScriptStructInfo[] = {
		{ FCavrnusAuthentication::StaticStruct, Z_Construct_UScriptStruct_FCavrnusAuthentication_Statics::NewStructOps, TEXT("CavrnusAuthentication"), &Z_Registration_Info_UScriptStruct_CavrnusAuthentication, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCavrnusAuthentication), 2705796156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusAuthentication_h_1177684672(TEXT("/Script/CavrnusConnector"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusAuthentication_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusAuthentication_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
