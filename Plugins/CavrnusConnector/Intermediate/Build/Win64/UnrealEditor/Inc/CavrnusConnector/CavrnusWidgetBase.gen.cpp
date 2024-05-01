// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/CavrnusWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusWidgetBase() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusWidgetBase_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusWidgetBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusWidgetBase::execRemoveCavrnusWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCavrnusWidget();
		P_NATIVE_END;
	}
	void UCavrnusWidgetBase::StaticRegisterNativesUCavrnusWidgetBase()
	{
		UClass* Class = UCavrnusWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveCavrnusWidget", &UCavrnusWidgetBase::execRemoveCavrnusWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusWidgetBase_RemoveCavrnusWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusWidgetBase_RemoveCavrnusWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/UI/CavrnusWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusWidgetBase_RemoveCavrnusWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusWidgetBase, nullptr, "RemoveCavrnusWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusWidgetBase_RemoveCavrnusWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusWidgetBase_RemoveCavrnusWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusWidgetBase_RemoveCavrnusWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusWidgetBase_RemoveCavrnusWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusWidgetBase);
	UClass* Z_Construct_UClass_UCavrnusWidgetBase_NoRegister()
	{
		return UCavrnusWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusWidgetBase_RemoveCavrnusWidget, "RemoveCavrnusWidget" }, // 736535242
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base widget class for all Cavrnus specific widgets.\n * Its important to derive the widgets from this class otherwise they will miss function.\n */" },
		{ "IncludePath", "UI/CavrnusWidgetBase.h" },
		{ "ModuleRelativePath", "Public/UI/CavrnusWidgetBase.h" },
		{ "ToolTip", "Base widget class for all Cavrnus specific widgets.\nIts important to derive the widgets from this class otherwise they will miss function." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusWidgetBase_Statics::ClassParams = {
		&UCavrnusWidgetBase::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusWidgetBase()
	{
		if (!Z_Registration_Info_UClass_UCavrnusWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusWidgetBase.OuterSingleton, Z_Construct_UClass_UCavrnusWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusWidgetBase.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusWidgetBase>()
	{
		return UCavrnusWidgetBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusWidgetBase);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusWidgetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusWidgetBase, UCavrnusWidgetBase::StaticClass, TEXT("UCavrnusWidgetBase"), &Z_Registration_Info_UClass_UCavrnusWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusWidgetBase), 3214896317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusWidgetBase_h_3791235850(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusWidgetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
