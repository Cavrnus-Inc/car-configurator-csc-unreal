// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/CavrnusValueSyncBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusValueSyncBase() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncBase_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncBase();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UPropertySyncInterface_NoRegister();
// End Cross Module References
	void UCavrnusValueSyncBase::StaticRegisterNativesUCavrnusValueSyncBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusValueSyncBase);
	UClass* Z_Construct_UClass_UCavrnusValueSyncBase_NoRegister()
	{
		return UCavrnusValueSyncBase::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusValueSyncBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendChanges_MetaData[];
#endif
		static void NewProp_SendChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SendChanges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialSetupComplete_MetaData[];
#endif
		static void NewProp_InitialSetupComplete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InitialSetupComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusValueSyncBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Class definition\n" },
		{ "HideCategories", "Transform Physics Collision Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "CavrnusValueSyncBase.h" },
		{ "ModuleRelativePath", "Public/CavrnusValueSyncBase.h" },
		{ "ToolTip", "Class definition" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/CavrnusValueSyncBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusValueSyncBase, PropertyName), METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SendChanges_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/CavrnusValueSyncBase.h" },
	};
#endif
	void Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SendChanges_SetBit(void* Obj)
	{
		((UCavrnusValueSyncBase*)Obj)->SendChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SendChanges = { "SendChanges", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCavrnusValueSyncBase), &Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SendChanges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SendChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SendChanges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_InitialSetupComplete_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "//TODO: Custom Inspector like CSC to hide this???\n" },
		{ "ModuleRelativePath", "Public/CavrnusValueSyncBase.h" },
		{ "ToolTip", "TODO: Custom Inspector like CSC to hide this???" },
	};
#endif
	void Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_InitialSetupComplete_SetBit(void* Obj)
	{
		((UCavrnusValueSyncBase*)Obj)->InitialSetupComplete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_InitialSetupComplete = { "InitialSetupComplete", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCavrnusValueSyncBase), &Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_InitialSetupComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_InitialSetupComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_InitialSetupComplete_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusValueSyncBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SendChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_InitialSetupComplete,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPropertySyncInterface_NoRegister, (int32)VTABLE_OFFSET(UCavrnusValueSyncBase, IPropertySyncInterface), false },  // 1509868635
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusValueSyncBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusValueSyncBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::ClassParams = {
		&UCavrnusValueSyncBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCavrnusValueSyncBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusValueSyncBase()
	{
		if (!Z_Registration_Info_UClass_UCavrnusValueSyncBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusValueSyncBase.OuterSingleton, Z_Construct_UClass_UCavrnusValueSyncBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusValueSyncBase.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusValueSyncBase>()
	{
		return UCavrnusValueSyncBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusValueSyncBase);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusValueSyncBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusValueSyncBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusValueSyncBase, UCavrnusValueSyncBase::StaticClass, TEXT("UCavrnusValueSyncBase"), &Z_Registration_Info_UClass_UCavrnusValueSyncBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusValueSyncBase), 1763855177U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusValueSyncBase_h_3275721097(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusValueSyncBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusValueSyncBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
