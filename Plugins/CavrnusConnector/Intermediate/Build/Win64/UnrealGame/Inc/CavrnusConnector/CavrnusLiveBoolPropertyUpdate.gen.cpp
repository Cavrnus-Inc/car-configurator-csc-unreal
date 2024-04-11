// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Types/CavrnusLiveBoolPropertyUpdate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusLiveBoolPropertyUpdate() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLiveBoolPropertyUpdate_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLiveBoolPropertyUpdate();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLivePropertyUpdate();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusLiveBoolPropertyUpdate::execFinalize)
	{
		P_GET_UBOOL(Z_Param_PropertyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Finalize(Z_Param_PropertyValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusLiveBoolPropertyUpdate::execUpdateWithNewData)
	{
		P_GET_UBOOL(Z_Param_PropertyValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWithNewData(Z_Param_PropertyValue);
		P_NATIVE_END;
	}
	void UCavrnusLiveBoolPropertyUpdate::StaticRegisterNativesUCavrnusLiveBoolPropertyUpdate()
	{
		UClass* Class = UCavrnusLiveBoolPropertyUpdate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Finalize", &UCavrnusLiveBoolPropertyUpdate::execFinalize },
			{ "UpdateWithNewData", &UCavrnusLiveBoolPropertyUpdate::execUpdateWithNewData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_Finalize_Statics
	{
		struct CavrnusLiveBoolPropertyUpdate_eventFinalize_Parms
		{
			bool PropertyValue;
		};
		static void NewProp_PropertyValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PropertyValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_Finalize_Statics::NewProp_PropertyValue_SetBit(void* Obj)
	{
		((CavrnusLiveBoolPropertyUpdate_eventFinalize_Parms*)Obj)->PropertyValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_Finalize_Statics::NewProp_PropertyValue = { "PropertyValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CavrnusLiveBoolPropertyUpdate_eventFinalize_Parms), &Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_Finalize_Statics::NewProp_PropertyValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_Finalize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_Finalize_Statics::NewProp_PropertyValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_Finalize_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Cavrnus|Properties" },
		{ "ModuleRelativePath", "Public/Types/CavrnusLiveBoolPropertyUpdate.h" },
		{ "ShortToolTip", "Posts and finalizes the data to the server" },
		{ "ToolTip", "Posts and finalizes the data to the server.  This object will no longer be valid to use afterwards." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_Finalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusLiveBoolPropertyUpdate, nullptr, "Finalize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_Finalize_Statics::CavrnusLiveBoolPropertyUpdate_eventFinalize_Parms), Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_Finalize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_Finalize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_Finalize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_Finalize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_Finalize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_Finalize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_UpdateWithNewData_Statics
	{
		struct CavrnusLiveBoolPropertyUpdate_eventUpdateWithNewData_Parms
		{
			bool PropertyValue;
		};
		static void NewProp_PropertyValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PropertyValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_UpdateWithNewData_Statics::NewProp_PropertyValue_SetBit(void* Obj)
	{
		((CavrnusLiveBoolPropertyUpdate_eventUpdateWithNewData_Parms*)Obj)->PropertyValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_UpdateWithNewData_Statics::NewProp_PropertyValue = { "PropertyValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CavrnusLiveBoolPropertyUpdate_eventUpdateWithNewData_Parms), &Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_UpdateWithNewData_Statics::NewProp_PropertyValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_UpdateWithNewData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_UpdateWithNewData_Statics::NewProp_PropertyValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_UpdateWithNewData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Cavrnus|Properties" },
		{ "ModuleRelativePath", "Public/Types/CavrnusLiveBoolPropertyUpdate.h" },
		{ "ShortToolTip", "Updates the temporary value sent to the server" },
		{ "ToolTip", "Updates the temporary value sent to the server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_UpdateWithNewData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusLiveBoolPropertyUpdate, nullptr, "UpdateWithNewData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_UpdateWithNewData_Statics::CavrnusLiveBoolPropertyUpdate_eventUpdateWithNewData_Parms), Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_UpdateWithNewData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_UpdateWithNewData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_UpdateWithNewData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_UpdateWithNewData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_UpdateWithNewData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_UpdateWithNewData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusLiveBoolPropertyUpdate);
	UClass* Z_Construct_UClass_UCavrnusLiveBoolPropertyUpdate_NoRegister()
	{
		return UCavrnusLiveBoolPropertyUpdate::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusLiveBoolPropertyUpdate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusLiveBoolPropertyUpdate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCavrnusLivePropertyUpdate,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusLiveBoolPropertyUpdate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_Finalize, "Finalize" }, // 1761550105
		{ &Z_Construct_UFunction_UCavrnusLiveBoolPropertyUpdate_UpdateWithNewData, "UpdateWithNewData" }, // 2876604632
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusLiveBoolPropertyUpdate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Types/CavrnusLiveBoolPropertyUpdate.h" },
		{ "ModuleRelativePath", "Public/Types/CavrnusLiveBoolPropertyUpdate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusLiveBoolPropertyUpdate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusLiveBoolPropertyUpdate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusLiveBoolPropertyUpdate_Statics::ClassParams = {
		&UCavrnusLiveBoolPropertyUpdate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusLiveBoolPropertyUpdate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusLiveBoolPropertyUpdate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusLiveBoolPropertyUpdate()
	{
		if (!Z_Registration_Info_UClass_UCavrnusLiveBoolPropertyUpdate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusLiveBoolPropertyUpdate.OuterSingleton, Z_Construct_UClass_UCavrnusLiveBoolPropertyUpdate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusLiveBoolPropertyUpdate.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusLiveBoolPropertyUpdate>()
	{
		return UCavrnusLiveBoolPropertyUpdate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusLiveBoolPropertyUpdate);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusLiveBoolPropertyUpdate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusLiveBoolPropertyUpdate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusLiveBoolPropertyUpdate, UCavrnusLiveBoolPropertyUpdate::StaticClass, TEXT("UCavrnusLiveBoolPropertyUpdate"), &Z_Registration_Info_UClass_UCavrnusLiveBoolPropertyUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusLiveBoolPropertyUpdate), 2789868725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusLiveBoolPropertyUpdate_h_2269099679(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusLiveBoolPropertyUpdate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusLiveBoolPropertyUpdate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
