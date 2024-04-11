// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/PDFManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDFManager() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UPDFManager_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UPDFManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void UPDFManager::StaticRegisterNativesUPDFManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDFManager);
	UClass* Z_Construct_UClass_UPDFManager_NoRegister()
	{
		return UPDFManager::StaticClass();
	}
	struct Z_Construct_UClass_UPDFManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPDFManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDFManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PDFManager.h" },
		{ "ModuleRelativePath", "Public/PDFManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPDFManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDFManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDFManager_Statics::ClassParams = {
		&UPDFManager::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPDFManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPDFManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPDFManager()
	{
		if (!Z_Registration_Info_UClass_UPDFManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDFManager.OuterSingleton, Z_Construct_UClass_UPDFManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPDFManager.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UPDFManager>()
	{
		return UPDFManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDFManager);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_PDFManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_PDFManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPDFManager, UPDFManager::StaticClass, TEXT("UPDFManager"), &Z_Registration_Info_UClass_UPDFManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDFManager), 1051618804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_PDFManager_h_4277772652(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_PDFManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_PDFManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
