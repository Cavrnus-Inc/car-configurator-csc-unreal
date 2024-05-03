// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/ValueSyncs/CavrnusValueSyncTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusValueSyncTransform() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncTransform_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncTransform();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncBase();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusValueSyncTransform::execSetTransform)
	{
		P_GET_STRUCT(FTransform,Z_Param_PropertyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTransform_Implementation(Z_Param_PropertyValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusValueSyncTransform::execGetTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UCavrnusValueSyncTransform_GetTransform = FName(TEXT("GetTransform"));
	FTransform UCavrnusValueSyncTransform::GetTransform()
	{
		CavrnusValueSyncTransform_eventGetTransform_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UCavrnusValueSyncTransform_GetTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UCavrnusValueSyncTransform_SetTransform = FName(TEXT("SetTransform"));
	void UCavrnusValueSyncTransform::SetTransform(FTransform PropertyValue)
	{
		CavrnusValueSyncTransform_eventSetTransform_Parms Parms;
		Parms.PropertyValue=PropertyValue;
		ProcessEvent(FindFunctionChecked(NAME_UCavrnusValueSyncTransform_SetTransform),&Parms);
	}
	void UCavrnusValueSyncTransform::StaticRegisterNativesUCavrnusValueSyncTransform()
	{
		UClass* Class = UCavrnusValueSyncTransform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTransform", &UCavrnusValueSyncTransform::execGetTransform },
			{ "SetTransform", &UCavrnusValueSyncTransform::execSetTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusValueSyncTransform_GetTransform_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusValueSyncTransform_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusValueSyncTransform_eventGetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusValueSyncTransform_GetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusValueSyncTransform_GetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusValueSyncTransform_GetTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ValueSyncs/CavrnusValueSyncTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusValueSyncTransform_GetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusValueSyncTransform, nullptr, "GetTransform", nullptr, nullptr, sizeof(CavrnusValueSyncTransform_eventGetTransform_Parms), Z_Construct_UFunction_UCavrnusValueSyncTransform_GetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncTransform_GetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusValueSyncTransform_GetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncTransform_GetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusValueSyncTransform_GetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusValueSyncTransform_GetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusValueSyncTransform_SetTransform_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusValueSyncTransform_SetTransform_Statics::NewProp_PropertyValue = { "PropertyValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusValueSyncTransform_eventSetTransform_Parms, PropertyValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusValueSyncTransform_SetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusValueSyncTransform_SetTransform_Statics::NewProp_PropertyValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusValueSyncTransform_SetTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ValueSyncs/CavrnusValueSyncTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusValueSyncTransform_SetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusValueSyncTransform, nullptr, "SetTransform", nullptr, nullptr, sizeof(CavrnusValueSyncTransform_eventSetTransform_Parms), Z_Construct_UFunction_UCavrnusValueSyncTransform_SetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncTransform_SetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusValueSyncTransform_SetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncTransform_SetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusValueSyncTransform_SetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusValueSyncTransform_SetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusValueSyncTransform);
	UClass* Z_Construct_UClass_UCavrnusValueSyncTransform_NoRegister()
	{
		return UCavrnusValueSyncTransform::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusValueSyncTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusValueSyncTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCavrnusValueSyncBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusValueSyncTransform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusValueSyncTransform_GetTransform, "GetTransform" }, // 4285273736
		{ &Z_Construct_UFunction_UCavrnusValueSyncTransform_SetTransform, "SetTransform" }, // 2847428267
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncTransform_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Class definition\n" },
		{ "HideCategories", "Transform Physics Collision Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "ValueSyncs/CavrnusValueSyncTransform.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ValueSyncs/CavrnusValueSyncTransform.h" },
		{ "ToolTip", "Class definition" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusValueSyncTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusValueSyncTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusValueSyncTransform_Statics::ClassParams = {
		&UCavrnusValueSyncTransform::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusValueSyncTransform()
	{
		if (!Z_Registration_Info_UClass_UCavrnusValueSyncTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusValueSyncTransform.OuterSingleton, Z_Construct_UClass_UCavrnusValueSyncTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusValueSyncTransform.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusValueSyncTransform>()
	{
		return UCavrnusValueSyncTransform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusValueSyncTransform);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusValueSyncTransform, UCavrnusValueSyncTransform::StaticClass, TEXT("UCavrnusValueSyncTransform"), &Z_Registration_Info_UClass_UCavrnusValueSyncTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusValueSyncTransform), 2777389760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_1974664807(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_ValueSyncs_CavrnusValueSyncTransform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
