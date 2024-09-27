// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/MessageMenus/ChatMenu/CavrnusChatWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusChatWindow() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusChatWindow_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusChatWindow();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusMessageMenuBase();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusChatWindow::execTextInputFieldSubmit)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InputValue);
		P_GET_PROPERTY(FByteProperty,Z_Param_CommitValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TextInputFieldSubmit(Z_Param_Out_InputValue,ETextCommit::Type(Z_Param_CommitValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusChatWindow::execTextInputChanged)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InputValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TextInputChanged(Z_Param_Out_InputValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusChatWindow::execSubmitButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubmitButtonClicked();
		P_NATIVE_END;
	}
	void UCavrnusChatWindow::StaticRegisterNativesUCavrnusChatWindow()
	{
		UClass* Class = UCavrnusChatWindow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SubmitButtonClicked", &UCavrnusChatWindow::execSubmitButtonClicked },
			{ "TextInputChanged", &UCavrnusChatWindow::execTextInputChanged },
			{ "TextInputFieldSubmit", &UCavrnusChatWindow::execTextInputFieldSubmit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusChatWindow_SubmitButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusChatWindow_SubmitButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MessageMenus/ChatMenu/CavrnusChatWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusChatWindow_SubmitButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusChatWindow, nullptr, "SubmitButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusChatWindow_SubmitButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusChatWindow_SubmitButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusChatWindow_SubmitButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusChatWindow_SubmitButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusChatWindow_TextInputChanged_Statics
	{
		struct CavrnusChatWindow_eventTextInputChanged_Parms
		{
			FText InputValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InputValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusChatWindow_TextInputChanged_Statics::NewProp_InputValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCavrnusChatWindow_TextInputChanged_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusChatWindow_eventTextInputChanged_Parms, InputValue), METADATA_PARAMS(Z_Construct_UFunction_UCavrnusChatWindow_TextInputChanged_Statics::NewProp_InputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusChatWindow_TextInputChanged_Statics::NewProp_InputValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusChatWindow_TextInputChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusChatWindow_TextInputChanged_Statics::NewProp_InputValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusChatWindow_TextInputChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MessageMenus/ChatMenu/CavrnusChatWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusChatWindow_TextInputChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusChatWindow, nullptr, "TextInputChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusChatWindow_TextInputChanged_Statics::CavrnusChatWindow_eventTextInputChanged_Parms), Z_Construct_UFunction_UCavrnusChatWindow_TextInputChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusChatWindow_TextInputChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusChatWindow_TextInputChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusChatWindow_TextInputChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusChatWindow_TextInputChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusChatWindow_TextInputChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit_Statics
	{
		struct CavrnusChatWindow_eventTextInputFieldSubmit_Parms
		{
			FText InputValue;
			TEnumAsByte<ETextCommit::Type> CommitValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InputValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CommitValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit_Statics::NewProp_InputValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusChatWindow_eventTextInputFieldSubmit_Parms, InputValue), METADATA_PARAMS(Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit_Statics::NewProp_InputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit_Statics::NewProp_InputValue_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit_Statics::NewProp_CommitValue = { "CommitValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusChatWindow_eventTextInputFieldSubmit_Parms, CommitValue), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) }; // 1116915171
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit_Statics::NewProp_InputValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit_Statics::NewProp_CommitValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MessageMenus/ChatMenu/CavrnusChatWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusChatWindow, nullptr, "TextInputFieldSubmit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit_Statics::CavrnusChatWindow_eventTextInputFieldSubmit_Parms), Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusChatWindow);
	UClass* Z_Construct_UClass_UCavrnusChatWindow_NoRegister()
	{
		return UCavrnusChatWindow::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusChatWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonEnabledColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonEnabledColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmitButtonIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmitButtonIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTextBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputTextBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmitButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmitButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusChatWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCavrnusMessageMenuBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusChatWindow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusChatWindow_SubmitButtonClicked, "SubmitButtonClicked" }, // 178785987
		{ &Z_Construct_UFunction_UCavrnusChatWindow_TextInputChanged, "TextInputChanged" }, // 3529838071
		{ &Z_Construct_UFunction_UCavrnusChatWindow_TextInputFieldSubmit, "TextInputFieldSubmit" }, // 1901586674
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusChatWindow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MessageMenus/ChatMenu/CavrnusChatWindow.h" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/ChatMenu/CavrnusChatWindow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_ButtonEnabledColor_MetaData[] = {
		{ "Category", "Cavrnus|ChatWindow" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/ChatMenu/CavrnusChatWindow.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_ButtonEnabledColor = { "ButtonEnabledColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusChatWindow, ButtonEnabledColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_ButtonEnabledColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_ButtonEnabledColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_SubmitButtonIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|ChatWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/ChatMenu/CavrnusChatWindow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_SubmitButtonIcon = { "SubmitButtonIcon", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusChatWindow, SubmitButtonIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_SubmitButtonIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_SubmitButtonIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_InputTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|ChatWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/ChatMenu/CavrnusChatWindow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_InputTextBox = { "InputTextBox", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusChatWindow, InputTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_InputTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_InputTextBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_SubmitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|ChatWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/ChatMenu/CavrnusChatWindow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_SubmitButton = { "SubmitButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusChatWindow, SubmitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_SubmitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_SubmitButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusChatWindow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_ButtonEnabledColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_SubmitButtonIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_InputTextBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusChatWindow_Statics::NewProp_SubmitButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusChatWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusChatWindow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusChatWindow_Statics::ClassParams = {
		&UCavrnusChatWindow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCavrnusChatWindow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusChatWindow_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusChatWindow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusChatWindow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusChatWindow()
	{
		if (!Z_Registration_Info_UClass_UCavrnusChatWindow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusChatWindow.OuterSingleton, Z_Construct_UClass_UCavrnusChatWindow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusChatWindow.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusChatWindow>()
	{
		return UCavrnusChatWindow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusChatWindow);
	struct Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_ChatMenu_CavrnusChatWindow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_ChatMenu_CavrnusChatWindow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusChatWindow, UCavrnusChatWindow::StaticClass, TEXT("UCavrnusChatWindow"), &Z_Registration_Info_UClass_UCavrnusChatWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusChatWindow), 3264679356U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_ChatMenu_CavrnusChatWindow_h_931710180(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_ChatMenu_CavrnusChatWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_ChatMenu_CavrnusChatWindow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
