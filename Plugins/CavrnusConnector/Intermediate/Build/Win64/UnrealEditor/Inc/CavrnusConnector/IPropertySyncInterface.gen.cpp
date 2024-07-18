// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/ValueSyncs/IPropertySyncInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPropertySyncInterface() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UPropertySyncInterface_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UPropertySyncInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void UPropertySyncInterface::StaticRegisterNativesUPropertySyncInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertySyncInterface);
	UClass* Z_Construct_UClass_UPropertySyncInterface_NoRegister()
	{
		return UPropertySyncInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPropertySyncInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertySyncInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertySyncInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/ValueSyncs/IPropertySyncInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertySyncInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPropertySyncInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertySyncInterface_Statics::ClassParams = {
		&UPropertySyncInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertySyncInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertySyncInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertySyncInterface()
	{
		if (!Z_Registration_Info_UClass_UPropertySyncInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertySyncInterface.OuterSingleton, Z_Construct_UClass_UPropertySyncInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertySyncInterface.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UPropertySyncInterface>()
	{
		return UPropertySyncInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertySyncInterface);
	struct Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_IPropertySyncInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_IPropertySyncInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPropertySyncInterface, UPropertySyncInterface::StaticClass, TEXT("UPropertySyncInterface"), &Z_Registration_Info_UClass_UPropertySyncInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertySyncInterface), 1163929717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_IPropertySyncInterface_h_1291360269(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_IPropertySyncInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_IPropertySyncInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
