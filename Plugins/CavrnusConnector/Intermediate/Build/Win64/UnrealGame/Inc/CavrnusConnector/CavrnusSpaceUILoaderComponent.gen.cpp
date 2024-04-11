// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/CavrnusSpaceUILoaderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusSpaceUILoaderComponent() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusSpaceUILoaderComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusSpaceConnection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusSpaceUILoaderComponent::execSpaceConnected)
	{
		P_GET_STRUCT(FCavrnusSpaceConnection,Z_Param_spaceConn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpaceConnected(Z_Param_spaceConn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSpaceUILoaderComponent::execSpawnWidget)
	{
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->SpawnWidget(Z_Param_WidgetClass);
		P_NATIVE_END;
	}
	void UCavrnusSpaceUILoaderComponent::StaticRegisterNativesUCavrnusSpaceUILoaderComponent()
	{
		UClass* Class = UCavrnusSpaceUILoaderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpaceConnected", &UCavrnusSpaceUILoaderComponent::execSpaceConnected },
			{ "SpawnWidget", &UCavrnusSpaceUILoaderComponent::execSpawnWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpaceConnected_Statics
	{
		struct CavrnusSpaceUILoaderComponent_eventSpaceConnected_Parms
		{
			FCavrnusSpaceConnection spaceConn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_spaceConn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpaceConnected_Statics::NewProp_spaceConn = { "spaceConn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpaceUILoaderComponent_eventSpaceConnected_Parms, spaceConn), Z_Construct_UScriptStruct_FCavrnusSpaceConnection, METADATA_PARAMS(nullptr, 0) }; // 3908145014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpaceConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpaceConnected_Statics::NewProp_spaceConn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpaceConnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CavrnusSpaceUILoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpaceConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSpaceUILoaderComponent, nullptr, "SpaceConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpaceConnected_Statics::CavrnusSpaceUILoaderComponent_eventSpaceConnected_Parms), Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpaceConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpaceConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpaceConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpaceConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpaceConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpaceConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget_Statics
	{
		struct CavrnusSpaceUILoaderComponent_eventSpawnWidget_Parms
		{
			TSubclassOf<UUserWidget>  WidgetClass;
			UUserWidget* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpaceUILoaderComponent_eventSpawnWidget_Parms, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpaceUILoaderComponent_eventSpawnWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CavrnusSpaceUILoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSpaceUILoaderComponent, nullptr, "SpawnWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget_Statics::CavrnusSpaceUILoaderComponent_eventSpawnWidget_Parms), Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusSpaceUILoaderComponent);
	UClass* Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_NoRegister()
	{
		return UCavrnusSpaceUILoaderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LoadingWidgetClass;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetsToLoad_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetsToLoad_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetsToLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadingWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpaceConnected, "SpaceConnected" }, // 3677221305
		{ &Z_Construct_UFunction_UCavrnusSpaceUILoaderComponent_SpawnWidget, "SpawnWidget" }, // 3168739599
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Component which determines which UI widgets are loaded\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "UI/CavrnusSpaceUILoaderComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/CavrnusSpaceUILoaderComponent.h" },
		{ "ToolTip", "Component which determines which UI widgets are loaded" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::NewProp_LoadingWidgetClass_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/UI/CavrnusSpaceUILoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::NewProp_LoadingWidgetClass = { "LoadingWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSpaceUILoaderComponent, LoadingWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::NewProp_LoadingWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::NewProp_LoadingWidgetClass_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::NewProp_WidgetsToLoad_Inner = { "WidgetsToLoad", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::NewProp_WidgetsToLoad_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/UI/CavrnusSpaceUILoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::NewProp_WidgetsToLoad = { "WidgetsToLoad", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSpaceUILoaderComponent, WidgetsToLoad), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::NewProp_WidgetsToLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::NewProp_WidgetsToLoad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::NewProp_LoadingWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CavrnusSpaceUILoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::NewProp_LoadingWidget = { "LoadingWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSpaceUILoaderComponent, LoadingWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::NewProp_LoadingWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::NewProp_LoadingWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::NewProp_LoadingWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::NewProp_WidgetsToLoad_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::NewProp_WidgetsToLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::NewProp_LoadingWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusSpaceUILoaderComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::ClassParams = {
		&UCavrnusSpaceUILoaderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusSpaceUILoaderComponent()
	{
		if (!Z_Registration_Info_UClass_UCavrnusSpaceUILoaderComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusSpaceUILoaderComponent.OuterSingleton, Z_Construct_UClass_UCavrnusSpaceUILoaderComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusSpaceUILoaderComponent.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusSpaceUILoaderComponent>()
	{
		return UCavrnusSpaceUILoaderComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusSpaceUILoaderComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusSpaceUILoaderComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusSpaceUILoaderComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusSpaceUILoaderComponent, UCavrnusSpaceUILoaderComponent::StaticClass, TEXT("UCavrnusSpaceUILoaderComponent"), &Z_Registration_Info_UClass_UCavrnusSpaceUILoaderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusSpaceUILoaderComponent), 2775303109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusSpaceUILoaderComponent_h_1518306990(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusSpaceUILoaderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusSpaceUILoaderComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
