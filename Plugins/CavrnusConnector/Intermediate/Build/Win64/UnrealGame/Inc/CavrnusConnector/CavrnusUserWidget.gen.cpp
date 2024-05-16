// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/CavrnusUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusUserWidget() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusUserWidget_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusSpaceConnection();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusUser();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusUserWidget::execInitializeUserConnection)
	{
		P_GET_STRUCT_REF(FCavrnusSpaceConnection,Z_Param_Out_InSpaceConnection);
		P_GET_STRUCT_REF(FCavrnusUser,Z_Param_Out_InUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeUserConnection(Z_Param_Out_InSpaceConnection,Z_Param_Out_InUser);
		P_NATIVE_END;
	}
	void UCavrnusUserWidget::StaticRegisterNativesUCavrnusUserWidget()
	{
		UClass* Class = UCavrnusUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeUserConnection", &UCavrnusUserWidget::execInitializeUserConnection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics
	{
		struct CavrnusUserWidget_eventInitializeUserConnection_Parms
		{
			FCavrnusSpaceConnection InSpaceConnection;
			FCavrnusUser InUser;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSpaceConnection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSpaceConnection;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::NewProp_InSpaceConnection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::NewProp_InSpaceConnection = { "InSpaceConnection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusUserWidget_eventInitializeUserConnection_Parms, InSpaceConnection), Z_Construct_UScriptStruct_FCavrnusSpaceConnection, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::NewProp_InSpaceConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::NewProp_InSpaceConnection_MetaData)) }; // 3908145014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::NewProp_InUser_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::NewProp_InUser = { "InUser", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusUserWidget_eventInitializeUserConnection_Parms, InUser), Z_Construct_UScriptStruct_FCavrnusUser, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::NewProp_InUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::NewProp_InUser_MetaData)) }; // 884232857
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::NewProp_InSpaceConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::NewProp_InUser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|UI" },
		{ "ModuleRelativePath", "Public/UI/CavrnusUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusUserWidget, nullptr, "InitializeUserConnection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::CavrnusUserWidget_eventInitializeUserConnection_Parms), Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProfileImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceConnection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_User;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusUserWidget_InitializeUserConnection, "InitializeUserConnection" }, // 1665122257
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Base class for widget representing a Cavrnus User in the UI\n *\n */" },
		{ "IncludePath", "UI/CavrnusUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/CavrnusUserWidget.h" },
		{ "ToolTip", "Base class for widget representing a Cavrnus User in the UI" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_RtcStreamImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CavrnusUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_RtcStreamImage = { "RtcStreamImage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusUserWidget, RtcStreamImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_RtcStreamImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_RtcStreamImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_ProfileImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CavrnusUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_ProfileImage = { "ProfileImage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusUserWidget, ProfileImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_ProfileImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_ProfileImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_SpaceConnection_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/UI/CavrnusUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_SpaceConnection = { "SpaceConnection", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusUserWidget, SpaceConnection), Z_Construct_UScriptStruct_FCavrnusSpaceConnection, METADATA_PARAMS(Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_SpaceConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_SpaceConnection_MetaData)) }; // 3908145014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_User_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/UI/CavrnusUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusUserWidget, User), Z_Construct_UScriptStruct_FCavrnusUser, METADATA_PARAMS(Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_User_MetaData)) }; // 884232857
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_RtcStreamImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_ProfileImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_SpaceConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusUserWidget_Statics::NewProp_User,
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
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusUserWidget, UCavrnusUserWidget::StaticClass, TEXT("UCavrnusUserWidget"), &Z_Registration_Info_UClass_UCavrnusUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusUserWidget), 2249136342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusUserWidget_h_787608865(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
