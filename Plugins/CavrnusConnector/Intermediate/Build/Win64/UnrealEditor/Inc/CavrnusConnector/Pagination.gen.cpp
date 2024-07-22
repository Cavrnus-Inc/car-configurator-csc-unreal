// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/Pagination/Pagination.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePagination() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UPagination_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UPagination();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPagination::execPrevious)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Previous();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPagination::execNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Next();
		P_NATIVE_END;
	}
	void UPagination::StaticRegisterNativesUPagination()
	{
		UClass* Class = UPagination::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Next", &UPagination::execNext },
			{ "Previous", &UPagination::execPrevious },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPagination_Next_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPagination_Next_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handler for the \"Next\" button click event. */" },
		{ "ModuleRelativePath", "Public/UI/Pagination/Pagination.h" },
		{ "ToolTip", "Handler for the \"Next\" button click event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPagination_Next_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPagination, nullptr, "Next", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPagination_Next_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPagination_Next_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPagination_Next()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPagination_Next_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPagination_Previous_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPagination_Previous_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handler for the \"Previous\" button click event. */" },
		{ "ModuleRelativePath", "Public/UI/Pagination/Pagination.h" },
		{ "ToolTip", "Handler for the \"Previous\" button click event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPagination_Previous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPagination, nullptr, "Previous", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPagination_Previous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPagination_Previous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPagination_Previous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPagination_Previous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPagination);
	UClass* Z_Construct_UClass_UPagination_NoRegister()
	{
		return UPagination::StaticClass();
	}
	struct Z_Construct_UClass_UPagination_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonPrevious_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonPrevious;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonNext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonNext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextBlockCurrentPage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlockCurrentPage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoResultsContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoResultsContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FooterContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FooterContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsPerPage_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemsPerPage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPagination_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPagination_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPagination_Next, "Next" }, // 3918609815
		{ &Z_Construct_UFunction_UPagination_Previous, "Previous" }, // 3288273932
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPagination_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Pagination/Pagination.h" },
		{ "ModuleRelativePath", "Public/UI/Pagination/Pagination.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPagination_Statics::NewProp_ButtonPrevious_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|Pagination" },
		{ "Comment", "/** Button for navigating to the previous page. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Pagination/Pagination.h" },
		{ "ToolTip", "Button for navigating to the previous page." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPagination_Statics::NewProp_ButtonPrevious = { "ButtonPrevious", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPagination, ButtonPrevious), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPagination_Statics::NewProp_ButtonPrevious_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPagination_Statics::NewProp_ButtonPrevious_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPagination_Statics::NewProp_ButtonNext_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|PaginationSetup" },
		{ "Comment", "/** Button for navigating to the next page. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Pagination/Pagination.h" },
		{ "ToolTip", "Button for navigating to the next page." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPagination_Statics::NewProp_ButtonNext = { "ButtonNext", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPagination, ButtonNext), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPagination_Statics::NewProp_ButtonNext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPagination_Statics::NewProp_ButtonNext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPagination_Statics::NewProp_TextBlockCurrentPage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|Pagination" },
		{ "Comment", "/** Text block displaying the current page number. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Pagination/Pagination.h" },
		{ "ToolTip", "Text block displaying the current page number." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPagination_Statics::NewProp_TextBlockCurrentPage = { "TextBlockCurrentPage", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPagination, TextBlockCurrentPage), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPagination_Statics::NewProp_TextBlockCurrentPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPagination_Statics::NewProp_TextBlockCurrentPage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPagination_Statics::NewProp_NoResultsContainer_MetaData[] = {
		{ "Category", "Cavrnus|Pagination" },
		{ "Comment", "/** Widget container to display when there are no results. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Pagination/Pagination.h" },
		{ "ToolTip", "Widget container to display when there are no results." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPagination_Statics::NewProp_NoResultsContainer = { "NoResultsContainer", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPagination, NoResultsContainer), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPagination_Statics::NewProp_NoResultsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPagination_Statics::NewProp_NoResultsContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPagination_Statics::NewProp_ItemContainer_MetaData[] = {
		{ "Category", "Cavrnus|Pagination" },
		{ "Comment", "/** Widget container for displaying paginated items. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Pagination/Pagination.h" },
		{ "ToolTip", "Widget container for displaying paginated items." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPagination_Statics::NewProp_ItemContainer = { "ItemContainer", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPagination, ItemContainer), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPagination_Statics::NewProp_ItemContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPagination_Statics::NewProp_ItemContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPagination_Statics::NewProp_FooterContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|Pagination" },
		{ "Comment", "/** Footer container widget. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Pagination/Pagination.h" },
		{ "ToolTip", "Footer container widget." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPagination_Statics::NewProp_FooterContainer = { "FooterContainer", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPagination, FooterContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPagination_Statics::NewProp_FooterContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPagination_Statics::NewProp_FooterContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPagination_Statics::NewProp_ItemsPerPage_MetaData[] = {
		{ "Category", "PaginationSetup" },
		{ "Comment", "/** Number of items to display per page. */" },
		{ "ModuleRelativePath", "Public/UI/Pagination/Pagination.h" },
		{ "ToolTip", "Number of items to display per page." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPagination_Statics::NewProp_ItemsPerPage = { "ItemsPerPage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPagination, ItemsPerPage), METADATA_PARAMS(Z_Construct_UClass_UPagination_Statics::NewProp_ItemsPerPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPagination_Statics::NewProp_ItemsPerPage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPagination_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPagination_Statics::NewProp_ButtonPrevious,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPagination_Statics::NewProp_ButtonNext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPagination_Statics::NewProp_TextBlockCurrentPage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPagination_Statics::NewProp_NoResultsContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPagination_Statics::NewProp_ItemContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPagination_Statics::NewProp_FooterContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPagination_Statics::NewProp_ItemsPerPage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPagination_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPagination>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPagination_Statics::ClassParams = {
		&UPagination::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPagination_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPagination_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPagination_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPagination_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPagination()
	{
		if (!Z_Registration_Info_UClass_UPagination.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPagination.OuterSingleton, Z_Construct_UClass_UPagination_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPagination.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UPagination>()
	{
		return UPagination::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPagination);
	struct Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Pagination_Pagination_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Pagination_Pagination_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPagination, UPagination::StaticClass, TEXT("UPagination"), &Z_Registration_Info_UClass_UPagination, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPagination), 1745993715U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Pagination_Pagination_h_1056726097(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Pagination_Pagination_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Pagination_Pagination_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
