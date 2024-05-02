// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Annotation/Text/TextAnnotationWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextAnnotationWidget() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UTextAnnotationWidget_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UTextAnnotationWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableText_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
// End Cross Module References
	void UTextAnnotationWidget::StaticRegisterNativesUTextAnnotationWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextAnnotationWidget);
	UClass* Z_Construct_UClass_UTextAnnotationWidget_NoRegister()
	{
		return UTextAnnotationWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTextAnnotationWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnotationTextBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnotationTextBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextScrollBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextAnnotationWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAnnotationWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Annotation/Text/TextAnnotationWidget.h" },
		{ "ModuleRelativePath", "Public/Annotation/Text/TextAnnotationWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAnnotationWidget_Statics::NewProp_AnnotationTextBox_MetaData[] = {
		{ "bindWidgetOptional", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Annotation/Text/TextAnnotationWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextAnnotationWidget_Statics::NewProp_AnnotationTextBox = { "AnnotationTextBox", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextAnnotationWidget, AnnotationTextBox), Z_Construct_UClass_UMultiLineEditableText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextAnnotationWidget_Statics::NewProp_AnnotationTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAnnotationWidget_Statics::NewProp_AnnotationTextBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextAnnotationWidget_Statics::NewProp_TextScrollBox_MetaData[] = {
		{ "bindWidgetOptional", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Annotation/Text/TextAnnotationWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextAnnotationWidget_Statics::NewProp_TextScrollBox = { "TextScrollBox", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextAnnotationWidget, TextScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextAnnotationWidget_Statics::NewProp_TextScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAnnotationWidget_Statics::NewProp_TextScrollBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextAnnotationWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAnnotationWidget_Statics::NewProp_AnnotationTextBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextAnnotationWidget_Statics::NewProp_TextScrollBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextAnnotationWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextAnnotationWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextAnnotationWidget_Statics::ClassParams = {
		&UTextAnnotationWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextAnnotationWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextAnnotationWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextAnnotationWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextAnnotationWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextAnnotationWidget()
	{
		if (!Z_Registration_Info_UClass_UTextAnnotationWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextAnnotationWidget.OuterSingleton, Z_Construct_UClass_UTextAnnotationWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextAnnotationWidget.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UTextAnnotationWidget>()
	{
		return UTextAnnotationWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextAnnotationWidget);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextAnnotationWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextAnnotationWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextAnnotationWidget, UTextAnnotationWidget::StaticClass, TEXT("UTextAnnotationWidget"), &Z_Registration_Info_UClass_UTextAnnotationWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextAnnotationWidget), 1374948412U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextAnnotationWidget_h_906002861(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextAnnotationWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextAnnotationWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
