// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Types/CavrnusCallbackTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusCallbackTypes() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusCallbackTypes_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusCallbackTypes();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void UCavrnusCallbackTypes::StaticRegisterNativesUCavrnusCallbackTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusCallbackTypes);
	UClass* Z_Construct_UClass_UCavrnusCallbackTypes_NoRegister()
	{
		return UCavrnusCallbackTypes::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusCallbackTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusCallbackTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusCallbackTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Types/CavrnusCallbackTypes.h" },
		{ "ModuleRelativePath", "Public/Types/CavrnusCallbackTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusCallbackTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusCallbackTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusCallbackTypes_Statics::ClassParams = {
		&UCavrnusCallbackTypes::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusCallbackTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusCallbackTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusCallbackTypes()
	{
		if (!Z_Registration_Info_UClass_UCavrnusCallbackTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusCallbackTypes.OuterSingleton, Z_Construct_UClass_UCavrnusCallbackTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusCallbackTypes.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusCallbackTypes>()
	{
		return UCavrnusCallbackTypes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusCallbackTypes);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusCallbackTypes, UCavrnusCallbackTypes::StaticClass, TEXT("UCavrnusCallbackTypes"), &Z_Registration_Info_UClass_UCavrnusCallbackTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusCallbackTypes), 1817766196U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_425720129(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusCallbackTypes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
