// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Avatar/CavrnusPawnAnimationAccessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusPawnAnimationAccessor() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusPawnAnimationAccessor_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusPawnAnimationAccessor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static FName NAME_UCavrnusPawnAnimationAccessor_SetHeadRotation = FName(TEXT("SetHeadRotation"));
	void UCavrnusPawnAnimationAccessor::SetHeadRotation(FRotator RotationValue)
	{
		CavrnusPawnAnimationAccessor_eventSetHeadRotation_Parms Parms;
		Parms.RotationValue=RotationValue;
		ProcessEvent(FindFunctionChecked(NAME_UCavrnusPawnAnimationAccessor_SetHeadRotation),&Parms);
	}
	void UCavrnusPawnAnimationAccessor::StaticRegisterNativesUCavrnusPawnAnimationAccessor()
	{
	}
	struct Z_Construct_UFunction_UCavrnusPawnAnimationAccessor_SetHeadRotation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusPawnAnimationAccessor_SetHeadRotation_Statics::NewProp_RotationValue = { "RotationValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusPawnAnimationAccessor_eventSetHeadRotation_Parms, RotationValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusPawnAnimationAccessor_SetHeadRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusPawnAnimationAccessor_SetHeadRotation_Statics::NewProp_RotationValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusPawnAnimationAccessor_SetHeadRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/Avatar/CavrnusPawnAnimationAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusPawnAnimationAccessor_SetHeadRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusPawnAnimationAccessor, nullptr, "SetHeadRotation", nullptr, nullptr, sizeof(CavrnusPawnAnimationAccessor_eventSetHeadRotation_Parms), Z_Construct_UFunction_UCavrnusPawnAnimationAccessor_SetHeadRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusPawnAnimationAccessor_SetHeadRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusPawnAnimationAccessor_SetHeadRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusPawnAnimationAccessor_SetHeadRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusPawnAnimationAccessor_SetHeadRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusPawnAnimationAccessor_SetHeadRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusPawnAnimationAccessor);
	UClass* Z_Construct_UClass_UCavrnusPawnAnimationAccessor_NoRegister()
	{
		return UCavrnusPawnAnimationAccessor::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusPawnAnimationAccessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusPawnAnimationAccessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusPawnAnimationAccessor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusPawnAnimationAccessor_SetHeadRotation, "SetHeadRotation" }, // 2059773151
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusPawnAnimationAccessor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Avatar/CavrnusPawnAnimationAccessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Avatar/CavrnusPawnAnimationAccessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusPawnAnimationAccessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusPawnAnimationAccessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusPawnAnimationAccessor_Statics::ClassParams = {
		&UCavrnusPawnAnimationAccessor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusPawnAnimationAccessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusPawnAnimationAccessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusPawnAnimationAccessor()
	{
		if (!Z_Registration_Info_UClass_UCavrnusPawnAnimationAccessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusPawnAnimationAccessor.OuterSingleton, Z_Construct_UClass_UCavrnusPawnAnimationAccessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusPawnAnimationAccessor.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusPawnAnimationAccessor>()
	{
		return UCavrnusPawnAnimationAccessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusPawnAnimationAccessor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Avatar_CavrnusPawnAnimationAccessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Avatar_CavrnusPawnAnimationAccessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusPawnAnimationAccessor, UCavrnusPawnAnimationAccessor::StaticClass, TEXT("UCavrnusPawnAnimationAccessor"), &Z_Registration_Info_UClass_UCavrnusPawnAnimationAccessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusPawnAnimationAccessor), 2088265192U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Avatar_CavrnusPawnAnimationAccessor_h_3819645353(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Avatar_CavrnusPawnAnimationAccessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Avatar_CavrnusPawnAnimationAccessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
