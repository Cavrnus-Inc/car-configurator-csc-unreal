// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDFImporter_init() {}
	PDFIMPORTER_API UFunction* Z_Construct_UDelegateFunction_PDFImporter_FailedToLoadPin__DelegateSignature();
	PDFIMPORTER_API UFunction* Z_Construct_UDelegateFunction_PDFImporter_LoadingCompletedPin__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PDFImporter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PDFImporter()
	{
		if (!Z_Registration_Info_UPackage__Script_PDFImporter.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PDFImporter_FailedToLoadPin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PDFImporter_LoadingCompletedPin__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PDFImporter",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x836402EB,
				0x83E7D80C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PDFImporter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PDFImporter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PDFImporter(Z_Construct_UPackage__Script_PDFImporter, TEXT("/Script/PDFImporter"), Z_Registration_Info_UPackage__Script_PDFImporter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x836402EB, 0x83E7D80C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
