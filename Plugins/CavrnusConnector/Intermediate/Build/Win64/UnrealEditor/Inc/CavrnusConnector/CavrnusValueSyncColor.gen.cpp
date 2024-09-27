// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/ValueSyncs/CavrnusValueSyncColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusValueSyncColor() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncColor_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncColor();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncBase();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusValueSyncColor::execSetColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_PropertyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColor_Implementation(Z_Param_PropertyValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusValueSyncColor::execGetColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetColor_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UCavrnusValueSyncColor_GetColor = FName(TEXT("GetColor"));
	FLinearColor UCavrnusValueSyncColor::GetColor()
	{
		CavrnusValueSyncColor_eventGetColor_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UCavrnusValueSyncColor_GetColor),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UCavrnusValueSyncColor_SetColor = FName(TEXT("SetColor"));
	void UCavrnusValueSyncColor::SetColor(FLinearColor PropertyValue)
	{
		CavrnusValueSyncColor_eventSetColor_Parms Parms;
		Parms.PropertyValue=PropertyValue;
		ProcessEvent(FindFunctionChecked(NAME_UCavrnusValueSyncColor_SetColor),&Parms);
	}
	void UCavrnusValueSyncColor::StaticRegisterNativesUCavrnusValueSyncColor()
	{
		UClass* Class = UCavrnusValueSyncColor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColor", &UCavrnusValueSyncColor::execGetColor },
			{ "SetColor", &UCavrnusValueSyncColor::execSetColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusValueSyncColor_GetColor_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusValueSyncColor_GetColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusValueSyncColor_eventGetColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusValueSyncColor_GetColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusValueSyncColor_GetColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusValueSyncColor_GetColor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @brief Blueprint-callable getter function for the color property value.\n\x09 * @param PropertyValue The new color value to set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ValueSyncs/CavrnusValueSyncColor.h" },
		{ "ToolTip", "@brief Blueprint-callable getter function for the color property value.\n@param PropertyValue The new color value to set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusValueSyncColor_GetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusValueSyncColor, nullptr, "GetColor", nullptr, nullptr, sizeof(CavrnusValueSyncColor_eventGetColor_Parms), Z_Construct_UFunction_UCavrnusValueSyncColor_GetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncColor_GetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusValueSyncColor_GetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncColor_GetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusValueSyncColor_GetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusValueSyncColor_GetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusValueSyncColor_SetColor_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusValueSyncColor_SetColor_Statics::NewProp_PropertyValue = { "PropertyValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusValueSyncColor_eventSetColor_Parms, PropertyValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusValueSyncColor_SetColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusValueSyncColor_SetColor_Statics::NewProp_PropertyValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusValueSyncColor_SetColor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @brief Blueprint-callable setter function for the color property value.\n\x09 * @param PropertyValue The new color value to set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ValueSyncs/CavrnusValueSyncColor.h" },
		{ "ToolTip", "@brief Blueprint-callable setter function for the color property value.\n@param PropertyValue The new color value to set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusValueSyncColor_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusValueSyncColor, nullptr, "SetColor", nullptr, nullptr, sizeof(CavrnusValueSyncColor_eventSetColor_Parms), Z_Construct_UFunction_UCavrnusValueSyncColor_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncColor_SetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusValueSyncColor_SetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncColor_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusValueSyncColor_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusValueSyncColor_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusValueSyncColor);
	UClass* Z_Construct_UClass_UCavrnusValueSyncColor_NoRegister()
	{
		return UCavrnusValueSyncColor::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusValueSyncColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusValueSyncColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCavrnusValueSyncBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusValueSyncColor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusValueSyncColor_GetColor, "GetColor" }, // 2928089633
		{ &Z_Construct_UFunction_UCavrnusValueSyncColor_SetColor, "SetColor" }, // 1229794196
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncColor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Class responsible for synchronizing color properties between Unreal Engine and Cavrnus.\n * This class extends UCavrnusValueSyncBase and implements specific functionality to handle color values.\n */" },
		{ "HideCategories", "Transform Physics Collision Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "ValueSyncs/CavrnusValueSyncColor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ValueSyncs/CavrnusValueSyncColor.h" },
		{ "ToolTip", "@brief Class responsible for synchronizing color properties between Unreal Engine and Cavrnus.\nThis class extends UCavrnusValueSyncBase and implements specific functionality to handle color values." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusValueSyncColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusValueSyncColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusValueSyncColor_Statics::ClassParams = {
		&UCavrnusValueSyncColor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusValueSyncColor()
	{
		if (!Z_Registration_Info_UClass_UCavrnusValueSyncColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusValueSyncColor.OuterSingleton, Z_Construct_UClass_UCavrnusValueSyncColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusValueSyncColor.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusValueSyncColor>()
	{
		return UCavrnusValueSyncColor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusValueSyncColor);
	struct Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusValueSyncColor, UCavrnusValueSyncColor::StaticClass, TEXT("UCavrnusValueSyncColor"), &Z_Registration_Info_UClass_UCavrnusValueSyncColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusValueSyncColor), 2673605301U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_3040653815(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncColor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
