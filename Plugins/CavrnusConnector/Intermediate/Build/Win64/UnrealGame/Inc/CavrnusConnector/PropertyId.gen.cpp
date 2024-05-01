// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/RelayModel/PropertyId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyId() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyId();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyId;
class UScriptStruct* FPropertyId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyId, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("PropertyId"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyId.OuterSingleton;
}
template<> CAVRNUSCONNECTOR_API UScriptStruct* StaticStruct<FPropertyId>()
{
	return FPropertyId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyId_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RelayModel/PropertyId.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyId>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		&NewStructOps,
		"PropertyId",
		sizeof(FPropertyId),
		alignof(FPropertyId),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyId()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyId.InnerSingleton, Z_Construct_UScriptStruct_FPropertyId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyId.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_RelayModel_PropertyId_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_RelayModel_PropertyId_h_Statics::ScriptStructInfo[] = {
		{ FPropertyId::StaticStruct, Z_Construct_UScriptStruct_FPropertyId_Statics::NewStructOps, TEXT("PropertyId"), &Z_Registration_Info_UScriptStruct_PropertyId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyId), 860198141U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_RelayModel_PropertyId_h_2610582646(TEXT("/Script/CavrnusConnector"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_RelayModel_PropertyId_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_RelayModel_PropertyId_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
