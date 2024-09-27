// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/MinimalMenu/SidebarMenu/SidebarMenuBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSidebarMenuBase() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UFunction* Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_USidebarMenuBase_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_USidebarMenuBase();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusBaseUserWidget();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature_Statics
	{
		struct _Script_CavrnusConnector_eventSecondaryWidgetRequested_Parms
		{
			UUserWidget* SecondaryWidget;
			FString MenuName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryWidget;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MenuName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature_Statics::NewProp_SecondaryWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature_Statics::NewProp_SecondaryWidget = { "SecondaryWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CavrnusConnector_eventSecondaryWidgetRequested_Parms, SecondaryWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature_Statics::NewProp_SecondaryWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature_Statics::NewProp_SecondaryWidget_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature_Statics::NewProp_MenuName = { "MenuName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CavrnusConnector_eventSecondaryWidgetRequested_Parms, MenuName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature_Statics::NewProp_SecondaryWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature_Statics::NewProp_MenuName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MinimalMenu/SidebarMenu/SidebarMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CavrnusConnector, nullptr, "SecondaryWidgetRequested__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature_Statics::_Script_CavrnusConnector_eventSecondaryWidgetRequested_Parms), Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USidebarMenuBase::execForceChildrenRebuild)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceChildrenRebuild();
		P_NATIVE_END;
	}
	void USidebarMenuBase::StaticRegisterNativesUSidebarMenuBase()
	{
		UClass* Class = USidebarMenuBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceChildrenRebuild", &USidebarMenuBase::execForceChildrenRebuild },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USidebarMenuBase_ForceChildrenRebuild_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USidebarMenuBase_ForceChildrenRebuild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|SiceBarMenuBase" },
		{ "ModuleRelativePath", "Public/UI/MinimalMenu/SidebarMenu/SidebarMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USidebarMenuBase_ForceChildrenRebuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USidebarMenuBase, nullptr, "ForceChildrenRebuild", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USidebarMenuBase_ForceChildrenRebuild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USidebarMenuBase_ForceChildrenRebuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USidebarMenuBase_ForceChildrenRebuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USidebarMenuBase_ForceChildrenRebuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USidebarMenuBase);
	UClass* Z_Construct_UClass_USidebarMenuBase_NoRegister()
	{
		return USidebarMenuBase::StaticClass();
	}
	struct Z_Construct_UClass_USidebarMenuBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryWidgetRequested_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SecondaryWidgetRequested;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USidebarMenuBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCavrnusBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USidebarMenuBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USidebarMenuBase_ForceChildrenRebuild, "ForceChildrenRebuild" }, // 284327497
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USidebarMenuBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/MinimalMenu/SidebarMenu/SidebarMenuBase.h" },
		{ "ModuleRelativePath", "Public/UI/MinimalMenu/SidebarMenu/SidebarMenuBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USidebarMenuBase_Statics::NewProp_SecondaryWidgetRequested_MetaData[] = {
		{ "Category", "Cavrnus|SideBarMenuBase" },
		{ "ModuleRelativePath", "Public/UI/MinimalMenu/SidebarMenu/SidebarMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USidebarMenuBase_Statics::NewProp_SecondaryWidgetRequested = { "SecondaryWidgetRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USidebarMenuBase, SecondaryWidgetRequested), Z_Construct_UDelegateFunction_CavrnusConnector_SecondaryWidgetRequested__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USidebarMenuBase_Statics::NewProp_SecondaryWidgetRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USidebarMenuBase_Statics::NewProp_SecondaryWidgetRequested_MetaData)) }; // 2478575126
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USidebarMenuBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USidebarMenuBase_Statics::NewProp_SecondaryWidgetRequested,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USidebarMenuBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USidebarMenuBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USidebarMenuBase_Statics::ClassParams = {
		&USidebarMenuBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USidebarMenuBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USidebarMenuBase_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USidebarMenuBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USidebarMenuBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USidebarMenuBase()
	{
		if (!Z_Registration_Info_UClass_USidebarMenuBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USidebarMenuBase.OuterSingleton, Z_Construct_UClass_USidebarMenuBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USidebarMenuBase.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<USidebarMenuBase>()
	{
		return USidebarMenuBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USidebarMenuBase);
	struct Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USidebarMenuBase, USidebarMenuBase::StaticClass, TEXT("USidebarMenuBase"), &Z_Registration_Info_UClass_USidebarMenuBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USidebarMenuBase), 380561976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_1549768992(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_car_configurator_csc_unreal_refactor_for_MAIN_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MinimalMenu_SidebarMenu_SidebarMenuBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
