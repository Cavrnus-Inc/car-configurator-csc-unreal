// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/CavrnusSpaceListWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusSpaceListWidget() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusSpaceListWidget_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusSpaceListWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
// End Cross Module References
	static FName NAME_UCavrnusSpaceListWidget_GetSpaceID = FName(TEXT("GetSpaceID"));
	FString UCavrnusSpaceListWidget::GetSpaceID(UObject* Item)
	{
		CavrnusSpaceListWidget_eventGetSpaceID_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_UCavrnusSpaceListWidget_GetSpaceID),&Parms);
		return Parms.ReturnValue;
	}
	void UCavrnusSpaceListWidget::StaticRegisterNativesUCavrnusSpaceListWidget()
	{
	}
	struct Z_Construct_UFunction_UCavrnusSpaceListWidget_GetSpaceID_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusSpaceListWidget_GetSpaceID_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpaceListWidget_eventGetSpaceID_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCavrnusSpaceListWidget_GetSpaceID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpaceListWidget_eventGetSpaceID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSpaceListWidget_GetSpaceID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpaceListWidget_GetSpaceID_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpaceListWidget_GetSpaceID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpaceListWidget_GetSpaceID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/UI/CavrnusSpaceListWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSpaceListWidget_GetSpaceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSpaceListWidget, nullptr, "GetSpaceID", nullptr, nullptr, sizeof(CavrnusSpaceListWidget_eventGetSpaceID_Parms), Z_Construct_UFunction_UCavrnusSpaceListWidget_GetSpaceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpaceListWidget_GetSpaceID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpaceListWidget_GetSpaceID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpaceListWidget_GetSpaceID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSpaceListWidget_GetSpaceID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSpaceListWidget_GetSpaceID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusSpaceListWidget);
	UClass* Z_Construct_UClass_UCavrnusSpaceListWidget_NoRegister()
	{
		return UCavrnusSpaceListWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusSpaceListWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceList_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpaceList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusSpaceListWidget_GetSpaceID, "GetSpaceID" }, // 2700829150
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/CavrnusSpaceListWidget.h" },
		{ "ModuleRelativePath", "Public/UI/CavrnusSpaceListWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_SpaceList_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CavrnusSpaceListWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_SpaceList = { "SpaceList", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSpaceListWidget, SpaceList), Z_Construct_UClass_UListView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_SpaceList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_SpaceList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::NewProp_SpaceList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusSpaceListWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::ClassParams = {
		&UCavrnusSpaceListWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusSpaceListWidget()
	{
		if (!Z_Registration_Info_UClass_UCavrnusSpaceListWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusSpaceListWidget.OuterSingleton, Z_Construct_UClass_UCavrnusSpaceListWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusSpaceListWidget.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusSpaceListWidget>()
	{
		return UCavrnusSpaceListWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusSpaceListWidget);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusSpaceListWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusSpaceListWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusSpaceListWidget, UCavrnusSpaceListWidget::StaticClass, TEXT("UCavrnusSpaceListWidget"), &Z_Registration_Info_UClass_UCavrnusSpaceListWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusSpaceListWidget), 2721939738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusSpaceListWidget_h_1227568729(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusSpaceListWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusSpaceListWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
