// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/FlagComponents/CavrnusUserAvatarFlag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusUserAvatarFlag() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusUserAvatarFlag_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusUserAvatarFlag();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusUser();
// End Cross Module References
	void UCavrnusUserAvatarFlag::StaticRegisterNativesUCavrnusUserAvatarFlag()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusUserAvatarFlag);
	UClass* Z_Construct_UClass_UCavrnusUserAvatarFlag_NoRegister()
	{
		return UCavrnusUserAvatarFlag::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusUserAvatarFlag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CavrnusUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CavrnusUser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusUserAvatarFlag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUserAvatarFlag_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Class definition\n" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FlagComponents/CavrnusUserAvatarFlag.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FlagComponents/CavrnusUserAvatarFlag.h" },
		{ "ToolTip", "Class definition" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUserAvatarFlag_Statics::NewProp_CavrnusUser_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** The Cavrnus user associated with the avatar. */" },
		{ "ModuleRelativePath", "Public/FlagComponents/CavrnusUserAvatarFlag.h" },
		{ "ToolTip", "The Cavrnus user associated with the avatar." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCavrnusUserAvatarFlag_Statics::NewProp_CavrnusUser = { "CavrnusUser", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusUserAvatarFlag, CavrnusUser), Z_Construct_UScriptStruct_FCavrnusUser, METADATA_PARAMS(Z_Construct_UClass_UCavrnusUserAvatarFlag_Statics::NewProp_CavrnusUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserAvatarFlag_Statics::NewProp_CavrnusUser_MetaData)) }; // 2569896488
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusUserAvatarFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusUserAvatarFlag_Statics::NewProp_CavrnusUser,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusUserAvatarFlag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusUserAvatarFlag>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusUserAvatarFlag_Statics::ClassParams = {
		&UCavrnusUserAvatarFlag::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCavrnusUserAvatarFlag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserAvatarFlag_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusUserAvatarFlag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUserAvatarFlag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusUserAvatarFlag()
	{
		if (!Z_Registration_Info_UClass_UCavrnusUserAvatarFlag.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusUserAvatarFlag.OuterSingleton, Z_Construct_UClass_UCavrnusUserAvatarFlag_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusUserAvatarFlag.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusUserAvatarFlag>()
	{
		return UCavrnusUserAvatarFlag::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusUserAvatarFlag);
	struct Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_FlagComponents_CavrnusUserAvatarFlag_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_FlagComponents_CavrnusUserAvatarFlag_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusUserAvatarFlag, UCavrnusUserAvatarFlag::StaticClass, TEXT("UCavrnusUserAvatarFlag"), &Z_Registration_Info_UClass_UCavrnusUserAvatarFlag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusUserAvatarFlag), 3388468399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_FlagComponents_CavrnusUserAvatarFlag_h_3891131135(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_FlagComponents_CavrnusUserAvatarFlag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_FlagComponents_CavrnusUserAvatarFlag_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
