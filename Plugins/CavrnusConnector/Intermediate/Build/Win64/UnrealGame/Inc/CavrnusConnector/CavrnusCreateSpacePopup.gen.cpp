// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Private/UI/SpaceList/CavrnusCreateSpacePopup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusCreateSpacePopup() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusCreateSpacePopup_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusCreateSpacePopup();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void UCavrnusCreateSpacePopup::StaticRegisterNativesUCavrnusCreateSpacePopup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusCreateSpacePopup);
	UClass* Z_Construct_UClass_UCavrnusCreateSpacePopup_NoRegister()
	{
		return UCavrnusCreateSpacePopup::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusCreateSpacePopup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusCreateSpacePopup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusCreateSpacePopup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/SpaceList/CavrnusCreateSpacePopup.h" },
		{ "ModuleRelativePath", "Private/UI/SpaceList/CavrnusCreateSpacePopup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusCreateSpacePopup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusCreateSpacePopup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusCreateSpacePopup_Statics::ClassParams = {
		&UCavrnusCreateSpacePopup::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusCreateSpacePopup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusCreateSpacePopup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusCreateSpacePopup()
	{
		if (!Z_Registration_Info_UClass_UCavrnusCreateSpacePopup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusCreateSpacePopup.OuterSingleton, Z_Construct_UClass_UCavrnusCreateSpacePopup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusCreateSpacePopup.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusCreateSpacePopup>()
	{
		return UCavrnusCreateSpacePopup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusCreateSpacePopup);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_UI_SpaceList_CavrnusCreateSpacePopup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_UI_SpaceList_CavrnusCreateSpacePopup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusCreateSpacePopup, UCavrnusCreateSpacePopup::StaticClass, TEXT("UCavrnusCreateSpacePopup"), &Z_Registration_Info_UClass_UCavrnusCreateSpacePopup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusCreateSpacePopup), 4119616254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_UI_SpaceList_CavrnusCreateSpacePopup_h_402125570(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_UI_SpaceList_CavrnusCreateSpacePopup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_UI_SpaceList_CavrnusCreateSpacePopup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
