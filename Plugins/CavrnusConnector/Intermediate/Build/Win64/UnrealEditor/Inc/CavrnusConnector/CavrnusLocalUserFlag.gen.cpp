// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/FlagComponents/CavrnusLocalUserFlag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusLocalUserFlag() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLocalUserFlag_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLocalUserFlag();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusUser();
// End Cross Module References
	void UCavrnusLocalUserFlag::StaticRegisterNativesUCavrnusLocalUserFlag()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusLocalUserFlag);
	UClass* Z_Construct_UClass_UCavrnusLocalUserFlag_NoRegister()
	{
		return UCavrnusLocalUserFlag::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusLocalUserFlag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusLocalUserFlag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusLocalUserFlag_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Class definition\n" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FlagComponents/CavrnusLocalUserFlag.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FlagComponents/CavrnusLocalUserFlag.h" },
		{ "ToolTip", "Class definition" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusLocalUserFlag_Statics::NewProp_LocalUser_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/FlagComponents/CavrnusLocalUserFlag.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCavrnusLocalUserFlag_Statics::NewProp_LocalUser = { "LocalUser", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusLocalUserFlag, LocalUser), Z_Construct_UScriptStruct_FCavrnusUser, METADATA_PARAMS(Z_Construct_UClass_UCavrnusLocalUserFlag_Statics::NewProp_LocalUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusLocalUserFlag_Statics::NewProp_LocalUser_MetaData)) }; // 884232857
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusLocalUserFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusLocalUserFlag_Statics::NewProp_LocalUser,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusLocalUserFlag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusLocalUserFlag>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusLocalUserFlag_Statics::ClassParams = {
		&UCavrnusLocalUserFlag::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCavrnusLocalUserFlag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusLocalUserFlag_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusLocalUserFlag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusLocalUserFlag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusLocalUserFlag()
	{
		if (!Z_Registration_Info_UClass_UCavrnusLocalUserFlag.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusLocalUserFlag.OuterSingleton, Z_Construct_UClass_UCavrnusLocalUserFlag_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusLocalUserFlag.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusLocalUserFlag>()
	{
		return UCavrnusLocalUserFlag::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusLocalUserFlag);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_FlagComponents_CavrnusLocalUserFlag_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_FlagComponents_CavrnusLocalUserFlag_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusLocalUserFlag, UCavrnusLocalUserFlag::StaticClass, TEXT("UCavrnusLocalUserFlag"), &Z_Registration_Info_UClass_UCavrnusLocalUserFlag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusLocalUserFlag), 1603419283U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_FlagComponents_CavrnusLocalUserFlag_h_3455177959(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_FlagComponents_CavrnusLocalUserFlag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_FlagComponents_CavrnusLocalUserFlag_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
