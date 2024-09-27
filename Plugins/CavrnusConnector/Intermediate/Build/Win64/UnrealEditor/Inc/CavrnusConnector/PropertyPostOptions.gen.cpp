// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Types/PropertyPostOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyPostOptions() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyPostOptions();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyPostOptions;
class UScriptStruct* FPropertyPostOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyPostOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyPostOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyPostOptions, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("PropertyPostOptions"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyPostOptions.OuterSingleton;
}
template<> CAVRNUSCONNECTOR_API UScriptStruct* StaticStruct<FPropertyPostOptions>()
{
	return FPropertyPostOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyPostOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Smoothed_MetaData[];
#endif
		static void NewProp_Smoothed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Smoothed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPostOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/PropertyPostOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyPostOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyPostOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyPostOptions_Statics::NewProp_Smoothed_MetaData[] = {
		{ "Category", "Cavrnus|Properties" },
		{ "ModuleRelativePath", "Public/Types/PropertyPostOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPropertyPostOptions_Statics::NewProp_Smoothed_SetBit(void* Obj)
	{
		((FPropertyPostOptions*)Obj)->Smoothed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropertyPostOptions_Statics::NewProp_Smoothed = { "Smoothed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPropertyPostOptions), &Z_Construct_UScriptStruct_FPropertyPostOptions_Statics::NewProp_Smoothed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPostOptions_Statics::NewProp_Smoothed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPostOptions_Statics::NewProp_Smoothed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyPostOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyPostOptions_Statics::NewProp_Smoothed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyPostOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		&NewStructOps,
		"PropertyPostOptions",
		sizeof(FPropertyPostOptions),
		alignof(FPropertyPostOptions),
		Z_Construct_UScriptStruct_FPropertyPostOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPostOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyPostOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyPostOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyPostOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyPostOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyPostOptions.InnerSingleton, Z_Construct_UScriptStruct_FPropertyPostOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyPostOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_PropertyPostOptions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_PropertyPostOptions_h_Statics::ScriptStructInfo[] = {
		{ FPropertyPostOptions::StaticStruct, Z_Construct_UScriptStruct_FPropertyPostOptions_Statics::NewStructOps, TEXT("PropertyPostOptions"), &Z_Registration_Info_UScriptStruct_PropertyPostOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyPostOptions), 1854587235U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_PropertyPostOptions_h_993253230(TEXT("/Script/CavrnusConnector"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_PropertyPostOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_PropertyPostOptions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
