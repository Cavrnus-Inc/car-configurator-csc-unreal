// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/UI/Texture2dDynamicHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2dDynamicHelper() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UTexture2dDynamicHelper_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UTexture2dDynamicHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTexture2dDynamicHelper::execGetTextureHeight)
	{
		P_GET_OBJECT(UTexture2DDynamic,Z_Param_TextureReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UTexture2dDynamicHelper::GetTextureHeight(Z_Param_TextureReference);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTexture2dDynamicHelper::execGetTextureWidth)
	{
		P_GET_OBJECT(UTexture2DDynamic,Z_Param_TextureReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UTexture2dDynamicHelper::GetTextureWidth(Z_Param_TextureReference);
		P_NATIVE_END;
	}
	void UTexture2dDynamicHelper::StaticRegisterNativesUTexture2dDynamicHelper()
	{
		UClass* Class = UTexture2dDynamicHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTextureHeight", &UTexture2dDynamicHelper::execGetTextureHeight },
			{ "GetTextureWidth", &UTexture2dDynamicHelper::execGetTextureWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureHeight_Statics
	{
		struct Texture2dDynamicHelper_eventGetTextureHeight_Parms
		{
			UTexture2DDynamic* TextureReference;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureReference;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureHeight_Statics::NewProp_TextureReference = { "TextureReference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Texture2dDynamicHelper_eventGetTextureHeight_Parms, TextureReference), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Texture2dDynamicHelper_eventGetTextureHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureHeight_Statics::NewProp_TextureReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture2DDynamic" },
		{ "ModuleRelativePath", "Public/UI/Texture2dDynamicHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexture2dDynamicHelper, nullptr, "GetTextureHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureHeight_Statics::Texture2dDynamicHelper_eventGetTextureHeight_Parms), Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureWidth_Statics
	{
		struct Texture2dDynamicHelper_eventGetTextureWidth_Parms
		{
			UTexture2DDynamic* TextureReference;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureReference;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureWidth_Statics::NewProp_TextureReference = { "TextureReference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Texture2dDynamicHelper_eventGetTextureWidth_Parms, TextureReference), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Texture2dDynamicHelper_eventGetTextureWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureWidth_Statics::NewProp_TextureReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture2DDynamic" },
		{ "ModuleRelativePath", "Public/UI/Texture2dDynamicHelper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexture2dDynamicHelper, nullptr, "GetTextureWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureWidth_Statics::Texture2dDynamicHelper_eventGetTextureWidth_Parms), Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexture2dDynamicHelper);
	UClass* Z_Construct_UClass_UTexture2dDynamicHelper_NoRegister()
	{
		return UTexture2dDynamicHelper::StaticClass();
	}
	struct Z_Construct_UClass_UTexture2dDynamicHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexture2dDynamicHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTexture2dDynamicHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureHeight, "GetTextureHeight" }, // 2232136428
		{ &Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureWidth, "GetTextureWidth" }, // 4179290632
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2dDynamicHelper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Texture2dDynamicHelper.h" },
		{ "ModuleRelativePath", "Public/UI/Texture2dDynamicHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexture2dDynamicHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture2dDynamicHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexture2dDynamicHelper_Statics::ClassParams = {
		&UTexture2dDynamicHelper::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTexture2dDynamicHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2dDynamicHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexture2dDynamicHelper()
	{
		if (!Z_Registration_Info_UClass_UTexture2dDynamicHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexture2dDynamicHelper.OuterSingleton, Z_Construct_UClass_UTexture2dDynamicHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTexture2dDynamicHelper.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UTexture2dDynamicHelper>()
	{
		return UTexture2dDynamicHelper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2dDynamicHelper);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Texture2dDynamicHelper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Texture2dDynamicHelper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTexture2dDynamicHelper, UTexture2dDynamicHelper::StaticClass, TEXT("UTexture2dDynamicHelper"), &Z_Registration_Info_UClass_UTexture2dDynamicHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexture2dDynamicHelper), 1837000409U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Texture2dDynamicHelper_h_2811138717(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Texture2dDynamicHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Texture2dDynamicHelper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
