// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/UserMenu/CavrnusUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusUserWidget() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusUserWidget_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusUser();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusBinding_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusUserWidget::execTriggerMaximizeUserSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerMaximizeUserSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusUserWidget::execInitializeUserConnection)
	{
		P_GET_STRUCT_REF(FCavrnusUser,Z_Param_Out_InUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeUserConnection(Z_Param_Out_InUser);
		P_NATIVE_END;
	}
	static FName NAME_UCavrnusUserWidget_InitializeComplete = FName(TEXT("InitializeComplete"));
	void UCavrnusUserWidget::InitializeComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCavrnusUserWidget_InitializeComplete),NULL);
	}
	void UCavrnusUserWidget::StaticRegisterNativesUCavrnusUserWidget()
	{
		UClass* Class = UCavrnusUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeUserConnection", &UCavrnusUserWidget::execInitializeUserConnection },
			{ "TriggerMaximizeUserSelected", &UCavrnusUserWidget::execTriggerMaximizeUserSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusUserWidget_InitializeComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusUserWidget_InitializeComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/UserMenu/CavrnusUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusUserWidget_InitializeComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusUserWidget, nullptr, "InitializeComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusUserWidget_InitializeComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUserWidget_InitializeComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusUserWidget_InitializeComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusUserWidget_InitializeComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics
	{
		struct CavrnusUserWidget_eventInitializeUserConnection_Parms
		{
			FCavrnusUser InUser;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::NewProp_InUser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::NewProp_InUser = { "InUser", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusUserWidget_eventInitializeUserConnection_Parms, InUser), Z_Construct_UScriptStruct_FCavrnusUser, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::NewProp_InUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::NewProp_InUser_MetaData)) }; // 2569896488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::NewProp_InUser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|UI" },
		{ "Comment", "/**\n\x09 * @brief Initializes the user connection with the given space connection and user data.\n\x09 * @param InSpaceConnection The space connection associated with the user.\n\x09 * @param InUser The user data to initialize the connection.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/UserMenu/CavrnusUserWidget.h" },
		{ "ToolTip", "@brief Initializes the user connection with the given space connection and user data.\n@param InSpaceConnection The space connection associated with the user.\n@param InUser The user data to initialize the connection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusUserWidget, nullptr, "InitializeUserConnection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::CavrnusUserWidget_eventInitializeUserConnection_Parms), Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusUserWidget_TriggerMaximizeUserSelected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusUserWidget_TriggerMaximizeUserSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|UI" },
		{ "ModuleRelativePath", "Public/UI/UserMenu/CavrnusUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusUserWidget_TriggerMaximizeUserSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusUserWidget, nullptr, "TriggerMaximizeUserSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusUserWidget_TriggerMaximizeUserSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUserWidget_TriggerMaximizeUserSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusUserWidget_TriggerMaximizeUserSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusUserWidget_TriggerMaximizeUserSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusUserWidget);
	UClass* Z_Construct_UClass_UCavrnusUserWidget_NoRegister()
	{
		return UCavrnusUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RtcStreamImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RtcStreamImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_User;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserVideoFrameBinding_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserVideoFrameBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusUserWidget_InitializeComplete, "InitializeComplete" }, // 2003538847
		{ &Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection, "InitializeUserConnection" }, // 1967057961
		{ &Z_Construct_UFunction_UCavrnusUserWidget_TriggerMaximizeUserSelected, "TriggerMaximizeUserSelected" }, // 3041856657
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief Base class for widget representing a Cavrnus User in the UI.\n *\n * This class provides the necessary functionality to display user-related information and\n * handle user-specific actions within the Cavrnus platform's UI.\n */" },
		{ "IncludePath", "UI/UserMenu/CavrnusUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/UserMenu/CavrnusUserWidget.h" },
		{ "ToolTip", "@brief Base class for widget representing a Cavrnus User in the UI.\n\nThis class provides the necessary functionality to display user-related information and\nhandle user-specific actions within the Cavrnus platform's UI." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_RtcStreamImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|UI" },
		{ "Comment", "/** @brief Image widget to display the RTC stream of the user. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/UserMenu/CavrnusUserWidget.h" },
		{ "ToolTip", "@brief Image widget to display the RTC stream of the user." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_RtcStreamImage = { "RtcStreamImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusUserWidget, RtcStreamImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_RtcStreamImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_RtcStreamImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_User_MetaData[] = {
		{ "Category", "Cavrnus|UI" },
		{ "Comment", "/** @brief User data associated with the widget. */" },
		{ "ModuleRelativePath", "Public/UI/UserMenu/CavrnusUserWidget.h" },
		{ "ToolTip", "@brief User data associated with the widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusUserWidget, User), Z_Construct_UScriptStruct_FCavrnusUser, METADATA_PARAMS(Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_User_MetaData)) }; // 2569896488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_UserVideoFrameBinding_MetaData[] = {
		{ "Comment", "/** @brief Binding for the user's video frame updates. */" },
		{ "ModuleRelativePath", "Public/UI/UserMenu/CavrnusUserWidget.h" },
		{ "ToolTip", "@brief Binding for the user's video frame updates." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_UserVideoFrameBinding = { "UserVideoFrameBinding", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusUserWidget, UserVideoFrameBinding), Z_Construct_UClass_UCavrnusBinding_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_UserVideoFrameBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_UserVideoFrameBinding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_RtcStreamImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_User,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_UserVideoFrameBinding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusUserWidget_Statics::ClassParams = {
		&UCavrnusUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCavrnusUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusUserWidget()
	{
		if (!Z_Registration_Info_UClass_UCavrnusUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusUserWidget.OuterSingleton, Z_Construct_UClass_UCavrnusUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusUserWidget.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusUserWidget>()
	{
		return UCavrnusUserWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusUserWidget);
	struct Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_UserMenu_CavrnusUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_UserMenu_CavrnusUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusUserWidget, UCavrnusUserWidget::StaticClass, TEXT("UCavrnusUserWidget"), &Z_Registration_Info_UClass_UCavrnusUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusUserWidget), 2523439793U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_UserMenu_CavrnusUserWidget_h_1224783350(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_UserMenu_CavrnusUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_UserMenu_CavrnusUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
