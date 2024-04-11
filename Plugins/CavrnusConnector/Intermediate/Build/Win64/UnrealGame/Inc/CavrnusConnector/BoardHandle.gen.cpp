// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/NoMesh/BoardHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoardHandle() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UBoardHandle_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UBoardHandle();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ABoardObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBoardHandle::execDragEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DragEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoardHandle::execDragBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DragBegin_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UBoardHandle_DragBegin = FName(TEXT("DragBegin"));
	void UBoardHandle::DragBegin()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBoardHandle_DragBegin),NULL);
	}
	static FName NAME_UBoardHandle_DragEnd = FName(TEXT("DragEnd"));
	void UBoardHandle::DragEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBoardHandle_DragEnd),NULL);
	}
	void UBoardHandle::StaticRegisterNativesUBoardHandle()
	{
		UClass* Class = UBoardHandle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DragBegin", &UBoardHandle::execDragBegin },
			{ "DragEnd", &UBoardHandle::execDragEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBoardHandle_DragBegin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoardHandle_DragBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|Boards" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardHandle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoardHandle_DragBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoardHandle, nullptr, "DragBegin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoardHandle_DragBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoardHandle_DragBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoardHandle_DragBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoardHandle_DragBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoardHandle_DragEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoardHandle_DragEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|Boards" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardHandle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoardHandle_DragEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoardHandle, nullptr, "DragEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoardHandle_DragEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoardHandle_DragEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoardHandle_DragEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoardHandle_DragEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoardHandle);
	UClass* Z_Construct_UClass_UBoardHandle_NoRegister()
	{
		return UBoardHandle::StaticClass();
	}
	struct Z_Construct_UClass_UBoardHandle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragHandle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DragHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleCanvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandleCanvas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Board_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Board;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoardHandle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBoardHandle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoardHandle_DragBegin, "DragBegin" }, // 2324347204
		{ &Z_Construct_UFunction_UBoardHandle_DragEnd, "DragEnd" }, // 61874438
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardHandle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Used to drag around the ANomeshActors.\n */" },
		{ "IncludePath", "UI/NoMesh/BoardHandle.h" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardHandle.h" },
		{ "ToolTip", "Used to drag around the ANomeshActors." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardHandle_Statics::NewProp_DragHandle_MetaData[] = {
		{ "bindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardHandle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoardHandle_Statics::NewProp_DragHandle = { "DragHandle", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoardHandle, DragHandle), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoardHandle_Statics::NewProp_DragHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardHandle_Statics::NewProp_DragHandle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardHandle_Statics::NewProp_HandleCanvas_MetaData[] = {
		{ "bindWidget", "" },
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardHandle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoardHandle_Statics::NewProp_HandleCanvas = { "HandleCanvas", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoardHandle, HandleCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoardHandle_Statics::NewProp_HandleCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardHandle_Statics::NewProp_HandleCanvas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoardHandle_Statics::NewProp_Board_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/UI/NoMesh/BoardHandle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoardHandle_Statics::NewProp_Board = { "Board", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoardHandle, Board), Z_Construct_UClass_ABoardObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoardHandle_Statics::NewProp_Board_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardHandle_Statics::NewProp_Board_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoardHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoardHandle_Statics::NewProp_DragHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoardHandle_Statics::NewProp_HandleCanvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoardHandle_Statics::NewProp_Board,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoardHandle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoardHandle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoardHandle_Statics::ClassParams = {
		&UBoardHandle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBoardHandle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBoardHandle_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBoardHandle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoardHandle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoardHandle()
	{
		if (!Z_Registration_Info_UClass_UBoardHandle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoardHandle.OuterSingleton, Z_Construct_UClass_UBoardHandle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoardHandle.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UBoardHandle>()
	{
		return UBoardHandle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoardHandle);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_BoardHandle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_BoardHandle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoardHandle, UBoardHandle::StaticClass, TEXT("UBoardHandle"), &Z_Registration_Info_UClass_UBoardHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoardHandle), 1529212260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_BoardHandle_h_996791340(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_BoardHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_NoMesh_BoardHandle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
