// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/NoMesh/BoardHeader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoardHeader() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UBoardHeader_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UBoardHeader();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UBoardContextMenu_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ABoardObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBoardHeader::execOnContextMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnContextMenu_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoardHeader::execOnRemove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRemove_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UBoardHeader_OnContextMenu = FName(TEXT("OnContextMenu"));
	void UBoardHeader::OnContextMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBoardHeader_OnContextMenu),NULL);
	}
	static FName NAME_UBoardHeader_OnRemove = FName(TEXT("OnRemove"));
	void UBoardHeader::OnRemove()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBoardHeader_OnRemove),NULL);
	}
	void UBoardHeader::StaticRegisterNativesUBoardHeader()
	{
		UClass* Class = UBoardHeader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnContextMenu", &UBoardHeader::execOnContextMenu },
			{ "OnRemove", &UBoardHeader::execOnRemove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBoardHeader_OnContextMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoardHeader_OnContextMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|Boards" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardHeader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoardHeader_OnContextMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoardHeader, nullptr, "OnContextMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoardHeader_OnContextMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoardHeader_OnContextMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoardHeader_OnContextMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoardHeader_OnContextMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoardHeader_OnRemove_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoardHeader_OnRemove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|Boards" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardHeader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoardHeader_OnRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoardHeader, nullptr, "OnRemove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoardHeader_OnRemove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoardHeader_OnRemove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoardHeader_OnRemove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoardHeader_OnRemove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoardHeader);
	UClass* Z_Construct_UClass_UBoardHeader_NoRegister()
	{
		return UBoardHeader::StaticClass();
	}
	struct Z_Construct_UClass_UBoardHeader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CloseButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextMenuButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextMenuButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextMenuTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ContextMenuTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoardTitle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoardTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoardSize_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoardSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Board_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Board;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoardHeader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBoardHeader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoardHeader_OnContextMenu, "OnContextMenu" }, // 933473657
		{ &Z_Construct_UFunction_UBoardHeader_OnRemove, "OnRemove" }, // 3432491216
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardHeader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Used to provide a header text and utility functions. Such as context menu and close buttons.\n */" },
		{ "IncludePath", "UI/NoMesh/BoardHeader.h" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardHeader.h" },
		{ "ToolTip", "Used to provide a header text and utility functions. Such as context menu and close buttons." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardHeader_Statics::NewProp_CloseButton_MetaData[] = {
		{ "bindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardHeader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoardHeader_Statics::NewProp_CloseButton = { "CloseButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoardHeader, CloseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoardHeader_Statics::NewProp_CloseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardHeader_Statics::NewProp_CloseButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardHeader_Statics::NewProp_ContextMenuButton_MetaData[] = {
		{ "bindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardHeader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoardHeader_Statics::NewProp_ContextMenuButton = { "ContextMenuButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoardHeader, ContextMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoardHeader_Statics::NewProp_ContextMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardHeader_Statics::NewProp_ContextMenuButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardHeader_Statics::NewProp_ContextMenu_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardHeader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoardHeader_Statics::NewProp_ContextMenu = { "ContextMenu", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoardHeader, ContextMenu), Z_Construct_UClass_UBoardContextMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoardHeader_Statics::NewProp_ContextMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardHeader_Statics::NewProp_ContextMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardHeader_Statics::NewProp_ContextMenuTemplate_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardHeader.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBoardHeader_Statics::NewProp_ContextMenuTemplate = { "ContextMenuTemplate", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoardHeader, ContextMenuTemplate), Z_Construct_UClass_UBoardContextMenu_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBoardHeader_Statics::NewProp_ContextMenuTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardHeader_Statics::NewProp_ContextMenuTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardHeader_Statics::NewProp_BoardTitle_MetaData[] = {
		{ "bindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardHeader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoardHeader_Statics::NewProp_BoardTitle = { "BoardTitle", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoardHeader, BoardTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoardHeader_Statics::NewProp_BoardTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardHeader_Statics::NewProp_BoardTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardHeader_Statics::NewProp_BoardSize_MetaData[] = {
		{ "bindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardHeader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoardHeader_Statics::NewProp_BoardSize = { "BoardSize", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoardHeader, BoardSize), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoardHeader_Statics::NewProp_BoardSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardHeader_Statics::NewProp_BoardSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardHeader_Statics::NewProp_Board_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardHeader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoardHeader_Statics::NewProp_Board = { "Board", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoardHeader, Board), Z_Construct_UClass_ABoardObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoardHeader_Statics::NewProp_Board_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardHeader_Statics::NewProp_Board_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoardHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoardHeader_Statics::NewProp_CloseButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoardHeader_Statics::NewProp_ContextMenuButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoardHeader_Statics::NewProp_ContextMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoardHeader_Statics::NewProp_ContextMenuTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoardHeader_Statics::NewProp_BoardTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoardHeader_Statics::NewProp_BoardSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoardHeader_Statics::NewProp_Board,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoardHeader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoardHeader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoardHeader_Statics::ClassParams = {
		&UBoardHeader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBoardHeader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBoardHeader_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBoardHeader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardHeader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoardHeader()
	{
		if (!Z_Registration_Info_UClass_UBoardHeader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoardHeader.OuterSingleton, Z_Construct_UClass_UBoardHeader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoardHeader.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UBoardHeader>()
	{
		return UBoardHeader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoardHeader);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_BoardHeader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_BoardHeader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoardHeader, UBoardHeader::StaticClass, TEXT("UBoardHeader"), &Z_Registration_Info_UClass_UBoardHeader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoardHeader), 3563026261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_BoardHeader_h_2688091468(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_BoardHeader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_BoardHeader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
