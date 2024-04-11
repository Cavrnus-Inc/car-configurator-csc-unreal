// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Annotation/Line/LineRenderer2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineRenderer2D() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ULineRenderer2D_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ULineRenderer2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ULineRenderer_NoRegister();
// End Cross Module References
	void ULineRenderer2D::StaticRegisterNativesULineRenderer2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULineRenderer2D);
	UClass* Z_Construct_UClass_ULineRenderer2D_NoRegister()
	{
		return ULineRenderer2D::StaticClass();
	}
	struct Z_Construct_UClass_ULineRenderer2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULineRenderer2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineRenderer2D_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * 2D line annotation\n */" },
		{ "IncludePath", "Annotation/Line/LineRenderer2D.h" },
		{ "ModuleRelativePath", "Public/Annotation/Line/LineRenderer2D.h" },
		{ "ToolTip", "2D line annotation" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULineRenderer2D_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULineRenderer_NoRegister, (int32)VTABLE_OFFSET(ULineRenderer2D, ILineRenderer), false },  // 3324103127
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULineRenderer2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULineRenderer2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULineRenderer2D_Statics::ClassParams = {
		&ULineRenderer2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULineRenderer2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULineRenderer2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULineRenderer2D()
	{
		if (!Z_Registration_Info_UClass_ULineRenderer2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULineRenderer2D.OuterSingleton, Z_Construct_UClass_ULineRenderer2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULineRenderer2D.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<ULineRenderer2D>()
	{
		return ULineRenderer2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULineRenderer2D);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Line_LineRenderer2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Line_LineRenderer2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULineRenderer2D, ULineRenderer2D::StaticClass, TEXT("ULineRenderer2D"), &Z_Registration_Info_UClass_ULineRenderer2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULineRenderer2D), 593807061U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Line_LineRenderer2D_h_954153782(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Line_LineRenderer2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Line_LineRenderer2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
