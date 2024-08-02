// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Private/CavrnusLocalCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusLocalCharacter() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ACavrnusLocalCharacter_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ACavrnusLocalCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void ACavrnusLocalCharacter::StaticRegisterNativesACavrnusLocalCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACavrnusLocalCharacter);
	UClass* Z_Construct_UClass_ACavrnusLocalCharacter_NoRegister()
	{
		return ACavrnusLocalCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACavrnusLocalCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACavrnusLocalCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusLocalCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Class definition\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CavrnusLocalCharacter.h" },
		{ "ModuleRelativePath", "Private/CavrnusLocalCharacter.h" },
		{ "ToolTip", "Class definition" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACavrnusLocalCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACavrnusLocalCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACavrnusLocalCharacter_Statics::ClassParams = {
		&ACavrnusLocalCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ACavrnusLocalCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusLocalCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACavrnusLocalCharacter()
	{
		if (!Z_Registration_Info_UClass_ACavrnusLocalCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACavrnusLocalCharacter.OuterSingleton, Z_Construct_UClass_ACavrnusLocalCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACavrnusLocalCharacter.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<ACavrnusLocalCharacter>()
	{
		return ACavrnusLocalCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACavrnusLocalCharacter);
	struct Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_CavrnusLocalCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_CavrnusLocalCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACavrnusLocalCharacter, ACavrnusLocalCharacter::StaticClass, TEXT("ACavrnusLocalCharacter"), &Z_Registration_Info_UClass_ACavrnusLocalCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACavrnusLocalCharacter), 1384921151U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_CavrnusLocalCharacter_h_1530628183(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_CavrnusLocalCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Private_CavrnusLocalCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
