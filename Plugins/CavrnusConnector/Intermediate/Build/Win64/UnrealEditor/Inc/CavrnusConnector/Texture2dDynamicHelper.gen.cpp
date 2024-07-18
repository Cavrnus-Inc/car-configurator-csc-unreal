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
		{ "Comment", "/**\n\x09 * @brief Gets the height of the specified dynamic 2D texture.\n\x09 *\n\x09 * This function retrieves the height of the provided UTexture2DDynamic texture reference.\n\x09 *\n\x09 * @param TextureReference The reference to the dynamic 2D texture.\n\x09 * @return The height of the texture as an integer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Texture2dDynamicHelper.h" },
		{ "ToolTip", "@brief Gets the height of the specified dynamic 2D texture.\n\nThis function retrieves the height of the provided UTexture2DDynamic texture reference.\n\n@param TextureReference The reference to the dynamic 2D texture.\n@return The height of the texture as an integer." },
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
		{ "Comment", "/**\n\x09 * @brief Gets the width of the specified dynamic 2D texture.\n\x09 *\n\x09 * This function retrieves the width of the provided UTexture2DDynamic texture reference.\n\x09 *\n\x09 * @param TextureReference The reference to the dynamic 2D texture.\n\x09 * @return The width of the texture as an integer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Texture2dDynamicHelper.h" },
		{ "ToolTip", "@brief Gets the width of the specified dynamic 2D texture.\n\nThis function retrieves the width of the provided UTexture2DDynamic texture reference.\n\n@param TextureReference The reference to the dynamic 2D texture.\n@return The width of the texture as an integer." },
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
		{ &Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureHeight, "GetTextureHeight" }, // 2474429414
		{ &Z_Construct_UFunction_UTexture2dDynamicHelper_GetTextureWidth, "GetTextureWidth" }, // 2728105962
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2dDynamicHelper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief Blueprint function library for working with dynamic 2D textures in Unreal Engine.\n *\n * The UTexture2dDynamicHelper class provides static utility functions for retrieving the width and height of dynamic 2D textures.\n */" },
		{ "IncludePath", "UI/Texture2dDynamicHelper.h" },
		{ "ModuleRelativePath", "Public/UI/Texture2dDynamicHelper.h" },
		{ "ToolTip", "@brief Blueprint function library for working with dynamic 2D textures in Unreal Engine.\n\nThe UTexture2dDynamicHelper class provides static utility functions for retrieving the width and height of dynamic 2D textures." },
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
	struct Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Texture2dDynamicHelper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Texture2dDynamicHelper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTexture2dDynamicHelper, UTexture2dDynamicHelper::StaticClass, TEXT("UTexture2dDynamicHelper"), &Z_Registration_Info_UClass_UTexture2dDynamicHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexture2dDynamicHelper), 1300249563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Texture2dDynamicHelper_h_785729067(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Texture2dDynamicHelper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_UI_Texture2dDynamicHelper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
