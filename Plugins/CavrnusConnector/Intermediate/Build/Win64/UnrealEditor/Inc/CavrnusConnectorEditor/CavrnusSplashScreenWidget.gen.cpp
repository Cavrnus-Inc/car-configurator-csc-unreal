// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnectorEditor/Public/CavrnusSplashScreenWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusSplashScreenWidget() {}
// Cross Module References
	CAVRNUSCONNECTOREDITOR_API UClass* Z_Construct_UClass_UCavrnusSplashScreenWidget_NoRegister();
	CAVRNUSCONNECTOREDITOR_API UClass* Z_Construct_UClass_UCavrnusSplashScreenWidget();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnectorEditor();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusSplashScreenWidget::execOnDismissClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDismissClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSplashScreenWidget::execOnShowSplashScreenOnStartupClicked)
	{
		P_GET_UBOOL(Z_Param_bCheckboxState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShowSplashScreenOnStartupClicked(Z_Param_bCheckboxState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSplashScreenWidget::execOnOpenDocsClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOpenDocsClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSplashScreenWidget::execOnWebConsoleClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWebConsoleClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSplashScreenWidget::execOnSetupSpaceClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSetupSpaceClicked();
		P_NATIVE_END;
	}
	void UCavrnusSplashScreenWidget::StaticRegisterNativesUCavrnusSplashScreenWidget()
	{
		UClass* Class = UCavrnusSplashScreenWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDismissClicked", &UCavrnusSplashScreenWidget::execOnDismissClicked },
			{ "OnOpenDocsClicked", &UCavrnusSplashScreenWidget::execOnOpenDocsClicked },
			{ "OnSetupSpaceClicked", &UCavrnusSplashScreenWidget::execOnSetupSpaceClicked },
			{ "OnShowSplashScreenOnStartupClicked", &UCavrnusSplashScreenWidget::execOnShowSplashScreenOnStartupClicked },
			{ "OnWebConsoleClicked", &UCavrnusSplashScreenWidget::execOnWebConsoleClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnDismissClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnDismissClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusSplashScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnDismissClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSplashScreenWidget, nullptr, "OnDismissClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnDismissClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnDismissClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnDismissClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnDismissClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnOpenDocsClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnOpenDocsClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusSplashScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnOpenDocsClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSplashScreenWidget, nullptr, "OnOpenDocsClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnOpenDocsClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnOpenDocsClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnOpenDocsClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnOpenDocsClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnSetupSpaceClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnSetupSpaceClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusSplashScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnSetupSpaceClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSplashScreenWidget, nullptr, "OnSetupSpaceClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnSetupSpaceClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnSetupSpaceClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnSetupSpaceClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnSetupSpaceClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnShowSplashScreenOnStartupClicked_Statics
	{
		struct CavrnusSplashScreenWidget_eventOnShowSplashScreenOnStartupClicked_Parms
		{
			bool bCheckboxState;
		};
		static void NewProp_bCheckboxState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckboxState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnShowSplashScreenOnStartupClicked_Statics::NewProp_bCheckboxState_SetBit(void* Obj)
	{
		((CavrnusSplashScreenWidget_eventOnShowSplashScreenOnStartupClicked_Parms*)Obj)->bCheckboxState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnShowSplashScreenOnStartupClicked_Statics::NewProp_bCheckboxState = { "bCheckboxState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CavrnusSplashScreenWidget_eventOnShowSplashScreenOnStartupClicked_Parms), &Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnShowSplashScreenOnStartupClicked_Statics::NewProp_bCheckboxState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnShowSplashScreenOnStartupClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnShowSplashScreenOnStartupClicked_Statics::NewProp_bCheckboxState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnShowSplashScreenOnStartupClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusSplashScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnShowSplashScreenOnStartupClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSplashScreenWidget, nullptr, "OnShowSplashScreenOnStartupClicked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnShowSplashScreenOnStartupClicked_Statics::CavrnusSplashScreenWidget_eventOnShowSplashScreenOnStartupClicked_Parms), Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnShowSplashScreenOnStartupClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnShowSplashScreenOnStartupClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnShowSplashScreenOnStartupClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnShowSplashScreenOnStartupClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnShowSplashScreenOnStartupClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnShowSplashScreenOnStartupClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnWebConsoleClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnWebConsoleClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusSplashScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnWebConsoleClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSplashScreenWidget, nullptr, "OnWebConsoleClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnWebConsoleClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnWebConsoleClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnWebConsoleClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnWebConsoleClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusSplashScreenWidget);
	UClass* Z_Construct_UClass_UCavrnusSplashScreenWidget_NoRegister()
	{
		return UCavrnusSplashScreenWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetupSpaceButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SetupSpaceButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenWebConsoleButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenWebConsoleButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenDocumentationButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenDocumentationButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowOnStartupCheckbox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShowOnStartupCheckbox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DismissButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DismissButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WebConsoleURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WebConsoleURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DocumentationURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DocumentationURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnectorEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnDismissClicked, "OnDismissClicked" }, // 1165552982
		{ &Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnOpenDocsClicked, "OnOpenDocsClicked" }, // 3470839165
		{ &Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnSetupSpaceClicked, "OnSetupSpaceClicked" }, // 910241377
		{ &Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnShowSplashScreenOnStartupClicked, "OnShowSplashScreenOnStartupClicked" }, // 1079751531
		{ &Z_Construct_UFunction_UCavrnusSplashScreenWidget_OnWebConsoleClicked, "OnWebConsoleClicked" }, // 1617538806
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CavrnusSplashScreenWidget.h" },
		{ "ModuleRelativePath", "Public/CavrnusSplashScreenWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_SetupSpaceButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CavrnusSplashScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_SetupSpaceButton = { "SetupSpaceButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSplashScreenWidget, SetupSpaceButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_SetupSpaceButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_SetupSpaceButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_OpenWebConsoleButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CavrnusSplashScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_OpenWebConsoleButton = { "OpenWebConsoleButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSplashScreenWidget, OpenWebConsoleButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_OpenWebConsoleButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_OpenWebConsoleButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_OpenDocumentationButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CavrnusSplashScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_OpenDocumentationButton = { "OpenDocumentationButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSplashScreenWidget, OpenDocumentationButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_OpenDocumentationButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_OpenDocumentationButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_ShowOnStartupCheckbox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CavrnusSplashScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_ShowOnStartupCheckbox = { "ShowOnStartupCheckbox", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSplashScreenWidget, ShowOnStartupCheckbox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_ShowOnStartupCheckbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_ShowOnStartupCheckbox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_DismissButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CavrnusSplashScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_DismissButton = { "DismissButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSplashScreenWidget, DismissButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_DismissButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_DismissButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_WebConsoleURL_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSplashScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_WebConsoleURL = { "WebConsoleURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSplashScreenWidget, WebConsoleURL), METADATA_PARAMS(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_WebConsoleURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_WebConsoleURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_DocumentationURL_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSplashScreenWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_DocumentationURL = { "DocumentationURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSplashScreenWidget, DocumentationURL), METADATA_PARAMS(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_DocumentationURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_DocumentationURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_TabID_MetaData[] = {
		{ "Comment", "// Stored so can use to close the tab\n" },
		{ "ModuleRelativePath", "Public/CavrnusSplashScreenWidget.h" },
		{ "ToolTip", "Stored so can use to close the tab" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_TabID = { "TabID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSplashScreenWidget, TabID), METADATA_PARAMS(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_TabID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_TabID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_SetupSpaceButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_OpenWebConsoleButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_OpenDocumentationButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_ShowOnStartupCheckbox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_DismissButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_WebConsoleURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_DocumentationURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::NewProp_TabID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusSplashScreenWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::ClassParams = {
		&UCavrnusSplashScreenWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusSplashScreenWidget()
	{
		if (!Z_Registration_Info_UClass_UCavrnusSplashScreenWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusSplashScreenWidget.OuterSingleton, Z_Construct_UClass_UCavrnusSplashScreenWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusSplashScreenWidget.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOREDITOR_API UClass* StaticClass<UCavrnusSplashScreenWidget>()
	{
		return UCavrnusSplashScreenWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusSplashScreenWidget);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnectorEditor_Public_CavrnusSplashScreenWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnectorEditor_Public_CavrnusSplashScreenWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusSplashScreenWidget, UCavrnusSplashScreenWidget::StaticClass, TEXT("UCavrnusSplashScreenWidget"), &Z_Registration_Info_UClass_UCavrnusSplashScreenWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusSplashScreenWidget), 1203308359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnectorEditor_Public_CavrnusSplashScreenWidget_h_2139972645(TEXT("/Script/CavrnusConnectorEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnectorEditor_Public_CavrnusSplashScreenWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnectorEditor_Public_CavrnusSplashScreenWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
