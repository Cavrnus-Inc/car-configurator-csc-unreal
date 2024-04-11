// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Annotation/Line/LineRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineRenderer() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ULineRenderer_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ULineRenderer();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UAnnotation();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void ULineRenderer::StaticRegisterNativesULineRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULineRenderer);
	UClass* Z_Construct_UClass_ULineRenderer_NoRegister()
	{
		return ULineRenderer::StaticClass();
	}
	struct Z_Construct_UClass_ULineRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULineRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnnotation,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineRenderer_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Annotation/Line/LineRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULineRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILineRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULineRenderer_Statics::ClassParams = {
		&ULineRenderer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULineRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULineRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULineRenderer()
	{
		if (!Z_Registration_Info_UClass_ULineRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULineRenderer.OuterSingleton, Z_Construct_UClass_ULineRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULineRenderer.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<ULineRenderer>()
	{
		return ULineRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULineRenderer);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Line_LineRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Line_LineRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULineRenderer, ULineRenderer::StaticClass, TEXT("ULineRenderer"), &Z_Registration_Info_UClass_ULineRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULineRenderer), 3324103127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Line_LineRenderer_h_692268064(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Line_LineRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Line_LineRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
