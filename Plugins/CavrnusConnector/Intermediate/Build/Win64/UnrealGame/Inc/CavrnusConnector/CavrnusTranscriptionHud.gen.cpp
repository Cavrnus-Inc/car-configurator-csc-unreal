// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusTranscriptionHud() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusTranscriptionHud_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusTranscriptionHud();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FChatEntry();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusTranscriptionHudEntry_NoRegister();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusSpaceConnection();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusBinding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusTranscriptionHud::execHandleChatRemoved)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RemovalId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleChatRemoved(Z_Param_RemovalId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusTranscriptionHud::execHandleChatUpdated)
	{
		P_GET_STRUCT(FChatEntry,Z_Param_ChatUpdated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleChatUpdated(Z_Param_ChatUpdated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusTranscriptionHud::execHandleChatAdded)
	{
		P_GET_STRUCT(FChatEntry,Z_Param_ChatAdded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleChatAdded(Z_Param_ChatAdded);
		P_NATIVE_END;
	}
	void UCavrnusTranscriptionHud::StaticRegisterNativesUCavrnusTranscriptionHud()
	{
		UClass* Class = UCavrnusTranscriptionHud::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleChatAdded", &UCavrnusTranscriptionHud::execHandleChatAdded },
			{ "HandleChatRemoved", &UCavrnusTranscriptionHud::execHandleChatRemoved },
			{ "HandleChatUpdated", &UCavrnusTranscriptionHud::execHandleChatUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatAdded_Statics
	{
		struct CavrnusTranscriptionHud_eventHandleChatAdded_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatAdded_Statics::NewProp_ChatAdded = { "ChatAdded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusTranscriptionHud_eventHandleChatAdded_Parms, ChatAdded), Z_Construct_UScriptStruct_FChatEntry, METADATA_PARAMS(nullptr, 0) }; // 2742298316
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatAdded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatAdded_Statics::NewProp_ChatAdded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusTranscriptionHud, nullptr, "HandleChatAdded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatAdded_Statics::CavrnusTranscriptionHud_eventHandleChatAdded_Parms), Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatRemoved_Statics
	{
		struct CavrnusTranscriptionHud_eventHandleChatRemoved_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatRemoved_Statics::NewProp_RemovalId = { "RemovalId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusTranscriptionHud_eventHandleChatRemoved_Parms, RemovalId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatRemoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatRemoved_Statics::NewProp_RemovalId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusTranscriptionHud, nullptr, "HandleChatRemoved", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatRemoved_Statics::CavrnusTranscriptionHud_eventHandleChatRemoved_Parms), Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatUpdated_Statics
	{
		struct CavrnusTranscriptionHud_eventHandleChatUpdated_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatUpdated_Statics::NewProp_ChatUpdated = { "ChatUpdated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusTranscriptionHud_eventHandleChatUpdated_Parms, ChatUpdated), Z_Construct_UScriptStruct_FChatEntry, METADATA_PARAMS(nullptr, 0) }; // 2742298316
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatUpdated_Statics::NewProp_ChatUpdated,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHud.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusTranscriptionHud, nullptr, "HandleChatUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatUpdated_Statics::CavrnusTranscriptionHud_eventHandleChatUpdated_Parms), Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusTranscriptionHud);
	UClass* Z_Construct_UClass_UCavrnusTranscriptionHud_NoRegister()
	{
		return UCavrnusTranscriptionHud::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusTranscriptionHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllWidgetsMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllWidgetsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllWidgetsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AllWidgetsMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VisibleChatWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibleChatWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VisibleChatWidgets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceConnection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatEventsBinding_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatEventsBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEntriesVisible_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxEntriesVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationVisible_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranscriptionHudEntryWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TranscriptionHudEntryWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatAdded, "HandleChatAdded" }, // 1798509689
		{ &Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatRemoved, "HandleChatRemoved" }, // 292491122
		{ &Z_Construct_UFunction_UCavrnusTranscriptionHud_HandleChatUpdated, "HandleChatUpdated" }, // 289891309
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHud.h" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_AllWidgetsMap_ValueProp = { "AllWidgetsMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCavrnusTranscriptionHudEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_AllWidgetsMap_Key_KeyProp = { "AllWidgetsMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_AllWidgetsMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHud.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_AllWidgetsMap = { "AllWidgetsMap", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusTranscriptionHud, AllWidgetsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_AllWidgetsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_AllWidgetsMap_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_VisibleChatWidgets_Inner = { "VisibleChatWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCavrnusTranscriptionHudEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_VisibleChatWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHud.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_VisibleChatWidgets = { "VisibleChatWidgets", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusTranscriptionHud, VisibleChatWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_VisibleChatWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_VisibleChatWidgets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_SpaceConnection_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHud.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_SpaceConnection = { "SpaceConnection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusTranscriptionHud, SpaceConnection), Z_Construct_UScriptStruct_FCavrnusSpaceConnection, METADATA_PARAMS(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_SpaceConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_SpaceConnection_MetaData)) }; // 423510165
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_ChatEventsBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_ChatEventsBinding = { "ChatEventsBinding", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusTranscriptionHud, ChatEventsBinding), Z_Construct_UClass_UCavrnusBinding_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_ChatEventsBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_ChatEventsBinding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_MaxEntriesVisible_MetaData[] = {
		{ "Category", "Cavrnus|TranscriptionWindow" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHud.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_MaxEntriesVisible = { "MaxEntriesVisible", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusTranscriptionHud, MaxEntriesVisible), METADATA_PARAMS(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_MaxEntriesVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_MaxEntriesVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_DurationVisible_MetaData[] = {
		{ "Category", "Cavrnus|TranscriptionWindow" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHud.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_DurationVisible = { "DurationVisible", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusTranscriptionHud, DurationVisible), METADATA_PARAMS(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_DurationVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_DurationVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_ScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|TranscriptionWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_ScrollBox = { "ScrollBox", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusTranscriptionHud, ScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_ScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_ScrollBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_TranscriptionHudEntryWidget_MetaData[] = {
		{ "Category", "Cavrnus|TranscriptionWindow" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHud.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_TranscriptionHudEntryWidget = { "TranscriptionHudEntryWidget", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusTranscriptionHud, TranscriptionHudEntryWidget), Z_Construct_UClass_UCavrnusTranscriptionHudEntry_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_TranscriptionHudEntryWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_TranscriptionHudEntryWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_AllWidgetsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_AllWidgetsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_AllWidgetsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_VisibleChatWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_VisibleChatWidgets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_SpaceConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_ChatEventsBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_MaxEntriesVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_DurationVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_ScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::NewProp_TranscriptionHudEntryWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusTranscriptionHud>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::ClassParams = {
		&UCavrnusTranscriptionHud::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusTranscriptionHud()
	{
		if (!Z_Registration_Info_UClass_UCavrnusTranscriptionHud.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusTranscriptionHud.OuterSingleton, Z_Construct_UClass_UCavrnusTranscriptionHud_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusTranscriptionHud.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusTranscriptionHud>()
	{
		return UCavrnusTranscriptionHud::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusTranscriptionHud);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_TranscriptionHudMenu_CavrnusTranscriptionHud_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_TranscriptionHudMenu_CavrnusTranscriptionHud_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusTranscriptionHud, UCavrnusTranscriptionHud::StaticClass, TEXT("UCavrnusTranscriptionHud"), &Z_Registration_Info_UClass_UCavrnusTranscriptionHud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusTranscriptionHud), 854708671U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_TranscriptionHudMenu_CavrnusTranscriptionHud_h_1302263747(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_TranscriptionHudMenu_CavrnusTranscriptionHud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_TranscriptionHudMenu_CavrnusTranscriptionHud_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
