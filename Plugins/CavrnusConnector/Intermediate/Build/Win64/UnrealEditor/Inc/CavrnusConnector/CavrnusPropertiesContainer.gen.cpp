// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/CavrnusPropertiesContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusPropertiesContainer() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusPropertiesContainer_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusPropertiesContainer();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void UCavrnusPropertiesContainer::StaticRegisterNativesUCavrnusPropertiesContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusPropertiesContainer);
	UClass* Z_Construct_UClass_UCavrnusPropertiesContainer_NoRegister()
	{
		return UCavrnusPropertiesContainer::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusPropertiesContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContainerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief UCavrnusPropertiesContainer is a component class used for containing properties within the Cavrnus plugin. This component can be attached to actors and used to manage property containers for Cavrnus.\n */" },
		{ "HideCategories", "Transform Physics LOD Collision Rendering ComponentTick Trigger PhysicsVolume" },
		{ "IncludePath", "CavrnusPropertiesContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CavrnusPropertiesContainer.h" },
		{ "ToolTip", "@brief UCavrnusPropertiesContainer is a component class used for containing properties within the Cavrnus plugin. This component can be attached to actors and used to manage property containers for Cavrnus." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::NewProp_ContainerName_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/**\n\x09 * @brief This property stores the name of the container, which can be used to identify it within the Cavrnus system.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CavrnusPropertiesContainer.h" },
		{ "ToolTip", "@brief This property stores the name of the container, which can be used to identify it within the Cavrnus system." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::NewProp_ContainerName = { "ContainerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusPropertiesContainer, ContainerName), METADATA_PARAMS(Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::NewProp_ContainerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::NewProp_ContainerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::NewProp_ContainerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusPropertiesContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::ClassParams = {
		&UCavrnusPropertiesContainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusPropertiesContainer()
	{
		if (!Z_Registration_Info_UClass_UCavrnusPropertiesContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusPropertiesContainer.OuterSingleton, Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusPropertiesContainer.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusPropertiesContainer>()
	{
		return UCavrnusPropertiesContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusPropertiesContainer);
	struct Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusPropertiesContainer, UCavrnusPropertiesContainer::StaticClass, TEXT("UCavrnusPropertiesContainer"), &Z_Registration_Info_UClass_UCavrnusPropertiesContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusPropertiesContainer), 2973972859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_745724958(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
