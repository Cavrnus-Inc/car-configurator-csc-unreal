// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/CavrnusPropertiesContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusPropertiesContainer() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UFunction* Z_Construct_UDelegateFunction_CavrnusConnector_ContainerNameUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusPropertiesContainer_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusPropertiesContainer();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CavrnusConnector_ContainerNameUpdated__DelegateSignature_Statics
	{
		struct _Script_CavrnusConnector_eventContainerNameUpdated_Parms
		{
			FString NewContainerName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewContainerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CavrnusConnector_ContainerNameUpdated__DelegateSignature_Statics::NewProp_NewContainerName = { "NewContainerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CavrnusConnector_eventContainerNameUpdated_Parms, NewContainerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CavrnusConnector_ContainerNameUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CavrnusConnector_ContainerNameUpdated__DelegateSignature_Statics::NewProp_NewContainerName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CavrnusConnector_ContainerNameUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusPropertiesContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CavrnusConnector_ContainerNameUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CavrnusConnector, nullptr, "ContainerNameUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CavrnusConnector_ContainerNameUpdated__DelegateSignature_Statics::_Script_CavrnusConnector_eventContainerNameUpdated_Parms), Z_Construct_UDelegateFunction_CavrnusConnector_ContainerNameUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CavrnusConnector_ContainerNameUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CavrnusConnector_ContainerNameUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CavrnusConnector_ContainerNameUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CavrnusConnector_ContainerNameUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CavrnusConnector_ContainerNameUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCavrnusPropertiesContainer::execSetContainerName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ContainerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContainerName(Z_Param_ContainerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusPropertiesContainer::execGetContainerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetContainerName();
		P_NATIVE_END;
	}
	void UCavrnusPropertiesContainer::StaticRegisterNativesUCavrnusPropertiesContainer()
	{
		UClass* Class = UCavrnusPropertiesContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetContainerName", &UCavrnusPropertiesContainer::execGetContainerName },
			{ "SetContainerName", &UCavrnusPropertiesContainer::execSetContainerName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusPropertiesContainer_GetContainerName_Statics
	{
		struct CavrnusPropertiesContainer_eventGetContainerName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCavrnusPropertiesContainer_GetContainerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusPropertiesContainer_eventGetContainerName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusPropertiesContainer_GetContainerName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusPropertiesContainer_GetContainerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusPropertiesContainer_GetContainerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusPropertiesContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusPropertiesContainer_GetContainerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusPropertiesContainer, nullptr, "GetContainerName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusPropertiesContainer_GetContainerName_Statics::CavrnusPropertiesContainer_eventGetContainerName_Parms), Z_Construct_UFunction_UCavrnusPropertiesContainer_GetContainerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusPropertiesContainer_GetContainerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusPropertiesContainer_GetContainerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusPropertiesContainer_GetContainerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusPropertiesContainer_GetContainerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusPropertiesContainer_GetContainerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusPropertiesContainer_SetContainerName_Statics
	{
		struct CavrnusPropertiesContainer_eventSetContainerName_Parms
		{
			FString ContainerName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContainerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusPropertiesContainer_SetContainerName_Statics::NewProp_ContainerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCavrnusPropertiesContainer_SetContainerName_Statics::NewProp_ContainerName = { "ContainerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusPropertiesContainer_eventSetContainerName_Parms, ContainerName), METADATA_PARAMS(Z_Construct_UFunction_UCavrnusPropertiesContainer_SetContainerName_Statics::NewProp_ContainerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusPropertiesContainer_SetContainerName_Statics::NewProp_ContainerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusPropertiesContainer_SetContainerName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusPropertiesContainer_SetContainerName_Statics::NewProp_ContainerName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusPropertiesContainer_SetContainerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusPropertiesContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusPropertiesContainer_SetContainerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusPropertiesContainer, nullptr, "SetContainerName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusPropertiesContainer_SetContainerName_Statics::CavrnusPropertiesContainer_eventSetContainerName_Parms), Z_Construct_UFunction_UCavrnusPropertiesContainer_SetContainerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusPropertiesContainer_SetContainerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusPropertiesContainer_SetContainerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusPropertiesContainer_SetContainerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusPropertiesContainer_SetContainerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusPropertiesContainer_SetContainerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusPropertiesContainer);
	UClass* Z_Construct_UClass_UCavrnusPropertiesContainer_NoRegister()
	{
		return UCavrnusPropertiesContainer::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusPropertiesContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContainerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnContainerNameUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnContainerNameUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusPropertiesContainer_GetContainerName, "GetContainerName" }, // 2728387308
		{ &Z_Construct_UFunction_UCavrnusPropertiesContainer_SetContainerName, "SetContainerName" }, // 2797070178
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Class definition\n" },
		{ "HideCategories", "Transform Physics LOD Collision Rendering ComponentTick Trigger PhysicsVolume" },
		{ "IncludePath", "CavrnusPropertiesContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CavrnusPropertiesContainer.h" },
		{ "ToolTip", "Class definition" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::NewProp_ContainerName_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusPropertiesContainer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::NewProp_ContainerName = { "ContainerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusPropertiesContainer, ContainerName), METADATA_PARAMS(Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::NewProp_ContainerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::NewProp_ContainerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::NewProp_OnContainerNameUpdated_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusPropertiesContainer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::NewProp_OnContainerNameUpdated = { "OnContainerNameUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusPropertiesContainer, OnContainerNameUpdated), Z_Construct_UDelegateFunction_CavrnusConnector_ContainerNameUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::NewProp_OnContainerNameUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::NewProp_OnContainerNameUpdated_MetaData)) }; // 4096028423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::NewProp_ContainerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::NewProp_OnContainerNameUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusPropertiesContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::ClassParams = {
		&UCavrnusPropertiesContainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusPropertiesContainer()
	{
		if (!Z_Registration_Info_UClass_UCavrnusPropertiesContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusPropertiesContainer.OuterSingleton, Z_Construct_UClass_UCavrnusPropertiesContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusPropertiesContainer.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusPropertiesContainer>()
	{
		return UCavrnusPropertiesContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusPropertiesContainer);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusPropertiesContainer, UCavrnusPropertiesContainer::StaticClass, TEXT("UCavrnusPropertiesContainer"), &Z_Registration_Info_UClass_UCavrnusPropertiesContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusPropertiesContainer), 2705991619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_3920570428(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusPropertiesContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
