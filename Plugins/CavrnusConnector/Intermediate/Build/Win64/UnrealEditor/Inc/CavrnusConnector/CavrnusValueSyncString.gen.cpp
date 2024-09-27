// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/ValueSyncs/CavrnusValueSyncString.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusValueSyncString() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncString_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncString();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncBase();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusValueSyncString::execSetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetString_Implementation(Z_Param_PropertyValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusValueSyncString::execGetString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetString_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UCavrnusValueSyncString_GetString = FName(TEXT("GetString"));
	FString UCavrnusValueSyncString::GetString()
	{
		CavrnusValueSyncString_eventGetString_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UCavrnusValueSyncString_GetString),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UCavrnusValueSyncString_SetString = FName(TEXT("SetString"));
	void UCavrnusValueSyncString::SetString(const FString& PropertyValue)
	{
		CavrnusValueSyncString_eventSetString_Parms Parms;
		Parms.PropertyValue=PropertyValue;
		ProcessEvent(FindFunctionChecked(NAME_UCavrnusValueSyncString_SetString),&Parms);
	}
	void UCavrnusValueSyncString::StaticRegisterNativesUCavrnusValueSyncString()
	{
		UClass* Class = UCavrnusValueSyncString::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetString", &UCavrnusValueSyncString::execGetString },
			{ "SetString", &UCavrnusValueSyncString::execSetString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusValueSyncString_GetString_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCavrnusValueSyncString_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusValueSyncString_eventGetString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusValueSyncString_GetString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusValueSyncString_GetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusValueSyncString_GetString_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @brief Blueprint-callable getter function for the string property value.\n\x09 * @return The current string value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ValueSyncs/CavrnusValueSyncString.h" },
		{ "ToolTip", "@brief Blueprint-callable getter function for the string property value.\n@return The current string value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusValueSyncString_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusValueSyncString, nullptr, "GetString", nullptr, nullptr, sizeof(CavrnusValueSyncString_eventGetString_Parms), Z_Construct_UFunction_UCavrnusValueSyncString_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncString_GetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusValueSyncString_GetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncString_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusValueSyncString_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusValueSyncString_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusValueSyncString_SetString_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusValueSyncString_SetString_Statics::NewProp_PropertyValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCavrnusValueSyncString_SetString_Statics::NewProp_PropertyValue = { "PropertyValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusValueSyncString_eventSetString_Parms, PropertyValue), METADATA_PARAMS(Z_Construct_UFunction_UCavrnusValueSyncString_SetString_Statics::NewProp_PropertyValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncString_SetString_Statics::NewProp_PropertyValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusValueSyncString_SetString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusValueSyncString_SetString_Statics::NewProp_PropertyValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusValueSyncString_SetString_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @brief Blueprint-callable setter function for the string property value.\n\x09 * @param PropertyValue The new string value to set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ValueSyncs/CavrnusValueSyncString.h" },
		{ "ToolTip", "@brief Blueprint-callable setter function for the string property value.\n@param PropertyValue The new string value to set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusValueSyncString_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusValueSyncString, nullptr, "SetString", nullptr, nullptr, sizeof(CavrnusValueSyncString_eventSetString_Parms), Z_Construct_UFunction_UCavrnusValueSyncString_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncString_SetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusValueSyncString_SetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncString_SetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusValueSyncString_SetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusValueSyncString_SetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusValueSyncString);
	UClass* Z_Construct_UClass_UCavrnusValueSyncString_NoRegister()
	{
		return UCavrnusValueSyncString::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusValueSyncString_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusValueSyncString_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCavrnusValueSyncBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusValueSyncString_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusValueSyncString_GetString, "GetString" }, // 2089568813
		{ &Z_Construct_UFunction_UCavrnusValueSyncString_SetString, "SetString" }, // 2625421990
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncString_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Class responsible for synchronizing string properties between Unreal Engine and Cavrnus.\n * This class extends UCavrnusValueSyncBase and implements specific functionality to handle string values.\n */" },
		{ "HideCategories", "Transform Physics Collision Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "ValueSyncs/CavrnusValueSyncString.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ValueSyncs/CavrnusValueSyncString.h" },
		{ "ToolTip", "@brief Class responsible for synchronizing string properties between Unreal Engine and Cavrnus.\nThis class extends UCavrnusValueSyncBase and implements specific functionality to handle string values." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusValueSyncString_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusValueSyncString>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusValueSyncString_Statics::ClassParams = {
		&UCavrnusValueSyncString::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncString_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncString_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusValueSyncString()
	{
		if (!Z_Registration_Info_UClass_UCavrnusValueSyncString.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusValueSyncString.OuterSingleton, Z_Construct_UClass_UCavrnusValueSyncString_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusValueSyncString.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusValueSyncString>()
	{
		return UCavrnusValueSyncString::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusValueSyncString);
	struct Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncString_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncString_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusValueSyncString, UCavrnusValueSyncString::StaticClass, TEXT("UCavrnusValueSyncString"), &Z_Registration_Info_UClass_UCavrnusValueSyncString, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusValueSyncString), 1551705892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncString_h_2041818569(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncString_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncString_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
