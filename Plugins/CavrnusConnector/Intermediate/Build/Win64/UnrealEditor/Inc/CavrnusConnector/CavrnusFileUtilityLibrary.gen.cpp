// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/CavrnusFileUtilityLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusFileUtilityLibrary() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusFileUtilityLibrary_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusFileUtilityLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusFileUtilityLibrary::execOpenFolderDialog)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutFolderNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCavrnusFileUtilityLibrary::OpenFolderDialog(Z_Param_Out_OutFolderNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusFileUtilityLibrary::execOpenFileDialog)
	{
		P_GET_UBOOL(Z_Param_MultiSelect);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileTypes);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutFileNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCavrnusFileUtilityLibrary::OpenFileDialog(Z_Param_MultiSelect,Z_Param_FileTypes,Z_Param_Out_OutFileNames);
		P_NATIVE_END;
	}
	void UCavrnusFileUtilityLibrary::StaticRegisterNativesUCavrnusFileUtilityLibrary()
	{
		UClass* Class = UCavrnusFileUtilityLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenFileDialog", &UCavrnusFileUtilityLibrary::execOpenFileDialog },
			{ "OpenFolderDialog", &UCavrnusFileUtilityLibrary::execOpenFolderDialog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics
	{
		struct CavrnusFileUtilityLibrary_eventOpenFileDialog_Parms
		{
			bool MultiSelect;
			FString FileTypes;
			TArray<FString> OutFileNames;
			bool ReturnValue;
		};
		static void NewProp_MultiSelect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MultiSelect;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileTypes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutFileNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFileNames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::NewProp_MultiSelect_SetBit(void* Obj)
	{
		((CavrnusFileUtilityLibrary_eventOpenFileDialog_Parms*)Obj)->MultiSelect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::NewProp_MultiSelect = { "MultiSelect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CavrnusFileUtilityLibrary_eventOpenFileDialog_Parms), &Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::NewProp_MultiSelect_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::NewProp_FileTypes = { "FileTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusFileUtilityLibrary_eventOpenFileDialog_Parms, FileTypes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::NewProp_OutFileNames_Inner = { "OutFileNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::NewProp_OutFileNames = { "OutFileNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusFileUtilityLibrary_eventOpenFileDialog_Parms, OutFileNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CavrnusFileUtilityLibrary_eventOpenFileDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CavrnusFileUtilityLibrary_eventOpenFileDialog_Parms), &Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::NewProp_MultiSelect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::NewProp_FileTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::NewProp_OutFileNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::NewProp_OutFileNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Cavrnus|Content" },
		{ "ModuleRelativePath", "Public/CavrnusFileUtilityLibrary.h" },
		{ "ShortToolTip", "Open an OS File Picker" },
		{ "ToolTip", "Selects one or more files for upload" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusFileUtilityLibrary, nullptr, "OpenFileDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::CavrnusFileUtilityLibrary_eventOpenFileDialog_Parms), Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics
	{
		struct CavrnusFileUtilityLibrary_eventOpenFolderDialog_Parms
		{
			TArray<FString> OutFolderNames;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutFolderNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFolderNames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics::NewProp_OutFolderNames_Inner = { "OutFolderNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics::NewProp_OutFolderNames = { "OutFolderNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusFileUtilityLibrary_eventOpenFolderDialog_Parms, OutFolderNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CavrnusFileUtilityLibrary_eventOpenFolderDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CavrnusFileUtilityLibrary_eventOpenFolderDialog_Parms), &Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics::NewProp_OutFolderNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics::NewProp_OutFolderNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Cavrnus|Content" },
		{ "ModuleRelativePath", "Public/CavrnusFileUtilityLibrary.h" },
		{ "ShortToolTip", "Open an OS Folder Picker" },
		{ "ToolTip", "Selects a folder for upload" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusFileUtilityLibrary, nullptr, "OpenFolderDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics::CavrnusFileUtilityLibrary_eventOpenFolderDialog_Parms), Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusFileUtilityLibrary);
	UClass* Z_Construct_UClass_UCavrnusFileUtilityLibrary_NoRegister()
	{
		return UCavrnusFileUtilityLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusFileUtilityLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusFileUtilityLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusFileUtilityLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFileDialog, "OpenFileDialog" }, // 1088553666
		{ &Z_Construct_UFunction_UCavrnusFileUtilityLibrary_OpenFolderDialog, "OpenFolderDialog" }, // 383698969
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusFileUtilityLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CavrnusFileUtilityLibrary.h" },
		{ "ModuleRelativePath", "Public/CavrnusFileUtilityLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusFileUtilityLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusFileUtilityLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusFileUtilityLibrary_Statics::ClassParams = {
		&UCavrnusFileUtilityLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusFileUtilityLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusFileUtilityLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusFileUtilityLibrary()
	{
		if (!Z_Registration_Info_UClass_UCavrnusFileUtilityLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusFileUtilityLibrary.OuterSingleton, Z_Construct_UClass_UCavrnusFileUtilityLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusFileUtilityLibrary.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusFileUtilityLibrary>()
	{
		return UCavrnusFileUtilityLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusFileUtilityLibrary);
	struct Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFileUtilityLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFileUtilityLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusFileUtilityLibrary, UCavrnusFileUtilityLibrary::StaticClass, TEXT("UCavrnusFileUtilityLibrary"), &Z_Registration_Info_UClass_UCavrnusFileUtilityLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusFileUtilityLibrary), 3571276480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFileUtilityLibrary_h_3142556579(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFileUtilityLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusFileUtilityLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
