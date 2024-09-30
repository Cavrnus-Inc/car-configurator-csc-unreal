// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Private/SpawnObjectHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnObjectHelpers() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_USpawnObjectHelpers_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_USpawnObjectHelpers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void USpawnObjectHelpers::StaticRegisterNativesUSpawnObjectHelpers()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnObjectHelpers);
	UClass* Z_Construct_UClass_USpawnObjectHelpers_NoRegister()
	{
		return USpawnObjectHelpers::StaticClass();
	}
	struct Z_Construct_UClass_USpawnObjectHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpawnObjectHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnObjectHelpers_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief Helper class for spawning and setting up objects and users in the Cavrnus system.\n *\n * The USpawnObjectHelpers class provides utility functions for spawning and initializing\n * actors representing users and objects within the Cavrnus system. It includes methods\n * for handling the setup and configuration of spawned actors.\n */" },
		{ "IncludePath", "SpawnObjectHelpers.h" },
		{ "ModuleRelativePath", "Private/SpawnObjectHelpers.h" },
		{ "ToolTip", "@brief Helper class for spawning and setting up objects and users in the Cavrnus system.\n\nThe USpawnObjectHelpers class provides utility functions for spawning and initializing\nactors representing users and objects within the Cavrnus system. It includes methods\nfor handling the setup and configuration of spawned actors." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawnObjectHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnObjectHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnObjectHelpers_Statics::ClassParams = {
		&USpawnObjectHelpers::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpawnObjectHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpawnObjectHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpawnObjectHelpers()
	{
		if (!Z_Registration_Info_UClass_USpawnObjectHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnObjectHelpers.OuterSingleton, Z_Construct_UClass_USpawnObjectHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpawnObjectHelpers.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<USpawnObjectHelpers>()
	{
		return USpawnObjectHelpers::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnObjectHelpers);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_SpawnObjectHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_SpawnObjectHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpawnObjectHelpers, USpawnObjectHelpers::StaticClass, TEXT("USpawnObjectHelpers"), &Z_Registration_Info_UClass_USpawnObjectHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnObjectHelpers), 4168674328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_SpawnObjectHelpers_h_3703143594(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_SpawnObjectHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_SpawnObjectHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
