// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/NoMesh/NoMeshActionsWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoMeshActionsWidget() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UNoMeshActionsWidget_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UNoMeshActionsWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void UNoMeshActionsWidget::StaticRegisterNativesUNoMeshActionsWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNoMeshActionsWidget);
	UClass* Z_Construct_UClass_UNoMeshActionsWidget_NoRegister()
	{
		return UNoMeshActionsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UNoMeshActionsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoMeshActionsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoMeshActionsWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UI/NoMesh/NoMeshActionsWidget.h" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/NoMeshActionsWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoMeshActionsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoMeshActionsWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNoMeshActionsWidget_Statics::ClassParams = {
		&UNoMeshActionsWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNoMeshActionsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNoMeshActionsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoMeshActionsWidget()
	{
		if (!Z_Registration_Info_UClass_UNoMeshActionsWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNoMeshActionsWidget.OuterSingleton, Z_Construct_UClass_UNoMeshActionsWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNoMeshActionsWidget.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UNoMeshActionsWidget>()
	{
		return UNoMeshActionsWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoMeshActionsWidget);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_NoMeshActionsWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_NoMeshActionsWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNoMeshActionsWidget, UNoMeshActionsWidget::StaticClass, TEXT("UNoMeshActionsWidget"), &Z_Registration_Info_UClass_UNoMeshActionsWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNoMeshActionsWidget), 1491437326U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_NoMeshActionsWidget_h_2636068862(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_NoMeshActionsWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_NoMeshActionsWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
