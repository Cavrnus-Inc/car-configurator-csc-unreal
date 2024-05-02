// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Annotation/Text/TextRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextRenderer() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UTextRenderer_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UTextRenderer();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UAnnotation();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void UTextRenderer::StaticRegisterNativesUTextRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextRenderer);
	UClass* Z_Construct_UClass_UTextRenderer_NoRegister()
	{
		return UTextRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UTextRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnnotation,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderer_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Annotation/Text/TextRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITextRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextRenderer_Statics::ClassParams = {
		&UTextRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextRenderer()
	{
		if (!Z_Registration_Info_UClass_UTextRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextRenderer.OuterSingleton, Z_Construct_UClass_UTextRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextRenderer.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UTextRenderer>()
	{
		return UTextRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextRenderer);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextRenderer, UTextRenderer::StaticClass, TEXT("UTextRenderer"), &Z_Registration_Info_UClass_UTextRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextRenderer), 804768571U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextRenderer_h_2966675914(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
