// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/NoMesh/PDFActionsWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDFActionsWidget() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UPDFActionsWidget_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UPDFActionsWidget();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UNoMeshActionsWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPDFActionsWidget::execNextPageClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextPageClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDFActionsWidget::execPrevPageClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrevPageClicked();
		P_NATIVE_END;
	}
	void UPDFActionsWidget::StaticRegisterNativesUPDFActionsWidget()
	{
		UClass* Class = UPDFActionsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NextPageClicked", &UPDFActionsWidget::execNextPageClicked },
			{ "PrevPageClicked", &UPDFActionsWidget::execPrevPageClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPDFActionsWidget_NextPageClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDFActionsWidget_NextPageClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/NoMesh/PDFActionsWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDFActionsWidget_NextPageClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDFActionsWidget, nullptr, "NextPageClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDFActionsWidget_NextPageClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFActionsWidget_NextPageClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDFActionsWidget_NextPageClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDFActionsWidget_NextPageClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDFActionsWidget_PrevPageClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDFActionsWidget_PrevPageClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/NoMesh/PDFActionsWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDFActionsWidget_PrevPageClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDFActionsWidget, nullptr, "PrevPageClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDFActionsWidget_PrevPageClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFActionsWidget_PrevPageClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDFActionsWidget_PrevPageClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDFActionsWidget_PrevPageClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDFActionsWidget);
	UClass* Z_Construct_UClass_UPDFActionsWidget_NoRegister()
	{
		return UPDFActionsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPDFActionsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevPage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrevPage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextPage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NextPage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PageCountText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PageCountText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPDFActionsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNoMeshActionsWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPDFActionsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPDFActionsWidget_NextPageClicked, "NextPageClicked" }, // 776528114
		{ &Z_Construct_UFunction_UPDFActionsWidget_PrevPageClicked, "PrevPageClicked" }, // 3852833950
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDFActionsWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UI/NoMesh/PDFActionsWidget.h" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/PDFActionsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDFActionsWidget_Statics::NewProp_PrevPage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/PDFActionsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPDFActionsWidget_Statics::NewProp_PrevPage = { "PrevPage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDFActionsWidget, PrevPage), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPDFActionsWidget_Statics::NewProp_PrevPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDFActionsWidget_Statics::NewProp_PrevPage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDFActionsWidget_Statics::NewProp_NextPage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/PDFActionsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPDFActionsWidget_Statics::NewProp_NextPage = { "NextPage", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDFActionsWidget, NextPage), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPDFActionsWidget_Statics::NewProp_NextPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDFActionsWidget_Statics::NewProp_NextPage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDFActionsWidget_Statics::NewProp_PageCountText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/PDFActionsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPDFActionsWidget_Statics::NewProp_PageCountText = { "PageCountText", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDFActionsWidget, PageCountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPDFActionsWidget_Statics::NewProp_PageCountText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDFActionsWidget_Statics::NewProp_PageCountText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPDFActionsWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDFActionsWidget_Statics::NewProp_PrevPage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDFActionsWidget_Statics::NewProp_NextPage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDFActionsWidget_Statics::NewProp_PageCountText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPDFActionsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDFActionsWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDFActionsWidget_Statics::ClassParams = {
		&UPDFActionsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPDFActionsWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPDFActionsWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPDFActionsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPDFActionsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPDFActionsWidget()
	{
		if (!Z_Registration_Info_UClass_UPDFActionsWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDFActionsWidget.OuterSingleton, Z_Construct_UClass_UPDFActionsWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPDFActionsWidget.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UPDFActionsWidget>()
	{
		return UPDFActionsWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDFActionsWidget);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_PDFActionsWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_PDFActionsWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPDFActionsWidget, UPDFActionsWidget::StaticClass, TEXT("UPDFActionsWidget"), &Z_Registration_Info_UClass_UPDFActionsWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDFActionsWidget), 927871635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_PDFActionsWidget_h_3320160625(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_PDFActionsWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_PDFActionsWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
