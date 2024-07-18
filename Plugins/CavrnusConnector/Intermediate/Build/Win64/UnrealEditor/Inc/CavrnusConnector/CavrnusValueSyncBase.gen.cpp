// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/ValueSyncs/CavrnusValueSyncBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusValueSyncBase() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncBase_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncBase();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusBinding_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBinding_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropertyBinding;
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
		{ "Comment", "/**\n * @brief Base class for synchronizing property values between Cavrnus and Unreal Engine.\n *\n * UCavrnusValueSyncBase is an abstract class derived from USceneComponent and implements the IPropertySyncInterface.\n * It provides mechanisms for property synchronization, including polling for property changes, sending updates,\n * and handling space connections.\n */" },
		{ "HideCategories", "Transform Physics Collision Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "ValueSyncs/CavrnusValueSyncBase.h" },
		{ "ModuleRelativePath", "Public/ValueSyncs/CavrnusValueSyncBase.h" },
		{ "ToolTip", "@brief Base class for synchronizing property values between Cavrnus and Unreal Engine.\n\nUCavrnusValueSyncBase is an abstract class derived from USceneComponent and implements the IPropertySyncInterface.\nIt provides mechanisms for property synchronization, including polling for property changes, sending updates,\nand handling space connections." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** The name of the property to synchronize. Exposed to the editor when spawned */" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/ValueSyncs/CavrnusValueSyncBase.h" },
		{ "ToolTip", "The name of the property to synchronize. Exposed to the editor when spawned" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusValueSyncBase, PropertyName), METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SendChanges_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** Indicates whether changes to the property should be sent. Exposed to the editor and spawnable */" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/ValueSyncs/CavrnusValueSyncBase.h" },
		{ "ToolTip", "Indicates whether changes to the property should be sent. Exposed to the editor and spawnable" },
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
		{ "Comment", "/** Indicates whether the initial setup is complete. Exposed to the editor */" },
		{ "ModuleRelativePath", "Public/ValueSyncs/CavrnusValueSyncBase.h" },
		{ "ToolTip", "Indicates whether the initial setup is complete. Exposed to the editor" },
	};
#endif
	void Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_InitialSetupComplete_SetBit(void* Obj)
	{
		((UCavrnusValueSyncBase*)Obj)->InitialSetupComplete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_InitialSetupComplete = { "InitialSetupComplete", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCavrnusValueSyncBase), &Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_InitialSetupComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_InitialSetupComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_InitialSetupComplete_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyBinding_MetaData[] = {
		{ "Comment", "/** Pointer to manage property binding */" },
		{ "ModuleRelativePath", "Public/ValueSyncs/CavrnusValueSyncBase.h" },
		{ "ToolTip", "Pointer to manage property binding" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyBinding = { "PropertyBinding", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusValueSyncBase, PropertyBinding), Z_Construct_UClass_UCavrnusBinding_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyBinding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusValueSyncBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SendChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_InitialSetupComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyBinding,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPropertySyncInterface_NoRegister, (int32)VTABLE_OFFSET(UCavrnusValueSyncBase, IPropertySyncInterface), false },  // 1163929717
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
	struct Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusValueSyncBase, UCavrnusValueSyncBase::StaticClass, TEXT("UCavrnusValueSyncBase"), &Z_Registration_Info_UClass_UCavrnusValueSyncBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusValueSyncBase), 2930802258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBase_h_1831586920(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
