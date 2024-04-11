// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Annotation/Line/LineRenderer3D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineRenderer3D() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ULineRenderer3D_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ULineRenderer3D();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ULineRenderer_NoRegister();
// End Cross Module References
	void ULineRenderer3D::StaticRegisterNativesULineRenderer3D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULineRenderer3D);
	UClass* Z_Construct_UClass_ULineRenderer3D_NoRegister()
	{
		return ULineRenderer3D::StaticClass();
	}
	struct Z_Construct_UClass_ULineRenderer3D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULineRenderer3D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProceduralMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineRenderer3D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * 3D line annotation placed on an space holo object\n */" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "Annotation/Line/LineRenderer3D.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Annotation/Line/LineRenderer3D.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "3D line annotation placed on an space holo object" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineRenderer3D_Statics::NewProp_MaterialRef_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/Annotation/Line/LineRenderer3D.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULineRenderer3D_Statics::NewProp_MaterialRef = { "MaterialRef", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULineRenderer3D, MaterialRef), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULineRenderer3D_Statics::NewProp_MaterialRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULineRenderer3D_Statics::NewProp_MaterialRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULineRenderer3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULineRenderer3D_Statics::NewProp_MaterialRef,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULineRenderer3D_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULineRenderer_NoRegister, (int32)VTABLE_OFFSET(ULineRenderer3D, ILineRenderer), false },  // 3324103127
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULineRenderer3D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULineRenderer3D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULineRenderer3D_Statics::ClassParams = {
		&ULineRenderer3D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULineRenderer3D_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULineRenderer3D_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULineRenderer3D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULineRenderer3D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULineRenderer3D()
	{
		if (!Z_Registration_Info_UClass_ULineRenderer3D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULineRenderer3D.OuterSingleton, Z_Construct_UClass_ULineRenderer3D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULineRenderer3D.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<ULineRenderer3D>()
	{
		return ULineRenderer3D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULineRenderer3D);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Line_LineRenderer3D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Line_LineRenderer3D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULineRenderer3D, ULineRenderer3D::StaticClass, TEXT("ULineRenderer3D"), &Z_Registration_Info_UClass_ULineRenderer3D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULineRenderer3D), 2822060518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Line_LineRenderer3D_h_1245476411(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Line_LineRenderer3D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Line_LineRenderer3D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
