// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Types/CavrnusBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusBinding() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusBinding_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusBinding();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusBinding::execUnbind)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unbind_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UCavrnusBinding_Unbind = FName(TEXT("Unbind"));
	void UCavrnusBinding::Unbind()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCavrnusBinding_Unbind),NULL);
	}
	void UCavrnusBinding::StaticRegisterNativesUCavrnusBinding()
	{
		UClass* Class = UCavrnusBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Unbind", &UCavrnusBinding::execUnbind },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusBinding_Unbind_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusBinding_Unbind_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/**\n\x09 * @brief Unbinds the binding, releasing any resources tied to it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Types/CavrnusBinding.h" },
		{ "ToolTip", "@brief Unbinds the binding, releasing any resources tied to it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusBinding_Unbind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusBinding, nullptr, "Unbind", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusBinding_Unbind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusBinding_Unbind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusBinding_Unbind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusBinding_Unbind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusBinding);
	UClass* Z_Construct_UClass_UCavrnusBinding_NoRegister()
	{
		return UCavrnusBinding::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusBinding_Unbind, "Unbind" }, // 2942357513
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusBinding_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief UCavrnusBinding class for managing bindings in Cavrnus.\n *\n * The UCavrnusBinding class provides functionality to set up and unbind bindings within the Cavrnus system. It ensures that resources tied to bindings are properly released when no longer needed.\n */" },
		{ "IncludePath", "Types/CavrnusBinding.h" },
		{ "ModuleRelativePath", "Public/Types/CavrnusBinding.h" },
		{ "ToolTip", "@brief UCavrnusBinding class for managing bindings in Cavrnus.\n\nThe UCavrnusBinding class provides functionality to set up and unbind bindings within the Cavrnus system. It ensures that resources tied to bindings are properly released when no longer needed." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusBinding_Statics::ClassParams = {
		&UCavrnusBinding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusBinding()
	{
		if (!Z_Registration_Info_UClass_UCavrnusBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusBinding.OuterSingleton, Z_Construct_UClass_UCavrnusBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusBinding.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusBinding>()
	{
		return UCavrnusBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusBinding);
	struct Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusBinding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusBinding, UCavrnusBinding::StaticClass, TEXT("UCavrnusBinding"), &Z_Registration_Info_UClass_UCavrnusBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusBinding), 4077401096U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusBinding_h_3964644395(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusBinding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
