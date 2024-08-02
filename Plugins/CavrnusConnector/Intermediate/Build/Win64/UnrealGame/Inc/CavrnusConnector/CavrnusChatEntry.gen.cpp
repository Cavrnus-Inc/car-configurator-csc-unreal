// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/MessageMenus/ChatMenu/CavrnusChatEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusChatEntry() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusChatEntry_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusChatEntry();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FChatEntry();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
// End Cross Module References
	static FName NAME_UCavrnusChatEntry_SetupComplete = FName(TEXT("SetupComplete"));
	void UCavrnusChatEntry::SetupComplete(FChatEntry InChatEntry)
	{
		CavrnusChatEntry_eventSetupComplete_Parms Parms;
		Parms.InChatEntry=InChatEntry;
		ProcessEvent(FindFunctionChecked(NAME_UCavrnusChatEntry_SetupComplete),&Parms);
	}
	void UCavrnusChatEntry::StaticRegisterNativesUCavrnusChatEntry()
	{
	}
	struct Z_Construct_UFunction_UCavrnusChatEntry_SetupComplete_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_InChatEntry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusChatEntry_SetupComplete_Statics::NewProp_InChatEntry = { "InChatEntry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusChatEntry_eventSetupComplete_Parms, InChatEntry), Z_Construct_UScriptStruct_FChatEntry, METADATA_PARAMS(nullptr, 0) }; // 2742298316
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusChatEntry_SetupComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusChatEntry_SetupComplete_Statics::NewProp_InChatEntry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusChatEntry_SetupComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|ChatEntry" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/ChatMenu/CavrnusChatEntry.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusChatEntry_SetupComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusChatEntry, nullptr, "SetupComplete", nullptr, nullptr, sizeof(CavrnusChatEntry_eventSetupComplete_Parms), Z_Construct_UFunction_UCavrnusChatEntry_SetupComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusChatEntry_SetupComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusChatEntry_SetupComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusChatEntry_SetupComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusChatEntry_SetupComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusChatEntry_SetupComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusChatEntry);
	UClass* Z_Construct_UClass_UCavrnusChatEntry_NoRegister()
	{
		return UCavrnusChatEntry::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusChatEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfilePicImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProfilePicImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalUserColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChatBubbleBackground_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatBubbleBackground;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusChatEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCavrnusBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusChatEntry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusChatEntry_SetupComplete, "SetupComplete" }, // 2807217064
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusChatEntry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MessageMenus/ChatMenu/CavrnusChatEntry.h" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/ChatMenu/CavrnusChatEntry.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_CreatorName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|ChatEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/ChatMenu/CavrnusChatEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_CreatorName = { "CreatorName", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusChatEntry, CreatorName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_CreatorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_CreatorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_CreationTime_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|ChatEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/ChatMenu/CavrnusChatEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_CreationTime = { "CreationTime", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusChatEntry, CreationTime), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_CreationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_CreationTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_Message_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|ChatEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/ChatMenu/CavrnusChatEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusChatEntry, Message), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_ProfilePicImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|ChatEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/ChatMenu/CavrnusChatEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_ProfilePicImage = { "ProfilePicImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusChatEntry, ProfilePicImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_ProfilePicImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_ProfilePicImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_LocalUserColor_MetaData[] = {
		{ "Category", "Cavrnus|ChatEntry" },
		{ "Comment", "// Chat Visuals\n" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/ChatMenu/CavrnusChatEntry.h" },
		{ "ToolTip", "Chat Visuals" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_LocalUserColor = { "LocalUserColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusChatEntry, LocalUserColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_LocalUserColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_LocalUserColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_ChatBubbleBackground_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Cavrnus|ChatEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MessageMenus/ChatMenu/CavrnusChatEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_ChatBubbleBackground = { "ChatBubbleBackground", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusChatEntry, ChatBubbleBackground), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_ChatBubbleBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_ChatBubbleBackground_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusChatEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_CreatorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_CreationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_ProfilePicImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_LocalUserColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusChatEntry_Statics::NewProp_ChatBubbleBackground,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusChatEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusChatEntry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusChatEntry_Statics::ClassParams = {
		&UCavrnusChatEntry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCavrnusChatEntry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusChatEntry_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusChatEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusChatEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusChatEntry()
	{
		if (!Z_Registration_Info_UClass_UCavrnusChatEntry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusChatEntry.OuterSingleton, Z_Construct_UClass_UCavrnusChatEntry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusChatEntry.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusChatEntry>()
	{
		return UCavrnusChatEntry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusChatEntry);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_ChatMenu_CavrnusChatEntry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_ChatMenu_CavrnusChatEntry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusChatEntry, UCavrnusChatEntry::StaticClass, TEXT("UCavrnusChatEntry"), &Z_Registration_Info_UClass_UCavrnusChatEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusChatEntry), 4233401719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_ChatMenu_CavrnusChatEntry_h_3609038986(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_ChatMenu_CavrnusChatEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_MessageMenus_ChatMenu_CavrnusChatEntry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
