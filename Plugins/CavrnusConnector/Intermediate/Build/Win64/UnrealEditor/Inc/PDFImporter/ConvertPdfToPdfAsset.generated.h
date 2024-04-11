// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPDF;
class UObject;
class UConvertPdfToPdfAsset;
#ifdef PDFIMPORTER_ConvertPdfToPdfAsset_generated_h
#error "ConvertPdfToPdfAsset.generated.h already included, missing '#pragma once' in ConvertPdfToPdfAsset.h"
#endif
#define PDFIMPORTER_ConvertPdfToPdfAsset_generated_h

#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_9_DELEGATE \
struct _Script_PDFImporter_eventLoadingCompletedPin_Parms \
{ \
	UPDF* PDF; \
}; \
static inline void FLoadingCompletedPin_DelegateWrapper(const FMulticastScriptDelegate& LoadingCompletedPin, UPDF* PDF) \
{ \
	_Script_PDFImporter_eventLoadingCompletedPin_Parms Parms; \
	Parms.PDF=PDF; \
	LoadingCompletedPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_10_DELEGATE \
static inline void FFailedToLoadPin_DelegateWrapper(const FMulticastScriptDelegate& FailedToLoadPin) \
{ \
	FailedToLoadPin.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertPdfToPdfAsset);


#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertPdfToPdfAsset);


#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConvertPdfToPdfAsset(); \
	friend struct Z_Construct_UClass_UConvertPdfToPdfAsset_Statics; \
public: \
	DECLARE_CLASS(UConvertPdfToPdfAsset, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PDFImporter"), NO_API) \
	DECLARE_SERIALIZER(UConvertPdfToPdfAsset)


#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUConvertPdfToPdfAsset(); \
	friend struct Z_Construct_UClass_UConvertPdfToPdfAsset_Statics; \
public: \
	DECLARE_CLASS(UConvertPdfToPdfAsset, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PDFImporter"), NO_API) \
	DECLARE_SERIALIZER(UConvertPdfToPdfAsset)


#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConvertPdfToPdfAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConvertPdfToPdfAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConvertPdfToPdfAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConvertPdfToPdfAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConvertPdfToPdfAsset(UConvertPdfToPdfAsset&&); \
	NO_API UConvertPdfToPdfAsset(const UConvertPdfToPdfAsset&); \
public:


#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConvertPdfToPdfAsset(UConvertPdfToPdfAsset&&); \
	NO_API UConvertPdfToPdfAsset(const UConvertPdfToPdfAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConvertPdfToPdfAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConvertPdfToPdfAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConvertPdfToPdfAsset)


#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_12_PROLOG
#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_15_RPC_WRAPPERS \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_15_INCLASS \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PDFIMPORTER_API UClass* StaticClass<class UConvertPdfToPdfAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CavrnusConnector_Source_PDFImporter_Public_ConvertPdfToPdfAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
