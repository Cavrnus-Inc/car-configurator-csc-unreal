// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Types/CavrnusLiveVectorPropertyUpdate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusLiveVectorPropertyUpdate() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLivePropertyUpdate();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusLiveVectorPropertyUpdate::execFinalize)
	{
		P_GET_STRUCT(FVector,Z_Param_PropertyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Finalize(Z_Param_PropertyValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusLiveVectorPropertyUpdate::execUpdateWithNewData)
	{
		P_GET_STRUCT(FVector,Z_Param_PropertyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWithNewData(Z_Param_PropertyValue);
		P_NATIVE_END;
	}
	void UCavrnusLiveVectorPropertyUpdate::StaticRegisterNativesUCavrnusLiveVectorPropertyUpdate()
	{
		UClass* Class = UCavrnusLiveVectorPropertyUpdate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Finalize", &UCavrnusLiveVectorPropertyUpdate::execFinalize },
			{ "UpdateWithNewData", &UCavrnusLiveVectorPropertyUpdate::execUpdateWithNewData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_Finalize_Statics
	{
		struct CavrnusLiveVectorPropertyUpdate_eventFinalize_Parms
		{
			FVector PropertyValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_Finalize_Statics::NewProp_PropertyValue = { "PropertyValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusLiveVectorPropertyUpdate_eventFinalize_Parms, PropertyValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_Finalize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_Finalize_Statics::NewProp_PropertyValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_Finalize_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Cavrnus|Properties" },
		{ "ModuleRelativePath", "Public/Types/CavrnusLiveVectorPropertyUpdate.h" },
		{ "ShortToolTip", "Posts and finalizes the data to the server" },
		{ "ToolTip", "Posts and finalizes the data to the server.  This object will no longer be valid to use afterwards." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_Finalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate, nullptr, "Finalize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_Finalize_Statics::CavrnusLiveVectorPropertyUpdate_eventFinalize_Parms), Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_Finalize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_Finalize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_Finalize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_Finalize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_Finalize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_Finalize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_UpdateWithNewData_Statics
	{
		struct CavrnusLiveVectorPropertyUpdate_eventUpdateWithNewData_Parms
		{
			FVector PropertyValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_UpdateWithNewData_Statics::NewProp_PropertyValue = { "PropertyValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusLiveVectorPropertyUpdate_eventUpdateWithNewData_Parms, PropertyValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_UpdateWithNewData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_UpdateWithNewData_Statics::NewProp_PropertyValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_UpdateWithNewData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Cavrnus|Properties" },
		{ "ModuleRelativePath", "Public/Types/CavrnusLiveVectorPropertyUpdate.h" },
		{ "ShortToolTip", "Updates the temporary value sent to the server" },
		{ "ToolTip", "Updates the temporary value sent to the server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_UpdateWithNewData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate, nullptr, "UpdateWithNewData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_UpdateWithNewData_Statics::CavrnusLiveVectorPropertyUpdate_eventUpdateWithNewData_Parms), Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_UpdateWithNewData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_UpdateWithNewData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_UpdateWithNewData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_UpdateWithNewData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_UpdateWithNewData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_UpdateWithNewData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusLiveVectorPropertyUpdate);
	UClass* Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate_NoRegister()
	{
		return UCavrnusLiveVectorPropertyUpdate::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCavrnusLivePropertyUpdate,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_Finalize, "Finalize" }, // 867577754
		{ &Z_Construct_UFunction_UCavrnusLiveVectorPropertyUpdate_UpdateWithNewData, "UpdateWithNewData" }, // 4196767372
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Types/CavrnusLiveVectorPropertyUpdate.h" },
		{ "ModuleRelativePath", "Public/Types/CavrnusLiveVectorPropertyUpdate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusLiveVectorPropertyUpdate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate_Statics::ClassParams = {
		&UCavrnusLiveVectorPropertyUpdate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate()
	{
		if (!Z_Registration_Info_UClass_UCavrnusLiveVectorPropertyUpdate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusLiveVectorPropertyUpdate.OuterSingleton, Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusLiveVectorPropertyUpdate.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusLiveVectorPropertyUpdate>()
	{
		return UCavrnusLiveVectorPropertyUpdate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusLiveVectorPropertyUpdate);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusLiveVectorPropertyUpdate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusLiveVectorPropertyUpdate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusLiveVectorPropertyUpdate, UCavrnusLiveVectorPropertyUpdate::StaticClass, TEXT("UCavrnusLiveVectorPropertyUpdate"), &Z_Registration_Info_UClass_UCavrnusLiveVectorPropertyUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusLiveVectorPropertyUpdate), 3058163885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusLiveVectorPropertyUpdate_h_1870971623(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusLiveVectorPropertyUpdate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusLiveVectorPropertyUpdate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
