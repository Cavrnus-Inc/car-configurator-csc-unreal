// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/Pagination/IListElementInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIListElementInterface() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UListElementInterface_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UListElementInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void UListElementInterface::StaticRegisterNativesUListElementInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UListElementInterface);
	UClass* Z_Construct_UClass_UListElementInterface_NoRegister()
	{
		return UListElementInterface::StaticClass();
	}
	struct Z_Construct_UClass_UListElementInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UListElementInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UListElementInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Pagination/IListElementInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UListElementInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IListElementInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UListElementInterface_Statics::ClassParams = {
		&UListElementInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UListElementInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UListElementInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UListElementInterface()
	{
		if (!Z_Registration_Info_UClass_UListElementInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UListElementInterface.OuterSingleton, Z_Construct_UClass_UListElementInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UListElementInterface.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UListElementInterface>()
	{
		return UListElementInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UListElementInterface);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Pagination_IListElementInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Pagination_IListElementInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UListElementInterface, UListElementInterface::StaticClass, TEXT("UListElementInterface"), &Z_Registration_Info_UClass_UListElementInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UListElementInterface), 776547596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Pagination_IListElementInterface_h_3524133250(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Pagination_IListElementInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Pagination_IListElementInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
