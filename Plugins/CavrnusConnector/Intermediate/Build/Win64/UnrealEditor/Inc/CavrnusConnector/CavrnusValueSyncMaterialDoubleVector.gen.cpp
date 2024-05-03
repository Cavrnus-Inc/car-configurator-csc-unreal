// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/CavrnusValueSyncMaterialDoubleVector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusValueSyncMaterialDoubleVector() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncMaterialDoubleVector_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncMaterialDoubleVector();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncVector();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusValueSyncMaterialDoubleVector::execSetMaterialDoubleVectorParameterValue)
	{
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Material);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterialDoubleVectorParameterValue(Z_Param_Material,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	void UCavrnusValueSyncMaterialDoubleVector::StaticRegisterNativesUCavrnusValueSyncMaterialDoubleVector()
	{
		UClass* Class = UCavrnusValueSyncMaterialDoubleVector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMaterialDoubleVectorParameterValue", &UCavrnusValueSyncMaterialDoubleVector::execSetMaterialDoubleVectorParameterValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue_Statics
	{
		struct CavrnusValueSyncMaterialDoubleVector_eventSetMaterialDoubleVectorParameterValue_Parms
		{
			UMaterialInstanceDynamic* Material;
			FVector Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusValueSyncMaterialDoubleVector_eventSetMaterialDoubleVectorParameterValue_Parms, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusValueSyncMaterialDoubleVector_eventSetMaterialDoubleVectorParameterValue_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusValueSyncMaterialDoubleVector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusValueSyncMaterialDoubleVector, nullptr, "SetMaterialDoubleVectorParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue_Statics::CavrnusValueSyncMaterialDoubleVector_eventSetMaterialDoubleVectorParameterValue_Parms), Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusValueSyncMaterialDoubleVector);
	UClass* Z_Construct_UClass_UCavrnusValueSyncMaterialDoubleVector_NoRegister()
	{
		return UCavrnusValueSyncMaterialDoubleVector::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusValueSyncMaterialDoubleVector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusValueSyncMaterialDoubleVector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCavrnusValueSyncVector,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusValueSyncMaterialDoubleVector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusValueSyncMaterialDoubleVector_SetMaterialDoubleVectorParameterValue, "SetMaterialDoubleVectorParameterValue" }, // 2660849119
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncMaterialDoubleVector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Class definition\n" },
		{ "HideCategories", "Transform Physics Collision Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "CavrnusValueSyncMaterialDoubleVector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CavrnusValueSyncMaterialDoubleVector.h" },
		{ "ToolTip", "Class definition" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusValueSyncMaterialDoubleVector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusValueSyncMaterialDoubleVector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusValueSyncMaterialDoubleVector_Statics::ClassParams = {
		&UCavrnusValueSyncMaterialDoubleVector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncMaterialDoubleVector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncMaterialDoubleVector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusValueSyncMaterialDoubleVector()
	{
		if (!Z_Registration_Info_UClass_UCavrnusValueSyncMaterialDoubleVector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusValueSyncMaterialDoubleVector.OuterSingleton, Z_Construct_UClass_UCavrnusValueSyncMaterialDoubleVector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusValueSyncMaterialDoubleVector.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusValueSyncMaterialDoubleVector>()
	{
		return UCavrnusValueSyncMaterialDoubleVector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusValueSyncMaterialDoubleVector);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusValueSyncMaterialDoubleVector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusValueSyncMaterialDoubleVector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusValueSyncMaterialDoubleVector, UCavrnusValueSyncMaterialDoubleVector::StaticClass, TEXT("UCavrnusValueSyncMaterialDoubleVector"), &Z_Registration_Info_UClass_UCavrnusValueSyncMaterialDoubleVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusValueSyncMaterialDoubleVector), 1348949968U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusValueSyncMaterialDoubleVector_h_966080058(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusValueSyncMaterialDoubleVector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusValueSyncMaterialDoubleVector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
