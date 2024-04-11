// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/CavrnusValueSyncBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusValueSyncBase() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncBase_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncBase();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusSpaceConnection();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusBinding();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLivePropertyUpdate_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UPropertySyncInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusValueSyncBase::execPollForPropertyChanges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PollForPropertyChanges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusValueSyncBase::execSpaceConnected)
	{
		P_GET_STRUCT(FCavrnusSpaceConnection,Z_Param_spaceConn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpaceConnected(Z_Param_spaceConn);
		P_NATIVE_END;
	}
	void UCavrnusValueSyncBase::StaticRegisterNativesUCavrnusValueSyncBase()
	{
		UClass* Class = UCavrnusValueSyncBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PollForPropertyChanges", &UCavrnusValueSyncBase::execPollForPropertyChanges },
			{ "SpaceConnected", &UCavrnusValueSyncBase::execSpaceConnected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusValueSyncBase_PollForPropertyChanges_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusValueSyncBase_PollForPropertyChanges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusValueSyncBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusValueSyncBase_PollForPropertyChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusValueSyncBase, nullptr, "PollForPropertyChanges", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusValueSyncBase_PollForPropertyChanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncBase_PollForPropertyChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusValueSyncBase_PollForPropertyChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusValueSyncBase_PollForPropertyChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusValueSyncBase_SpaceConnected_Statics
	{
		struct CavrnusValueSyncBase_eventSpaceConnected_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusValueSyncBase_SpaceConnected_Statics::NewProp_spaceConn = { "spaceConn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusValueSyncBase_eventSpaceConnected_Parms, spaceConn), Z_Construct_UScriptStruct_FCavrnusSpaceConnection, METADATA_PARAMS(nullptr, 0) }; // 3908145014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusValueSyncBase_SpaceConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusValueSyncBase_SpaceConnected_Statics::NewProp_spaceConn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusValueSyncBase_SpaceConnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusValueSyncBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusValueSyncBase_SpaceConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusValueSyncBase, nullptr, "SpaceConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusValueSyncBase_SpaceConnected_Statics::CavrnusValueSyncBase_eventSpaceConnected_Parms), Z_Construct_UFunction_UCavrnusValueSyncBase_SpaceConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncBase_SpaceConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusValueSyncBase_SpaceConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusValueSyncBase_SpaceConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusValueSyncBase_SpaceConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusValueSyncBase_SpaceConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusValueSyncBase);
	UClass* Z_Construct_UClass_UCavrnusValueSyncBase_NoRegister()
	{
		return UCavrnusValueSyncBase::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusValueSyncBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceConn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceConn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PollTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PollTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContainerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendChanges_MetaData[];
#endif
		static void NewProp_SendChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SendChanges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_liveUpdater_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_liveUpdater;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusValueSyncBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusValueSyncBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusValueSyncBase_PollForPropertyChanges, "PollForPropertyChanges" }, // 337218465
		{ &Z_Construct_UFunction_UCavrnusValueSyncBase_SpaceConnected, "SpaceConnected" }, // 3952908884
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Class definition\n" },
		{ "HideCategories", "Transform Physics Collision Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "CavrnusValueSyncBase.h" },
		{ "ModuleRelativePath", "Public/CavrnusValueSyncBase.h" },
		{ "ToolTip", "Class definition" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SpaceConn_MetaData[] = {
		{ "ModuleRelativePath", "Public/CavrnusValueSyncBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SpaceConn = { "SpaceConn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusValueSyncBase, SpaceConn), Z_Construct_UScriptStruct_FCavrnusSpaceConnection, METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SpaceConn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SpaceConn_MetaData)) }; // 3908145014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/CavrnusValueSyncBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyBinding = { "PropertyBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusValueSyncBase, PropertyBinding), Z_Construct_UScriptStruct_FCavrnusBinding, METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyBinding_MetaData)) }; // 2151974793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PollTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/CavrnusValueSyncBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PollTimer = { "PollTimer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusValueSyncBase, PollTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PollTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PollTimer_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_ContainerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CavrnusValueSyncBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_ContainerName = { "ContainerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusValueSyncBase, ContainerName), METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_ContainerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_ContainerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/CavrnusValueSyncBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusValueSyncBase, PropertyName), METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SendChanges_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/CavrnusValueSyncBase.h" },
	};
#endif
	void Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SendChanges_SetBit(void* Obj)
	{
		((UCavrnusValueSyncBase*)Obj)->SendChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SendChanges = { "SendChanges", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCavrnusValueSyncBase), &Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SendChanges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SendChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SendChanges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_liveUpdater_MetaData[] = {
		{ "ModuleRelativePath", "Public/CavrnusValueSyncBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_liveUpdater = { "liveUpdater", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusValueSyncBase, liveUpdater), Z_Construct_UClass_UCavrnusLivePropertyUpdate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_liveUpdater_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_liveUpdater_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusValueSyncBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SpaceConn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PollTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_ContainerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_SendChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusValueSyncBase_Statics::NewProp_liveUpdater,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPropertySyncInterface_NoRegister, (int32)VTABLE_OFFSET(UCavrnusValueSyncBase, IPropertySyncInterface), false },  // 1509868635
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusValueSyncBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusValueSyncBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusValueSyncBase_Statics::ClassParams = {
		&UCavrnusValueSyncBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCavrnusValueSyncBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusValueSyncBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusValueSyncBase()
	{
		if (!Z_Registration_Info_UClass_UCavrnusValueSyncBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusValueSyncBase.OuterSingleton, Z_Construct_UClass_UCavrnusValueSyncBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusValueSyncBase.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusValueSyncBase>()
	{
		return UCavrnusValueSyncBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusValueSyncBase);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusValueSyncBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusValueSyncBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusValueSyncBase, UCavrnusValueSyncBase::StaticClass, TEXT("UCavrnusValueSyncBase"), &Z_Registration_Info_UClass_UCavrnusValueSyncBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusValueSyncBase), 3693221813U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusValueSyncBase_h_1569910769(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusValueSyncBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusValueSyncBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
