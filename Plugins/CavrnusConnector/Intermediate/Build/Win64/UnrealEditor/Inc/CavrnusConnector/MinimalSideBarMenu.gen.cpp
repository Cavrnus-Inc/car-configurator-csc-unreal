// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/MinimalMenu/SidebarMenu/MinimalSideBarMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinimalSideBarMenu() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FMenuData();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UMinimalSideBarMenu_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UMinimalSideBarMenu();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusBaseUserWidget();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UMinimalSidebarButton_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MenuData;
class UScriptStruct* FMenuData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MenuData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MenuData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMenuData, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("MenuData"));
	}
	return Z_Registration_Info_UScriptStruct_MenuData.OuterSingleton;
}
template<> CAVRNUSCONNECTOR_API UScriptStruct* StaticStruct<FMenuData>()
{
	return FMenuData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMenuData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMenu_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TargetMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/UI/MinimalMenu/SidebarMenu/MinimalSideBarMenu.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMenuData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMenuData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Cavrnus|SideBarMenu" },
		{ "ModuleRelativePath", "Public/UI/MinimalMenu/SidebarMenu/MinimalSideBarMenu.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMenuData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMenuData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuData_Statics::NewProp_TargetMenu_MetaData[] = {
		{ "Category", "Cavrnus|SideBarMenu" },
		{ "ModuleRelativePath", "Public/UI/MinimalMenu/SidebarMenu/MinimalSideBarMenu.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMenuData_Statics::NewProp_TargetMenu = { "TargetMenu", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMenuData, TargetMenu), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuData_Statics::NewProp_TargetMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuData_Statics::NewProp_TargetMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Cavrnus|SideBarMenu" },
		{ "ModuleRelativePath", "Public/UI/MinimalMenu/SidebarMenu/MinimalSideBarMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMenuData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMenuData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuData_Statics::NewProp_Icon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMenuData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuData_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuData_Statics::NewProp_TargetMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuData_Statics::NewProp_Icon,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMenuData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		&NewStructOps,
		"MenuData",
		sizeof(FMenuData),
		alignof(FMenuData),
		Z_Construct_UScriptStruct_FMenuData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMenuData()
	{
		if (!Z_Registration_Info_UScriptStruct_MenuData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MenuData.InnerSingleton, Z_Construct_UScriptStruct_FMenuData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MenuData.InnerSingleton;
	}
	void UMinimalSideBarMenu::StaticRegisterNativesUMinimalSideBarMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMinimalSideBarMenu);
	UClass* Z_Construct_UClass_UMinimalSideBarMenu_NoRegister()
	{
		return UMinimalSideBarMenu::StaticClass();
	}
	struct Z_Construct_UClass_UMinimalSideBarMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ButtonWidgetClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MenuData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MenuData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMinimalSideBarMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCavrnusBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinimalSideBarMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MinimalMenu/SidebarMenu/MinimalSideBarMenu.h" },
		{ "ModuleRelativePath", "Public/UI/MinimalMenu/SidebarMenu/MinimalSideBarMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinimalSideBarMenu_Statics::NewProp_ButtonWidgetClass_MetaData[] = {
		{ "Category", "Cavrnus|SideBarMenu" },
		{ "ModuleRelativePath", "Public/UI/MinimalMenu/SidebarMenu/MinimalSideBarMenu.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMinimalSideBarMenu_Statics::NewProp_ButtonWidgetClass = { "ButtonWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinimalSideBarMenu, ButtonWidgetClass), Z_Construct_UClass_UMinimalSidebarButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMinimalSideBarMenu_Statics::NewProp_ButtonWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinimalSideBarMenu_Statics::NewProp_ButtonWidgetClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMinimalSideBarMenu_Statics::NewProp_MenuData_Inner = { "MenuData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMenuData, METADATA_PARAMS(nullptr, 0) }; // 2242793193
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMinimalSideBarMenu_Statics::NewProp_MenuData_MetaData[] = {
		{ "Category", "Cavrnus|SideBarMenu" },
		{ "ModuleRelativePath", "Public/UI/MinimalMenu/SidebarMenu/MinimalSideBarMenu.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMinimalSideBarMenu_Statics::NewProp_MenuData = { "MenuData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMinimalSideBarMenu, MenuData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMinimalSideBarMenu_Statics::NewProp_MenuData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMinimalSideBarMenu_Statics::NewProp_MenuData_MetaData)) }; // 2242793193
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinimalSideBarMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinimalSideBarMenu_Statics::NewProp_ButtonWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinimalSideBarMenu_Statics::NewProp_MenuData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinimalSideBarMenu_Statics::NewProp_MenuData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMinimalSideBarMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinimalSideBarMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinimalSideBarMenu_Statics::ClassParams = {
		&UMinimalSideBarMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMinimalSideBarMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMinimalSideBarMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMinimalSideBarMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMinimalSideBarMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMinimalSideBarMenu()
	{
		if (!Z_Registration_Info_UClass_UMinimalSideBarMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinimalSideBarMenu.OuterSingleton, Z_Construct_UClass_UMinimalSideBarMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMinimalSideBarMenu.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UMinimalSideBarMenu>()
	{
		return UMinimalSideBarMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMinimalSideBarMenu);
	struct Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_MinimalSideBarMenu_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_MinimalSideBarMenu_h_Statics::ScriptStructInfo[] = {
		{ FMenuData::StaticStruct, Z_Construct_UScriptStruct_FMenuData_Statics::NewStructOps, TEXT("MenuData"), &Z_Registration_Info_UScriptStruct_MenuData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMenuData), 2242793193U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_MinimalSideBarMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMinimalSideBarMenu, UMinimalSideBarMenu::StaticClass, TEXT("UMinimalSideBarMenu"), &Z_Registration_Info_UClass_UMinimalSideBarMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinimalSideBarMenu), 3675614989U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_MinimalSideBarMenu_h_3742980449(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_MinimalSideBarMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_MinimalSideBarMenu_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_MinimalSideBarMenu_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_MinimalSideBarMenu_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
