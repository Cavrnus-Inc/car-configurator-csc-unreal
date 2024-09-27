// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Types/AbsolutePropertyId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbsolutePropertyId() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FAbsolutePropertyId();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbsolutePropertyId;
class UScriptStruct* FAbsolutePropertyId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbsolutePropertyId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbsolutePropertyId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbsolutePropertyId, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("AbsolutePropertyId"));
	}
	return Z_Registration_Info_UScriptStruct_AbsolutePropertyId.OuterSingleton;
}
template<> CAVRNUSCONNECTOR_API UScriptStruct* StaticStruct<FAbsolutePropertyId>()
{
	return FAbsolutePropertyId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAbsolutePropertyId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbsolutePropertyId_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief Structure representing the ID of a property within the Cavrnus system.\n *\n * The FFullPropertyId structure is used to uniquely identify properties within a Cavrnus container.\n */" },
		{ "ModuleRelativePath", "Public/Types/AbsolutePropertyId.h" },
		{ "ToolTip", "@brief Structure representing the ID of a property within the Cavrnus system.\n\nThe FFullPropertyId structure is used to uniquely identify properties within a Cavrnus container." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbsolutePropertyId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbsolutePropertyId>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbsolutePropertyId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		&NewStructOps,
		"AbsolutePropertyId",
		sizeof(FAbsolutePropertyId),
		alignof(FAbsolutePropertyId),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbsolutePropertyId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbsolutePropertyId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbsolutePropertyId()
	{
		if (!Z_Registration_Info_UScriptStruct_AbsolutePropertyId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbsolutePropertyId.InnerSingleton, Z_Construct_UScriptStruct_FAbsolutePropertyId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AbsolutePropertyId.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_AbsolutePropertyId_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_AbsolutePropertyId_h_Statics::ScriptStructInfo[] = {
		{ FAbsolutePropertyId::StaticStruct, Z_Construct_UScriptStruct_FAbsolutePropertyId_Statics::NewStructOps, TEXT("AbsolutePropertyId"), &Z_Registration_Info_UScriptStruct_AbsolutePropertyId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbsolutePropertyId), 2985089263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_AbsolutePropertyId_h_2538548443(TEXT("/Script/CavrnusConnector"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_AbsolutePropertyId_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_AbsolutePropertyId_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
