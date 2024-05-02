// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/CavrnusSyncMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusSyncMaterial() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusSyncMaterial_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusSyncMaterial();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusValueSyncBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusSyncMaterial::execSetMaterialInstance)
	{
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_NewMaterialInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterialInstance_Implementation(Z_Param_NewMaterialInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSyncMaterial::execGetMaterialInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetMaterialInstance_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSyncMaterial::execGetMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterial**)Z_Param__Result=P_THIS->GetMaterial_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UCavrnusSyncMaterial_GetMaterial = FName(TEXT("GetMaterial"));
	UMaterial* UCavrnusSyncMaterial::GetMaterial() const
	{
		CavrnusSyncMaterial_eventGetMaterial_Parms Parms;
		const_cast<UCavrnusSyncMaterial*>(this)->ProcessEvent(FindFunctionChecked(NAME_UCavrnusSyncMaterial_GetMaterial),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UCavrnusSyncMaterial_GetMaterialInstance = FName(TEXT("GetMaterialInstance"));
	UMaterialInstanceDynamic* UCavrnusSyncMaterial::GetMaterialInstance() const
	{
		CavrnusSyncMaterial_eventGetMaterialInstance_Parms Parms;
		const_cast<UCavrnusSyncMaterial*>(this)->ProcessEvent(FindFunctionChecked(NAME_UCavrnusSyncMaterial_GetMaterialInstance),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UCavrnusSyncMaterial_SetMaterialInstance = FName(TEXT("SetMaterialInstance"));
	void UCavrnusSyncMaterial::SetMaterialInstance(UMaterialInstanceDynamic* NewMaterialInstance)
	{
		CavrnusSyncMaterial_eventSetMaterialInstance_Parms Parms;
		Parms.NewMaterialInstance=NewMaterialInstance;
		ProcessEvent(FindFunctionChecked(NAME_UCavrnusSyncMaterial_SetMaterialInstance),&Parms);
	}
	void UCavrnusSyncMaterial::StaticRegisterNativesUCavrnusSyncMaterial()
	{
		UClass* Class = UCavrnusSyncMaterial::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaterial", &UCavrnusSyncMaterial::execGetMaterial },
			{ "GetMaterialInstance", &UCavrnusSyncMaterial::execGetMaterialInstance },
			{ "SetMaterialInstance", &UCavrnusSyncMaterial::execSetMaterialInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterial_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSyncMaterial_eventGetMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSyncMaterial.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSyncMaterial, nullptr, "GetMaterial", nullptr, nullptr, sizeof(CavrnusSyncMaterial_eventGetMaterial_Parms), Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterialInstance_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSyncMaterial_eventGetMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSyncMaterial.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSyncMaterial, nullptr, "GetMaterialInstance", nullptr, nullptr, sizeof(CavrnusSyncMaterial_eventGetMaterialInstance_Parms), Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSyncMaterial_SetMaterialInstance_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusSyncMaterial_SetMaterialInstance_Statics::NewProp_NewMaterialInstance = { "NewMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSyncMaterial_eventSetMaterialInstance_Parms, NewMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSyncMaterial_SetMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSyncMaterial_SetMaterialInstance_Statics::NewProp_NewMaterialInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSyncMaterial_SetMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSyncMaterial.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSyncMaterial_SetMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSyncMaterial, nullptr, "SetMaterialInstance", nullptr, nullptr, sizeof(CavrnusSyncMaterial_eventSetMaterialInstance_Parms), Z_Construct_UFunction_UCavrnusSyncMaterial_SetMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSyncMaterial_SetMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSyncMaterial_SetMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSyncMaterial_SetMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSyncMaterial_SetMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSyncMaterial_SetMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusSyncMaterial);
	UClass* Z_Construct_UClass_UCavrnusSyncMaterial_NoRegister()
	{
		return UCavrnusSyncMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusSyncMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendChanges_MetaData[];
#endif
		static void NewProp_SendChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SendChanges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
		static const UECodeGen_Private::FClassPropertyParams NewProp_MaterialSyncMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialSyncMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSyncMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialSyncMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SyncedPropertyComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncedPropertyComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SyncedPropertyComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusSyncMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusSyncMaterial_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterial, "GetMaterial" }, // 483002051
		{ &Z_Construct_UFunction_UCavrnusSyncMaterial_GetMaterialInstance, "GetMaterialInstance" }, // 1825221616
		{ &Z_Construct_UFunction_UCavrnusSyncMaterial_SetMaterialInstance, "SetMaterialInstance" }, // 3993137003
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSyncMaterial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Class definition\n" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CavrnusSyncMaterial.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CavrnusSyncMaterial.h" },
		{ "ToolTip", "Class definition" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_MaterialInstance_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSyncMaterial.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSyncMaterial, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_MaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_MaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_SendChanges_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSyncMaterial.h" },
	};
#endif
	void Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_SendChanges_SetBit(void* Obj)
	{
		((UCavrnusSyncMaterial*)Obj)->SendChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_SendChanges = { "SendChanges", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCavrnusSyncMaterial), &Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_SendChanges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_SendChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_SendChanges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSyncMaterial.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSyncMaterial, DefaultMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_DefaultMaterial_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_MaterialSyncMap_ValueProp = { "MaterialSyncMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCavrnusValueSyncBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_MaterialSyncMap_Key_KeyProp = { "MaterialSyncMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_MaterialSyncMap_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSyncMaterial.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_MaterialSyncMap = { "MaterialSyncMap", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSyncMaterial, MaterialSyncMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_MaterialSyncMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_MaterialSyncMap_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_SyncedPropertyComponents_Inner = { "SyncedPropertyComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCavrnusValueSyncBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_SyncedPropertyComponents_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CavrnusSyncMaterial.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_SyncedPropertyComponents = { "SyncedPropertyComponents", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSyncMaterial, SyncedPropertyComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_SyncedPropertyComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_SyncedPropertyComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusSyncMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_MaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_SendChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_DefaultMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_MaterialSyncMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_MaterialSyncMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_MaterialSyncMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_SyncedPropertyComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSyncMaterial_Statics::NewProp_SyncedPropertyComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusSyncMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusSyncMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusSyncMaterial_Statics::ClassParams = {
		&UCavrnusSyncMaterial::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCavrnusSyncMaterial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncMaterial_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusSyncMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSyncMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusSyncMaterial()
	{
		if (!Z_Registration_Info_UClass_UCavrnusSyncMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusSyncMaterial.OuterSingleton, Z_Construct_UClass_UCavrnusSyncMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusSyncMaterial.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusSyncMaterial>()
	{
		return UCavrnusSyncMaterial::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusSyncMaterial);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusSyncMaterial, UCavrnusSyncMaterial::StaticClass, TEXT("UCavrnusSyncMaterial"), &Z_Registration_Info_UClass_UCavrnusSyncMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusSyncMaterial), 4279278641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_2992780571(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSyncMaterial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
