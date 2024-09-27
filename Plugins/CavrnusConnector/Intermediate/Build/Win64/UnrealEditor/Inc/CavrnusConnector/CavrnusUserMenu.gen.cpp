// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/UserMenu/CavrnusUserMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusUserMenu() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusUserMenu_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusUserMenu();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_USidebarMenuBase();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusUserWidget_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusMaximizedUser_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusBinding_NoRegister();
// End Cross Module References
	void UCavrnusUserMenu::StaticRegisterNativesUCavrnusUserMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusUserMenu);
	UClass* Z_Construct_UClass_UCavrnusUserMenu_NoRegister()
	{
		return UCavrnusUserMenu::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusUserMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetEntry_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetEntry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximizedUserEntry_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MaximizedUserEntry;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Entries_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Entries_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Entries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsersBinding_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UsersBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusUserMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USidebarMenuBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUserMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/UserMenu/CavrnusUserMenu.h" },
		{ "ModuleRelativePath", "Public/UI/UserMenu/CavrnusUserMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_ScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|UserMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/UserMenu/CavrnusUserMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_ScrollBox = { "ScrollBox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusUserMenu, ScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_ScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_ScrollBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_WidgetEntry_MetaData[] = {
		{ "Category", "Cavrnus|UserMenu" },
		{ "ModuleRelativePath", "Public/UI/UserMenu/CavrnusUserMenu.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_WidgetEntry = { "WidgetEntry", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusUserMenu, WidgetEntry), Z_Construct_UClass_UCavrnusUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_WidgetEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_WidgetEntry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_MaximizedUserEntry_MetaData[] = {
		{ "Category", "Cavrnus|UserMenu" },
		{ "ModuleRelativePath", "Public/UI/UserMenu/CavrnusUserMenu.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_MaximizedUserEntry = { "MaximizedUserEntry", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusUserMenu, MaximizedUserEntry), Z_Construct_UClass_UCavrnusMaximizedUser_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_MaximizedUserEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_MaximizedUserEntry_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_Entries_ValueProp = { "Entries", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCavrnusUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_Entries_Key_KeyProp = { "Entries_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_Entries_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/UserMenu/CavrnusUserMenu.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusUserMenu, Entries), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_Entries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_UsersBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/UserMenu/CavrnusUserMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_UsersBinding = { "UsersBinding", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusUserMenu, UsersBinding), Z_Construct_UClass_UCavrnusBinding_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_UsersBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_UsersBinding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusUserMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_ScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_WidgetEntry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_MaximizedUserEntry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_Entries_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_Entries_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusUserMenu_Statics::NewProp_UsersBinding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusUserMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusUserMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusUserMenu_Statics::ClassParams = {
		&UCavrnusUserMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCavrnusUserMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserMenu_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusUserMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusUserMenu()
	{
		if (!Z_Registration_Info_UClass_UCavrnusUserMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusUserMenu.OuterSingleton, Z_Construct_UClass_UCavrnusUserMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusUserMenu.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusUserMenu>()
	{
		return UCavrnusUserMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusUserMenu);
	struct Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_UserMenu_CavrnusUserMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_UserMenu_CavrnusUserMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusUserMenu, UCavrnusUserMenu::StaticClass, TEXT("UCavrnusUserMenu"), &Z_Registration_Info_UClass_UCavrnusUserMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusUserMenu), 4248718171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_UserMenu_CavrnusUserMenu_h_4013382844(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_UserMenu_CavrnusUserMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_UserMenu_CavrnusUserMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
