// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef PDFIMPORTER_PDF_generated_h
#error "PDF.generated.h already included, missing '#pragma once' in PDF.h"
#endif
#define PDFIMPORTER_PDF_generated_h

#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPageRange_Statics; \
	PDFIMPORTER_API static class UScriptStruct* StaticStruct();


template<> PDFIMPORTER_API UScriptStruct* StaticStruct<struct FPageRange>();

#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_SPARSE_DATA
#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPageCount); \
	DECLARE_FUNCTION(execGetPageTexture);


#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPageCount); \
	DECLARE_FUNCTION(execGetPageTexture);


#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPDF, NO_API)


#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPDF(); \
	friend struct Z_Construct_UClass_UPDF_Statics; \
public: \
	DECLARE_CLASS(UPDF, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PDFImporter"), NO_API) \
	DECLARE_SERIALIZER(UPDF) \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_ARCHIVESERIALIZER


#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUPDF(); \
	friend struct Z_Construct_UClass_UPDF_Statics; \
public: \
	DECLARE_CLASS(UPDF, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PDFImporter"), NO_API) \
	DECLARE_SERIALIZER(UPDF) \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_ARCHIVESERIALIZER


#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPDF(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPDF) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPDF); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPDF); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPDF(UPDF&&); \
	NO_API UPDF(const UPDF&); \
public:


#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPDF(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPDF(UPDF&&); \
	NO_API UPDF(const UPDF&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPDF); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPDF); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPDF)


#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_25_PROLOG
#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_RPC_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_INCLASS \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PDFIMPORTER_API UClass* StaticClass<class UPDF>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_PDF_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
