// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/CavrnusActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusActorComponent() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusActorComponent_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusSpawnedObject();
// End Cross Module References
	void UCavrnusActorComponent::StaticRegisterNativesUCavrnusActorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusActorComponent);
	UClass* Z_Construct_UClass_UCavrnusActorComponent_NoRegister()
	{
		return UCavrnusActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnedObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Class definition\n" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CavrnusActorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CavrnusActorComponent.h" },
		{ "ToolTip", "Class definition" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusActorComponent_Statics::NewProp_SpawnedObject_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCavrnusActorComponent_Statics::NewProp_SpawnedObject = { "SpawnedObject", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusActorComponent, SpawnedObject), Z_Construct_UScriptStruct_FCavrnusSpawnedObject, METADATA_PARAMS(Z_Construct_UClass_UCavrnusActorComponent_Statics::NewProp_SpawnedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusActorComponent_Statics::NewProp_SpawnedObject_MetaData)) }; // 2250269897
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusActorComponent_Statics::NewProp_SpawnedObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusActorComponent_Statics::ClassParams = {
		&UCavrnusActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCavrnusActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusActorComponent()
	{
		if (!Z_Registration_Info_UClass_UCavrnusActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusActorComponent.OuterSingleton, Z_Construct_UClass_UCavrnusActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusActorComponent.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusActorComponent>()
	{
		return UCavrnusActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusActorComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusActorComponent, UCavrnusActorComponent::StaticClass, TEXT("UCavrnusActorComponent"), &Z_Registration_Info_UClass_UCavrnusActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusActorComponent), 4277798673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusActorComponent_h_3475999471(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
