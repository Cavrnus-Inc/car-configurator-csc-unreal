// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/CavrnusLocalUser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusLocalUser() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLocalUser_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLocalUser();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusSpaceConnection();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusLocalUser::execSpaceConnected)
	{
		P_GET_STRUCT(FCavrnusSpaceConnection,Z_Param_spaceConn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpaceConnected(Z_Param_spaceConn);
		P_NATIVE_END;
	}
	void UCavrnusLocalUser::StaticRegisterNativesUCavrnusLocalUser()
	{
		UClass* Class = UCavrnusLocalUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpaceConnected", &UCavrnusLocalUser::execSpaceConnected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusLocalUser_SpaceConnected_Statics
	{
		struct CavrnusLocalUser_eventSpaceConnected_Parms
		{
			FCavrnusSpaceConnection spaceConn;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_spaceConn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusLocalUser_SpaceConnected_Statics::NewProp_spaceConn = { "spaceConn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusLocalUser_eventSpaceConnected_Parms, spaceConn), Z_Construct_UScriptStruct_FCavrnusSpaceConnection, METADATA_PARAMS(nullptr, 0) }; // 3908145014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusLocalUser_SpaceConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusLocalUser_SpaceConnected_Statics::NewProp_spaceConn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusLocalUser_SpaceConnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusLocalUser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusLocalUser_SpaceConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusLocalUser, nullptr, "SpaceConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusLocalUser_SpaceConnected_Statics::CavrnusLocalUser_eventSpaceConnected_Parms), Z_Construct_UFunction_UCavrnusLocalUser_SpaceConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLocalUser_SpaceConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusLocalUser_SpaceConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusLocalUser_SpaceConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusLocalUser_SpaceConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusLocalUser_SpaceConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusLocalUser);
	UClass* Z_Construct_UClass_UCavrnusLocalUser_NoRegister()
	{
		return UCavrnusLocalUser::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusLocalUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusLocalUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusLocalUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusLocalUser_SpaceConnected, "SpaceConnected" }, // 923630716
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusLocalUser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Class definition\n" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CavrnusLocalUser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CavrnusLocalUser.h" },
		{ "ToolTip", "Class definition" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusLocalUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusLocalUser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusLocalUser_Statics::ClassParams = {
		&UCavrnusLocalUser::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusLocalUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusLocalUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusLocalUser()
	{
		if (!Z_Registration_Info_UClass_UCavrnusLocalUser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusLocalUser.OuterSingleton, Z_Construct_UClass_UCavrnusLocalUser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusLocalUser.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusLocalUser>()
	{
		return UCavrnusLocalUser::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusLocalUser);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusLocalUser_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusLocalUser_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusLocalUser, UCavrnusLocalUser::StaticClass, TEXT("UCavrnusLocalUser"), &Z_Registration_Info_UClass_UCavrnusLocalUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusLocalUser), 553350729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusLocalUser_h_3944374877(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusLocalUser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusLocalUser_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
