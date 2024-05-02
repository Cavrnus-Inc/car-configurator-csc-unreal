// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/NoMesh/ImageBoard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageBoard() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_AImageBoard_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_AImageBoard();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ABoardObject();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void AImageBoard::StaticRegisterNativesAImageBoard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AImageBoard);
	UClass* Z_Construct_UClass_AImageBoard_NoRegister()
	{
		return AImageBoard::StaticClass();
	}
	struct Z_Construct_UClass_AImageBoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AImageBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABoardObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImageBoard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "NoMesh/ImageBoard.h" },
		{ "ModuleRelativePath", "Public/NoMesh/ImageBoard.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AImageBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AImageBoard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AImageBoard_Statics::ClassParams = {
		&AImageBoard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AImageBoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AImageBoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AImageBoard()
	{
		if (!Z_Registration_Info_UClass_AImageBoard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AImageBoard.OuterSingleton, Z_Construct_UClass_AImageBoard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AImageBoard.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<AImageBoard>()
	{
		return AImageBoard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AImageBoard);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_ImageBoard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_ImageBoard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AImageBoard, AImageBoard::StaticClass, TEXT("AImageBoard"), &Z_Registration_Info_UClass_AImageBoard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AImageBoard), 3647907156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_ImageBoard_h_164807941(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_ImageBoard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_ImageBoard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
