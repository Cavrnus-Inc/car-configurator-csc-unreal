// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PDFImporter/Public/PDF.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDF() {}
// Cross Module References
	PDFIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FPageRange();
	UPackage* Z_Construct_UPackage__Script_PDFImporter();
	PDFIMPORTER_API UClass* Z_Construct_UClass_UPDF_NoRegister();
	PDFIMPORTER_API UClass* Z_Construct_UClass_UPDF();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PageRange;
class UScriptStruct* FPageRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PageRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PageRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPageRange, Z_Construct_UPackage__Script_PDFImporter(), TEXT("PageRange"));
	}
	return Z_Registration_Info_UScriptStruct_PageRange.OuterSingleton;
}
template<> PDFIMPORTER_API UScriptStruct* StaticStruct<FPageRange>()
{
	return FPageRange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPageRange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPage_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FirstPage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastPage_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_LastPage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPageRange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PDF.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPageRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPageRange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPageRange_Statics::NewProp_FirstPage_MetaData[] = {
		{ "Category", "PageRange" },
		{ "ModuleRelativePath", "Public/PDF.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPageRange_Statics::NewProp_FirstPage = { "FirstPage", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPageRange, FirstPage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPageRange_Statics::NewProp_FirstPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPageRange_Statics::NewProp_FirstPage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPageRange_Statics::NewProp_LastPage_MetaData[] = {
		{ "Category", "PageRange" },
		{ "ModuleRelativePath", "Public/PDF.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPageRange_Statics::NewProp_LastPage = { "LastPage", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPageRange, LastPage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPageRange_Statics::NewProp_LastPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPageRange_Statics::NewProp_LastPage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPageRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPageRange_Statics::NewProp_FirstPage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPageRange_Statics::NewProp_LastPage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPageRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PDFImporter,
		nullptr,
		&NewStructOps,
		"PageRange",
		sizeof(FPageRange),
		alignof(FPageRange),
		Z_Construct_UScriptStruct_FPageRange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPageRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPageRange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPageRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPageRange()
	{
		if (!Z_Registration_Info_UScriptStruct_PageRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PageRange.InnerSingleton, Z_Construct_UScriptStruct_FPageRange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PageRange.InnerSingleton;
	}
	DEFINE_FUNCTION(UPDF::execGetPageCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPageCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDF::execGetPageTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Page);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetPageTexture(Z_Param_Page);
		P_NATIVE_END;
	}
	void UPDF::StaticRegisterNativesUPDF()
	{
		UClass* Class = UPDF::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPageCount", &UPDF::execGetPageCount },
			{ "GetPageTexture", &UPDF::execGetPageTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPDF_GetPageCount_Statics
	{
		struct PDF_eventGetPageCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPDF_GetPageCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PDF_eventGetPageCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_GetPageCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_GetPageCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_GetPageCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF" },
		{ "Comment", "// Get number of pages in PDF\n" },
		{ "ModuleRelativePath", "Public/PDF.h" },
		{ "ToolTip", "Get number of pages in PDF" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_GetPageCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF, nullptr, "GetPageCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_GetPageCount_Statics::PDF_eventGetPageCount_Parms), Z_Construct_UFunction_UPDF_GetPageCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_GetPageCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_GetPageCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_GetPageCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_GetPageCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_GetPageCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDF_GetPageTexture_Statics
	{
		struct PDF_eventGetPageTexture_Parms
		{
			int32 Page;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Page;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPDF_GetPageTexture_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PDF_eventGetPageTexture_Parms, Page), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDF_GetPageTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PDF_eventGetPageTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDF_GetPageTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_GetPageTexture_Statics::NewProp_Page,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDF_GetPageTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDF_GetPageTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "PDF" },
		{ "Comment", "// Get the texture of the specified page\n" },
		{ "ModuleRelativePath", "Public/PDF.h" },
		{ "ToolTip", "Get the texture of the specified page" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDF_GetPageTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDF, nullptr, "GetPageTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDF_GetPageTexture_Statics::PDF_eventGetPageTexture_Parms), Z_Construct_UFunction_UPDF_GetPageTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_GetPageTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDF_GetPageTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDF_GetPageTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDF_GetPageTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDF_GetPageTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDF);
	UClass* Z_Construct_UClass_UPDF_NoRegister()
	{
		return UPDF::StaticClass();
	}
	struct Z_Construct_UClass_UPDF_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PageRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PageRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dpi_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Dpi;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pages;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPDF_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PDFImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPDF_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPDF_GetPageCount, "GetPageCount" }, // 4083043548
		{ &Z_Construct_UFunction_UPDF_GetPageTexture, "GetPageTexture" }, // 485999943
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDF_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PDF.h" },
		{ "ModuleRelativePath", "Public/PDF.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDF_Statics::NewProp_PageRange_MetaData[] = {
		{ "Category", "PDF" },
		{ "Comment", "// PDF page range\n" },
		{ "ModuleRelativePath", "Public/PDF.h" },
		{ "ToolTip", "PDF page range" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPDF_Statics::NewProp_PageRange = { "PageRange", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDF, PageRange), Z_Construct_UScriptStruct_FPageRange, METADATA_PARAMS(Z_Construct_UClass_UPDF_Statics::NewProp_PageRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDF_Statics::NewProp_PageRange_MetaData)) }; // 661540664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDF_Statics::NewProp_Dpi_MetaData[] = {
		{ "Category", "PDF" },
		{ "Comment", "// PDF resolution\n" },
		{ "ModuleRelativePath", "Public/PDF.h" },
		{ "ToolTip", "PDF resolution" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPDF_Statics::NewProp_Dpi = { "Dpi", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDF, Dpi), METADATA_PARAMS(Z_Construct_UClass_UPDF_Statics::NewProp_Dpi_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDF_Statics::NewProp_Dpi_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPDF_Statics::NewProp_Pages_Inner = { "Pages", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDF_Statics::NewProp_Pages_MetaData[] = {
		{ "Category", "PDF" },
		{ "Comment", "// PDF page textures\n" },
		{ "ModuleRelativePath", "Public/PDF.h" },
		{ "ToolTip", "PDF page textures" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPDF_Statics::NewProp_Pages = { "Pages", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDF, Pages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPDF_Statics::NewProp_Pages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDF_Statics::NewProp_Pages_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDF_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PDF.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPDF_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00120008000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDF, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPDF_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDF_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDF_Statics::NewProp_Filename_MetaData[] = {
		{ "ModuleRelativePath", "Public/PDF.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPDF_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDF, Filename), METADATA_PARAMS(Z_Construct_UClass_UPDF_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDF_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDF_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/PDF.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPDF_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPDF, TimeStamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UPDF_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDF_Statics::NewProp_TimeStamp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPDF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDF_Statics::NewProp_PageRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDF_Statics::NewProp_Dpi,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDF_Statics::NewProp_Pages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDF_Statics::NewProp_Pages,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDF_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDF_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDF_Statics::NewProp_TimeStamp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPDF_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDF>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDF_Statics::ClassParams = {
		&UPDF::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPDF_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPDF_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPDF_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPDF_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPDF()
	{
		if (!Z_Registration_Info_UClass_UPDF.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDF.OuterSingleton, Z_Construct_UClass_UPDF_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPDF.OuterSingleton;
	}
	template<> PDFIMPORTER_API UClass* StaticClass<UPDF>()
	{
		return UPDF::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDF);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPDF)
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_Statics::ScriptStructInfo[] = {
		{ FPageRange::StaticStruct, Z_Construct_UScriptStruct_FPageRange_Statics::NewStructOps, TEXT("PageRange"), &Z_Registration_Info_UScriptStruct_PageRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPageRange), 661540664U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPDF, UPDF::StaticClass, TEXT("UPDF"), &Z_Registration_Info_UClass_UPDF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDF), 598743043U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_2126250781(TEXT("/Script/PDFImporter"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
