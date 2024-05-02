// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/NoMesh/NoMeshObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoMeshObject() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UFunction* Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ANoMeshObject_NoRegister();
	CAVRNUSCONNECTOR_API UEnum* Z_Construct_UEnum_CavrnusConnector_ENoMeshObjectType();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ANoMeshObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusSpaceConnection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature_Statics
	{
		struct _Script_CavrnusConnector_eventOnContentCreated_Parms
		{
			ANoMeshObject* Actor;
			FString ContentPath;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CavrnusConnector_eventOnContentCreated_Parms, Actor), Z_Construct_UClass_ANoMeshObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature_Statics::NewProp_ContentPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature_Statics::NewProp_ContentPath = { "ContentPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CavrnusConnector_eventOnContentCreated_Parms, ContentPath), METADATA_PARAMS(Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature_Statics::NewProp_ContentPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature_Statics::NewProp_ContentPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature_Statics::NewProp_ContentPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NoMesh/NoMeshObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CavrnusConnector, nullptr, "OnContentCreated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature_Statics::_Script_CavrnusConnector_eventOnContentCreated_Parms), Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CavrnusConnector_OnContentCreated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENoMeshObjectType;
	static UEnum* ENoMeshObjectType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENoMeshObjectType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENoMeshObjectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CavrnusConnector_ENoMeshObjectType, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("ENoMeshObjectType"));
		}
		return Z_Registration_Info_UEnum_ENoMeshObjectType.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UEnum* StaticEnum<ENoMeshObjectType>()
	{
		return ENoMeshObjectType_StaticEnum();
	}
	struct Z_Construct_UEnum_CavrnusConnector_ENoMeshObjectType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CavrnusConnector_ENoMeshObjectType_Statics::Enumerators[] = {
		{ "ENoMeshObjectType::None", (int64)ENoMeshObjectType::None },
		{ "ENoMeshObjectType::ContentId", (int64)ENoMeshObjectType::ContentId },
		{ "ENoMeshObjectType::Whiteboard", (int64)ENoMeshObjectType::Whiteboard },
		{ "ENoMeshObjectType::StreamBoardOwner", (int64)ENoMeshObjectType::StreamBoardOwner },
		{ "ENoMeshObjectType::VideoBoard", (int64)ENoMeshObjectType::VideoBoard },
		{ "ENoMeshObjectType::ImageBoard", (int64)ENoMeshObjectType::ImageBoard },
		{ "ENoMeshObjectType::UserBoard", (int64)ENoMeshObjectType::UserBoard },
		{ "ENoMeshObjectType::ObjectProgress", (int64)ENoMeshObjectType::ObjectProgress },
		{ "ENoMeshObjectType::BoardProgress", (int64)ENoMeshObjectType::BoardProgress },
		{ "ENoMeshObjectType::Textboard", (int64)ENoMeshObjectType::Textboard },
		{ "ENoMeshObjectType::Script", (int64)ENoMeshObjectType::Script },
		{ "ENoMeshObjectType::ArTracker", (int64)ENoMeshObjectType::ArTracker },
		{ "ENoMeshObjectType::PDFBoard", (int64)ENoMeshObjectType::PDFBoard },
		{ "ENoMeshObjectType::CustomContentID", (int64)ENoMeshObjectType::CustomContentID },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CavrnusConnector_ENoMeshObjectType_Statics::Enum_MetaDataParams[] = {
		{ "ArTracker.Name", "ENoMeshObjectType::ArTracker" },
		{ "BoardProgress.Name", "ENoMeshObjectType::BoardProgress" },
		{ "Comment", "/**\n * ENoMeshObjectType represent a type of the no mesh object\n */" },
		{ "ContentId.Name", "ENoMeshObjectType::ContentId" },
		{ "CustomContentID.Name", "ENoMeshObjectType::CustomContentID" },
		{ "ImageBoard.Name", "ENoMeshObjectType::ImageBoard" },
		{ "ModuleRelativePath", "Public/NoMesh/NoMeshObject.h" },
		{ "None.Name", "ENoMeshObjectType::None" },
		{ "ObjectProgress.Name", "ENoMeshObjectType::ObjectProgress" },
		{ "PDFBoard.Name", "ENoMeshObjectType::PDFBoard" },
		{ "Script.Name", "ENoMeshObjectType::Script" },
		{ "StreamBoardOwner.Name", "ENoMeshObjectType::StreamBoardOwner" },
		{ "Textboard.Name", "ENoMeshObjectType::Textboard" },
		{ "ToolTip", "ENoMeshObjectType represent a type of the no mesh object" },
		{ "UserBoard.Name", "ENoMeshObjectType::UserBoard" },
		{ "VideoBoard.Name", "ENoMeshObjectType::VideoBoard" },
		{ "Whiteboard.Name", "ENoMeshObjectType::Whiteboard" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CavrnusConnector_ENoMeshObjectType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		"ENoMeshObjectType",
		"ENoMeshObjectType",
		Z_Construct_UEnum_CavrnusConnector_ENoMeshObjectType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CavrnusConnector_ENoMeshObjectType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CavrnusConnector_ENoMeshObjectType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CavrnusConnector_ENoMeshObjectType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CavrnusConnector_ENoMeshObjectType()
	{
		if (!Z_Registration_Info_UEnum_ENoMeshObjectType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENoMeshObjectType.InnerSingleton, Z_Construct_UEnum_CavrnusConnector_ENoMeshObjectType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENoMeshObjectType.InnerSingleton;
	}
	DEFINE_FUNCTION(ANoMeshObject::execOnMainRenderTargetUpdated)
	{
		P_GET_OBJECT(UCanvas,Z_Param_Canvas);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMainRenderTargetUpdated(Z_Param_Canvas,Z_Param_Width,Z_Param_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANoMeshObject::execSpaceConnected)
	{
		P_GET_STRUCT(FCavrnusSpaceConnection,Z_Param_spaceConn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpaceConnected(Z_Param_spaceConn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANoMeshObject::execCreateContent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateContent(Z_Param_ContentPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANoMeshObject::execAdjustAspectRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustAspectRatio();
		P_NATIVE_END;
	}
	void ANoMeshObject::StaticRegisterNativesANoMeshObject()
	{
		UClass* Class = ANoMeshObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustAspectRatio", &ANoMeshObject::execAdjustAspectRatio },
			{ "CreateContent", &ANoMeshObject::execCreateContent },
			{ "OnMainRenderTargetUpdated", &ANoMeshObject::execOnMainRenderTargetUpdated },
			{ "SpaceConnected", &ANoMeshObject::execSpaceConnected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANoMeshObject_AdjustAspectRatio_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANoMeshObject_AdjustAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|NoMesh" },
		{ "Comment", "/**\n\x09 * Adjust the aspect ratio based on its content.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NoMesh/NoMeshObject.h" },
		{ "ToolTip", "Adjust the aspect ratio based on its content." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANoMeshObject_AdjustAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANoMeshObject, nullptr, "AdjustAspectRatio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANoMeshObject_AdjustAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANoMeshObject_AdjustAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANoMeshObject_AdjustAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANoMeshObject_AdjustAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANoMeshObject_CreateContent_Statics
	{
		struct NoMeshObject_eventCreateContent_Parms
		{
			FString ContentPath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANoMeshObject_CreateContent_Statics::NewProp_ContentPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANoMeshObject_CreateContent_Statics::NewProp_ContentPath = { "ContentPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoMeshObject_eventCreateContent_Parms, ContentPath), METADATA_PARAMS(Z_Construct_UFunction_ANoMeshObject_CreateContent_Statics::NewProp_ContentPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANoMeshObject_CreateContent_Statics::NewProp_ContentPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANoMeshObject_CreateContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANoMeshObject_CreateContent_Statics::NewProp_ContentPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANoMeshObject_CreateContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/NoMesh/NoMeshObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANoMeshObject_CreateContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANoMeshObject, nullptr, "CreateContent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANoMeshObject_CreateContent_Statics::NoMeshObject_eventCreateContent_Parms), Z_Construct_UFunction_ANoMeshObject_CreateContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANoMeshObject_CreateContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANoMeshObject_CreateContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANoMeshObject_CreateContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANoMeshObject_CreateContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANoMeshObject_CreateContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated_Statics
	{
		struct NoMeshObject_eventOnMainRenderTargetUpdated_Parms
		{
			UCanvas* Canvas;
			int32 Width;
			int32 Height;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Canvas;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoMeshObject_eventOnMainRenderTargetUpdated_Parms, Canvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoMeshObject_eventOnMainRenderTargetUpdated_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoMeshObject_eventOnMainRenderTargetUpdated_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated_Statics::NewProp_Canvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated_Statics::NewProp_Height,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NoMesh/NoMeshObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANoMeshObject, nullptr, "OnMainRenderTargetUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated_Statics::NoMeshObject_eventOnMainRenderTargetUpdated_Parms), Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANoMeshObject_SpaceConnected_Statics
	{
		struct NoMeshObject_eventSpaceConnected_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANoMeshObject_SpaceConnected_Statics::NewProp_spaceConn = { "spaceConn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoMeshObject_eventSpaceConnected_Parms, spaceConn), Z_Construct_UScriptStruct_FCavrnusSpaceConnection, METADATA_PARAMS(nullptr, 0) }; // 3908145014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANoMeshObject_SpaceConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANoMeshObject_SpaceConnected_Statics::NewProp_spaceConn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANoMeshObject_SpaceConnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NoMesh/NoMeshObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANoMeshObject_SpaceConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANoMeshObject, nullptr, "SpaceConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANoMeshObject_SpaceConnected_Statics::NoMeshObject_eventSpaceConnected_Parms), Z_Construct_UFunction_ANoMeshObject_SpaceConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANoMeshObject_SpaceConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANoMeshObject_SpaceConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANoMeshObject_SpaceConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANoMeshObject_SpaceConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANoMeshObject_SpaceConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANoMeshObject);
	UClass* Z_Construct_UClass_ANoMeshObject_NoRegister()
	{
		return ANoMeshObject::StaticClass();
	}
	struct Z_Construct_UClass_ANoMeshObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectAnnotations_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectAnnotations_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectAnnotations_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectAnnotations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnosRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnnosRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContentMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsOnDrag_MetaData[];
#endif
		static void NewProp_IsOnDrag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOnDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragPreviousLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DragPreviousLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANoMeshObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANoMeshObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANoMeshObject_AdjustAspectRatio, "AdjustAspectRatio" }, // 3807093105
		{ &Z_Construct_UFunction_ANoMeshObject_CreateContent, "CreateContent" }, // 3458512439
		{ &Z_Construct_UFunction_ANoMeshObject_OnMainRenderTargetUpdated, "OnMainRenderTargetUpdated" }, // 1382599061
		{ &Z_Construct_UFunction_ANoMeshObject_SpaceConnected, "SpaceConnected" }, // 3472987201
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoMeshObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NoMesh/NoMeshObject.h" },
		{ "ModuleRelativePath", "Public/NoMesh/NoMeshObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANoMeshObject_Statics::NewProp_ObjectAnnotations_ValueProp = { "ObjectAnnotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANoMeshObject_Statics::NewProp_ObjectAnnotations_Key_KeyProp = { "ObjectAnnotations_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoMeshObject_Statics::NewProp_ObjectAnnotations_MetaData[] = {
		{ "ModuleRelativePath", "Public/NoMesh/NoMeshObject.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ANoMeshObject_Statics::NewProp_ObjectAnnotations = { "ObjectAnnotations", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANoMeshObject, ObjectAnnotations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_ObjectAnnotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_ObjectAnnotations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoMeshObject_Statics::NewProp_AnnosRenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/NoMesh/NoMeshObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANoMeshObject_Statics::NewProp_AnnosRenderTarget = { "AnnosRenderTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANoMeshObject, AnnosRenderTarget), Z_Construct_UClass_UAnnotationCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_AnnosRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_AnnosRenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoMeshObject_Statics::NewProp_MainRenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/NoMesh/NoMeshObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANoMeshObject_Statics::NewProp_MainRenderTarget = { "MainRenderTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANoMeshObject, MainRenderTarget), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_MainRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_MainRenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoMeshObject_Statics::NewProp_RootContainer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NoMesh/NoMeshObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANoMeshObject_Statics::NewProp_RootContainer = { "RootContainer", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANoMeshObject, RootContainer), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_RootContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_RootContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoMeshObject_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NoMesh/NoMeshObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANoMeshObject_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANoMeshObject, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoMeshObject_Statics::NewProp_ContentMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/NoMesh/NoMeshObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANoMeshObject_Statics::NewProp_ContentMaterial = { "ContentMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANoMeshObject, ContentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_ContentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_ContentMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoMeshObject_Statics::NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/NoMesh/NoMeshObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANoMeshObject_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANoMeshObject, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_MaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_MaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoMeshObject_Statics::NewProp_TextureRenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/NoMesh/NoMeshObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANoMeshObject_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANoMeshObject, TextureRenderTarget), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_TextureRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_TextureRenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoMeshObject_Statics::NewProp_IsOnDrag_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/// Indicates if the object is being dragged or not.\n" },
		{ "ModuleRelativePath", "Public/NoMesh/NoMeshObject.h" },
		{ "ToolTip", "Indicates if the object is being dragged or not." },
	};
#endif
	void Z_Construct_UClass_ANoMeshObject_Statics::NewProp_IsOnDrag_SetBit(void* Obj)
	{
		((ANoMeshObject*)Obj)->IsOnDrag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANoMeshObject_Statics::NewProp_IsOnDrag = { "IsOnDrag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANoMeshObject), &Z_Construct_UClass_ANoMeshObject_Statics::NewProp_IsOnDrag_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_IsOnDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_IsOnDrag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoMeshObject_Statics::NewProp_DragPreviousLocation_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/// Delta move measurement helper. Handles update this to measure delta movement.\n" },
		{ "ModuleRelativePath", "Public/NoMesh/NoMeshObject.h" },
		{ "ToolTip", "Delta move measurement helper. Handles update this to measure delta movement." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANoMeshObject_Statics::NewProp_DragPreviousLocation = { "DragPreviousLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANoMeshObject, DragPreviousLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_DragPreviousLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANoMeshObject_Statics::NewProp_DragPreviousLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANoMeshObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoMeshObject_Statics::NewProp_ObjectAnnotations_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoMeshObject_Statics::NewProp_ObjectAnnotations_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoMeshObject_Statics::NewProp_ObjectAnnotations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoMeshObject_Statics::NewProp_AnnosRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoMeshObject_Statics::NewProp_MainRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoMeshObject_Statics::NewProp_RootContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoMeshObject_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoMeshObject_Statics::NewProp_ContentMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoMeshObject_Statics::NewProp_MaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoMeshObject_Statics::NewProp_TextureRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoMeshObject_Statics::NewProp_IsOnDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANoMeshObject_Statics::NewProp_DragPreviousLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANoMeshObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANoMeshObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANoMeshObject_Statics::ClassParams = {
		&ANoMeshObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANoMeshObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANoMeshObject_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANoMeshObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANoMeshObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANoMeshObject()
	{
		if (!Z_Registration_Info_UClass_ANoMeshObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANoMeshObject.OuterSingleton, Z_Construct_UClass_ANoMeshObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANoMeshObject.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<ANoMeshObject>()
	{
		return ANoMeshObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANoMeshObject);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_Statics::EnumInfo[] = {
		{ ENoMeshObjectType_StaticEnum, TEXT("ENoMeshObjectType"), &Z_Registration_Info_UEnum_ENoMeshObjectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3162440122U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANoMeshObject, ANoMeshObject::StaticClass, TEXT("ANoMeshObject"), &Z_Registration_Info_UClass_ANoMeshObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANoMeshObject), 3579603309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_3010671397(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_NoMeshObject_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
