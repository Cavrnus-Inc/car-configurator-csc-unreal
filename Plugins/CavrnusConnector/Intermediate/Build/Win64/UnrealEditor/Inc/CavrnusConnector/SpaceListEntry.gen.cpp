// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/SpaceList/SpaceListEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceListEntry() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_USpaceListEntry_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_USpaceListEntry();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void USpaceListEntry::StaticRegisterNativesUSpaceListEntry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpaceListEntry);
	UClass* Z_Construct_UClass_USpaceListEntry_NoRegister()
	{
		return USpaceListEntry::StaticClass();
	}
	struct Z_Construct_UClass_USpaceListEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpaceListEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceListEntry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/SpaceList/SpaceListEntry.h" },
		{ "ModuleRelativePath", "Public/UI/SpaceList/SpaceListEntry.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpaceListEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpaceListEntry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpaceListEntry_Statics::ClassParams = {
		&USpaceListEntry::StaticClass,
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
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USpaceListEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceListEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpaceListEntry()
	{
		if (!Z_Registration_Info_UClass_USpaceListEntry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpaceListEntry.OuterSingleton, Z_Construct_UClass_USpaceListEntry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpaceListEntry.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<USpaceListEntry>()
	{
		return USpaceListEntry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpaceListEntry);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_SpaceList_SpaceListEntry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_SpaceList_SpaceListEntry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpaceListEntry, USpaceListEntry::StaticClass, TEXT("USpaceListEntry"), &Z_Registration_Info_UClass_USpaceListEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpaceListEntry), 840479106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_SpaceList_SpaceListEntry_h_2043389052(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_SpaceList_SpaceListEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_SpaceList_SpaceListEntry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
