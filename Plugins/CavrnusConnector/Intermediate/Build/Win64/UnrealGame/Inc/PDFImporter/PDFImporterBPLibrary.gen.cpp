// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PDFImporter/Public/PDFImporterBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDFImporterBPLibrary() {}
// Cross Module References
	PDFIMPORTER_API UEnum* Z_Construct_UEnum_PDFImporter_EOpenPDFDialogResult();
	UPackage* Z_Construct_UPackage__Script_PDFImporter();
	PDFIMPORTER_API UClass* Z_Construct_UClass_UPDFImporterBPLibrary_NoRegister();
	PDFIMPORTER_API UClass* Z_Construct_UClass_UPDFImporterBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PDFIMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FPageRange();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOpenPDFDialogResult;
	static UEnum* EOpenPDFDialogResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOpenPDFDialogResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOpenPDFDialogResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PDFImporter_EOpenPDFDialogResult, Z_Construct_UPackage__Script_PDFImporter(), TEXT("EOpenPDFDialogResult"));
		}
		return Z_Registration_Info_UEnum_EOpenPDFDialogResult.OuterSingleton;
	}
	template<> PDFIMPORTER_API UEnum* StaticEnum<EOpenPDFDialogResult>()
	{
		return EOpenPDFDialogResult_StaticEnum();
	}
	struct Z_Construct_UEnum_PDFImporter_EOpenPDFDialogResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PDFImporter_EOpenPDFDialogResult_Statics::Enumerators[] = {
		{ "EOpenPDFDialogResult::Successful", (int64)EOpenPDFDialogResult::Successful },
		{ "EOpenPDFDialogResult::Cancelled", (int64)EOpenPDFDialogResult::Cancelled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PDFImporter_EOpenPDFDialogResult_Statics::Enum_MetaDataParams[] = {
		{ "Cancelled.Name", "EOpenPDFDialogResult::Cancelled" },
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "ModuleRelativePath", "Public/PDFImporterBPLibrary.h" },
		{ "Successful.Name", "EOpenPDFDialogResult::Successful" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PDFImporter_EOpenPDFDialogResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PDFImporter,
		nullptr,
		"EOpenPDFDialogResult",
		"EOpenPDFDialogResult",
		Z_Construct_UEnum_PDFImporter_EOpenPDFDialogResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PDFImporter_EOpenPDFDialogResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PDFImporter_EOpenPDFDialogResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PDFImporter_EOpenPDFDialogResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PDFImporter_EOpenPDFDialogResult()
	{
		if (!Z_Registration_Info_UEnum_EOpenPDFDialogResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOpenPDFDialogResult.InnerSingleton, Z_Construct_UEnum_PDFImporter_EOpenPDFDialogResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOpenPDFDialogResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UPDFImporterBPLibrary::execConvertFPageRangeToFString)
	{
		P_GET_STRUCT(FPageRange,Z_Param_InPageRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPDFImporterBPLibrary::ConvertFPageRangeToFString(Z_Param_InPageRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDFImporterBPLibrary::execOpenPDFDialogMultiple)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
		P_GET_ENUM_REF(EOpenPDFDialogResult,Z_Param_Out_OutputPin);
		P_GET_TARRAY_REF(FString,Z_Param_Out_FileNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPDFImporterBPLibrary::OpenPDFDialogMultiple(Z_Param_DefaultPath,(EOpenPDFDialogResult&)(Z_Param_Out_OutputPin),Z_Param_Out_FileNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPDFImporterBPLibrary::execOpenPDFDialog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
		P_GET_ENUM_REF(EOpenPDFDialogResult,Z_Param_Out_OutputPin);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPDFImporterBPLibrary::OpenPDFDialog(Z_Param_DefaultPath,(EOpenPDFDialogResult&)(Z_Param_Out_OutputPin),Z_Param_Out_FileName);
		P_NATIVE_END;
	}
	void UPDFImporterBPLibrary::StaticRegisterNativesUPDFImporterBPLibrary()
	{
		UClass* Class = UPDFImporterBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertFPageRangeToFString", &UPDFImporterBPLibrary::execConvertFPageRangeToFString },
			{ "OpenPDFDialog", &UPDFImporterBPLibrary::execOpenPDFDialog },
			{ "OpenPDFDialogMultiple", &UPDFImporterBPLibrary::execOpenPDFDialogMultiple },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPDFImporterBPLibrary_ConvertFPageRangeToFString_Statics
	{
		struct PDFImporterBPLibrary_eventConvertFPageRangeToFString_Parms
		{
			FPageRange InPageRange;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPageRange;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPDFImporterBPLibrary_ConvertFPageRangeToFString_Statics::NewProp_InPageRange = { "InPageRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PDFImporterBPLibrary_eventConvertFPageRangeToFString_Parms, InPageRange), Z_Construct_UScriptStruct_FPageRange, METADATA_PARAMS(nullptr, 0) }; // 661540664
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDFImporterBPLibrary_ConvertFPageRangeToFString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PDFImporterBPLibrary_eventConvertFPageRangeToFString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDFImporterBPLibrary_ConvertFPageRangeToFString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFImporterBPLibrary_ConvertFPageRangeToFString_Statics::NewProp_InPageRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFImporterBPLibrary_ConvertFPageRangeToFString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDFImporterBPLibrary_ConvertFPageRangeToFString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "PDFImporter | Convert" },
		{ "Comment", "// Convert FPageRange to FString\n" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString(PageRange)" },
		{ "ModuleRelativePath", "Public/PDFImporterBPLibrary.h" },
		{ "ToolTip", "Convert FPageRange to FString" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDFImporterBPLibrary_ConvertFPageRangeToFString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDFImporterBPLibrary, nullptr, "ConvertFPageRangeToFString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDFImporterBPLibrary_ConvertFPageRangeToFString_Statics::PDFImporterBPLibrary_eventConvertFPageRangeToFString_Parms), Z_Construct_UFunction_UPDFImporterBPLibrary_ConvertFPageRangeToFString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFImporterBPLibrary_ConvertFPageRangeToFString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDFImporterBPLibrary_ConvertFPageRangeToFString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFImporterBPLibrary_ConvertFPageRangeToFString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDFImporterBPLibrary_ConvertFPageRangeToFString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDFImporterBPLibrary_ConvertFPageRangeToFString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics
	{
		struct PDFImporterBPLibrary_eventOpenPDFDialog_Parms
		{
			FString DefaultPath;
			EOpenPDFDialogResult OutputPin;
			FString FileName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputPin;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PDFImporterBPLibrary_eventOpenPDFDialog_Parms, DefaultPath), METADATA_PARAMS(Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::NewProp_DefaultPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::NewProp_DefaultPath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::NewProp_OutputPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::NewProp_OutputPin = { "OutputPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PDFImporterBPLibrary_eventOpenPDFDialog_Parms, OutputPin), Z_Construct_UEnum_PDFImporter_EOpenPDFDialogResult, METADATA_PARAMS(nullptr, 0) }; // 2344608065
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PDFImporterBPLibrary_eventOpenPDFDialog_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::NewProp_DefaultPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::NewProp_OutputPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::NewProp_OutputPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DefaultPath" },
		{ "Category", "PDFImporter | OpenFileDialog" },
		{ "Comment", "// Get the file path of the selected PDF file\n" },
		{ "DisplayName", "Open PDF Dialog" },
		{ "ExpandEnumAsExecs", "OutputPin" },
		{ "ModuleRelativePath", "Public/PDFImporterBPLibrary.h" },
		{ "ToolTip", "Get the file path of the selected PDF file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDFImporterBPLibrary, nullptr, "OpenPDFDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::PDFImporterBPLibrary_eventOpenPDFDialog_Parms), Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics
	{
		struct PDFImporterBPLibrary_eventOpenPDFDialogMultiple_Parms
		{
			FString DefaultPath;
			EOpenPDFDialogResult OutputPin;
			TArray<FString> FileNames;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputPin_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputPin;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FileNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PDFImporterBPLibrary_eventOpenPDFDialogMultiple_Parms, DefaultPath), METADATA_PARAMS(Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::NewProp_DefaultPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::NewProp_DefaultPath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::NewProp_OutputPin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::NewProp_OutputPin = { "OutputPin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PDFImporterBPLibrary_eventOpenPDFDialogMultiple_Parms, OutputPin), Z_Construct_UEnum_PDFImporter_EOpenPDFDialogResult, METADATA_PARAMS(nullptr, 0) }; // 2344608065
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::NewProp_FileNames_Inner = { "FileNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::NewProp_FileNames = { "FileNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PDFImporterBPLibrary_eventOpenPDFDialogMultiple_Parms, FileNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::NewProp_DefaultPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::NewProp_OutputPin_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::NewProp_OutputPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::NewProp_FileNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::NewProp_FileNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DefaultPath" },
		{ "Category", "PDFImporter | OpenFileDialog" },
		{ "Comment", "// Get the file paths of the selected PDF files\n" },
		{ "DisplayName", "Open PDF Dialog Multiple" },
		{ "ExpandEnumAsExecs", "OutputPin" },
		{ "ModuleRelativePath", "Public/PDFImporterBPLibrary.h" },
		{ "ToolTip", "Get the file paths of the selected PDF files" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDFImporterBPLibrary, nullptr, "OpenPDFDialogMultiple", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::PDFImporterBPLibrary_eventOpenPDFDialogMultiple_Parms), Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDFImporterBPLibrary);
	UClass* Z_Construct_UClass_UPDFImporterBPLibrary_NoRegister()
	{
		return UPDFImporterBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPDFImporterBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPDFImporterBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PDFImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPDFImporterBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPDFImporterBPLibrary_ConvertFPageRangeToFString, "ConvertFPageRangeToFString" }, // 1394960372
		{ &Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialog, "OpenPDFDialog" }, // 3826352207
		{ &Z_Construct_UFunction_UPDFImporterBPLibrary_OpenPDFDialogMultiple, "OpenPDFDialogMultiple" }, // 1641207130
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDFImporterBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PDFImporterBPLibrary.h" },
		{ "ModuleRelativePath", "Public/PDFImporterBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPDFImporterBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDFImporterBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDFImporterBPLibrary_Statics::ClassParams = {
		&UPDFImporterBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPDFImporterBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPDFImporterBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPDFImporterBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UPDFImporterBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDFImporterBPLibrary.OuterSingleton, Z_Construct_UClass_UPDFImporterBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPDFImporterBPLibrary.OuterSingleton;
	}
	template<> PDFIMPORTER_API UClass* StaticClass<UPDFImporterBPLibrary>()
	{
		return UPDFImporterBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDFImporterBPLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDFImporterBPLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDFImporterBPLibrary_h_Statics::EnumInfo[] = {
		{ EOpenPDFDialogResult_StaticEnum, TEXT("EOpenPDFDialogResult"), &Z_Registration_Info_UEnum_EOpenPDFDialogResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2344608065U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDFImporterBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPDFImporterBPLibrary, UPDFImporterBPLibrary::StaticClass, TEXT("UPDFImporterBPLibrary"), &Z_Registration_Info_UClass_UPDFImporterBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDFImporterBPLibrary), 4111656630U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDFImporterBPLibrary_h_3368631793(TEXT("/Script/PDFImporter"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDFImporterBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDFImporterBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDFImporterBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDFImporterBPLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
