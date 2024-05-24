// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/ValueSyncs/CavrnusValueSyncBoolean.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusValueSyncBoolean() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncBoolean_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncBoolean();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncBase();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusValueSyncBoolean::execSetBoolean)
	{
		P_GET_UBOOL(Z_Param_bPropertyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolean_Implementation(Z_Param_bPropertyValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusValueSyncBoolean::execGetBoolean)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolean_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UCavrnusValueSyncBoolean_GetBoolean = FName(TEXT("GetBoolean"));
	bool UCavrnusValueSyncBoolean::GetBoolean()
	{
		CavrnusValueSyncBoolean_eventGetBoolean_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UCavrnusValueSyncBoolean_GetBoolean),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UCavrnusValueSyncBoolean_SetBoolean = FName(TEXT("SetBoolean"));
	void UCavrnusValueSyncBoolean::SetBoolean(bool bPropertyValue)
	{
		CavrnusValueSyncBoolean_eventSetBoolean_Parms Parms;
		Parms.bPropertyValue=bPropertyValue ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCavrnusValueSyncBoolean_SetBoolean),&Parms);
	}
	void UCavrnusValueSyncBoolean::StaticRegisterNativesUCavrnusValueSyncBoolean()
	{
		UClass* Class = UCavrnusValueSyncBoolean::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoolean", &UCavrnusValueSyncBoolean::execGetBoolean },
			{ "SetBoolean", &UCavrnusValueSyncBoolean::execSetBoolean },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusValueSyncBoolean_GetBoolean_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCavrnusValueSyncBoolean_GetBoolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CavrnusValueSyncBoolean_eventGetBoolean_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCavrnusValueSyncBoolean_GetBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CavrnusValueSyncBoolean_eventGetBoolean_Parms), &Z_Construct_UFunction_UCavrnusValueSyncBoolean_GetBoolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusValueSyncBoolean_GetBoolean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusValueSyncBoolean_GetBoolean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusValueSyncBoolean_GetBoolean_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ValueSyncs/CavrnusValueSyncBoolean.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusValueSyncBoolean_GetBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusValueSyncBoolean, nullptr, "GetBoolean", nullptr, nullptr, sizeof(CavrnusValueSyncBoolean_eventGetBoolean_Parms), Z_Construct_UFunction_UCavrnusValueSyncBoolean_GetBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncBoolean_GetBoolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusValueSyncBoolean_GetBoolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncBoolean_GetBoolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusValueSyncBoolean_GetBoolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusValueSyncBoolean_GetBoolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusValueSyncBoolean_SetBoolean_Statics
	{
		static void NewProp_bPropertyValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropertyValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCavrnusValueSyncBoolean_SetBoolean_Statics::NewProp_bPropertyValue_SetBit(void* Obj)
	{
		((CavrnusValueSyncBoolean_eventSetBoolean_Parms*)Obj)->bPropertyValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCavrnusValueSyncBoolean_SetBoolean_Statics::NewProp_bPropertyValue = { "bPropertyValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CavrnusValueSyncBoolean_eventSetBoolean_Parms), &Z_Construct_UFunction_UCavrnusValueSyncBoolean_SetBoolean_Statics::NewProp_bPropertyValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusValueSyncBoolean_SetBoolean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusValueSyncBoolean_SetBoolean_Statics::NewProp_bPropertyValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusValueSyncBoolean_SetBoolean_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ValueSyncs/CavrnusValueSyncBoolean.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusValueSyncBoolean_SetBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusValueSyncBoolean, nullptr, "SetBoolean", nullptr, nullptr, sizeof(CavrnusValueSyncBoolean_eventSetBoolean_Parms), Z_Construct_UFunction_UCavrnusValueSyncBoolean_SetBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncBoolean_SetBoolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusValueSyncBoolean_SetBoolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncBoolean_SetBoolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusValueSyncBoolean_SetBoolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusValueSyncBoolean_SetBoolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusValueSyncBoolean);
	UClass* Z_Construct_UClass_UCavrnusValueSyncBoolean_NoRegister()
	{
		return UCavrnusValueSyncBoolean::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusValueSyncBoolean_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusValueSyncBoolean_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCavrnusValueSyncBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusValueSyncBoolean_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusValueSyncBoolean_GetBoolean, "GetBoolean" }, // 2834185852
		{ &Z_Construct_UFunction_UCavrnusValueSyncBoolean_SetBoolean, "SetBoolean" }, // 1903974778
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncBoolean_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Class definition\n" },
		{ "HideCategories", "Transform Physics Collision Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "ValueSyncs/CavrnusValueSyncBoolean.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ValueSyncs/CavrnusValueSyncBoolean.h" },
		{ "ToolTip", "Class definition" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusValueSyncBoolean_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusValueSyncBoolean>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusValueSyncBoolean_Statics::ClassParams = {
		&UCavrnusValueSyncBoolean::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncBoolean_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBoolean_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusValueSyncBoolean()
	{
		if (!Z_Registration_Info_UClass_UCavrnusValueSyncBoolean.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusValueSyncBoolean.OuterSingleton, Z_Construct_UClass_UCavrnusValueSyncBoolean_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusValueSyncBoolean.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusValueSyncBoolean>()
	{
		return UCavrnusValueSyncBoolean::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusValueSyncBoolean);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusValueSyncBoolean, UCavrnusValueSyncBoolean::StaticClass, TEXT("UCavrnusValueSyncBoolean"), &Z_Registration_Info_UClass_UCavrnusValueSyncBoolean, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusValueSyncBoolean), 1639202738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_98058810(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncBoolean_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
