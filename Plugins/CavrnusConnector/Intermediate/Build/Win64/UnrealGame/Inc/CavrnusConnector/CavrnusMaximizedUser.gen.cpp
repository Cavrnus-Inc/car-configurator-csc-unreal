// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/UserMenu/CavrnusMaximizedUser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusMaximizedUser() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusMaximizedUser_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusMaximizedUser();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusUserWidget();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void UCavrnusMaximizedUser::StaticRegisterNativesUCavrnusMaximizedUser()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusMaximizedUser);
	UClass* Z_Construct_UClass_UCavrnusMaximizedUser_NoRegister()
	{
		return UCavrnusMaximizedUser::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusMaximizedUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusMaximizedUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCavrnusUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusMaximizedUser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/UserMenu/CavrnusMaximizedUser.h" },
		{ "ModuleRelativePath", "Public/UI/UserMenu/CavrnusMaximizedUser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusMaximizedUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusMaximizedUser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusMaximizedUser_Statics::ClassParams = {
		&UCavrnusMaximizedUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusMaximizedUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusMaximizedUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusMaximizedUser()
	{
		if (!Z_Registration_Info_UClass_UCavrnusMaximizedUser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusMaximizedUser.OuterSingleton, Z_Construct_UClass_UCavrnusMaximizedUser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusMaximizedUser.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusMaximizedUser>()
	{
		return UCavrnusMaximizedUser::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusMaximizedUser);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_UserMenu_CavrnusMaximizedUser_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_UserMenu_CavrnusMaximizedUser_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusMaximizedUser, UCavrnusMaximizedUser::StaticClass, TEXT("UCavrnusMaximizedUser"), &Z_Registration_Info_UClass_UCavrnusMaximizedUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusMaximizedUser), 1483357461U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_UserMenu_CavrnusMaximizedUser_h_1555880863(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_UserMenu_CavrnusMaximizedUser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_UserMenu_CavrnusMaximizedUser_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
