// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/User/PlayerAvatarPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAvatarPawn() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UEnum* Z_Construct_UEnum_CavrnusConnector_EMultiTouchState();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_APlayerAvatarPawn_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_APlayerAvatarPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMultiTouchState;
	static UEnum* EMultiTouchState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMultiTouchState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMultiTouchState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CavrnusConnector_EMultiTouchState, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("EMultiTouchState"));
		}
		return Z_Registration_Info_UEnum_EMultiTouchState.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UEnum* StaticEnum<EMultiTouchState>()
	{
		return EMultiTouchState_StaticEnum();
	}
	struct Z_Construct_UEnum_CavrnusConnector_EMultiTouchState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CavrnusConnector_EMultiTouchState_Statics::Enumerators[] = {
		{ "EMultiTouchState::INDETERMINATE", (int64)EMultiTouchState::INDETERMINATE },
		{ "EMultiTouchState::ZOOM", (int64)EMultiTouchState::ZOOM },
		{ "EMultiTouchState::SWIPE", (int64)EMultiTouchState::SWIPE },
		{ "EMultiTouchState::MOVE", (int64)EMultiTouchState::MOVE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CavrnusConnector_EMultiTouchState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enum EMultiTouchState , used for save touch input state in controller\n */" },
		{ "INDETERMINATE.DisplayName", "INDETERMINATE" },
		{ "INDETERMINATE.Name", "EMultiTouchState::INDETERMINATE" },
		{ "ModuleRelativePath", "Public/User/PlayerAvatarPawn.h" },
		{ "MOVE.DisplayName", "MOVE" },
		{ "MOVE.Name", "EMultiTouchState::MOVE" },
		{ "SWIPE.DisplayName", "SWIPE" },
		{ "SWIPE.Name", "EMultiTouchState::SWIPE" },
		{ "ToolTip", "Enum EMultiTouchState , used for save touch input state in controller" },
		{ "ZOOM.DisplayName", "ZOOM" },
		{ "ZOOM.Name", "EMultiTouchState::ZOOM" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CavrnusConnector_EMultiTouchState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		"EMultiTouchState",
		"EMultiTouchState",
		Z_Construct_UEnum_CavrnusConnector_EMultiTouchState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CavrnusConnector_EMultiTouchState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CavrnusConnector_EMultiTouchState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CavrnusConnector_EMultiTouchState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CavrnusConnector_EMultiTouchState()
	{
		if (!Z_Registration_Info_UEnum_EMultiTouchState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMultiTouchState.InnerSingleton, Z_Construct_UEnum_CavrnusConnector_EMultiTouchState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMultiTouchState.InnerSingleton;
	}
	DEFINE_FUNCTION(APlayerAvatarPawn::execLerpMoveTo)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LerpTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LerpMoveTo(Z_Param_Location,Z_Param_LerpTime);
		P_NATIVE_END;
	}
	void APlayerAvatarPawn::StaticRegisterNativesAPlayerAvatarPawn()
	{
		UClass* Class = APlayerAvatarPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LerpMoveTo", &APlayerAvatarPawn::execLerpMoveTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerAvatarPawn_LerpMoveTo_Statics
	{
		struct PlayerAvatarPawn_eventLerpMoveTo_Parms
		{
			FVector Location;
			float LerpTime;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerAvatarPawn_LerpMoveTo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAvatarPawn_eventLerpMoveTo_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerAvatarPawn_LerpMoveTo_Statics::NewProp_LerpTime = { "LerpTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerAvatarPawn_eventLerpMoveTo_Parms, LerpTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerAvatarPawn_LerpMoveTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerAvatarPawn_LerpMoveTo_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerAvatarPawn_LerpMoveTo_Statics::NewProp_LerpTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerAvatarPawn_LerpMoveTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus|Avatar" },
		{ "Comment", "/**\n\x09 * LerpMoveTo public blueprint function to smooth pawn position change.\n\x09 * @param Location destination position.\n\x09 * @param LerpTime time to set final position\n\x09 */" },
		{ "ModuleRelativePath", "Public/User/PlayerAvatarPawn.h" },
		{ "ToolTip", "LerpMoveTo public blueprint function to smooth pawn position change.\n@param Location destination position.\n@param LerpTime time to set final position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerAvatarPawn_LerpMoveTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerAvatarPawn, nullptr, "LerpMoveTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerAvatarPawn_LerpMoveTo_Statics::PlayerAvatarPawn_eventLerpMoveTo_Parms), Z_Construct_UFunction_APlayerAvatarPawn_LerpMoveTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerAvatarPawn_LerpMoveTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerAvatarPawn_LerpMoveTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerAvatarPawn_LerpMoveTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerAvatarPawn_LerpMoveTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerAvatarPawn_LerpMoveTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerAvatarPawn);
	UClass* Z_Construct_UClass_APlayerAvatarPawn_NoRegister()
	{
		return APlayerAvatarPawn::StaticClass();
	}
	struct Z_Construct_UClass_APlayerAvatarPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_RootComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Current_RootComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_AttachToComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Current_AttachToComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_PlayerCamera_Comp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Current_PlayerCamera_Comp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Current_SpringArm_Comp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Current_SpringArm_Comp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvatarMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLerpMove_MetaData[];
#endif
		static void NewProp_bLerpMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLerpMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCameraTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerAvatarPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerAvatarPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerAvatarPawn_LerpMoveTo, "LerpMoveTo" }, // 2802862312
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatarPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * APlayerAvatarPawn class.\n * Realize user input commands and link it with Cavrnus server user action send\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "User/PlayerAvatarPawn.h" },
		{ "ModuleRelativePath", "Public/User/PlayerAvatarPawn.h" },
		{ "ToolTip", "APlayerAvatarPawn class.\nRealize user input commands and link it with Cavrnus server user action send" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_RootComponent_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/User/PlayerAvatarPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_RootComponent = { "Current_RootComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAvatarPawn, Current_RootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_RootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_RootComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_AttachToComponent_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/User/PlayerAvatarPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_AttachToComponent = { "Current_AttachToComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAvatarPawn, Current_AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_AttachToComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_PlayerCamera_Comp_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/User/PlayerAvatarPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_PlayerCamera_Comp = { "Current_PlayerCamera_Comp", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAvatarPawn, Current_PlayerCamera_Comp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_PlayerCamera_Comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_PlayerCamera_Comp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_SpringArm_Comp_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/User/PlayerAvatarPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_SpringArm_Comp = { "Current_SpringArm_Comp", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAvatarPawn, Current_SpringArm_Comp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_SpringArm_Comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_SpringArm_Comp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_AvatarMeshes_Inner = { "AvatarMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_AvatarMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/User/PlayerAvatarPawn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_AvatarMeshes = { "AvatarMeshes", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAvatarPawn, AvatarMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_AvatarMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_AvatarMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_bLerpMove_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/User/PlayerAvatarPawn.h" },
	};
#endif
	void Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_bLerpMove_SetBit(void* Obj)
	{
		((APlayerAvatarPawn*)Obj)->bLerpMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_bLerpMove = { "bLerpMove", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerAvatarPawn), &Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_bLerpMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_bLerpMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_bLerpMove_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_DefaultTransform_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/User/PlayerAvatarPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_DefaultTransform = { "DefaultTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAvatarPawn, DefaultTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_DefaultTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_DefaultTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_DefaultCameraTransform_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/User/PlayerAvatarPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_DefaultCameraTransform = { "DefaultCameraTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerAvatarPawn, DefaultCameraTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_DefaultCameraTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_DefaultCameraTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerAvatarPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_RootComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_AttachToComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_PlayerCamera_Comp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_Current_SpringArm_Comp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_AvatarMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_AvatarMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_bLerpMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_DefaultTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerAvatarPawn_Statics::NewProp_DefaultCameraTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerAvatarPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerAvatarPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerAvatarPawn_Statics::ClassParams = {
		&APlayerAvatarPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerAvatarPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatarPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerAvatarPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerAvatarPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerAvatarPawn()
	{
		if (!Z_Registration_Info_UClass_APlayerAvatarPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerAvatarPawn.OuterSingleton, Z_Construct_UClass_APlayerAvatarPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerAvatarPawn.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<APlayerAvatarPawn>()
	{
		return APlayerAvatarPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerAvatarPawn);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_Statics::EnumInfo[] = {
		{ EMultiTouchState_StaticEnum, TEXT("EMultiTouchState"), &Z_Registration_Info_UEnum_EMultiTouchState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1846315785U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerAvatarPawn, APlayerAvatarPawn::StaticClass, TEXT("APlayerAvatarPawn"), &Z_Registration_Info_UClass_APlayerAvatarPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerAvatarPawn), 3909577693U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_3945365686(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_User_PlayerAvatarPawn_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
