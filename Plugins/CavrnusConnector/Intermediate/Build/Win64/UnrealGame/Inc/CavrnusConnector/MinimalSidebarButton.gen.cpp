// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/MinimalMenu/SidebarMenu/MinimalSidebarButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinimalSidebarButton() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UMinimalSidebarButton_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UMinimalSidebarButton();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void UMinimalSidebarButton::StaticRegisterNativesUMinimalSidebarButton()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMinimalSidebarButton);
	UClass* Z_Construct_UClass_UMinimalSidebarButton_NoRegister()
	{
		return UMinimalSidebarButton::StaticClass();
	}
	struct Z_Construct_UClass_UMinimalSidebarButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMinimalSidebarButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCavrnusBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinimalSidebarButton_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MinimalMenu/SidebarMenu/MinimalSidebarButton.h" },
		{ "ModuleRelativePath", "Public/UI/MinimalMenu/SidebarMenu/MinimalSidebarButton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMinimalSidebarButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinimalSidebarButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinimalSidebarButton_Statics::ClassParams = {
		&UMinimalSidebarButton::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMinimalSidebarButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMinimalSidebarButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMinimalSidebarButton()
	{
		if (!Z_Registration_Info_UClass_UMinimalSidebarButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinimalSidebarButton.OuterSingleton, Z_Construct_UClass_UMinimalSidebarButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMinimalSidebarButton.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UMinimalSidebarButton>()
	{
		return UMinimalSidebarButton::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMinimalSidebarButton);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_MinimalSidebarButton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_MinimalSidebarButton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMinimalSidebarButton, UMinimalSidebarButton::StaticClass, TEXT("UMinimalSidebarButton"), &Z_Registration_Info_UClass_UMinimalSidebarButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinimalSidebarButton), 242098125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_MinimalSidebarButton_h_1229714271(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_MinimalSidebarButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_MinimalSidebarButton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
