// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/LivePropertyUpdates/CavrnusLiveColorPropertyUpdate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusLiveColorPropertyUpdate() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLiveColorPropertyUpdate_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLiveColorPropertyUpdate();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLivePropertyUpdate();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusLiveColorPropertyUpdate::execFinalize)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_PropertyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Finalize(Z_Param_PropertyValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusLiveColorPropertyUpdate::execUpdateWithNewData)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_PropertyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWithNewData(Z_Param_PropertyValue);
		P_NATIVE_END;
	}
	void UCavrnusLiveColorPropertyUpdate::StaticRegisterNativesUCavrnusLiveColorPropertyUpdate()
	{
		UClass* Class = UCavrnusLiveColorPropertyUpdate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Finalize", &UCavrnusLiveColorPropertyUpdate::execFinalize },
			{ "UpdateWithNewData", &UCavrnusLiveColorPropertyUpdate::execUpdateWithNewData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_Finalize_Statics
	{
		struct CavrnusLiveColorPropertyUpdate_eventFinalize_Parms
		{
			FLinearColor PropertyValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_Finalize_Statics::NewProp_PropertyValue = { "PropertyValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusLiveColorPropertyUpdate_eventFinalize_Parms, PropertyValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_Finalize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_Finalize_Statics::NewProp_PropertyValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_Finalize_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Cavrnus|Properties" },
		{ "ModuleRelativePath", "Public/LivePropertyUpdates/CavrnusLiveColorPropertyUpdate.h" },
		{ "ShortToolTip", "Posts and finalizes the data to the server" },
		{ "ToolTip", "Posts and finalizes the data to the server.  This object will no longer be valid to use afterwards." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_Finalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusLiveColorPropertyUpdate, nullptr, "Finalize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_Finalize_Statics::CavrnusLiveColorPropertyUpdate_eventFinalize_Parms), Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_Finalize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_Finalize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_Finalize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_Finalize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_Finalize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_Finalize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_UpdateWithNewData_Statics
	{
		struct CavrnusLiveColorPropertyUpdate_eventUpdateWithNewData_Parms
		{
			FLinearColor PropertyValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_UpdateWithNewData_Statics::NewProp_PropertyValue = { "PropertyValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusLiveColorPropertyUpdate_eventUpdateWithNewData_Parms, PropertyValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_UpdateWithNewData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_UpdateWithNewData_Statics::NewProp_PropertyValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_UpdateWithNewData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Cavrnus|Properties" },
		{ "ModuleRelativePath", "Public/LivePropertyUpdates/CavrnusLiveColorPropertyUpdate.h" },
		{ "ShortToolTip", "Updates the temporary value sent to the server" },
		{ "ToolTip", "Updates the temporary value sent to the server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_UpdateWithNewData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusLiveColorPropertyUpdate, nullptr, "UpdateWithNewData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_UpdateWithNewData_Statics::CavrnusLiveColorPropertyUpdate_eventUpdateWithNewData_Parms), Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_UpdateWithNewData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_UpdateWithNewData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_UpdateWithNewData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_UpdateWithNewData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_UpdateWithNewData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_UpdateWithNewData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusLiveColorPropertyUpdate);
	UClass* Z_Construct_UClass_UCavrnusLiveColorPropertyUpdate_NoRegister()
	{
		return UCavrnusLiveColorPropertyUpdate::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusLiveColorPropertyUpdate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusLiveColorPropertyUpdate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCavrnusLivePropertyUpdate,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusLiveColorPropertyUpdate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_Finalize, "Finalize" }, // 1046421885
		{ &Z_Construct_UFunction_UCavrnusLiveColorPropertyUpdate_UpdateWithNewData, "UpdateWithNewData" }, // 2698300268
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusLiveColorPropertyUpdate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief UCavrnusLiveColorPropertyUpdate class for managing live color property updates in Cavrnus.\n *\n * This class provides functionality to handle the initialization, updating, and finalization of live color property updates.\n */" },
		{ "IncludePath", "LivePropertyUpdates/CavrnusLiveColorPropertyUpdate.h" },
		{ "ModuleRelativePath", "Public/LivePropertyUpdates/CavrnusLiveColorPropertyUpdate.h" },
		{ "ToolTip", "@brief UCavrnusLiveColorPropertyUpdate class for managing live color property updates in Cavrnus.\n\nThis class provides functionality to handle the initialization, updating, and finalization of live color property updates." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusLiveColorPropertyUpdate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusLiveColorPropertyUpdate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusLiveColorPropertyUpdate_Statics::ClassParams = {
		&UCavrnusLiveColorPropertyUpdate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusLiveColorPropertyUpdate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusLiveColorPropertyUpdate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusLiveColorPropertyUpdate()
	{
		if (!Z_Registration_Info_UClass_UCavrnusLiveColorPropertyUpdate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusLiveColorPropertyUpdate.OuterSingleton, Z_Construct_UClass_UCavrnusLiveColorPropertyUpdate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusLiveColorPropertyUpdate.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusLiveColorPropertyUpdate>()
	{
		return UCavrnusLiveColorPropertyUpdate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusLiveColorPropertyUpdate);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_LivePropertyUpdates_CavrnusLiveColorPropertyUpdate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_LivePropertyUpdates_CavrnusLiveColorPropertyUpdate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusLiveColorPropertyUpdate, UCavrnusLiveColorPropertyUpdate::StaticClass, TEXT("UCavrnusLiveColorPropertyUpdate"), &Z_Registration_Info_UClass_UCavrnusLiveColorPropertyUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusLiveColorPropertyUpdate), 964673421U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_LivePropertyUpdates_CavrnusLiveColorPropertyUpdate_h_1179940071(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_LivePropertyUpdates_CavrnusLiveColorPropertyUpdate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_LivePropertyUpdates_CavrnusLiveColorPropertyUpdate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
