// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Annotation/IAnnotation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAnnotation() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UAnnotation_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UAnnotation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void UAnnotation::StaticRegisterNativesUAnnotation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnnotation);
	UClass* Z_Construct_UClass_UAnnotation_NoRegister()
	{
		return UAnnotation::StaticClass();
	}
	struct Z_Construct_UClass_UAnnotation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnnotation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnnotation_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Annotation/IAnnotation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnnotation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnnotation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnnotation_Statics::ClassParams = {
		&UAnnotation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnnotation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnnotation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnnotation()
	{
		if (!Z_Registration_Info_UClass_UAnnotation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnnotation.OuterSingleton, Z_Construct_UClass_UAnnotation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnnotation.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UAnnotation>()
	{
		return UAnnotation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnnotation);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_IAnnotation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_IAnnotation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnnotation, UAnnotation::StaticClass, TEXT("UAnnotation"), &Z_Registration_Info_UClass_UAnnotation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnnotation), 4149235071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_IAnnotation_h_437696605(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_IAnnotation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Annotation_IAnnotation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
