// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/NoMesh/BoardContextMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoardContextMenu() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UBoardContextMenu_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UBoardContextMenu();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ABoardObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMenuAnchor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBoardContextMenu::execHighlightButton)
	{
		P_GET_OBJECT(UButton,Z_Param_Button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HighlightButton_Implementation(Z_Param_Button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoardContextMenu::execUpdateMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMenu_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UBoardContextMenu_HighlightButton = FName(TEXT("HighlightButton"));
	void UBoardContextMenu::HighlightButton(UButton* Button)
	{
		BoardContextMenu_eventHighlightButton_Parms Parms;
		Parms.Button=Button;
		ProcessEvent(FindFunctionChecked(NAME_UBoardContextMenu_HighlightButton),&Parms);
	}
	static FName NAME_UBoardContextMenu_UpdateMenu = FName(TEXT("UpdateMenu"));
	void UBoardContextMenu::UpdateMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBoardContextMenu_UpdateMenu),NULL);
	}
	void UBoardContextMenu::StaticRegisterNativesUBoardContextMenu()
	{
		UClass* Class = UBoardContextMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HighlightButton", &UBoardContextMenu::execHighlightButton },
			{ "UpdateMenu", &UBoardContextMenu::execUpdateMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBoardContextMenu_HighlightButton_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoardContextMenu_HighlightButton_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBoardContextMenu_HighlightButton_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoardContextMenu_eventHighlightButton_Parms, Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBoardContextMenu_HighlightButton_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoardContextMenu_HighlightButton_Statics::NewProp_Button_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoardContextMenu_HighlightButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoardContextMenu_HighlightButton_Statics::NewProp_Button,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoardContextMenu_HighlightButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|Boards" },
		{ "Comment", "/// Highlight logic for all buttons in the context menu.\n" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardContextMenu.h" },
		{ "ToolTip", "Highlight logic for all buttons in the context menu." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoardContextMenu_HighlightButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoardContextMenu, nullptr, "HighlightButton", nullptr, nullptr, sizeof(BoardContextMenu_eventHighlightButton_Parms), Z_Construct_UFunction_UBoardContextMenu_HighlightButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoardContextMenu_HighlightButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoardContextMenu_HighlightButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoardContextMenu_HighlightButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoardContextMenu_HighlightButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoardContextMenu_HighlightButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoardContextMenu_UpdateMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoardContextMenu_UpdateMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|Boards" },
		{ "Comment", "/// Update logic for the context menu.\n" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardContextMenu.h" },
		{ "ToolTip", "Update logic for the context menu." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoardContextMenu_UpdateMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoardContextMenu, nullptr, "UpdateMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoardContextMenu_UpdateMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoardContextMenu_UpdateMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoardContextMenu_UpdateMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoardContextMenu_UpdateMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoardContextMenu);
	UClass* Z_Construct_UClass_UBoardContextMenu_NoRegister()
	{
		return UBoardContextMenu::StaticClass();
	}
	struct Z_Construct_UClass_UBoardContextMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Board_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Board;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenSubMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenSubMenu;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoardContextMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBoardContextMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoardContextMenu_HighlightButton, "HighlightButton" }, // 3626522580
		{ &Z_Construct_UFunction_UBoardContextMenu_UpdateMenu, "UpdateMenu" }, // 1405919969
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardContextMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class responsible for updating Board's context menu.\n */" },
		{ "IncludePath", "UI/NoMesh/BoardContextMenu.h" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardContextMenu.h" },
		{ "ToolTip", "Base class responsible for updating Board's context menu." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardContextMenu_Statics::NewProp_Board_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/// Handle to board which this context menu associated.\n" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardContextMenu.h" },
		{ "ToolTip", "Handle to board which this context menu associated." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoardContextMenu_Statics::NewProp_Board = { "Board", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoardContextMenu, Board), Z_Construct_UClass_ABoardObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoardContextMenu_Statics::NewProp_Board_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardContextMenu_Statics::NewProp_Board_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardContextMenu_Statics::NewProp_ItemContainer_MetaData[] = {
		{ "bindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "Comment", "/**\n\x09 * Necessary widget that contains buttons in the ContextMenu. To function properly all buttons must be under directly\n\x09 * this container. And if there will be a child menu within one of the Buttons, button must contain a horizontal box\n\x09 * and child MenuAnchor must be placed in.\n\x09 * ItemContainer\n\x09 *\x09\x09""Button\n\x09 *\x09\x09\x09HorizontalContainer\n\x09 *\x09\x09\x09\x09MenuAnchor\n\x09 *\x09\x09""Button\n\x09 *\x09\x09""Button\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardContextMenu.h" },
		{ "ToolTip", "Necessary widget that contains buttons in the ContextMenu. To function properly all buttons must be under directly\nthis container. And if there will be a child menu within one of the Buttons, button must contain a horizontal box\nand child MenuAnchor must be placed in.\nItemContainer\n             Button\n                     HorizontalContainer\n                             MenuAnchor\n             Button\n             Button" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoardContextMenu_Statics::NewProp_ItemContainer = { "ItemContainer", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoardContextMenu, ItemContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoardContextMenu_Statics::NewProp_ItemContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardContextMenu_Statics::NewProp_ItemContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardContextMenu_Statics::NewProp_OpenSubMenu_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardContextMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoardContextMenu_Statics::NewProp_OpenSubMenu = { "OpenSubMenu", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoardContextMenu, OpenSubMenu), Z_Construct_UClass_UMenuAnchor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoardContextMenu_Statics::NewProp_OpenSubMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardContextMenu_Statics::NewProp_OpenSubMenu_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoardContextMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoardContextMenu_Statics::NewProp_Board,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoardContextMenu_Statics::NewProp_ItemContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoardContextMenu_Statics::NewProp_OpenSubMenu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoardContextMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoardContextMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoardContextMenu_Statics::ClassParams = {
		&UBoardContextMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBoardContextMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBoardContextMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBoardContextMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardContextMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoardContextMenu()
	{
		if (!Z_Registration_Info_UClass_UBoardContextMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoardContextMenu.OuterSingleton, Z_Construct_UClass_UBoardContextMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoardContextMenu.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UBoardContextMenu>()
	{
		return UBoardContextMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoardContextMenu);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_BoardContextMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_BoardContextMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoardContextMenu, UBoardContextMenu::StaticClass, TEXT("UBoardContextMenu"), &Z_Registration_Info_UClass_UBoardContextMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoardContextMenu), 620611327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_BoardContextMenu_h_3285049883(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_BoardContextMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_BoardContextMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
