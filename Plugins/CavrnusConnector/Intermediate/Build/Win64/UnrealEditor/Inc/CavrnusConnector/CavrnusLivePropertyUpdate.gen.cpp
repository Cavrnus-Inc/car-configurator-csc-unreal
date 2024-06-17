// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/LivePropertyUpdates/CavrnusLivePropertyUpdate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusLivePropertyUpdate() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLivePropertyUpdate_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLivePropertyUpdate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusLivePropertyUpdate::execCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cancel();
		P_NATIVE_END;
	}
	void UCavrnusLivePropertyUpdate::StaticRegisterNativesUCavrnusLivePropertyUpdate()
	{
		UClass* Class = UCavrnusLivePropertyUpdate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Cancel", &UCavrnusLivePropertyUpdate::execCancel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusLivePropertyUpdate_Cancel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusLivePropertyUpdate_Cancel_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Cavrnus|Properties" },
		{ "ModuleRelativePath", "Public/LivePropertyUpdates/CavrnusLivePropertyUpdate.h" },
		{ "ShortToolTip", "Cancels transient operations sent to the server" },
		{ "ToolTip", "Cancels transient operations sent to the server." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusLivePropertyUpdate_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusLivePropertyUpdate, nullptr, "Cancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusLivePropertyUpdate_Cancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLivePropertyUpdate_Cancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusLivePropertyUpdate_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusLivePropertyUpdate_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusLivePropertyUpdate);
	UClass* Z_Construct_UClass_UCavrnusLivePropertyUpdate_NoRegister()
	{
		return UCavrnusLivePropertyUpdate::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusLivePropertyUpdate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusLivePropertyUpdate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusLivePropertyUpdate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusLivePropertyUpdate_Cancel, "Cancel" }, // 393297957
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusLivePropertyUpdate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief UCavrnusLivePropertyUpdate class for managing live property updates in Cavrnus.\n *\n * This abstract class serves as a base for specific property update classes, providing common functionality such as\n * canceling updates and tracking the last updated time.\n */" },
		{ "IncludePath", "LivePropertyUpdates/CavrnusLivePropertyUpdate.h" },
		{ "ModuleRelativePath", "Public/LivePropertyUpdates/CavrnusLivePropertyUpdate.h" },
		{ "ToolTip", "@brief UCavrnusLivePropertyUpdate class for managing live property updates in Cavrnus.\n\nThis abstract class serves as a base for specific property update classes, providing common functionality such as\ncanceling updates and tracking the last updated time." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusLivePropertyUpdate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusLivePropertyUpdate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusLivePropertyUpdate_Statics::ClassParams = {
		&UCavrnusLivePropertyUpdate::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusLivePropertyUpdate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusLivePropertyUpdate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusLivePropertyUpdate()
	{
		if (!Z_Registration_Info_UClass_UCavrnusLivePropertyUpdate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusLivePropertyUpdate.OuterSingleton, Z_Construct_UClass_UCavrnusLivePropertyUpdate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusLivePropertyUpdate.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusLivePropertyUpdate>()
	{
		return UCavrnusLivePropertyUpdate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusLivePropertyUpdate);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_LivePropertyUpdates_CavrnusLivePropertyUpdate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_LivePropertyUpdates_CavrnusLivePropertyUpdate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusLivePropertyUpdate, UCavrnusLivePropertyUpdate::StaticClass, TEXT("UCavrnusLivePropertyUpdate"), &Z_Registration_Info_UClass_UCavrnusLivePropertyUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusLivePropertyUpdate), 2477430876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_LivePropertyUpdates_CavrnusLivePropertyUpdate_h_3658382516(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_LivePropertyUpdates_CavrnusLivePropertyUpdate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_LivePropertyUpdates_CavrnusLivePropertyUpdate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
