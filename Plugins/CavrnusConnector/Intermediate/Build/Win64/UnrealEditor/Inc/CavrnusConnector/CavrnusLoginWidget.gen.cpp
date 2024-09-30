// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/CavrnusLoginWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusLoginWidget() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLoginWidget_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLoginWidget();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusLoginWidget::execOnLoginClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLoginClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusLoginWidget::execSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup();
		P_NATIVE_END;
	}
	void UCavrnusLoginWidget::StaticRegisterNativesUCavrnusLoginWidget()
	{
		UClass* Class = UCavrnusLoginWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLoginClicked", &UCavrnusLoginWidget::execOnLoginClicked },
			{ "Setup", &UCavrnusLoginWidget::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusLoginWidget_OnLoginClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusLoginWidget_OnLoginClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @brief Handles the login button click event.\n\x09 *\n\x09 * This function is called when the login button is clicked, triggering the login process.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/CavrnusLoginWidget.h" },
		{ "ToolTip", "@brief Handles the login button click event.\n\nThis function is called when the login button is clicked, triggering the login process." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusLoginWidget_OnLoginClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusLoginWidget, nullptr, "OnLoginClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusLoginWidget_OnLoginClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLoginWidget_OnLoginClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusLoginWidget_OnLoginClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusLoginWidget_OnLoginClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusLoginWidget_Setup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusLoginWidget_Setup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|Login" },
		{ "Comment", "/**\n\x09 * @brief Sets up the login widget.\n\x09 *\n\x09 * This function initializes the widget and prepares it for user interaction.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/CavrnusLoginWidget.h" },
		{ "ToolTip", "@brief Sets up the login widget.\n\nThis function initializes the widget and prepares it for user interaction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusLoginWidget_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusLoginWidget, nullptr, "Setup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusLoginWidget_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLoginWidget_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusLoginWidget_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusLoginWidget_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusLoginWidget);
	UClass* Z_Construct_UClass_UCavrnusLoginWidget_NoRegister()
	{
		return UCavrnusLoginWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusLoginWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmailInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmailInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PasswordInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PasswordInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoginButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoginButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusLoginWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCavrnusBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusLoginWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusLoginWidget_OnLoginClicked, "OnLoginClicked" }, // 2068433149
		{ &Z_Construct_UFunction_UCavrnusLoginWidget_Setup, "Setup" }, // 2317195643
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusLoginWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/CavrnusLoginWidget.h" },
		{ "ModuleRelativePath", "Public/UI/CavrnusLoginWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusLoginWidget_Statics::NewProp_EmailInput_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|Login" },
		{ "Comment", "/** The text box for entering the email address. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CavrnusLoginWidget.h" },
		{ "ToolTip", "The text box for entering the email address." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusLoginWidget_Statics::NewProp_EmailInput = { "EmailInput", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusLoginWidget, EmailInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusLoginWidget_Statics::NewProp_EmailInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusLoginWidget_Statics::NewProp_EmailInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusLoginWidget_Statics::NewProp_PasswordInput_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|Login" },
		{ "Comment", "/** The text box for entering the password. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CavrnusLoginWidget.h" },
		{ "ToolTip", "The text box for entering the password." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusLoginWidget_Statics::NewProp_PasswordInput = { "PasswordInput", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusLoginWidget, PasswordInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusLoginWidget_Statics::NewProp_PasswordInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusLoginWidget_Statics::NewProp_PasswordInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusLoginWidget_Statics::NewProp_LoginButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|Login" },
		{ "Comment", "/** The button for initiating the login process. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CavrnusLoginWidget.h" },
		{ "ToolTip", "The button for initiating the login process." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusLoginWidget_Statics::NewProp_LoginButton = { "LoginButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusLoginWidget, LoginButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusLoginWidget_Statics::NewProp_LoginButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusLoginWidget_Statics::NewProp_LoginButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusLoginWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusLoginWidget_Statics::NewProp_EmailInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusLoginWidget_Statics::NewProp_PasswordInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusLoginWidget_Statics::NewProp_LoginButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusLoginWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusLoginWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusLoginWidget_Statics::ClassParams = {
		&UCavrnusLoginWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCavrnusLoginWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusLoginWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusLoginWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusLoginWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusLoginWidget()
	{
		if (!Z_Registration_Info_UClass_UCavrnusLoginWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusLoginWidget.OuterSingleton, Z_Construct_UClass_UCavrnusLoginWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusLoginWidget.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusLoginWidget>()
	{
		return UCavrnusLoginWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusLoginWidget);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusLoginWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusLoginWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusLoginWidget, UCavrnusLoginWidget::StaticClass, TEXT("UCavrnusLoginWidget"), &Z_Registration_Info_UClass_UCavrnusLoginWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusLoginWidget), 1167415618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusLoginWidget_h_1839487979(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusLoginWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusLoginWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
