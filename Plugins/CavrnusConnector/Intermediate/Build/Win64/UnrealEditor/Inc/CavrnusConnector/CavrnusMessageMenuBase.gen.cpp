// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/MessageMenus/CavrnusMessageMenuBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusMessageMenuBase() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusMessageMenuBase_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusMessageMenuBase();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_USidebarMenuBase();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FChatEntry();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusChatEntry_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusSpaceConnection();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusBinding_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusMessageMenuBase::execHandleChatRemoved)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RemovalId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleChatRemoved(Z_Param_RemovalId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusMessageMenuBase::execHandleChatUpdated)
	{
		P_GET_STRUCT(FChatEntry,Z_Param_ChatUpdated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleChatUpdated(Z_Param_ChatUpdated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusMessageMenuBase::execHandleChatAdded)
	{
		P_GET_STRUCT(FChatEntry,Z_Param_ChatAdded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleChatAdded(Z_Param_ChatAdded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusMessageMenuBase::execResetPositionButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetPositionButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusMessageMenuBase::execOnScrollBoxScrolled)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnScrollBoxScrolled(Z_Param_CurrentOffset);
		P_NATIVE_END;
	}
	void UCavrnusMessageMenuBase::StaticRegisterNativesUCavrnusMessageMenuBase()
	{
		UClass* Class = UCavrnusMessageMenuBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleChatAdded", &UCavrnusMessageMenuBase::execHandleChatAdded },
			{ "HandleChatRemoved", &UCavrnusMessageMenuBase::execHandleChatRemoved },
			{ "HandleChatUpdated", &UCavrnusMessageMenuBase::execHandleChatUpdated },
			{ "OnScrollBoxScrolled", &UCavrnusMessageMenuBase::execOnScrollBoxScrolled },
			{ "ResetPositionButtonClicked", &UCavrnusMessageMenuBase::execResetPositionButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatAdded_Statics
	{
		struct CavrnusMessageMenuBase_eventHandleChatAdded_Parms
		{
			FChatEntry ChatAdded;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChatAdded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatAdded_Statics::NewProp_ChatAdded = { "ChatAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusMessageMenuBase_eventHandleChatAdded_Parms, ChatAdded), Z_Construct_UScriptStruct_FChatEntry, METADATA_PARAMS(nullptr, 0) }; // 2742298316
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatAdded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatAdded_Statics::NewProp_ChatAdded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MessageMenus/CavrnusMessageMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusMessageMenuBase, nullptr, "HandleChatAdded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatAdded_Statics::CavrnusMessageMenuBase_eventHandleChatAdded_Parms), Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatRemoved_Statics
	{
		struct CavrnusMessageMenuBase_eventHandleChatRemoved_Parms
		{
			FString RemovalId;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_RemovalId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatRemoved_Statics::NewProp_RemovalId = { "RemovalId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusMessageMenuBase_eventHandleChatRemoved_Parms, RemovalId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatRemoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatRemoved_Statics::NewProp_RemovalId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MessageMenus/CavrnusMessageMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusMessageMenuBase, nullptr, "HandleChatRemoved", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatRemoved_Statics::CavrnusMessageMenuBase_eventHandleChatRemoved_Parms), Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatUpdated_Statics
	{
		struct CavrnusMessageMenuBase_eventHandleChatUpdated_Parms
		{
			FChatEntry ChatUpdated;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChatUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatUpdated_Statics::NewProp_ChatUpdated = { "ChatUpdated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusMessageMenuBase_eventHandleChatUpdated_Parms, ChatUpdated), Z_Construct_UScriptStruct_FChatEntry, METADATA_PARAMS(nullptr, 0) }; // 2742298316
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatUpdated_Statics::NewProp_ChatUpdated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MessageMenus/CavrnusMessageMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusMessageMenuBase, nullptr, "HandleChatUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatUpdated_Statics::CavrnusMessageMenuBase_eventHandleChatUpdated_Parms), Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusMessageMenuBase_OnScrollBoxScrolled_Statics
	{
		struct CavrnusMessageMenuBase_eventOnScrollBoxScrolled_Parms
		{
			float CurrentOffset;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCavrnusMessageMenuBase_OnScrollBoxScrolled_Statics::NewProp_CurrentOffset = { "CurrentOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusMessageMenuBase_eventOnScrollBoxScrolled_Parms, CurrentOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusMessageMenuBase_OnScrollBoxScrolled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusMessageMenuBase_OnScrollBoxScrolled_Statics::NewProp_CurrentOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusMessageMenuBase_OnScrollBoxScrolled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MessageMenus/CavrnusMessageMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusMessageMenuBase_OnScrollBoxScrolled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusMessageMenuBase, nullptr, "OnScrollBoxScrolled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusMessageMenuBase_OnScrollBoxScrolled_Statics::CavrnusMessageMenuBase_eventOnScrollBoxScrolled_Parms), Z_Construct_UFunction_UCavrnusMessageMenuBase_OnScrollBoxScrolled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusMessageMenuBase_OnScrollBoxScrolled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusMessageMenuBase_OnScrollBoxScrolled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusMessageMenuBase_OnScrollBoxScrolled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusMessageMenuBase_OnScrollBoxScrolled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusMessageMenuBase_OnScrollBoxScrolled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusMessageMenuBase_ResetPositionButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusMessageMenuBase_ResetPositionButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|ChatWindow" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/CavrnusMessageMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusMessageMenuBase_ResetPositionButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusMessageMenuBase, nullptr, "ResetPositionButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusMessageMenuBase_ResetPositionButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusMessageMenuBase_ResetPositionButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusMessageMenuBase_ResetPositionButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusMessageMenuBase_ResetPositionButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusMessageMenuBase);
	UClass* Z_Construct_UClass_UCavrnusMessageMenuBase_NoRegister()
	{
		return UCavrnusMessageMenuBase::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusMessageMenuBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatEntryWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ChatEntryWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResetPositionButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetPositionButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceConnection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoScrollToEnd_MetaData[];
#endif
		static void NewProp_AutoScrollToEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoScrollToEnd;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedWidgetsMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CreatedWidgetsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedWidgetsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CreatedWidgetsMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SortedChatWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortedChatWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SortedChatWidgets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatEventsBinding_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatEventsBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USidebarMenuBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatAdded, "HandleChatAdded" }, // 945958159
		{ &Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatRemoved, "HandleChatRemoved" }, // 1110314753
		{ &Z_Construct_UFunction_UCavrnusMessageMenuBase_HandleChatUpdated, "HandleChatUpdated" }, // 869870814
		{ &Z_Construct_UFunction_UCavrnusMessageMenuBase_OnScrollBoxScrolled, "OnScrollBoxScrolled" }, // 2464116183
		{ &Z_Construct_UFunction_UCavrnusMessageMenuBase_ResetPositionButtonClicked, "ResetPositionButtonClicked" }, // 1325123081
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MessageMenus/CavrnusMessageMenuBase.h" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/CavrnusMessageMenuBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ChatScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|ChatWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/CavrnusMessageMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ChatScrollBox = { "ChatScrollBox", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusMessageMenuBase, ChatScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ChatScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ChatScrollBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ChatEntryWidget_MetaData[] = {
		{ "Category", "Cavrnus|ChatWindow" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/CavrnusMessageMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ChatEntryWidget = { "ChatEntryWidget", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusMessageMenuBase, ChatEntryWidget), Z_Construct_UClass_UCavrnusChatEntry_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ChatEntryWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ChatEntryWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ResetPositionButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|ChatWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/CavrnusMessageMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ResetPositionButton = { "ResetPositionButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusMessageMenuBase, ResetPositionButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ResetPositionButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ResetPositionButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_SpaceConnection_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MessageMenus/CavrnusMessageMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_SpaceConnection = { "SpaceConnection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusMessageMenuBase, SpaceConnection), Z_Construct_UScriptStruct_FCavrnusSpaceConnection, METADATA_PARAMS(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_SpaceConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_SpaceConnection_MetaData)) }; // 423510165
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_AutoScrollToEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MessageMenus/CavrnusMessageMenuBase.h" },
	};
#endif
	void Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_AutoScrollToEnd_SetBit(void* Obj)
	{
		((UCavrnusMessageMenuBase*)Obj)->AutoScrollToEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_AutoScrollToEnd = { "AutoScrollToEnd", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCavrnusMessageMenuBase), &Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_AutoScrollToEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_AutoScrollToEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_AutoScrollToEnd_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_CreatedWidgetsMap_ValueProp = { "CreatedWidgetsMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCavrnusChatEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_CreatedWidgetsMap_Key_KeyProp = { "CreatedWidgetsMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_CreatedWidgetsMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/CavrnusMessageMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_CreatedWidgetsMap = { "CreatedWidgetsMap", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusMessageMenuBase, CreatedWidgetsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_CreatedWidgetsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_CreatedWidgetsMap_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_SortedChatWidgets_Inner = { "SortedChatWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCavrnusChatEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_SortedChatWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/CavrnusMessageMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_SortedChatWidgets = { "SortedChatWidgets", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusMessageMenuBase, SortedChatWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_SortedChatWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_SortedChatWidgets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ChatEventsBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MessageMenus/CavrnusMessageMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ChatEventsBinding = { "ChatEventsBinding", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusMessageMenuBase, ChatEventsBinding), Z_Construct_UClass_UCavrnusBinding_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ChatEventsBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ChatEventsBinding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ChatScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ChatEntryWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ResetPositionButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_SpaceConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_AutoScrollToEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_CreatedWidgetsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_CreatedWidgetsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_CreatedWidgetsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_SortedChatWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_SortedChatWidgets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::NewProp_ChatEventsBinding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusMessageMenuBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::ClassParams = {
		&UCavrnusMessageMenuBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusMessageMenuBase()
	{
		if (!Z_Registration_Info_UClass_UCavrnusMessageMenuBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusMessageMenuBase.OuterSingleton, Z_Construct_UClass_UCavrnusMessageMenuBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusMessageMenuBase.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusMessageMenuBase>()
	{
		return UCavrnusMessageMenuBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusMessageMenuBase);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_CavrnusMessageMenuBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_CavrnusMessageMenuBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusMessageMenuBase, UCavrnusMessageMenuBase::StaticClass, TEXT("UCavrnusMessageMenuBase"), &Z_Registration_Info_UClass_UCavrnusMessageMenuBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusMessageMenuBase), 1868176397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_CavrnusMessageMenuBase_h_3086282351(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_CavrnusMessageMenuBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_CavrnusMessageMenuBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
