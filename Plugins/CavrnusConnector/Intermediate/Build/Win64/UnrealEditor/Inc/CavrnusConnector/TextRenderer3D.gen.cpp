// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Annotation/Text/TextRenderer3D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextRenderer3D() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UTextRenderer3D_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UTextRenderer3D();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UTextAnnotationWidget_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UTextRenderer_NoRegister();
// End Cross Module References
	void UTextRenderer3D::StaticRegisterNativesUTextRenderer3D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextRenderer3D);
	UClass* Z_Construct_UClass_UTextRenderer3D_NoRegister()
	{
		return UTextRenderer3D::StaticClass();
	}
	struct Z_Construct_UClass_UTextRenderer3D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StickMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StickMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TextWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextWidgetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextWidgetComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnotationWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnotationWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextRenderer3D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderer3D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * 3D Text annotation\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Annotation/Text/TextRenderer3D.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Annotation/Text/TextRenderer3D.h" },
		{ "ToolTip", "3D Text annotation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_UserActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Annotation/Text/TextRenderer3D.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_UserActor = { "UserActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderer3D, UserActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_UserActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_UserActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_StickMesh_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/**< Pointer to current user. Used to calculate annotation rotation */" },
		{ "ModuleRelativePath", "Public/Annotation/Text/TextRenderer3D.h" },
		{ "ToolTip", "< Pointer to current user. Used to calculate annotation rotation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_StickMesh = { "StickMesh", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderer3D, StickMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_StickMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_StickMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_TextWidgetClass_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/Annotation/Text/TextRenderer3D.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_TextWidgetClass = { "TextWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderer3D, TextWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_TextWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_TextWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Comment", "/**< user widget class representing 3d text annotation */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Annotation/Text/TextRenderer3D.h" },
		{ "ToolTip", "< user widget class representing 3d text annotation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderer3D, SpringArm), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_TextWidgetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Annotation/Text/TextRenderer3D.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_TextWidgetComponent = { "TextWidgetComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderer3D, TextWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_TextWidgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_TextWidgetComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_AnnotationWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Annotation/Text/TextRenderer3D.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_AnnotationWidget = { "AnnotationWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextRenderer3D, AnnotationWidget), Z_Construct_UClass_UTextAnnotationWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_AnnotationWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_AnnotationWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextRenderer3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_UserActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_StickMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_TextWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_TextWidgetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderer3D_Statics::NewProp_AnnotationWidget,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTextRenderer3D_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTextRenderer_NoRegister, (int32)VTABLE_OFFSET(UTextRenderer3D, ITextRenderer), false },  // 804768571
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextRenderer3D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextRenderer3D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextRenderer3D_Statics::ClassParams = {
		&UTextRenderer3D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextRenderer3D_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderer3D_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTextRenderer3D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderer3D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextRenderer3D()
	{
		if (!Z_Registration_Info_UClass_UTextRenderer3D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextRenderer3D.OuterSingleton, Z_Construct_UClass_UTextRenderer3D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextRenderer3D.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UTextRenderer3D>()
	{
		return UTextRenderer3D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextRenderer3D);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextRenderer3D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextRenderer3D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextRenderer3D, UTextRenderer3D::StaticClass, TEXT("UTextRenderer3D"), &Z_Registration_Info_UClass_UTextRenderer3D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextRenderer3D), 68812102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextRenderer3D_h_2611165262(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextRenderer3D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextRenderer3D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
