// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/CavrnusSpaceListWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusSpaceListWidget() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusSpaceListWidget_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusSpaceListWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UPagination_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusSpaceListWidget::execSearch)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_SearchValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Search(Z_Param_Out_SearchValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSpaceListWidget::execSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup();
		P_NATIVE_END;
	}
	void UCavrnusSpaceListWidget::StaticRegisterNativesUCavrnusSpaceListWidget()
	{
		UClass* Class = UCavrnusSpaceListWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Search", &UCavrnusSpaceListWidget::execSearch },
			{ "Setup", &UCavrnusSpaceListWidget::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusSpaceListWidget_Search_Statics
	{
		struct CavrnusSpaceListWidget_eventSearch_Parms
		{
			FText SearchValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SearchValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpaceListWidget_Search_Statics::NewProp_SearchValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCavrnusSpaceListWidget_Search_Statics::NewProp_SearchValue = { "SearchValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpaceListWidget_eventSearch_Parms, SearchValue), METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpaceListWidget_Search_Statics::NewProp_SearchValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpaceListWidget_Search_Statics::NewProp_SearchValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSpaceListWidget_Search_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpaceListWidget_Search_Statics::NewProp_SearchValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpaceListWidget_Search_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CavrnusSpaceListWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSpaceListWidget_Search_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSpaceListWidget, nullptr, "Search", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusSpaceListWidget_Search_Statics::CavrnusSpaceListWidget_eventSearch_Parms), Z_Construct_UFunction_UCavrnusSpaceListWidget_Search_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpaceListWidget_Search_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpaceListWidget_Search_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpaceListWidget_Search_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSpaceListWidget_Search()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSpaceListWidget_Search_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSpaceListWidget_Setup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpaceListWidget_Setup_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpaceList" },
		{ "ModuleRelativePath", "Public/UI/CavrnusSpaceListWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSpaceListWidget_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSpaceListWidget, nullptr, "Setup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpaceListWidget_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpaceListWidget_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSpaceListWidget_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSpaceListWidget_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusSpaceListWidget);
	UClass* Z_Construct_UClass_UCavrnusSpaceListWidget_NoRegister()
	{
		return UCavrnusSpaceListWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusSpaceListWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaginationItemWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PaginationItemWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacePagination_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpacePagination;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchTextBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SearchTextBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusSpaceListWidget_Search, "Search" }, // 2360705699
		{ &Z_Construct_UFunction_UCavrnusSpaceListWidget_Setup, "Setup" }, // 2784200711
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/CavrnusSpaceListWidget.h" },
		{ "ModuleRelativePath", "Public/UI/CavrnusSpaceListWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_PaginationItemWidget_MetaData[] = {
		{ "Category", "SpaceList" },
		{ "ModuleRelativePath", "Public/UI/CavrnusSpaceListWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_PaginationItemWidget = { "PaginationItemWidget", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSpaceListWidget, PaginationItemWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_PaginationItemWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_PaginationItemWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_SpacePagination_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpaceList" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CavrnusSpaceListWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_SpacePagination = { "SpacePagination", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSpaceListWidget, SpacePagination), Z_Construct_UClass_UPagination_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_SpacePagination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_SpacePagination_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_SearchTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SpaceList" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CavrnusSpaceListWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_SearchTextBox = { "SearchTextBox", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSpaceListWidget, SearchTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_SearchTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_SearchTextBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_PaginationItemWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_SpacePagination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_SearchTextBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusSpaceListWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::ClassParams = {
		&UCavrnusSpaceListWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusSpaceListWidget()
	{
		if (!Z_Registration_Info_UClass_UCavrnusSpaceListWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusSpaceListWidget.OuterSingleton, Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusSpaceListWidget.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusSpaceListWidget>()
	{
		return UCavrnusSpaceListWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusSpaceListWidget);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusSpaceListWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusSpaceListWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusSpaceListWidget, UCavrnusSpaceListWidget::StaticClass, TEXT("UCavrnusSpaceListWidget"), &Z_Registration_Info_UClass_UCavrnusSpaceListWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusSpaceListWidget), 2609844870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusSpaceListWidget_h_1542590012(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusSpaceListWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusSpaceListWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
