// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/SpawnedObjectsManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnedObjectsManager() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_USpawnedObjectsManager_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_USpawnedObjectsManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusSpawnedObject();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ACavrnusSpatialConnector_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USpawnedObjectsManager::execSpawnCavrnusActor)
	{
		P_GET_STRUCT_REF(FCavrnusSpawnedObject,Z_Param_Out_SpawnedObject);
		P_GET_OBJECT(ACavrnusSpatialConnector,Z_Param_CavrnusSpatialConnector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnCavrnusActor(Z_Param_Out_SpawnedObject,Z_Param_CavrnusSpatialConnector);
		P_NATIVE_END;
	}
	void USpawnedObjectsManager::StaticRegisterNativesUSpawnedObjectsManager()
	{
		UClass* Class = USpawnedObjectsManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnCavrnusActor", &USpawnedObjectsManager::execSpawnCavrnusActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor_Statics
	{
		struct SpawnedObjectsManager_eventSpawnCavrnusActor_Parms
		{
			FCavrnusSpawnedObject SpawnedObject;
			ACavrnusSpatialConnector* CavrnusSpatialConnector;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnedObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CavrnusSpatialConnector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor_Statics::NewProp_SpawnedObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor_Statics::NewProp_SpawnedObject = { "SpawnedObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpawnedObjectsManager_eventSpawnCavrnusActor_Parms, SpawnedObject), Z_Construct_UScriptStruct_FCavrnusSpawnedObject, METADATA_PARAMS(Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor_Statics::NewProp_SpawnedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor_Statics::NewProp_SpawnedObject_MetaData)) }; // 2250269897
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor_Statics::NewProp_CavrnusSpatialConnector = { "CavrnusSpatialConnector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpawnedObjectsManager_eventSpawnCavrnusActor_Parms, CavrnusSpatialConnector), Z_Construct_UClass_ACavrnusSpatialConnector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor_Statics::NewProp_SpawnedObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor_Statics::NewProp_CavrnusSpatialConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpawnedObjectsManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpawnedObjectsManager, nullptr, "SpawnCavrnusActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor_Statics::SpawnedObjectsManager_eventSpawnCavrnusActor_Parms), Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnedObjectsManager);
	UClass* Z_Construct_UClass_USpawnedObjectsManager_NoRegister()
	{
		return USpawnedObjectsManager::StaticClass();
	}
	struct Z_Construct_UClass_USpawnedObjectsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpawnedObjectsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpawnedObjectsManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpawnedObjectsManager_SpawnCavrnusActor, "SpawnCavrnusActor" }, // 3743253432
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnedObjectsManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnedObjectsManager.h" },
		{ "ModuleRelativePath", "Public/SpawnedObjectsManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawnedObjectsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnedObjectsManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnedObjectsManager_Statics::ClassParams = {
		&USpawnedObjectsManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpawnedObjectsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpawnedObjectsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpawnedObjectsManager()
	{
		if (!Z_Registration_Info_UClass_USpawnedObjectsManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnedObjectsManager.OuterSingleton, Z_Construct_UClass_USpawnedObjectsManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpawnedObjectsManager.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<USpawnedObjectsManager>()
	{
		return USpawnedObjectsManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnedObjectsManager);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_SpawnedObjectsManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_SpawnedObjectsManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpawnedObjectsManager, USpawnedObjectsManager::StaticClass, TEXT("USpawnedObjectsManager"), &Z_Registration_Info_UClass_USpawnedObjectsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnedObjectsManager), 1627816699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_SpawnedObjectsManager_h_471968795(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_SpawnedObjectsManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_SpawnedObjectsManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
