// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHudEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusTranscriptionHudEntry() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusTranscriptionHudEntry_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusTranscriptionHudEntry();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FChatEntry();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusTranscriptionHudEntry::execDurationExpired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DurationExpired();
		P_NATIVE_END;
	}
	static FName NAME_UCavrnusTranscriptionHudEntry_SetupComplete = FName(TEXT("SetupComplete"));
	void UCavrnusTranscriptionHudEntry::SetupComplete(FChatEntry InChatEntry)
	{
		CavrnusTranscriptionHudEntry_eventSetupComplete_Parms Parms;
		Parms.InChatEntry=InChatEntry;
		ProcessEvent(FindFunctionChecked(NAME_UCavrnusTranscriptionHudEntry_SetupComplete),&Parms);
	}
	static FName NAME_UCavrnusTranscriptionHudEntry_TranscriptionComplete = FName(TEXT("TranscriptionComplete"));
	void UCavrnusTranscriptionHudEntry::TranscriptionComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCavrnusTranscriptionHudEntry_TranscriptionComplete),NULL);
	}
	static FName NAME_UCavrnusTranscriptionHudEntry_TranscriptionInProgress = FName(TEXT("TranscriptionInProgress"));
	void UCavrnusTranscriptionHudEntry::TranscriptionInProgress()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCavrnusTranscriptionHudEntry_TranscriptionInProgress),NULL);
	}
	void UCavrnusTranscriptionHudEntry::StaticRegisterNativesUCavrnusTranscriptionHudEntry()
	{
		UClass* Class = UCavrnusTranscriptionHudEntry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DurationExpired", &UCavrnusTranscriptionHudEntry::execDurationExpired },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_DurationExpired_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_DurationExpired_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|TranscriptionEntry" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHudEntry.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_DurationExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusTranscriptionHudEntry, nullptr, "DurationExpired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_DurationExpired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_DurationExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_DurationExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_DurationExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_SetupComplete_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_InChatEntry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_SetupComplete_Statics::NewProp_InChatEntry = { "InChatEntry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusTranscriptionHudEntry_eventSetupComplete_Parms, InChatEntry), Z_Construct_UScriptStruct_FChatEntry, METADATA_PARAMS(nullptr, 0) }; // 2742298316
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_SetupComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_SetupComplete_Statics::NewProp_InChatEntry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_SetupComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|TranscriptionEntry" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHudEntry.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_SetupComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusTranscriptionHudEntry, nullptr, "SetupComplete", nullptr, nullptr, sizeof(CavrnusTranscriptionHudEntry_eventSetupComplete_Parms), Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_SetupComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_SetupComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_SetupComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_SetupComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_SetupComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_SetupComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_TranscriptionComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_TranscriptionComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|TranscriptionEntry" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHudEntry.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_TranscriptionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusTranscriptionHudEntry, nullptr, "TranscriptionComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_TranscriptionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_TranscriptionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_TranscriptionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_TranscriptionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_TranscriptionInProgress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_TranscriptionInProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|TranscriptionEntry" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHudEntry.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_TranscriptionInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusTranscriptionHudEntry, nullptr, "TranscriptionInProgress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_TranscriptionInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_TranscriptionInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_TranscriptionInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_TranscriptionInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusTranscriptionHudEntry);
	UClass* Z_Construct_UClass_UCavrnusTranscriptionHudEntry_NoRegister()
	{
		return UCavrnusTranscriptionHudEntry::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatorName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreationTime_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_DurationExpired, "DurationExpired" }, // 2652238691
		{ &Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_SetupComplete, "SetupComplete" }, // 416503997
		{ &Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_TranscriptionComplete, "TranscriptionComplete" }, // 1212971972
		{ &Z_Construct_UFunction_UCavrnusTranscriptionHudEntry_TranscriptionInProgress, "TranscriptionInProgress" }, // 2444178350
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHudEntry.h" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHudEntry.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_DisplayDuration_MetaData[] = {
		{ "Category", "Cavrnus|TranscriptionEntry" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHudEntry.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_DisplayDuration = { "DisplayDuration", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusTranscriptionHudEntry, DisplayDuration), METADATA_PARAMS(Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_DisplayDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_DisplayDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_CreatorName_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Cavrnus|TranscriptionEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHudEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_CreatorName = { "CreatorName", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusTranscriptionHudEntry, CreatorName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_CreatorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_CreatorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_CreationTime_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Cavrnus|TranscriptionEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHudEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_CreationTime = { "CreationTime", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusTranscriptionHudEntry, CreationTime), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_CreationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_CreationTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_Message_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Cavrnus|TranscriptionEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHudEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusTranscriptionHudEntry, Message), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_LocalUserColor_MetaData[] = {
		{ "Category", "Cavrnus|TranscriptionEntry" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/TranscriptionHudMenu/CavrnusTranscriptionHudEntry.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_LocalUserColor = { "LocalUserColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusTranscriptionHudEntry, LocalUserColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_LocalUserColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_LocalUserColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_DisplayDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_CreatorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_CreationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::NewProp_LocalUserColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusTranscriptionHudEntry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::ClassParams = {
		&UCavrnusTranscriptionHudEntry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusTranscriptionHudEntry()
	{
		if (!Z_Registration_Info_UClass_UCavrnusTranscriptionHudEntry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusTranscriptionHudEntry.OuterSingleton, Z_Construct_UClass_UCavrnusTranscriptionHudEntry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusTranscriptionHudEntry.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusTranscriptionHudEntry>()
	{
		return UCavrnusTranscriptionHudEntry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusTranscriptionHudEntry);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_TranscriptionHudMenu_CavrnusTranscriptionHudEntry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_TranscriptionHudMenu_CavrnusTranscriptionHudEntry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusTranscriptionHudEntry, UCavrnusTranscriptionHudEntry::StaticClass, TEXT("UCavrnusTranscriptionHudEntry"), &Z_Registration_Info_UClass_UCavrnusTranscriptionHudEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusTranscriptionHudEntry), 1004139704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_TranscriptionHudMenu_CavrnusTranscriptionHudEntry_h_1585911472(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_TranscriptionHudMenu_CavrnusTranscriptionHudEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_TranscriptionHudMenu_CavrnusTranscriptionHudEntry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
