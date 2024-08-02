// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Avatar/CavrnusSyncAvatarTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusSyncAvatarTransform() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusSyncAvatarTransform_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusSyncAvatarTransform();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void UCavrnusSyncAvatarTransform::StaticRegisterNativesUCavrnusSyncAvatarTransform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusSyncAvatarTransform);
	UClass* Z_Construct_UClass_UCavrnusSyncAvatarTransform_NoRegister()
	{
		return UCavrnusSyncAvatarTransform::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseHeightOffset_MetaData[];
#endif
		static void NewProp_UseHeightOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseHeightOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceSetHeight_MetaData[];
#endif
		static void NewProp_ForceSetHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceSetHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitRoll_MetaData[];
#endif
		static void NewProp_LimitRoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LimitRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitPitch_MetaData[];
#endif
		static void NewProp_LimitPitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LimitPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitYaw_MetaData[];
#endif
		static void NewProp_LimitYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LimitYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSetHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetSetHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Avatar/CavrnusSyncAvatarTransform.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Avatar/CavrnusSyncAvatarTransform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_UseHeightOffset_MetaData[] = {
		{ "Category", "Cavrnus|AvatarTransform" },
		{ "ModuleRelativePath", "Public/Avatar/CavrnusSyncAvatarTransform.h" },
	};
#endif
	void Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_UseHeightOffset_SetBit(void* Obj)
	{
		((UCavrnusSyncAvatarTransform*)Obj)->UseHeightOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_UseHeightOffset = { "UseHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCavrnusSyncAvatarTransform), &Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_UseHeightOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_UseHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_UseHeightOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_ForceSetHeight_MetaData[] = {
		{ "Category", "Cavrnus|AvatarTransform" },
		{ "ModuleRelativePath", "Public/Avatar/CavrnusSyncAvatarTransform.h" },
	};
#endif
	void Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_ForceSetHeight_SetBit(void* Obj)
	{
		((UCavrnusSyncAvatarTransform*)Obj)->ForceSetHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_ForceSetHeight = { "ForceSetHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCavrnusSyncAvatarTransform), &Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_ForceSetHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_ForceSetHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_ForceSetHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitRoll_MetaData[] = {
		{ "Category", "Cavrnus|AvatarTransform" },
		{ "ModuleRelativePath", "Public/Avatar/CavrnusSyncAvatarTransform.h" },
	};
#endif
	void Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitRoll_SetBit(void* Obj)
	{
		((UCavrnusSyncAvatarTransform*)Obj)->LimitRoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitRoll = { "LimitRoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCavrnusSyncAvatarTransform), &Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitRoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitRoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitPitch_MetaData[] = {
		{ "Category", "Cavrnus|AvatarTransform" },
		{ "ModuleRelativePath", "Public/Avatar/CavrnusSyncAvatarTransform.h" },
	};
#endif
	void Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitPitch_SetBit(void* Obj)
	{
		((UCavrnusSyncAvatarTransform*)Obj)->LimitPitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitPitch = { "LimitPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCavrnusSyncAvatarTransform), &Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitPitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitYaw_MetaData[] = {
		{ "Category", "Cavrnus|AvatarTransform" },
		{ "ModuleRelativePath", "Public/Avatar/CavrnusSyncAvatarTransform.h" },
	};
#endif
	void Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitYaw_SetBit(void* Obj)
	{
		((UCavrnusSyncAvatarTransform*)Obj)->LimitYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitYaw = { "LimitYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCavrnusSyncAvatarTransform), &Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_TargetSetHeight_MetaData[] = {
		{ "Category", "Cavrnus|AvatarTransform" },
		{ "ModuleRelativePath", "Public/Avatar/CavrnusSyncAvatarTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_TargetSetHeight = { "TargetSetHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSyncAvatarTransform, TargetSetHeight), METADATA_PARAMS(Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_TargetSetHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_TargetSetHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_HeightOffset_MetaData[] = {
		{ "Category", "Cavrnus|AvatarTransform" },
		{ "ModuleRelativePath", "Public/Avatar/CavrnusSyncAvatarTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_HeightOffset = { "HeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSyncAvatarTransform, HeightOffset), METADATA_PARAMS(Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_HeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_HeightOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_UseHeightOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_ForceSetHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_LimitYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_TargetSetHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::NewProp_HeightOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusSyncAvatarTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::ClassParams = {
		&UCavrnusSyncAvatarTransform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusSyncAvatarTransform()
	{
		if (!Z_Registration_Info_UClass_UCavrnusSyncAvatarTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusSyncAvatarTransform.OuterSingleton, Z_Construct_UClass_UCavrnusSyncAvatarTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusSyncAvatarTransform.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusSyncAvatarTransform>()
	{
		return UCavrnusSyncAvatarTransform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusSyncAvatarTransform);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Avatar_CavrnusSyncAvatarTransform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Avatar_CavrnusSyncAvatarTransform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusSyncAvatarTransform, UCavrnusSyncAvatarTransform::StaticClass, TEXT("UCavrnusSyncAvatarTransform"), &Z_Registration_Info_UClass_UCavrnusSyncAvatarTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusSyncAvatarTransform), 629732119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Avatar_CavrnusSyncAvatarTransform_h_546108656(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Avatar_CavrnusSyncAvatarTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Avatar_CavrnusSyncAvatarTransform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
