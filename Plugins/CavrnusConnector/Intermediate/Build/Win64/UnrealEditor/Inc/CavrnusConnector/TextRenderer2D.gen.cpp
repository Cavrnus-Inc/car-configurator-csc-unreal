// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Annotation/Text/TextRenderer2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextRenderer2D() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UTextRenderer2D_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UTextRenderer2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UTextRenderer_NoRegister();
// End Cross Module References
	void UTextRenderer2D::StaticRegisterNativesUTextRenderer2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextRenderer2D);
	UClass* Z_Construct_UClass_UTextRenderer2D_NoRegister()
	{
		return UTextRenderer2D::StaticClass();
	}
	struct Z_Construct_UClass_UTextRenderer2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextRenderer2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderer2D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * 2D text annotation\n */" },
		{ "IncludePath", "Annotation/Text/TextRenderer2D.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Annotation/Text/TextRenderer2D.h" },
		{ "ToolTip", "2D text annotation" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTextRenderer2D_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTextRenderer_NoRegister, (int32)VTABLE_OFFSET(UTextRenderer2D, ITextRenderer), false },  // 804768571
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextRenderer2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextRenderer2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextRenderer2D_Statics::ClassParams = {
		&UTextRenderer2D::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextRenderer2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderer2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextRenderer2D()
	{
		if (!Z_Registration_Info_UClass_UTextRenderer2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextRenderer2D.OuterSingleton, Z_Construct_UClass_UTextRenderer2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextRenderer2D.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UTextRenderer2D>()
	{
		return UTextRenderer2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextRenderer2D);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextRenderer2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextRenderer2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextRenderer2D, UTextRenderer2D::StaticClass, TEXT("UTextRenderer2D"), &Z_Registration_Info_UClass_UTextRenderer2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextRenderer2D), 3779487685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextRenderer2D_h_3443879328(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextRenderer2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_Text_TextRenderer2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
