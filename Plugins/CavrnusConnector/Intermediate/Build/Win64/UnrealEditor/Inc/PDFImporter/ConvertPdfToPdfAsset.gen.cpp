// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PDFImporter/Public/ConvertPdfToPdfAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConvertPdfToPdfAsset() {}
// Cross Module References
	PDFIMPORTER_API UFunction* Z_Construct_UDelegateFunction_PDFImporter_LoadingCompletedPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PDFImporter();
	PDFIMPORTER_API UClass* Z_Construct_UClass_UPDF_NoRegister();
	PDFIMPORTER_API UFunction* Z_Construct_UDelegateFunction_PDFImporter_FailedToLoadPin__DelegateSignature();
	PDFIMPORTER_API UClass* Z_Construct_UClass_UConvertPdfToPdfAsset_NoRegister();
	PDFIMPORTER_API UClass* Z_Construct_UClass_UConvertPdfToPdfAsset();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PDFImporter_LoadingCompletedPin__DelegateSignature_Statics
	{
		struct _Script_PDFImporter_eventLoadingCompletedPin_Parms
		{
			UPDF* PDF;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PDF;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PDFImporter_LoadingCompletedPin__DelegateSignature_Statics::NewProp_PDF = { "PDF", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_PDFImporter_eventLoadingCompletedPin_Parms, PDF), Z_Construct_UClass_UPDF_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PDFImporter_LoadingCompletedPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PDFImporter_LoadingCompletedPin__DelegateSignature_Statics::NewProp_PDF,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PDFImporter_LoadingCompletedPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConvertPdfToPdfAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PDFImporter_LoadingCompletedPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PDFImporter, nullptr, "LoadingCompletedPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PDFImporter_LoadingCompletedPin__DelegateSignature_Statics::_Script_PDFImporter_eventLoadingCompletedPin_Parms), Z_Construct_UDelegateFunction_PDFImporter_LoadingCompletedPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PDFImporter_LoadingCompletedPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PDFImporter_LoadingCompletedPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PDFImporter_LoadingCompletedPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PDFImporter_LoadingCompletedPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PDFImporter_LoadingCompletedPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_PDFImporter_FailedToLoadPin__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PDFImporter_FailedToLoadPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConvertPdfToPdfAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PDFImporter_FailedToLoadPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PDFImporter, nullptr, "FailedToLoadPin__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PDFImporter_FailedToLoadPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PDFImporter_FailedToLoadPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PDFImporter_FailedToLoadPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PDFImporter_FailedToLoadPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UConvertPdfToPdfAsset::execConvertPdfToPdfAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_PDF_FilePath);
		P_GET_PROPERTY(FIntProperty,Z_Param_Dpi);
		P_GET_PROPERTY(FIntProperty,Z_Param_FirstPage);
		P_GET_PROPERTY(FIntProperty,Z_Param_LastPage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UConvertPdfToPdfAsset**)Z_Param__Result=UConvertPdfToPdfAsset::ConvertPdfToPdfAsset(Z_Param_WorldContextObject,Z_Param_PDF_FilePath,Z_Param_Dpi,Z_Param_FirstPage,Z_Param_LastPage);
		P_NATIVE_END;
	}
	void UConvertPdfToPdfAsset::StaticRegisterNativesUConvertPdfToPdfAsset()
	{
		UClass* Class = UConvertPdfToPdfAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertPdfToPdfAsset", &UConvertPdfToPdfAsset::execConvertPdfToPdfAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics
	{
		struct ConvertPdfToPdfAsset_eventConvertPdfToPdfAsset_Parms
		{
			const UObject* WorldContextObject;
			FString PDF_FilePath;
			int32 Dpi;
			int32 FirstPage;
			int32 LastPage;
			UConvertPdfToPdfAsset* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PDF_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PDF_FilePath;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Dpi;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FirstPage;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_LastPage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConvertPdfToPdfAsset_eventConvertPdfToPdfAsset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_PDF_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_PDF_FilePath = { "PDF_FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConvertPdfToPdfAsset_eventConvertPdfToPdfAsset_Parms, PDF_FilePath), METADATA_PARAMS(Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_PDF_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_PDF_FilePath_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_Dpi = { "Dpi", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConvertPdfToPdfAsset_eventConvertPdfToPdfAsset_Parms, Dpi), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_FirstPage = { "FirstPage", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConvertPdfToPdfAsset_eventConvertPdfToPdfAsset_Parms, FirstPage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_LastPage = { "LastPage", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConvertPdfToPdfAsset_eventConvertPdfToPdfAsset_Parms, LastPage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConvertPdfToPdfAsset_eventConvertPdfToPdfAsset_Parms, ReturnValue), Z_Construct_UClass_UConvertPdfToPdfAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_PDF_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_Dpi,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_FirstPage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_LastPage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "PDFImporter" },
		{ "Comment", "/*BlueprintInternalUseOnly = \"true\",*/" },
		{ "CPP_Default_Dpi", "150" },
		{ "CPP_Default_FirstPage", "0" },
		{ "CPP_Default_LastPage", "0" },
		{ "DisplayName", "Convert PDF to PDFAsset" },
		{ "ModuleRelativePath", "Public/ConvertPdfToPdfAsset.h" },
		{ "ToolTip", "BlueprintInternalUseOnly = \"true\"," },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConvertPdfToPdfAsset, nullptr, "ConvertPdfToPdfAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::ConvertPdfToPdfAsset_eventConvertPdfToPdfAsset_Parms), Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConvertPdfToPdfAsset);
	UClass* Z_Construct_UClass_UConvertPdfToPdfAsset_NoRegister()
	{
		return UConvertPdfToPdfAsset::StaticClass();
	}
	struct Z_Construct_UClass_UConvertPdfToPdfAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PDFImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConvertPdfToPdfAsset_ConvertPdfToPdfAsset, "ConvertPdfToPdfAsset" }, // 1435536032
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConvertPdfToPdfAsset.h" },
		{ "ModuleRelativePath", "Public/ConvertPdfToPdfAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::NewProp_Completed_MetaData[] = {
		{ "Comment", "// Execution pin called when loading is complete\n" },
		{ "ModuleRelativePath", "Public/ConvertPdfToPdfAsset.h" },
		{ "ToolTip", "Execution pin called when loading is complete" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConvertPdfToPdfAsset, Completed), Z_Construct_UDelegateFunction_PDFImporter_LoadingCompletedPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::NewProp_Completed_MetaData)) }; // 1609255243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::NewProp_Failed_MetaData[] = {
		{ "Comment", "// Execution pin called when loading fails\n" },
		{ "ModuleRelativePath", "Public/ConvertPdfToPdfAsset.h" },
		{ "ToolTip", "Execution pin called when loading fails" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConvertPdfToPdfAsset, Failed), Z_Construct_UDelegateFunction_PDFImporter_FailedToLoadPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::NewProp_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::NewProp_Failed_MetaData)) }; // 143638337
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::NewProp_Completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::NewProp_Failed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConvertPdfToPdfAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::ClassParams = {
		&UConvertPdfToPdfAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConvertPdfToPdfAsset()
	{
		if (!Z_Registration_Info_UClass_UConvertPdfToPdfAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConvertPdfToPdfAsset.OuterSingleton, Z_Construct_UClass_UConvertPdfToPdfAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConvertPdfToPdfAsset.OuterSingleton;
	}
	template<> PDFIMPORTER_API UClass* StaticClass<UConvertPdfToPdfAsset>()
	{
		return UConvertPdfToPdfAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConvertPdfToPdfAsset);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConvertPdfToPdfAsset, UConvertPdfToPdfAsset::StaticClass, TEXT("UConvertPdfToPdfAsset"), &Z_Registration_Info_UClass_UConvertPdfToPdfAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConvertPdfToPdfAsset), 411635848U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_1197302200(TEXT("/Script/PDFImporter"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
