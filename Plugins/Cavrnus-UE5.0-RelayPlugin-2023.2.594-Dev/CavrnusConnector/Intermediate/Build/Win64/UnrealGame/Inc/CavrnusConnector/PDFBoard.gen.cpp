// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/NoMesh/PDFBoard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDFBoard() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_APDFBoard_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_APDFBoard();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ABoardObject();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UPDFActionsWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APDFBoard::execChangeToRequestedPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeToRequestedPage();
		P_NATIVE_END;
	}
	void APDFBoard::StaticRegisterNativesAPDFBoard()
	{
		UClass* Class = APDFBoard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeToRequestedPage", &APDFBoard::execChangeToRequestedPage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APDFBoard_ChangeToRequestedPage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APDFBoard_ChangeToRequestedPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/NoMesh/PDFBoard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APDFBoard_ChangeToRequestedPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APDFBoard, nullptr, "ChangeToRequestedPage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APDFBoard_ChangeToRequestedPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APDFBoard_ChangeToRequestedPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APDFBoard_ChangeToRequestedPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APDFBoard_ChangeToRequestedPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APDFBoard);
	UClass* Z_Construct_UClass_APDFBoard_NoRegister()
	{
		return APDFBoard::StaticClass();
	}
	struct Z_Construct_UClass_APDFBoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PDFAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PDFAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestedPage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequestedPage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APDFBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABoardObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APDFBoard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APDFBoard_ChangeToRequestedPage, "ChangeToRequestedPage" }, // 2445998295
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APDFBoard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "NoMesh/PDFBoard.h" },
		{ "ModuleRelativePath", "Public/NoMesh/PDFBoard.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APDFBoard_Statics::NewProp_Pages_Inner = { "Pages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APDFBoard_Statics::NewProp_Pages_MetaData[] = {
		{ "ModuleRelativePath", "Public/NoMesh/PDFBoard.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APDFBoard_Statics::NewProp_Pages = { "Pages", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APDFBoard, Pages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APDFBoard_Statics::NewProp_Pages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APDFBoard_Statics::NewProp_Pages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APDFBoard_Statics::NewProp_PDFAction_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NoMesh/PDFBoard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APDFBoard_Statics::NewProp_PDFAction = { "PDFAction", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APDFBoard, PDFAction), Z_Construct_UClass_UPDFActionsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APDFBoard_Statics::NewProp_PDFAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APDFBoard_Statics::NewProp_PDFAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APDFBoard_Statics::NewProp_RequestedPage_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/NoMesh/PDFBoard.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APDFBoard_Statics::NewProp_RequestedPage = { "RequestedPage", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APDFBoard, RequestedPage), METADATA_PARAMS(Z_Construct_UClass_APDFBoard_Statics::NewProp_RequestedPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APDFBoard_Statics::NewProp_RequestedPage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APDFBoard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APDFBoard_Statics::NewProp_Pages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APDFBoard_Statics::NewProp_Pages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APDFBoard_Statics::NewProp_PDFAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APDFBoard_Statics::NewProp_RequestedPage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APDFBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APDFBoard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APDFBoard_Statics::ClassParams = {
		&APDFBoard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APDFBoard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APDFBoard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APDFBoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APDFBoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APDFBoard()
	{
		if (!Z_Registration_Info_UClass_APDFBoard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APDFBoard.OuterSingleton, Z_Construct_UClass_APDFBoard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APDFBoard.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<APDFBoard>()
	{
		return APDFBoard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APDFBoard);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_PDFBoard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_PDFBoard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APDFBoard, APDFBoard::StaticClass, TEXT("APDFBoard"), &Z_Registration_Info_UClass_APDFBoard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APDFBoard), 1893818252U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_PDFBoard_h_2089408280(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_PDFBoard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_PDFBoard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
