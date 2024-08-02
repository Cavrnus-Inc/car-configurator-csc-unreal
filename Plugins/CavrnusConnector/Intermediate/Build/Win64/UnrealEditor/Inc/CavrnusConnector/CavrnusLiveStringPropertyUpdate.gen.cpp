// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/LivePropertyUpdates/CavrnusLiveStringPropertyUpdate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusLiveStringPropertyUpdate() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLiveStringPropertyUpdate_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLiveStringPropertyUpdate();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLivePropertyUpdate();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusLiveStringPropertyUpdate::execFinalize)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Finalize(Z_Param_PropertyValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusLiveStringPropertyUpdate::execUpdateWithNewData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWithNewData(Z_Param_PropertyValue);
		P_NATIVE_END;
	}
	void UCavrnusLiveStringPropertyUpdate::StaticRegisterNativesUCavrnusLiveStringPropertyUpdate()
	{
		UClass* Class = UCavrnusLiveStringPropertyUpdate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Finalize", &UCavrnusLiveStringPropertyUpdate::execFinalize },
			{ "UpdateWithNewData", &UCavrnusLiveStringPropertyUpdate::execUpdateWithNewData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_Finalize_Statics
	{
		struct CavrnusLiveStringPropertyUpdate_eventFinalize_Parms
		{
			FString PropertyValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_Finalize_Statics::NewProp_PropertyValue = { "PropertyValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusLiveStringPropertyUpdate_eventFinalize_Parms, PropertyValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_Finalize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_Finalize_Statics::NewProp_PropertyValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_Finalize_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Cavrnus|Properties" },
		{ "ModuleRelativePath", "Public/LivePropertyUpdates/CavrnusLiveStringPropertyUpdate.h" },
		{ "ShortToolTip", "Posts and finalizes the data to the server" },
		{ "ToolTip", "Posts and finalizes the data to the server.  This object will no longer be valid to use afterwards." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_Finalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusLiveStringPropertyUpdate, nullptr, "Finalize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_Finalize_Statics::CavrnusLiveStringPropertyUpdate_eventFinalize_Parms), Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_Finalize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_Finalize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_Finalize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_Finalize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_Finalize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_Finalize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_UpdateWithNewData_Statics
	{
		struct CavrnusLiveStringPropertyUpdate_eventUpdateWithNewData_Parms
		{
			FString PropertyValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_UpdateWithNewData_Statics::NewProp_PropertyValue = { "PropertyValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusLiveStringPropertyUpdate_eventUpdateWithNewData_Parms, PropertyValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_UpdateWithNewData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_UpdateWithNewData_Statics::NewProp_PropertyValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_UpdateWithNewData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Cavrnus|Properties" },
		{ "ModuleRelativePath", "Public/LivePropertyUpdates/CavrnusLiveStringPropertyUpdate.h" },
		{ "ShortToolTip", "Updates the temporary value sent to the server" },
		{ "ToolTip", "Updates the temporary value sent to the server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_UpdateWithNewData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusLiveStringPropertyUpdate, nullptr, "UpdateWithNewData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_UpdateWithNewData_Statics::CavrnusLiveStringPropertyUpdate_eventUpdateWithNewData_Parms), Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_UpdateWithNewData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_UpdateWithNewData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_UpdateWithNewData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_UpdateWithNewData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_UpdateWithNewData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_UpdateWithNewData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusLiveStringPropertyUpdate);
	UClass* Z_Construct_UClass_UCavrnusLiveStringPropertyUpdate_NoRegister()
	{
		return UCavrnusLiveStringPropertyUpdate::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusLiveStringPropertyUpdate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusLiveStringPropertyUpdate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCavrnusLivePropertyUpdate,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusLiveStringPropertyUpdate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_Finalize, "Finalize" }, // 3350800966
		{ &Z_Construct_UFunction_UCavrnusLiveStringPropertyUpdate_UpdateWithNewData, "UpdateWithNewData" }, // 1948217408
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusLiveStringPropertyUpdate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief UCavrnusLiveStringPropertyUpdate class for handling live string property updates in Cavrnus.\n *\n * This class provides functionality to initialize, update, and finalize string property values within the Cavrnus system.\n * It ensures that the temporary values are sent to the server and can be finalized to persist the changes.\n */" },
		{ "IncludePath", "LivePropertyUpdates/CavrnusLiveStringPropertyUpdate.h" },
		{ "ModuleRelativePath", "Public/LivePropertyUpdates/CavrnusLiveStringPropertyUpdate.h" },
		{ "ToolTip", "@brief UCavrnusLiveStringPropertyUpdate class for handling live string property updates in Cavrnus.\n\nThis class provides functionality to initialize, update, and finalize string property values within the Cavrnus system.\nIt ensures that the temporary values are sent to the server and can be finalized to persist the changes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusLiveStringPropertyUpdate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusLiveStringPropertyUpdate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusLiveStringPropertyUpdate_Statics::ClassParams = {
		&UCavrnusLiveStringPropertyUpdate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusLiveStringPropertyUpdate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusLiveStringPropertyUpdate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusLiveStringPropertyUpdate()
	{
		if (!Z_Registration_Info_UClass_UCavrnusLiveStringPropertyUpdate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusLiveStringPropertyUpdate.OuterSingleton, Z_Construct_UClass_UCavrnusLiveStringPropertyUpdate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusLiveStringPropertyUpdate.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusLiveStringPropertyUpdate>()
	{
		return UCavrnusLiveStringPropertyUpdate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusLiveStringPropertyUpdate);
	struct Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_LivePropertyUpdates_CavrnusLiveStringPropertyUpdate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_LivePropertyUpdates_CavrnusLiveStringPropertyUpdate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusLiveStringPropertyUpdate, UCavrnusLiveStringPropertyUpdate::StaticClass, TEXT("UCavrnusLiveStringPropertyUpdate"), &Z_Registration_Info_UClass_UCavrnusLiveStringPropertyUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusLiveStringPropertyUpdate), 3933889219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_LivePropertyUpdates_CavrnusLiveStringPropertyUpdate_h_83973929(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_LivePropertyUpdates_CavrnusLiveStringPropertyUpdate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_LivePropertyUpdates_CavrnusLiveStringPropertyUpdate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
