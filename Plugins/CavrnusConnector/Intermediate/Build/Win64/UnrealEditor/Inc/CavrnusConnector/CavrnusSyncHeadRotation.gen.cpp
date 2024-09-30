// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Avatar/CavrnusSyncHeadRotation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusSyncHeadRotation() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusSyncHeadRotation_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusSyncHeadRotation();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusPawnAnimationAccessor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusSyncHeadRotation::execFrameDelay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FrameDelay();
		P_NATIVE_END;
	}
	void UCavrnusSyncHeadRotation::StaticRegisterNativesUCavrnusSyncHeadRotation()
	{
		UClass* Class = UCavrnusSyncHeadRotation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FrameDelay", &UCavrnusSyncHeadRotation::execFrameDelay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusSyncHeadRotation_FrameDelay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSyncHeadRotation_FrameDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Avatar/CavrnusSyncHeadRotation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSyncHeadRotation_FrameDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSyncHeadRotation, nullptr, "FrameDelay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSyncHeadRotation_FrameDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSyncHeadRotation_FrameDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSyncHeadRotation_FrameDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSyncHeadRotation_FrameDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusSyncHeadRotation);
	UClass* Z_Construct_UClass_UCavrnusSyncHeadRotation_NoRegister()
	{
		return UCavrnusSyncHeadRotation::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueUpdater_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ValueUpdater;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimAccessor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimAccessor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusSyncHeadRotation_FrameDelay, "FrameDelay" }, // 3843089335
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Avatar/CavrnusSyncHeadRotation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Avatar/CavrnusSyncHeadRotation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::NewProp_ValueUpdater_MetaData[] = {
		{ "ModuleRelativePath", "Public/Avatar/CavrnusSyncHeadRotation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::NewProp_ValueUpdater = { "ValueUpdater", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSyncHeadRotation, ValueUpdater), Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::NewProp_ValueUpdater_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::NewProp_ValueUpdater_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::NewProp_AnimAccessor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Avatar/CavrnusSyncHeadRotation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::NewProp_AnimAccessor = { "AnimAccessor", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSyncHeadRotation, AnimAccessor), Z_Construct_UClass_UCavrnusPawnAnimationAccessor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::NewProp_AnimAccessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::NewProp_AnimAccessor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::NewProp_ValueUpdater,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::NewProp_AnimAccessor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusSyncHeadRotation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::ClassParams = {
		&UCavrnusSyncHeadRotation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusSyncHeadRotation()
	{
		if (!Z_Registration_Info_UClass_UCavrnusSyncHeadRotation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusSyncHeadRotation.OuterSingleton, Z_Construct_UClass_UCavrnusSyncHeadRotation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusSyncHeadRotation.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusSyncHeadRotation>()
	{
		return UCavrnusSyncHeadRotation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusSyncHeadRotation);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Avatar_CavrnusSyncHeadRotation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Avatar_CavrnusSyncHeadRotation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusSyncHeadRotation, UCavrnusSyncHeadRotation::StaticClass, TEXT("UCavrnusSyncHeadRotation"), &Z_Registration_Info_UClass_UCavrnusSyncHeadRotation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusSyncHeadRotation), 3856261817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Avatar_CavrnusSyncHeadRotation_h_3219816440(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Avatar_CavrnusSyncHeadRotation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Avatar_CavrnusSyncHeadRotation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
