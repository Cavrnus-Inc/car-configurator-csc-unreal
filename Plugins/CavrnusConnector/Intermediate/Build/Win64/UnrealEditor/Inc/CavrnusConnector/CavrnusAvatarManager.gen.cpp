// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Private/CavrnusAvatarManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusAvatarManager() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusAvatarManager_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusAvatarManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusBinding_NoRegister();
// End Cross Module References
	void UCavrnusAvatarManager::StaticRegisterNativesUCavrnusAvatarManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusAvatarManager);
	UClass* Z_Construct_UClass_UCavrnusAvatarManager_NoRegister()
	{
		return UCavrnusAvatarManager::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusAvatarManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarVis_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarVis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusAvatarManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusAvatarManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Class definition\n" },
		{ "IncludePath", "CavrnusAvatarManager.h" },
		{ "ModuleRelativePath", "Private/CavrnusAvatarManager.h" },
		{ "ToolTip", "Class definition" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusAvatarManager_Statics::NewProp_AvatarVis_MetaData[] = {
		{ "ModuleRelativePath", "Private/CavrnusAvatarManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusAvatarManager_Statics::NewProp_AvatarVis = { "AvatarVis", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusAvatarManager, AvatarVis), Z_Construct_UClass_UCavrnusBinding_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusAvatarManager_Statics::NewProp_AvatarVis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusAvatarManager_Statics::NewProp_AvatarVis_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusAvatarManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusAvatarManager_Statics::NewProp_AvatarVis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusAvatarManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusAvatarManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusAvatarManager_Statics::ClassParams = {
		&UCavrnusAvatarManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCavrnusAvatarManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusAvatarManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusAvatarManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusAvatarManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusAvatarManager()
	{
		if (!Z_Registration_Info_UClass_UCavrnusAvatarManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusAvatarManager.OuterSingleton, Z_Construct_UClass_UCavrnusAvatarManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusAvatarManager.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusAvatarManager>()
	{
		return UCavrnusAvatarManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusAvatarManager);
	struct Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_CavrnusAvatarManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_CavrnusAvatarManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusAvatarManager, UCavrnusAvatarManager::StaticClass, TEXT("UCavrnusAvatarManager"), &Z_Registration_Info_UClass_UCavrnusAvatarManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusAvatarManager), 2622924143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_CavrnusAvatarManager_h_1179644496(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_CavrnusAvatarManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_CavrnusAvatarManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
