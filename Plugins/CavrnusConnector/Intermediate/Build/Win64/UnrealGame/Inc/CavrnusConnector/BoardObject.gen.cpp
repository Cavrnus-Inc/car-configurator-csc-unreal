// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/NoMesh/BoardObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoardObject() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UEnum* Z_Construct_UEnum_CavrnusConnector_ENomeshWidgetType();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UEnum* Z_Construct_UEnum_CavrnusConnector_EPropertyEventType();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ABoardObject_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ABoardObject();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ANoMeshObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UBoardHandle_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UBoardHeader_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UNoMeshActionsWidget_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENomeshWidgetType;
	static UEnum* ENomeshWidgetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENomeshWidgetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENomeshWidgetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CavrnusConnector_ENomeshWidgetType, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("ENomeshWidgetType"));
		}
		return Z_Registration_Info_UEnum_ENomeshWidgetType.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UEnum* StaticEnum<ENomeshWidgetType>()
	{
		return ENomeshWidgetType_StaticEnum();
	}
	struct Z_Construct_UEnum_CavrnusConnector_ENomeshWidgetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CavrnusConnector_ENomeshWidgetType_Statics::Enumerators[] = {
		{ "ENomeshWidgetType::ActionBar", (int64)ENomeshWidgetType::ActionBar },
		{ "ENomeshWidgetType::LeftHandle", (int64)ENomeshWidgetType::LeftHandle },
		{ "ENomeshWidgetType::RightHandle", (int64)ENomeshWidgetType::RightHandle },
		{ "ENomeshWidgetType::BottomHandle", (int64)ENomeshWidgetType::BottomHandle },
		{ "ENomeshWidgetType::HeaderBar", (int64)ENomeshWidgetType::HeaderBar },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CavrnusConnector_ENomeshWidgetType_Statics::Enum_MetaDataParams[] = {
		{ "ActionBar.Name", "ENomeshWidgetType::ActionBar" },
		{ "BlueprintType", "true" },
		{ "BottomHandle.Name", "ENomeshWidgetType::BottomHandle" },
		{ "HeaderBar.Name", "ENomeshWidgetType::HeaderBar" },
		{ "LeftHandle.Name", "ENomeshWidgetType::LeftHandle" },
		{ "ModuleRelativePath", "Public/NoMesh/BoardObject.h" },
		{ "RightHandle.Name", "ENomeshWidgetType::RightHandle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CavrnusConnector_ENomeshWidgetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		"ENomeshWidgetType",
		"ENomeshWidgetType",
		Z_Construct_UEnum_CavrnusConnector_ENomeshWidgetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CavrnusConnector_ENomeshWidgetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CavrnusConnector_ENomeshWidgetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CavrnusConnector_ENomeshWidgetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CavrnusConnector_ENomeshWidgetType()
	{
		if (!Z_Registration_Info_UEnum_ENomeshWidgetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENomeshWidgetType.InnerSingleton, Z_Construct_UEnum_CavrnusConnector_ENomeshWidgetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENomeshWidgetType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyEventType;
	static UEnum* EPropertyEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPropertyEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CavrnusConnector_EPropertyEventType, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("EPropertyEventType"));
		}
		return Z_Registration_Info_UEnum_EPropertyEventType.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UEnum* StaticEnum<EPropertyEventType>()
	{
		return EPropertyEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_CavrnusConnector_EPropertyEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CavrnusConnector_EPropertyEventType_Statics::Enumerators[] = {
		{ "EPropertyEventType::Transient", (int64)EPropertyEventType::Transient },
		{ "EPropertyEventType::Final", (int64)EPropertyEventType::Final },
		{ "EPropertyEventType::Cancel", (int64)EPropertyEventType::Cancel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CavrnusConnector_EPropertyEventType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancel.Name", "EPropertyEventType::Cancel" },
		{ "Final.Name", "EPropertyEventType::Final" },
		{ "ModuleRelativePath", "Public/NoMesh/BoardObject.h" },
		{ "Transient.Name", "EPropertyEventType::Transient" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CavrnusConnector_EPropertyEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		"EPropertyEventType",
		"EPropertyEventType",
		Z_Construct_UEnum_CavrnusConnector_EPropertyEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CavrnusConnector_EPropertyEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CavrnusConnector_EPropertyEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CavrnusConnector_EPropertyEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CavrnusConnector_EPropertyEventType()
	{
		if (!Z_Registration_Info_UEnum_EPropertyEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyEventType.InnerSingleton, Z_Construct_UEnum_CavrnusConnector_EPropertyEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPropertyEventType.InnerSingleton;
	}
	DEFINE_FUNCTION(ABoardObject::execToggleBoardHandleCollisions)
	{
		P_GET_OBJECT(UWidgetComponent,Z_Param_Widget);
		P_GET_UBOOL(Z_Param_bEnableCollisions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleBoardHandleCollisions(Z_Param_Widget,Z_Param_bEnableCollisions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoardObject::execToggleBoardCollisions)
	{
		P_GET_UBOOL(Z_Param_bEnableCollisions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleBoardCollisions(Z_Param_bEnableCollisions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoardObject::execIsFrameVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFrameVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoardObject::execToggleBoardFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleBoardFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABoardObject::execRayCastOnToBoard)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RayCastOnToBoard(Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void ABoardObject::StaticRegisterNativesABoardObject()
	{
		UClass* Class = ABoardObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsFrameVisible", &ABoardObject::execIsFrameVisible },
			{ "RayCastOnToBoard", &ABoardObject::execRayCastOnToBoard },
			{ "ToggleBoardCollisions", &ABoardObject::execToggleBoardCollisions },
			{ "ToggleBoardFrame", &ABoardObject::execToggleBoardFrame },
			{ "ToggleBoardHandleCollisions", &ABoardObject::execToggleBoardHandleCollisions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoardObject_IsFrameVisible_Statics
	{
		struct BoardObject_eventIsFrameVisible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABoardObject_IsFrameVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoardObject_eventIsFrameVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoardObject_IsFrameVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoardObject_eventIsFrameVisible_Parms), &Z_Construct_UFunction_ABoardObject_IsFrameVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardObject_IsFrameVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardObject_IsFrameVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoardObject_IsFrameVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|NoMesh" },
		{ "ModuleRelativePath", "Public/NoMesh/BoardObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardObject_IsFrameVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoardObject, nullptr, "IsFrameVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABoardObject_IsFrameVisible_Statics::BoardObject_eventIsFrameVisible_Parms), Z_Construct_UFunction_ABoardObject_IsFrameVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardObject_IsFrameVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoardObject_IsFrameVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardObject_IsFrameVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoardObject_IsFrameVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardObject_IsFrameVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoardObject_RayCastOnToBoard_Statics
	{
		struct BoardObject_eventRayCastOnToBoard_Parms
		{
			FVector Hit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABoardObject_RayCastOnToBoard_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoardObject_eventRayCastOnToBoard_Parms, Hit), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABoardObject_RayCastOnToBoard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoardObject_eventRayCastOnToBoard_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoardObject_RayCastOnToBoard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoardObject_eventRayCastOnToBoard_Parms), &Z_Construct_UFunction_ABoardObject_RayCastOnToBoard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardObject_RayCastOnToBoard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardObject_RayCastOnToBoard_Statics::NewProp_Hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardObject_RayCastOnToBoard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoardObject_RayCastOnToBoard_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|NoMesh" },
		{ "Comment", "/// Performs a ray cast on to a plane constructed from NoMesh Right vector and Location.\n" },
		{ "ModuleRelativePath", "Public/NoMesh/BoardObject.h" },
		{ "ToolTip", "Performs a ray cast on to a plane constructed from NoMesh Right vector and Location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardObject_RayCastOnToBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoardObject, nullptr, "RayCastOnToBoard", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABoardObject_RayCastOnToBoard_Statics::BoardObject_eventRayCastOnToBoard_Parms), Z_Construct_UFunction_ABoardObject_RayCastOnToBoard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardObject_RayCastOnToBoard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoardObject_RayCastOnToBoard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardObject_RayCastOnToBoard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoardObject_RayCastOnToBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardObject_RayCastOnToBoard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoardObject_ToggleBoardCollisions_Statics
	{
		struct BoardObject_eventToggleBoardCollisions_Parms
		{
			bool bEnableCollisions;
		};
		static void NewProp_bEnableCollisions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollisions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABoardObject_ToggleBoardCollisions_Statics::NewProp_bEnableCollisions_SetBit(void* Obj)
	{
		((BoardObject_eventToggleBoardCollisions_Parms*)Obj)->bEnableCollisions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoardObject_ToggleBoardCollisions_Statics::NewProp_bEnableCollisions = { "bEnableCollisions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoardObject_eventToggleBoardCollisions_Parms), &Z_Construct_UFunction_ABoardObject_ToggleBoardCollisions_Statics::NewProp_bEnableCollisions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardObject_ToggleBoardCollisions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardObject_ToggleBoardCollisions_Statics::NewProp_bEnableCollisions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoardObject_ToggleBoardCollisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|NoMesh" },
		{ "ModuleRelativePath", "Public/NoMesh/BoardObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardObject_ToggleBoardCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoardObject, nullptr, "ToggleBoardCollisions", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABoardObject_ToggleBoardCollisions_Statics::BoardObject_eventToggleBoardCollisions_Parms), Z_Construct_UFunction_ABoardObject_ToggleBoardCollisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardObject_ToggleBoardCollisions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoardObject_ToggleBoardCollisions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardObject_ToggleBoardCollisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoardObject_ToggleBoardCollisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardObject_ToggleBoardCollisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoardObject_ToggleBoardFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoardObject_ToggleBoardFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|NoMesh" },
		{ "Comment", "/// Hide / Show widgets belonging to the board.\n" },
		{ "ModuleRelativePath", "Public/NoMesh/BoardObject.h" },
		{ "ToolTip", "Hide / Show widgets belonging to the board." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardObject_ToggleBoardFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoardObject, nullptr, "ToggleBoardFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoardObject_ToggleBoardFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardObject_ToggleBoardFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoardObject_ToggleBoardFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardObject_ToggleBoardFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics
	{
		struct BoardObject_eventToggleBoardHandleCollisions_Parms
		{
			UWidgetComponent* Widget;
			bool bEnableCollisions;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static void NewProp_bEnableCollisions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollisions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoardObject_eventToggleBoardHandleCollisions_Parms, Widget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::NewProp_Widget_MetaData)) };
	void Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::NewProp_bEnableCollisions_SetBit(void* Obj)
	{
		((BoardObject_eventToggleBoardHandleCollisions_Parms*)Obj)->bEnableCollisions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::NewProp_bEnableCollisions = { "bEnableCollisions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoardObject_eventToggleBoardHandleCollisions_Parms), &Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::NewProp_bEnableCollisions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::NewProp_bEnableCollisions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|NoMesh" },
		{ "ModuleRelativePath", "Public/NoMesh/BoardObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoardObject, nullptr, "ToggleBoardHandleCollisions", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::BoardObject_eventToggleBoardHandleCollisions_Parms), Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoardObject);
	UClass* Z_Construct_UClass_ABoardObject_NoRegister()
	{
		return ABoardObject::StaticClass();
	}
	struct Z_Construct_UClass_ABoardObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WidgetDeclarations_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WidgetDeclarations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetDeclarations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetDeclarations;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Handles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Handles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoardHeader_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoardHeader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoardCollision_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoardCollision;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoardHandleCollisions_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoardHandleCollisions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoardHandleCollisions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoardHandleCollisions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoardObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANoMeshObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoardObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoardObject_IsFrameVisible, "IsFrameVisible" }, // 3496980849
		{ &Z_Construct_UFunction_ABoardObject_RayCastOnToBoard, "RayCastOnToBoard" }, // 2999942412
		{ &Z_Construct_UFunction_ABoardObject_ToggleBoardCollisions, "ToggleBoardCollisions" }, // 1277528192
		{ &Z_Construct_UFunction_ABoardObject_ToggleBoardFrame, "ToggleBoardFrame" }, // 273596287
		{ &Z_Construct_UFunction_ABoardObject_ToggleBoardHandleCollisions, "ToggleBoardHandleCollisions" }, // 2623696350
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NoMesh/BoardObject.h" },
		{ "ModuleRelativePath", "Public/NoMesh/BoardObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABoardObject_Statics::NewProp_WidgetDeclarations_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABoardObject_Statics::NewProp_WidgetDeclarations_Inner = { "WidgetDeclarations", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_CavrnusConnector_ENomeshWidgetType, METADATA_PARAMS(nullptr, 0) }; // 504955089
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardObject_Statics::NewProp_WidgetDeclarations_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/// Declared widgets will be created for NoMeshObject in the constructor. Widgets can be assigned from blueprint.\n" },
		{ "ModuleRelativePath", "Public/NoMesh/BoardObject.h" },
		{ "ToolTip", "Declared widgets will be created for NoMeshObject in the constructor. Widgets can be assigned from blueprint." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoardObject_Statics::NewProp_WidgetDeclarations = { "WidgetDeclarations", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoardObject, WidgetDeclarations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABoardObject_Statics::NewProp_WidgetDeclarations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoardObject_Statics::NewProp_WidgetDeclarations_MetaData)) }; // 504955089
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoardObject_Statics::NewProp_Handles_Inner = { "Handles", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBoardHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardObject_Statics::NewProp_Handles_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/// Board handles.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NoMesh/BoardObject.h" },
		{ "ToolTip", "Board handles." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoardObject_Statics::NewProp_Handles = { "Handles", nullptr, (EPropertyFlags)0x001000800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoardObject, Handles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABoardObject_Statics::NewProp_Handles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoardObject_Statics::NewProp_Handles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardHeader_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/// Board header.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NoMesh/BoardObject.h" },
		{ "ToolTip", "Board header." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardHeader = { "BoardHeader", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoardObject, BoardHeader), Z_Construct_UClass_UBoardHeader_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardHeader_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardObject_Statics::NewProp_Actions_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/// Board Action bar.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NoMesh/BoardObject.h" },
		{ "ToolTip", "Board Action bar." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoardObject_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoardObject, Actions), Z_Construct_UClass_UNoMeshActionsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoardObject_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoardObject_Statics::NewProp_Actions_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoardObject_Statics::NewProp_WidgetComponents_Inner = { "WidgetComponents", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardObject_Statics::NewProp_WidgetComponents_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/// Widgets assigned to NoMeshObject from Blueprint.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NoMesh/BoardObject.h" },
		{ "ToolTip", "Widgets assigned to NoMeshObject from Blueprint." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoardObject_Statics::NewProp_WidgetComponents = { "WidgetComponents", nullptr, (EPropertyFlags)0x001000800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoardObject, WidgetComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABoardObject_Statics::NewProp_WidgetComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoardObject_Statics::NewProp_WidgetComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardCollision_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "// Used to store the collision detection type so can restore it when the board is unhidden\n" },
		{ "ModuleRelativePath", "Public/NoMesh/BoardObject.h" },
		{ "ToolTip", "Used to store the collision detection type so can restore it when the board is unhidden" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardCollision = { "BoardCollision", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoardObject, BoardCollision), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardCollision_MetaData)) }; // 1718742452
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardHandleCollisions_ValueProp = { "BoardHandleCollisions", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(nullptr, 0) }; // 1718742452
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardHandleCollisions_Key_KeyProp = { "BoardHandleCollisions_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardHandleCollisions_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/NoMesh/BoardObject.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardHandleCollisions = { "BoardHandleCollisions", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoardObject, BoardHandleCollisions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardHandleCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardHandleCollisions_MetaData)) }; // 1718742452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoardObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardObject_Statics::NewProp_WidgetDeclarations_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardObject_Statics::NewProp_WidgetDeclarations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardObject_Statics::NewProp_WidgetDeclarations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardObject_Statics::NewProp_Handles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardObject_Statics::NewProp_Handles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardHeader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardObject_Statics::NewProp_Actions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardObject_Statics::NewProp_WidgetComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardObject_Statics::NewProp_WidgetComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardHandleCollisions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardHandleCollisions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardObject_Statics::NewProp_BoardHandleCollisions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoardObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoardObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoardObject_Statics::ClassParams = {
		&ABoardObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABoardObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoardObject_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoardObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoardObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoardObject()
	{
		if (!Z_Registration_Info_UClass_ABoardObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoardObject.OuterSingleton, Z_Construct_UClass_ABoardObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoardObject.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<ABoardObject>()
	{
		return ABoardObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoardObject);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_Statics::EnumInfo[] = {
		{ ENomeshWidgetType_StaticEnum, TEXT("ENomeshWidgetType"), &Z_Registration_Info_UEnum_ENomeshWidgetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 504955089U) },
		{ EPropertyEventType_StaticEnum, TEXT("EPropertyEventType"), &Z_Registration_Info_UEnum_EPropertyEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3802985855U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoardObject, ABoardObject::StaticClass, TEXT("ABoardObject"), &Z_Registration_Info_UClass_ABoardObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoardObject), 3832338677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_3138426553(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_NoMesh_BoardObject_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
