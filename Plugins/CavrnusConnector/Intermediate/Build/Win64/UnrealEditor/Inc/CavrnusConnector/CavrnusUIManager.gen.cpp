// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/CavrnusUIManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusUIManager() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusUIManager_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusUIManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ACavrnusSpatialConnector_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusWidgetBase_NoRegister();
	CAVRNUSCONNECTOR_API UFunction* Z_Construct_UDelegateFunction_CavrnusConnector_CavrnusAuthRecv__DelegateSignature();
	CAVRNUSCONNECTOR_API UFunction* Z_Construct_UDelegateFunction_CavrnusConnector_CavrnusError__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusUIManager::execShowSpaceList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowSpaceList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusUIManager::execShowLoadingWidget)
	{
		P_GET_UBOOL(Z_Param_bShowWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowLoadingWidget(Z_Param_bShowWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusUIManager::execShowLoginWidget)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_SuccessDelegate);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_FailureDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowLoginWidget(FCavrnusAuthRecv(Z_Param_SuccessDelegate),FCavrnusError(Z_Param_FailureDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusUIManager::execShowGuestLoginWidget)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_SuccessDelegate);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_FailureDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowGuestLoginWidget(FCavrnusAuthRecv(Z_Param_SuccessDelegate),FCavrnusError(Z_Param_FailureDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusUIManager::execRemoveAllWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllWidgets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusUIManager::execRemoveWidget)
	{
		P_GET_OBJECT(UCavrnusWidgetBase,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusUIManager::execSpawnWidget)
	{
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCavrnusWidgetBase**)Z_Param__Result=P_THIS->SpawnWidget(Z_Param_WidgetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusUIManager::execInitialize)
	{
		P_GET_OBJECT(ACavrnusSpatialConnector,Z_Param_Connector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_Connector);
		P_NATIVE_END;
	}
	void UCavrnusUIManager::StaticRegisterNativesUCavrnusUIManager()
	{
		UClass* Class = UCavrnusUIManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialize", &UCavrnusUIManager::execInitialize },
			{ "RemoveAllWidgets", &UCavrnusUIManager::execRemoveAllWidgets },
			{ "RemoveWidget", &UCavrnusUIManager::execRemoveWidget },
			{ "ShowGuestLoginWidget", &UCavrnusUIManager::execShowGuestLoginWidget },
			{ "ShowLoadingWidget", &UCavrnusUIManager::execShowLoadingWidget },
			{ "ShowLoginWidget", &UCavrnusUIManager::execShowLoginWidget },
			{ "ShowSpaceList", &UCavrnusUIManager::execShowSpaceList },
			{ "SpawnWidget", &UCavrnusUIManager::execSpawnWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusUIManager_Initialize_Statics
	{
		struct CavrnusUIManager_eventInitialize_Parms
		{
			ACavrnusSpatialConnector* Connector;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Connector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusUIManager_Initialize_Statics::NewProp_Connector = { "Connector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusUIManager_eventInitialize_Parms, Connector), Z_Construct_UClass_ACavrnusSpatialConnector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusUIManager_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusUIManager_Initialize_Statics::NewProp_Connector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusUIManager_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/UI/CavrnusUIManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusUIManager_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusUIManager, nullptr, "Initialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusUIManager_Initialize_Statics::CavrnusUIManager_eventInitialize_Parms), Z_Construct_UFunction_UCavrnusUIManager_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUIManager_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusUIManager_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUIManager_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusUIManager_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusUIManager_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusUIManager_RemoveAllWidgets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusUIManager_RemoveAllWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/UI/CavrnusUIManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusUIManager_RemoveAllWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusUIManager, nullptr, "RemoveAllWidgets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusUIManager_RemoveAllWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUIManager_RemoveAllWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusUIManager_RemoveAllWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusUIManager_RemoveAllWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusUIManager_RemoveWidget_Statics
	{
		struct CavrnusUIManager_eventRemoveWidget_Parms
		{
			UCavrnusWidgetBase* Widget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusUIManager_RemoveWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusUIManager_RemoveWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusUIManager_eventRemoveWidget_Parms, Widget), Z_Construct_UClass_UCavrnusWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusUIManager_RemoveWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUIManager_RemoveWidget_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusUIManager_RemoveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusUIManager_RemoveWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusUIManager_RemoveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/UI/CavrnusUIManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusUIManager_RemoveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusUIManager, nullptr, "RemoveWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusUIManager_RemoveWidget_Statics::CavrnusUIManager_eventRemoveWidget_Parms), Z_Construct_UFunction_UCavrnusUIManager_RemoveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUIManager_RemoveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusUIManager_RemoveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUIManager_RemoveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusUIManager_RemoveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusUIManager_RemoveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusUIManager_ShowGuestLoginWidget_Statics
	{
		struct CavrnusUIManager_eventShowGuestLoginWidget_Parms
		{
			FScriptDelegate SuccessDelegate;
			FScriptDelegate FailureDelegate;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_SuccessDelegate;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_FailureDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCavrnusUIManager_ShowGuestLoginWidget_Statics::NewProp_SuccessDelegate = { "SuccessDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusUIManager_eventShowGuestLoginWidget_Parms, SuccessDelegate), Z_Construct_UDelegateFunction_CavrnusConnector_CavrnusAuthRecv__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4062566673
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCavrnusUIManager_ShowGuestLoginWidget_Statics::NewProp_FailureDelegate = { "FailureDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusUIManager_eventShowGuestLoginWidget_Parms, FailureDelegate), Z_Construct_UDelegateFunction_CavrnusConnector_CavrnusError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2317053288
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusUIManager_ShowGuestLoginWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusUIManager_ShowGuestLoginWidget_Statics::NewProp_SuccessDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusUIManager_ShowGuestLoginWidget_Statics::NewProp_FailureDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusUIManager_ShowGuestLoginWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/UI/CavrnusUIManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusUIManager_ShowGuestLoginWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusUIManager, nullptr, "ShowGuestLoginWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusUIManager_ShowGuestLoginWidget_Statics::CavrnusUIManager_eventShowGuestLoginWidget_Parms), Z_Construct_UFunction_UCavrnusUIManager_ShowGuestLoginWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUIManager_ShowGuestLoginWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusUIManager_ShowGuestLoginWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUIManager_ShowGuestLoginWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusUIManager_ShowGuestLoginWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusUIManager_ShowGuestLoginWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusUIManager_ShowLoadingWidget_Statics
	{
		struct CavrnusUIManager_eventShowLoadingWidget_Parms
		{
			bool bShowWidget;
		};
		static void NewProp_bShowWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCavrnusUIManager_ShowLoadingWidget_Statics::NewProp_bShowWidget_SetBit(void* Obj)
	{
		((CavrnusUIManager_eventShowLoadingWidget_Parms*)Obj)->bShowWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCavrnusUIManager_ShowLoadingWidget_Statics::NewProp_bShowWidget = { "bShowWidget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CavrnusUIManager_eventShowLoadingWidget_Parms), &Z_Construct_UFunction_UCavrnusUIManager_ShowLoadingWidget_Statics::NewProp_bShowWidget_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusUIManager_ShowLoadingWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusUIManager_ShowLoadingWidget_Statics::NewProp_bShowWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusUIManager_ShowLoadingWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/UI/CavrnusUIManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusUIManager_ShowLoadingWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusUIManager, nullptr, "ShowLoadingWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusUIManager_ShowLoadingWidget_Statics::CavrnusUIManager_eventShowLoadingWidget_Parms), Z_Construct_UFunction_UCavrnusUIManager_ShowLoadingWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUIManager_ShowLoadingWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusUIManager_ShowLoadingWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUIManager_ShowLoadingWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusUIManager_ShowLoadingWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusUIManager_ShowLoadingWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusUIManager_ShowLoginWidget_Statics
	{
		struct CavrnusUIManager_eventShowLoginWidget_Parms
		{
			FScriptDelegate SuccessDelegate;
			FScriptDelegate FailureDelegate;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_SuccessDelegate;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_FailureDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCavrnusUIManager_ShowLoginWidget_Statics::NewProp_SuccessDelegate = { "SuccessDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusUIManager_eventShowLoginWidget_Parms, SuccessDelegate), Z_Construct_UDelegateFunction_CavrnusConnector_CavrnusAuthRecv__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4062566673
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCavrnusUIManager_ShowLoginWidget_Statics::NewProp_FailureDelegate = { "FailureDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusUIManager_eventShowLoginWidget_Parms, FailureDelegate), Z_Construct_UDelegateFunction_CavrnusConnector_CavrnusError__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2317053288
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusUIManager_ShowLoginWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusUIManager_ShowLoginWidget_Statics::NewProp_SuccessDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusUIManager_ShowLoginWidget_Statics::NewProp_FailureDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusUIManager_ShowLoginWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/UI/CavrnusUIManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusUIManager_ShowLoginWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusUIManager, nullptr, "ShowLoginWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusUIManager_ShowLoginWidget_Statics::CavrnusUIManager_eventShowLoginWidget_Parms), Z_Construct_UFunction_UCavrnusUIManager_ShowLoginWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUIManager_ShowLoginWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusUIManager_ShowLoginWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUIManager_ShowLoginWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusUIManager_ShowLoginWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusUIManager_ShowLoginWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusUIManager_ShowSpaceList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusUIManager_ShowSpaceList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/UI/CavrnusUIManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusUIManager_ShowSpaceList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusUIManager, nullptr, "ShowSpaceList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusUIManager_ShowSpaceList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUIManager_ShowSpaceList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusUIManager_ShowSpaceList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusUIManager_ShowSpaceList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget_Statics
	{
		struct CavrnusUIManager_eventSpawnWidget_Parms
		{
			TSubclassOf<UCavrnusWidgetBase>  WidgetClass;
			UCavrnusWidgetBase* ReturnValue;
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusUIManager_eventSpawnWidget_Parms, WidgetClass), Z_Construct_UClass_UCavrnusWidgetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusUIManager_eventSpawnWidget_Parms, ReturnValue), Z_Construct_UClass_UCavrnusWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/UI/CavrnusUIManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusUIManager, nullptr, "SpawnWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget_Statics::CavrnusUIManager_eventSpawnWidget_Parms), Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusUIManager);
	UClass* Z_Construct_UClass_UCavrnusUIManager_NoRegister()
	{
		return UCavrnusUIManager::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusUIManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusUIManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusUIManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusUIManager_Initialize, "Initialize" }, // 364245822
		{ &Z_Construct_UFunction_UCavrnusUIManager_RemoveAllWidgets, "RemoveAllWidgets" }, // 2926656217
		{ &Z_Construct_UFunction_UCavrnusUIManager_RemoveWidget, "RemoveWidget" }, // 577765231
		{ &Z_Construct_UFunction_UCavrnusUIManager_ShowGuestLoginWidget, "ShowGuestLoginWidget" }, // 1758969474
		{ &Z_Construct_UFunction_UCavrnusUIManager_ShowLoadingWidget, "ShowLoadingWidget" }, // 3997216981
		{ &Z_Construct_UFunction_UCavrnusUIManager_ShowLoginWidget, "ShowLoginWidget" }, // 4153571204
		{ &Z_Construct_UFunction_UCavrnusUIManager_ShowSpaceList, "ShowSpaceList" }, // 3547953484
		{ &Z_Construct_UFunction_UCavrnusUIManager_SpawnWidget, "SpawnWidget" }, // 627395533
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusUIManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class responsible for managing all cavrnus related uis.\n */" },
		{ "IncludePath", "UI/CavrnusUIManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/CavrnusUIManager.h" },
		{ "ToolTip", "Class responsible for managing all cavrnus related uis." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusUIManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusUIManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusUIManager_Statics::ClassParams = {
		&UCavrnusUIManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusUIManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusUIManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusUIManager()
	{
		if (!Z_Registration_Info_UClass_UCavrnusUIManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusUIManager.OuterSingleton, Z_Construct_UClass_UCavrnusUIManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusUIManager.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusUIManager>()
	{
		return UCavrnusUIManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusUIManager);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusUIManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusUIManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusUIManager, UCavrnusUIManager::StaticClass, TEXT("UCavrnusUIManager"), &Z_Registration_Info_UClass_UCavrnusUIManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusUIManager), 603479793U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusUIManager_h_2249842178(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusUIManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_CavrnusUIManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
