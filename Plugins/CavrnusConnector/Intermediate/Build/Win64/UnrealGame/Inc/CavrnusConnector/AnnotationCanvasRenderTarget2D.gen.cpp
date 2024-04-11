// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Annotation/AnnotationCanvasRenderTarget2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnnotationCanvasRenderTarget2D() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UAnnotationCanvasRenderTarget2D();
	ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
// End Cross Module References
	void UAnnotationCanvasRenderTarget2D::StaticRegisterNativesUAnnotationCanvasRenderTarget2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnnotationCanvasRenderTarget2D);
	UClass* Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_NoRegister()
	{
		return UAnnotationCanvasRenderTarget2D::StaticClass();
	}
	struct Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextFont_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextFont;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawCanvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DrawCanvas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EraserRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EraserRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinesRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LinesRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextsRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextsRenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCanvasRenderTarget2D,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Canvas render target for 2D annotations\n */" },
		{ "HideCategories", "Object Texture Compression Adjustments Compositing" },
		{ "IncludePath", "Annotation/AnnotationCanvasRenderTarget2D.h" },
		{ "ModuleRelativePath", "Public/Annotation/AnnotationCanvasRenderTarget2D.h" },
		{ "ToolTip", "Canvas render target for 2D annotations" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Annotation/AnnotationCanvasRenderTarget2D.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnnotationCanvasRenderTarget2D, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_MaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_MaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_TextFont_MetaData[] = {
		{ "Comment", "/**< annotation material */" },
		{ "ModuleRelativePath", "Public/Annotation/AnnotationCanvasRenderTarget2D.h" },
		{ "ToolTip", "< annotation material" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_TextFont = { "TextFont", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnnotationCanvasRenderTarget2D, TextFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_TextFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_TextFont_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_DrawCanvas_MetaData[] = {
		{ "Comment", "/**< annotation text font */" },
		{ "ModuleRelativePath", "Public/Annotation/AnnotationCanvasRenderTarget2D.h" },
		{ "ToolTip", "< annotation text font" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_DrawCanvas = { "DrawCanvas", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnnotationCanvasRenderTarget2D, DrawCanvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_DrawCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_DrawCanvas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_EraserRenderTarget_MetaData[] = {
		{ "Comment", "/**< draw canvas on which all annotations will be drawn */" },
		{ "ModuleRelativePath", "Public/Annotation/AnnotationCanvasRenderTarget2D.h" },
		{ "ToolTip", "< draw canvas on which all annotations will be drawn" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_EraserRenderTarget = { "EraserRenderTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnnotationCanvasRenderTarget2D, EraserRenderTarget), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_EraserRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_EraserRenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_LinesRenderTarget_MetaData[] = {
		{ "Comment", "/**< render target for erasers */" },
		{ "ModuleRelativePath", "Public/Annotation/AnnotationCanvasRenderTarget2D.h" },
		{ "ToolTip", "< render target for erasers" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_LinesRenderTarget = { "LinesRenderTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnnotationCanvasRenderTarget2D, LinesRenderTarget), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_LinesRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_LinesRenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_TextsRenderTarget_MetaData[] = {
		{ "Comment", "/**< render target for lines */" },
		{ "ModuleRelativePath", "Public/Annotation/AnnotationCanvasRenderTarget2D.h" },
		{ "ToolTip", "< render target for lines" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_TextsRenderTarget = { "TextsRenderTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnnotationCanvasRenderTarget2D, TextsRenderTarget), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_TextsRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_TextsRenderTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_MaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_TextFont,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_DrawCanvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_EraserRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_LinesRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::NewProp_TextsRenderTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnnotationCanvasRenderTarget2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::ClassParams = {
		&UAnnotationCanvasRenderTarget2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnnotationCanvasRenderTarget2D()
	{
		if (!Z_Registration_Info_UClass_UAnnotationCanvasRenderTarget2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnnotationCanvasRenderTarget2D.OuterSingleton, Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnnotationCanvasRenderTarget2D.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UAnnotationCanvasRenderTarget2D>()
	{
		return UAnnotationCanvasRenderTarget2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnnotationCanvasRenderTarget2D);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_AnnotationCanvasRenderTarget2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_AnnotationCanvasRenderTarget2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnnotationCanvasRenderTarget2D, UAnnotationCanvasRenderTarget2D::StaticClass, TEXT("UAnnotationCanvasRenderTarget2D"), &Z_Registration_Info_UClass_UAnnotationCanvasRenderTarget2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnnotationCanvasRenderTarget2D), 2681235912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_AnnotationCanvasRenderTarget2D_h_1432717248(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_AnnotationCanvasRenderTarget2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_AnnotationCanvasRenderTarget2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
