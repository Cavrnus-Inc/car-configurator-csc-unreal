// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/CavrnusSpatialConnectorSubSystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusSpatialConnectorSubSystem() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusAvatarManager_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ACavrnusSpatialConnector_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UPDFManager_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusUIManager_NoRegister();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusAuthentication();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusSpaceConnection();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
// End Cross Module References
	DEFINE_FUNCTION(UCavrnusSpatialConnectorSubSystemProxy::execAttachLocalUserComponentToPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachLocalUserComponentToPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSpatialConnectorSubSystemProxy::execOnPossessedPawnChanged)
	{
		P_GET_OBJECT(APawn,Z_Param_OldPawn);
		P_GET_OBJECT(APawn,Z_Param_NewPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPossessedPawnChanged(Z_Param_OldPawn,Z_Param_NewPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSpatialConnectorSubSystemProxy::execOnPawnControllerChanged)
	{
		P_GET_OBJECT(APawn,Z_Param_InPawn);
		P_GET_OBJECT(AController,Z_Param_InController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnControllerChanged(Z_Param_InPawn,Z_Param_InController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSpatialConnectorSubSystemProxy::execGetUIManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCavrnusUIManager**)Z_Param__Result=P_THIS->GetUIManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSpatialConnectorSubSystemProxy::execGetPDFManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPDFManager**)Z_Param__Result=P_THIS->GetPDFManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSpatialConnectorSubSystemProxy::execGetAvatarManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCavrnusAvatarManager**)Z_Param__Result=P_THIS->GetAvatarManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSpatialConnectorSubSystemProxy::execOnSpaceConnectionFailure)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSpaceConnectionFailure(Z_Param_Error);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSpatialConnectorSubSystemProxy::execOnSpaceConnectionSuccess)
	{
		P_GET_STRUCT(FCavrnusSpaceConnection,Z_Param_SpaceConnection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSpaceConnectionSuccess(Z_Param_SpaceConnection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSpatialConnectorSubSystemProxy::execOnAuthFailure)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAuthFailure(Z_Param_Error);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSpatialConnectorSubSystemProxy::execOnAuthSuccess)
	{
		P_GET_STRUCT(FCavrnusAuthentication,Z_Param_Authentication);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAuthSuccess(Z_Param_Authentication);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCavrnusSpatialConnectorSubSystemProxy::execGetCavrnusSpatialConnector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACavrnusSpatialConnector**)Z_Param__Result=P_THIS->GetCavrnusSpatialConnector();
		P_NATIVE_END;
	}
	void UCavrnusSpatialConnectorSubSystemProxy::StaticRegisterNativesUCavrnusSpatialConnectorSubSystemProxy()
	{
		UClass* Class = UCavrnusSpatialConnectorSubSystemProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachLocalUserComponentToPawn", &UCavrnusSpatialConnectorSubSystemProxy::execAttachLocalUserComponentToPawn },
			{ "GetAvatarManager", &UCavrnusSpatialConnectorSubSystemProxy::execGetAvatarManager },
			{ "GetCavrnusSpatialConnector", &UCavrnusSpatialConnectorSubSystemProxy::execGetCavrnusSpatialConnector },
			{ "GetPDFManager", &UCavrnusSpatialConnectorSubSystemProxy::execGetPDFManager },
			{ "GetUIManager", &UCavrnusSpatialConnectorSubSystemProxy::execGetUIManager },
			{ "OnAuthFailure", &UCavrnusSpatialConnectorSubSystemProxy::execOnAuthFailure },
			{ "OnAuthSuccess", &UCavrnusSpatialConnectorSubSystemProxy::execOnAuthSuccess },
			{ "OnPawnControllerChanged", &UCavrnusSpatialConnectorSubSystemProxy::execOnPawnControllerChanged },
			{ "OnPossessedPawnChanged", &UCavrnusSpatialConnectorSubSystemProxy::execOnPossessedPawnChanged },
			{ "OnSpaceConnectionFailure", &UCavrnusSpatialConnectorSubSystemProxy::execOnSpaceConnectionFailure },
			{ "OnSpaceConnectionSuccess", &UCavrnusSpatialConnectorSubSystemProxy::execOnSpaceConnectionSuccess },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_AttachLocalUserComponentToPawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_AttachLocalUserComponentToPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_AttachLocalUserComponentToPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy, nullptr, "AttachLocalUserComponentToPawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_AttachLocalUserComponentToPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_AttachLocalUserComponentToPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_AttachLocalUserComponentToPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_AttachLocalUserComponentToPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetAvatarManager_Statics
	{
		struct CavrnusSpatialConnectorSubSystemProxy_eventGetAvatarManager_Parms
		{
			UCavrnusAvatarManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetAvatarManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpatialConnectorSubSystemProxy_eventGetAvatarManager_Parms, ReturnValue), Z_Construct_UClass_UCavrnusAvatarManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetAvatarManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetAvatarManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetAvatarManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetAvatarManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy, nullptr, "GetAvatarManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetAvatarManager_Statics::CavrnusSpatialConnectorSubSystemProxy_eventGetAvatarManager_Parms), Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetAvatarManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetAvatarManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetAvatarManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetAvatarManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetAvatarManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetAvatarManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetCavrnusSpatialConnector_Statics
	{
		struct CavrnusSpatialConnectorSubSystemProxy_eventGetCavrnusSpatialConnector_Parms
		{
			ACavrnusSpatialConnector* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetCavrnusSpatialConnector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpatialConnectorSubSystemProxy_eventGetCavrnusSpatialConnector_Parms, ReturnValue), Z_Construct_UClass_ACavrnusSpatialConnector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetCavrnusSpatialConnector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetCavrnusSpatialConnector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetCavrnusSpatialConnector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetCavrnusSpatialConnector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy, nullptr, "GetCavrnusSpatialConnector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetCavrnusSpatialConnector_Statics::CavrnusSpatialConnectorSubSystemProxy_eventGetCavrnusSpatialConnector_Parms), Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetCavrnusSpatialConnector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetCavrnusSpatialConnector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetCavrnusSpatialConnector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetCavrnusSpatialConnector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetCavrnusSpatialConnector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetCavrnusSpatialConnector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetPDFManager_Statics
	{
		struct CavrnusSpatialConnectorSubSystemProxy_eventGetPDFManager_Parms
		{
			UPDFManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetPDFManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpatialConnectorSubSystemProxy_eventGetPDFManager_Parms, ReturnValue), Z_Construct_UClass_UPDFManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetPDFManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetPDFManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetPDFManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetPDFManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy, nullptr, "GetPDFManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetPDFManager_Statics::CavrnusSpatialConnectorSubSystemProxy_eventGetPDFManager_Parms), Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetPDFManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetPDFManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetPDFManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetPDFManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetPDFManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetPDFManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetUIManager_Statics
	{
		struct CavrnusSpatialConnectorSubSystemProxy_eventGetUIManager_Parms
		{
			UCavrnusUIManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetUIManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpatialConnectorSubSystemProxy_eventGetUIManager_Parms, ReturnValue), Z_Construct_UClass_UCavrnusUIManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetUIManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetUIManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetUIManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetUIManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy, nullptr, "GetUIManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetUIManager_Statics::CavrnusSpatialConnectorSubSystemProxy_eventGetUIManager_Parms), Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetUIManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetUIManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetUIManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetUIManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetUIManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetUIManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthFailure_Statics
	{
		struct CavrnusSpatialConnectorSubSystemProxy_eventOnAuthFailure_Parms
		{
			FString Error;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthFailure_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpatialConnectorSubSystemProxy_eventOnAuthFailure_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthFailure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthFailure_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthFailure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthFailure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy, nullptr, "OnAuthFailure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthFailure_Statics::CavrnusSpatialConnectorSubSystemProxy_eventOnAuthFailure_Parms), Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthFailure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthFailure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthFailure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthFailure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthFailure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthFailure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthSuccess_Statics
	{
		struct CavrnusSpatialConnectorSubSystemProxy_eventOnAuthSuccess_Parms
		{
			FCavrnusAuthentication Authentication;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Authentication;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthSuccess_Statics::NewProp_Authentication = { "Authentication", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpatialConnectorSubSystemProxy_eventOnAuthSuccess_Parms, Authentication), Z_Construct_UScriptStruct_FCavrnusAuthentication, METADATA_PARAMS(nullptr, 0) }; // 1318212557
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthSuccess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthSuccess_Statics::NewProp_Authentication,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy, nullptr, "OnAuthSuccess", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthSuccess_Statics::CavrnusSpatialConnectorSubSystemProxy_eventOnAuthSuccess_Parms), Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPawnControllerChanged_Statics
	{
		struct CavrnusSpatialConnectorSubSystemProxy_eventOnPawnControllerChanged_Parms
		{
			APawn* InPawn;
			AController* InController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPawnControllerChanged_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpatialConnectorSubSystemProxy_eventOnPawnControllerChanged_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPawnControllerChanged_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpatialConnectorSubSystemProxy_eventOnPawnControllerChanged_Parms, InController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPawnControllerChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPawnControllerChanged_Statics::NewProp_InPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPawnControllerChanged_Statics::NewProp_InController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPawnControllerChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPawnControllerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy, nullptr, "OnPawnControllerChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPawnControllerChanged_Statics::CavrnusSpatialConnectorSubSystemProxy_eventOnPawnControllerChanged_Parms), Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPawnControllerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPawnControllerChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPawnControllerChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPawnControllerChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPawnControllerChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPawnControllerChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPossessedPawnChanged_Statics
	{
		struct CavrnusSpatialConnectorSubSystemProxy_eventOnPossessedPawnChanged_Parms
		{
			APawn* OldPawn;
			APawn* NewPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPossessedPawnChanged_Statics::NewProp_OldPawn = { "OldPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpatialConnectorSubSystemProxy_eventOnPossessedPawnChanged_Parms, OldPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPossessedPawnChanged_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpatialConnectorSubSystemProxy_eventOnPossessedPawnChanged_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPossessedPawnChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPossessedPawnChanged_Statics::NewProp_OldPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPossessedPawnChanged_Statics::NewProp_NewPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPossessedPawnChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPossessedPawnChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy, nullptr, "OnPossessedPawnChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPossessedPawnChanged_Statics::CavrnusSpatialConnectorSubSystemProxy_eventOnPossessedPawnChanged_Parms), Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPossessedPawnChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPossessedPawnChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPossessedPawnChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPossessedPawnChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPossessedPawnChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPossessedPawnChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionFailure_Statics
	{
		struct CavrnusSpatialConnectorSubSystemProxy_eventOnSpaceConnectionFailure_Parms
		{
			FString Error;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionFailure_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpatialConnectorSubSystemProxy_eventOnSpaceConnectionFailure_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionFailure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionFailure_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionFailure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionFailure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy, nullptr, "OnSpaceConnectionFailure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionFailure_Statics::CavrnusSpatialConnectorSubSystemProxy_eventOnSpaceConnectionFailure_Parms), Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionFailure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionFailure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionFailure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionFailure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionFailure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionFailure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionSuccess_Statics
	{
		struct CavrnusSpatialConnectorSubSystemProxy_eventOnSpaceConnectionSuccess_Parms
		{
			FCavrnusSpaceConnection SpaceConnection;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceConnection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionSuccess_Statics::NewProp_SpaceConnection = { "SpaceConnection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpatialConnectorSubSystemProxy_eventOnSpaceConnectionSuccess_Parms, SpaceConnection), Z_Construct_UScriptStruct_FCavrnusSpaceConnection, METADATA_PARAMS(nullptr, 0) }; // 3908145014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionSuccess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionSuccess_Statics::NewProp_SpaceConnection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy, nullptr, "OnSpaceConnectionSuccess", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionSuccess_Statics::CavrnusSpatialConnectorSubSystemProxy_eventOnSpaceConnectionSuccess_Parms), Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusSpatialConnectorSubSystemProxy);
	UClass* Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_NoRegister()
	{
		return UCavrnusSpatialConnectorSubSystemProxy::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UIManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Authentication_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Authentication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasSpaceConnection_MetaData[];
#endif
		static void NewProp_bHasSpaceConnection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSpaceConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PDFManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PDFManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInEditorMode_MetaData[];
#endif
		static void NewProp_bInEditorMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEditorMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_AttachLocalUserComponentToPawn, "AttachLocalUserComponentToPawn" }, // 1749953520
		{ &Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetAvatarManager, "GetAvatarManager" }, // 2264432980
		{ &Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetCavrnusSpatialConnector, "GetCavrnusSpatialConnector" }, // 1938082408
		{ &Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetPDFManager, "GetPDFManager" }, // 3770796121
		{ &Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_GetUIManager, "GetUIManager" }, // 1085943757
		{ &Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthFailure, "OnAuthFailure" }, // 2515410594
		{ &Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnAuthSuccess, "OnAuthSuccess" }, // 1610404855
		{ &Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPawnControllerChanged, "OnPawnControllerChanged" }, // 1420126048
		{ &Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnPossessedPawnChanged, "OnPossessedPawnChanged" }, // 609138142
		{ &Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionFailure, "OnSpaceConnectionFailure" }, // 3809005008
		{ &Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystemProxy_OnSpaceConnectionSuccess, "OnSpaceConnectionSuccess" }, // 1591242161
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CavrnusSpatialConnectorSubSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_UIManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_UIManager = { "UIManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSpatialConnectorSubSystemProxy, UIManager), Z_Construct_UClass_UCavrnusUIManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_UIManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_UIManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_Authentication_MetaData[] = {
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_Authentication = { "Authentication", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSpatialConnectorSubSystemProxy, Authentication), Z_Construct_UScriptStruct_FCavrnusAuthentication, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_Authentication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_Authentication_MetaData)) }; // 1318212557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_bHasSpaceConnection_MetaData[] = {
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	void Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_bHasSpaceConnection_SetBit(void* Obj)
	{
		((UCavrnusSpatialConnectorSubSystemProxy*)Obj)->bHasSpaceConnection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_bHasSpaceConnection = { "bHasSpaceConnection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCavrnusSpatialConnectorSubSystemProxy), &Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_bHasSpaceConnection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_bHasSpaceConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_bHasSpaceConnection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_AvatarManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_AvatarManager = { "AvatarManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSpatialConnectorSubSystemProxy, AvatarManager), Z_Construct_UClass_UCavrnusAvatarManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_AvatarManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_AvatarManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_PDFManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_PDFManager = { "PDFManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSpatialConnectorSubSystemProxy, PDFManager), Z_Construct_UClass_UPDFManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_PDFManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_PDFManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_bInEditorMode_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	void Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_bInEditorMode_SetBit(void* Obj)
	{
		((UCavrnusSpatialConnectorSubSystemProxy*)Obj)->bInEditorMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_bInEditorMode = { "bInEditorMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCavrnusSpatialConnectorSubSystemProxy), &Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_bInEditorMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_bInEditorMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_bInEditorMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_UIManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_Authentication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_bHasSpaceConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_AvatarManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_PDFManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::NewProp_bInEditorMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusSpatialConnectorSubSystemProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::ClassParams = {
		&UCavrnusSpatialConnectorSubSystemProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy()
	{
		if (!Z_Registration_Info_UClass_UCavrnusSpatialConnectorSubSystemProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusSpatialConnectorSubSystemProxy.OuterSingleton, Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusSpatialConnectorSubSystemProxy.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusSpatialConnectorSubSystemProxy>()
	{
		return UCavrnusSpatialConnectorSubSystemProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusSpatialConnectorSubSystemProxy);
	DEFINE_FUNCTION(UCavrnusSpatialConnectorSubSystem::execGetSystemProxy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCavrnusSpatialConnectorSubSystemProxy**)Z_Param__Result=P_THIS->GetSystemProxy();
		P_NATIVE_END;
	}
	void UCavrnusSpatialConnectorSubSystem::StaticRegisterNativesUCavrnusSpatialConnectorSubSystem()
	{
		UClass* Class = UCavrnusSpatialConnectorSubSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSystemProxy", &UCavrnusSpatialConnectorSubSystem::execGetSystemProxy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystem_GetSystemProxy_Statics
	{
		struct CavrnusSpatialConnectorSubSystem_eventGetSystemProxy_Parms
		{
			UCavrnusSpatialConnectorSubSystemProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystem_GetSystemProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpatialConnectorSubSystem_eventGetSystemProxy_Parms, ReturnValue), Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystem_GetSystemProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystem_GetSystemProxy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystem_GetSystemProxy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystem_GetSystemProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem, nullptr, "GetSystemProxy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystem_GetSystemProxy_Statics::CavrnusSpatialConnectorSubSystem_eventGetSystemProxy_Parms), Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystem_GetSystemProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystem_GetSystemProxy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystem_GetSystemProxy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystem_GetSystemProxy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystem_GetSystemProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystem_GetSystemProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusSpatialConnectorSubSystem);
	UClass* Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_NoRegister()
	{
		return UCavrnusSpatialConnectorSubSystem::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SystemProxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCavrnusSpatialConnectorSubSystem_GetSystemProxy, "GetSystemProxy" }, // 1042218453
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Class definition\n" },
		{ "IncludePath", "CavrnusSpatialConnectorSubSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
		{ "ToolTip", "Class definition" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics::NewProp_SystemProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnectorSubSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics::NewProp_SystemProxy = { "SystemProxy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusSpatialConnectorSubSystem, SystemProxy), Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics::NewProp_SystemProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics::NewProp_SystemProxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics::NewProp_SystemProxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusSpatialConnectorSubSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics::ClassParams = {
		&UCavrnusSpatialConnectorSubSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem()
	{
		if (!Z_Registration_Info_UClass_UCavrnusSpatialConnectorSubSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusSpatialConnectorSubSystem.OuterSingleton, Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusSpatialConnectorSubSystem.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusSpatialConnectorSubSystem>()
	{
		return UCavrnusSpatialConnectorSubSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusSpatialConnectorSubSystem);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusSpatialConnectorSubSystemProxy, UCavrnusSpatialConnectorSubSystemProxy::StaticClass, TEXT("UCavrnusSpatialConnectorSubSystemProxy"), &Z_Registration_Info_UClass_UCavrnusSpatialConnectorSubSystemProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusSpatialConnectorSubSystemProxy), 1946855247U) },
		{ Z_Construct_UClass_UCavrnusSpatialConnectorSubSystem, UCavrnusSpatialConnectorSubSystem::StaticClass, TEXT("UCavrnusSpatialConnectorSubSystem"), &Z_Registration_Info_UClass_UCavrnusSpatialConnectorSubSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusSpatialConnectorSubSystem), 700046752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_2620144828(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnectorSubSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
