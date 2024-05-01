// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/CavrnusSpatialConnector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusSpatialConnector() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UEnum* Z_Construct_UEnum_CavrnusConnector_ECavrnusAuthMethod();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
	CAVRNUSCONNECTOR_API UEnum* Z_Construct_UEnum_CavrnusConnector_ECavrnusMemberLoginMethod();
	CAVRNUSCONNECTOR_API UEnum* Z_Construct_UEnum_CavrnusConnector_ECavrnusGuestLoginMethod();
	CAVRNUSCONNECTOR_API UEnum* Z_Construct_UEnum_CavrnusConnector_ECavrnusSpaceJoinMethod();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ACavrnusSpatialConnector_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_ACavrnusSpatialConnector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusSpawnedObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusGuestLoginWidget_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLoginWidget_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusSpaceListWidget_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusWidgetBase_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECavrnusAuthMethod;
	static UEnum* ECavrnusAuthMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECavrnusAuthMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECavrnusAuthMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CavrnusConnector_ECavrnusAuthMethod, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("ECavrnusAuthMethod"));
		}
		return Z_Registration_Info_UEnum_ECavrnusAuthMethod.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UEnum* StaticEnum<ECavrnusAuthMethod>()
	{
		return ECavrnusAuthMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_CavrnusConnector_ECavrnusAuthMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CavrnusConnector_ECavrnusAuthMethod_Statics::Enumerators[] = {
		{ "ECavrnusAuthMethod::None", (int64)ECavrnusAuthMethod::None },
		{ "ECavrnusAuthMethod::JoinAsMember", (int64)ECavrnusAuthMethod::JoinAsMember },
		{ "ECavrnusAuthMethod::JoinAsGuest", (int64)ECavrnusAuthMethod::JoinAsGuest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CavrnusConnector_ECavrnusAuthMethod_Statics::Enum_MetaDataParams[] = {
		{ "JoinAsGuest.Name", "ECavrnusAuthMethod::JoinAsGuest" },
		{ "JoinAsMember.Name", "ECavrnusAuthMethod::JoinAsMember" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "None.Name", "ECavrnusAuthMethod::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CavrnusConnector_ECavrnusAuthMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		"ECavrnusAuthMethod",
		"ECavrnusAuthMethod",
		Z_Construct_UEnum_CavrnusConnector_ECavrnusAuthMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CavrnusConnector_ECavrnusAuthMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CavrnusConnector_ECavrnusAuthMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CavrnusConnector_ECavrnusAuthMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CavrnusConnector_ECavrnusAuthMethod()
	{
		if (!Z_Registration_Info_UEnum_ECavrnusAuthMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECavrnusAuthMethod.InnerSingleton, Z_Construct_UEnum_CavrnusConnector_ECavrnusAuthMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECavrnusAuthMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECavrnusMemberLoginMethod;
	static UEnum* ECavrnusMemberLoginMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECavrnusMemberLoginMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECavrnusMemberLoginMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CavrnusConnector_ECavrnusMemberLoginMethod, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("ECavrnusMemberLoginMethod"));
		}
		return Z_Registration_Info_UEnum_ECavrnusMemberLoginMethod.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UEnum* StaticEnum<ECavrnusMemberLoginMethod>()
	{
		return ECavrnusMemberLoginMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_CavrnusConnector_ECavrnusMemberLoginMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CavrnusConnector_ECavrnusMemberLoginMethod_Statics::Enumerators[] = {
		{ "ECavrnusMemberLoginMethod::None", (int64)ECavrnusMemberLoginMethod::None },
		{ "ECavrnusMemberLoginMethod::EnterMemberLoginCredentials", (int64)ECavrnusMemberLoginMethod::EnterMemberLoginCredentials },
		{ "ECavrnusMemberLoginMethod::PromptMemberToLogin", (int64)ECavrnusMemberLoginMethod::PromptMemberToLogin },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CavrnusConnector_ECavrnusMemberLoginMethod_Statics::Enum_MetaDataParams[] = {
		{ "EnterMemberLoginCredentials.Name", "ECavrnusMemberLoginMethod::EnterMemberLoginCredentials" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "None.Name", "ECavrnusMemberLoginMethod::None" },
		{ "PromptMemberToLogin.Name", "ECavrnusMemberLoginMethod::PromptMemberToLogin" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CavrnusConnector_ECavrnusMemberLoginMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		"ECavrnusMemberLoginMethod",
		"ECavrnusMemberLoginMethod",
		Z_Construct_UEnum_CavrnusConnector_ECavrnusMemberLoginMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CavrnusConnector_ECavrnusMemberLoginMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CavrnusConnector_ECavrnusMemberLoginMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CavrnusConnector_ECavrnusMemberLoginMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CavrnusConnector_ECavrnusMemberLoginMethod()
	{
		if (!Z_Registration_Info_UEnum_ECavrnusMemberLoginMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECavrnusMemberLoginMethod.InnerSingleton, Z_Construct_UEnum_CavrnusConnector_ECavrnusMemberLoginMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECavrnusMemberLoginMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECavrnusGuestLoginMethod;
	static UEnum* ECavrnusGuestLoginMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECavrnusGuestLoginMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECavrnusGuestLoginMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CavrnusConnector_ECavrnusGuestLoginMethod, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("ECavrnusGuestLoginMethod"));
		}
		return Z_Registration_Info_UEnum_ECavrnusGuestLoginMethod.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UEnum* StaticEnum<ECavrnusGuestLoginMethod>()
	{
		return ECavrnusGuestLoginMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_CavrnusConnector_ECavrnusGuestLoginMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CavrnusConnector_ECavrnusGuestLoginMethod_Statics::Enumerators[] = {
		{ "ECavrnusGuestLoginMethod::None", (int64)ECavrnusGuestLoginMethod::None },
		{ "ECavrnusGuestLoginMethod::EnterNameBelow", (int64)ECavrnusGuestLoginMethod::EnterNameBelow },
		{ "ECavrnusGuestLoginMethod::PromptToEnterName", (int64)ECavrnusGuestLoginMethod::PromptToEnterName },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CavrnusConnector_ECavrnusGuestLoginMethod_Statics::Enum_MetaDataParams[] = {
		{ "EnterNameBelow.Name", "ECavrnusGuestLoginMethod::EnterNameBelow" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "None.Name", "ECavrnusGuestLoginMethod::None" },
		{ "PromptToEnterName.Name", "ECavrnusGuestLoginMethod::PromptToEnterName" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CavrnusConnector_ECavrnusGuestLoginMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		"ECavrnusGuestLoginMethod",
		"ECavrnusGuestLoginMethod",
		Z_Construct_UEnum_CavrnusConnector_ECavrnusGuestLoginMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CavrnusConnector_ECavrnusGuestLoginMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CavrnusConnector_ECavrnusGuestLoginMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CavrnusConnector_ECavrnusGuestLoginMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CavrnusConnector_ECavrnusGuestLoginMethod()
	{
		if (!Z_Registration_Info_UEnum_ECavrnusGuestLoginMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECavrnusGuestLoginMethod.InnerSingleton, Z_Construct_UEnum_CavrnusConnector_ECavrnusGuestLoginMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECavrnusGuestLoginMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECavrnusSpaceJoinMethod;
	static UEnum* ECavrnusSpaceJoinMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECavrnusSpaceJoinMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECavrnusSpaceJoinMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CavrnusConnector_ECavrnusSpaceJoinMethod, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("ECavrnusSpaceJoinMethod"));
		}
		return Z_Registration_Info_UEnum_ECavrnusSpaceJoinMethod.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UEnum* StaticEnum<ECavrnusSpaceJoinMethod>()
	{
		return ECavrnusSpaceJoinMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_CavrnusConnector_ECavrnusSpaceJoinMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CavrnusConnector_ECavrnusSpaceJoinMethod_Statics::Enumerators[] = {
		{ "ECavrnusSpaceJoinMethod::None", (int64)ECavrnusSpaceJoinMethod::None },
		{ "ECavrnusSpaceJoinMethod::EnterSpaceId", (int64)ECavrnusSpaceJoinMethod::EnterSpaceId },
		{ "ECavrnusSpaceJoinMethod::SpacesList", (int64)ECavrnusSpaceJoinMethod::SpacesList },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CavrnusConnector_ECavrnusSpaceJoinMethod_Statics::Enum_MetaDataParams[] = {
		{ "EnterSpaceId.Name", "ECavrnusSpaceJoinMethod::EnterSpaceId" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "None.Name", "ECavrnusSpaceJoinMethod::None" },
		{ "SpacesList.Name", "ECavrnusSpaceJoinMethod::SpacesList" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CavrnusConnector_ECavrnusSpaceJoinMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		"ECavrnusSpaceJoinMethod",
		"ECavrnusSpaceJoinMethod",
		Z_Construct_UEnum_CavrnusConnector_ECavrnusSpaceJoinMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CavrnusConnector_ECavrnusSpaceJoinMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CavrnusConnector_ECavrnusSpaceJoinMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CavrnusConnector_ECavrnusSpaceJoinMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CavrnusConnector_ECavrnusSpaceJoinMethod()
	{
		if (!Z_Registration_Info_UEnum_ECavrnusSpaceJoinMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECavrnusSpaceJoinMethod.InnerSingleton, Z_Construct_UEnum_CavrnusConnector_ECavrnusSpaceJoinMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECavrnusSpaceJoinMethod.InnerSingleton;
	}
	DEFINE_FUNCTION(ACavrnusSpatialConnector::execDestroyCavrnusActor)
	{
		P_GET_STRUCT_REF(FCavrnusSpawnedObject,Z_Param_Out_SpawnedObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyCavrnusActor_Implementation(Z_Param_Out_SpawnedObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACavrnusSpatialConnector::execSpawnActorFromIdentifier)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Identifier);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->SpawnActorFromIdentifier_Implementation(Z_Param_Identifier,Z_Param_Out_InTransform);
		P_NATIVE_END;
	}
	static FName NAME_ACavrnusSpatialConnector_DestroyCavrnusActor = FName(TEXT("DestroyCavrnusActor"));
	void ACavrnusSpatialConnector::DestroyCavrnusActor(FCavrnusSpawnedObject const& SpawnedObject)
	{
		CavrnusSpatialConnector_eventDestroyCavrnusActor_Parms Parms;
		Parms.SpawnedObject=SpawnedObject;
		ProcessEvent(FindFunctionChecked(NAME_ACavrnusSpatialConnector_DestroyCavrnusActor),&Parms);
	}
	static FName NAME_ACavrnusSpatialConnector_SpawnActorFromIdentifier = FName(TEXT("SpawnActorFromIdentifier"));
	AActor* ACavrnusSpatialConnector::SpawnActorFromIdentifier(const FString& Identifier, FTransform const& InTransform)
	{
		CavrnusSpatialConnector_eventSpawnActorFromIdentifier_Parms Parms;
		Parms.Identifier=Identifier;
		Parms.InTransform=InTransform;
		ProcessEvent(FindFunctionChecked(NAME_ACavrnusSpatialConnector_SpawnActorFromIdentifier),&Parms);
		return Parms.ReturnValue;
	}
	void ACavrnusSpatialConnector::StaticRegisterNativesACavrnusSpatialConnector()
	{
		UClass* Class = ACavrnusSpatialConnector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyCavrnusActor", &ACavrnusSpatialConnector::execDestroyCavrnusActor },
			{ "SpawnActorFromIdentifier", &ACavrnusSpatialConnector::execSpawnActorFromIdentifier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACavrnusSpatialConnector_DestroyCavrnusActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnedObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACavrnusSpatialConnector_DestroyCavrnusActor_Statics::NewProp_SpawnedObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACavrnusSpatialConnector_DestroyCavrnusActor_Statics::NewProp_SpawnedObject = { "SpawnedObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpatialConnector_eventDestroyCavrnusActor_Parms, SpawnedObject), Z_Construct_UScriptStruct_FCavrnusSpawnedObject, METADATA_PARAMS(Z_Construct_UFunction_ACavrnusSpatialConnector_DestroyCavrnusActor_Statics::NewProp_SpawnedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACavrnusSpatialConnector_DestroyCavrnusActor_Statics::NewProp_SpawnedObject_MetaData)) }; // 2250269897
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACavrnusSpatialConnector_DestroyCavrnusActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACavrnusSpatialConnector_DestroyCavrnusActor_Statics::NewProp_SpawnedObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACavrnusSpatialConnector_DestroyCavrnusActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACavrnusSpatialConnector_DestroyCavrnusActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACavrnusSpatialConnector, nullptr, "DestroyCavrnusActor", nullptr, nullptr, sizeof(CavrnusSpatialConnector_eventDestroyCavrnusActor_Parms), Z_Construct_UFunction_ACavrnusSpatialConnector_DestroyCavrnusActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACavrnusSpatialConnector_DestroyCavrnusActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACavrnusSpatialConnector_DestroyCavrnusActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACavrnusSpatialConnector_DestroyCavrnusActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACavrnusSpatialConnector_DestroyCavrnusActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACavrnusSpatialConnector_DestroyCavrnusActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::NewProp_Identifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpatialConnector_eventSpawnActorFromIdentifier_Parms, Identifier), METADATA_PARAMS(Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::NewProp_Identifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpatialConnector_eventSpawnActorFromIdentifier_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::NewProp_InTransform_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CavrnusSpatialConnector_eventSpawnActorFromIdentifier_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::NewProp_InTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACavrnusSpatialConnector, nullptr, "SpawnActorFromIdentifier", nullptr, nullptr, sizeof(CavrnusSpatialConnector_eventSpawnActorFromIdentifier_Parms), Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACavrnusSpatialConnector);
	UClass* Z_Construct_UClass_ACavrnusSpatialConnector_NoRegister()
	{
		return ACavrnusSpatialConnector::StaticClass();
	}
	struct Z_Construct_UClass_ACavrnusSpatialConnector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyServer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MyServer;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AuthMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AuthMethod;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GuestLoginMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GuestLoginMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GuestLoginMethod;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MemberLoginMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberLoginMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MemberLoginMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GuestName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GuestName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GuestJoinMenu_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GuestJoinMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberLoginEmail_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MemberLoginEmail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberLoginPassword_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MemberLoginPassword;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberLoginMenu_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MemberLoginMenu;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SpaceJoinMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceJoinMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpaceJoinMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutomaticSpaceJoinId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AutomaticSpaceJoinId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceJoinMenu_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpaceJoinMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteAvatarClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RemoteAvatarClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LoadingWidgetClass;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetsToLoad_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetsToLoad_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetsToLoad;
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnableIdentifiers_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpawnableIdentifiers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnableIdentifiers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SpawnableIdentifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lasers_MetaData[];
#endif
		static void NewProp_Lasers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Lasers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACavrnusSpatialConnector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACavrnusSpatialConnector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACavrnusSpatialConnector_DestroyCavrnusActor, "DestroyCavrnusActor" }, // 3889696656
		{ &Z_Construct_UFunction_ACavrnusSpatialConnector_SpawnActorFromIdentifier, "SpawnActorFromIdentifier" }, // 2459091879
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CavrnusSpatialConnector.h" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MyServer_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MyServer = { "MyServer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, MyServer), METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MyServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MyServer_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AuthMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AuthMethod_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "// ------------------------------------------------------------ Authentication --------------------------------------------------------------------\n" },
		{ "DisplayName", "Authentication Method" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "------------------------------------------------------------ Authentication --------------------------------------------------------------------" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AuthMethod = { "AuthMethod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, AuthMethod), Z_Construct_UEnum_CavrnusConnector_ECavrnusAuthMethod, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AuthMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AuthMethod_MetaData)) }; // 4153681174
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestLoginMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestLoginMethod_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "EditCondition", "AuthMethod == ECavrnusAuthMethod::JoinAsGuest" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestLoginMethod = { "GuestLoginMethod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, GuestLoginMethod), Z_Construct_UEnum_CavrnusConnector_ECavrnusGuestLoginMethod, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestLoginMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestLoginMethod_MetaData)) }; // 448114272
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMethod_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "EditCondition", "AuthMethod == ECavrnusAuthMethod::JoinAsMember" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMethod = { "MemberLoginMethod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, MemberLoginMethod), Z_Construct_UEnum_CavrnusConnector_ECavrnusMemberLoginMethod, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMethod_MetaData)) }; // 4187091145
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestName_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "// Guest Join Auto\n" },
		{ "EditCondition", "AuthMethod == ECavrnusAuthMethod::JoinAsGuest && GuestLoginMethod == ECavrnusGuestLoginMethod::EnterNameBelow" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Guest Join Auto" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestName = { "GuestName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, GuestName), METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestJoinMenu_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "// Guest Join Manual\n" },
		{ "EditCondition", "AuthMethod == ECavrnusAuthMethod::JoinAsGuest && GuestLoginMethod == ECavrnusGuestLoginMethod::PromptToEnterName" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Guest Join Manual" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestJoinMenu = { "GuestJoinMenu", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, GuestJoinMenu), Z_Construct_UClass_UCavrnusGuestLoginWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestJoinMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestJoinMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginEmail_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "// Login Auto\n" },
		{ "EditCondition", "AuthMethod == ECavrnusAuthMethod::JoinAsMember && MemberLoginMethod == ECavrnusMemberLoginMethod::EnterMemberLoginCredentials" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Login Auto" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginEmail = { "MemberLoginEmail", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, MemberLoginEmail), METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginEmail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginPassword_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "EditCondition", "AuthMethod == ECavrnusAuthMethod::JoinAsMember && MemberLoginMethod == ECavrnusMemberLoginMethod::EnterMemberLoginCredentials" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginPassword = { "MemberLoginPassword", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, MemberLoginPassword), METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginPassword_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginPassword_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMenu_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "// Login Manual\n" },
		{ "EditCondition", "AuthMethod == ECavrnusAuthMethod::JoinAsMember && MemberLoginMethod == ECavrnusMemberLoginMethod::PromptMemberToLogin" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Login Manual" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMenu = { "MemberLoginMenu", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, MemberLoginMenu), Z_Construct_UClass_UCavrnusLoginWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMenu_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMethod_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "// --------------------------------------------------------- Space Joining ------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "--------------------------------------------------------- Space Joining ------------------------------------------------------------------" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMethod = { "SpaceJoinMethod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, SpaceJoinMethod), Z_Construct_UEnum_CavrnusConnector_ECavrnusSpaceJoinMethod, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMethod_MetaData)) }; // 3919926405
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AutomaticSpaceJoinId_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "// Space Join Automatic\n" },
		{ "EditCondition", "SpaceJoinMethod == ECavrnusSpaceJoinMethod::EnterSpaceId" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Space Join Automatic" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AutomaticSpaceJoinId = { "AutomaticSpaceJoinId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, AutomaticSpaceJoinId), METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AutomaticSpaceJoinId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AutomaticSpaceJoinId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMenu_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "// Space Join Manual\n" },
		{ "EditCondition", "SpaceJoinMethod == ECavrnusSpaceJoinMethod::SpacesList" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Space Join Manual" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMenu = { "SpaceJoinMenu", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, SpaceJoinMenu), Z_Construct_UClass_UCavrnusSpaceListWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_RemoteAvatarClass_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "// Asset class type used to represent remote users\n" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Asset class type used to represent remote users" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_RemoteAvatarClass = { "RemoteAvatarClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, RemoteAvatarClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_RemoteAvatarClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_RemoteAvatarClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_LoadingWidgetClass_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "// ------------------------------------------- In Space UI ----------------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "------------------------------------------- In Space UI ----------------------------------------------------------------------------------" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_LoadingWidgetClass = { "LoadingWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, LoadingWidgetClass), Z_Construct_UClass_UCavrnusWidgetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_LoadingWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_LoadingWidgetClass_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_WidgetsToLoad_Inner = { "WidgetsToLoad", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCavrnusWidgetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_WidgetsToLoad_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_WidgetsToLoad = { "WidgetsToLoad", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, WidgetsToLoad), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_WidgetsToLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_WidgetsToLoad_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers_ValueProp = { "SpawnableIdentifiers", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers_Key_KeyProp = { "SpawnableIdentifiers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers = { "SpawnableIdentifiers", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, SpawnableIdentifiers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_Lasers_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
	};
#endif
	void Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_Lasers_SetBit(void* Obj)
	{
		((ACavrnusSpatialConnector*)Obj)->Lasers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_Lasers = { "Lasers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACavrnusSpatialConnector), &Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_Lasers_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_Lasers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_Lasers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACavrnusSpatialConnector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MyServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AuthMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AuthMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestLoginMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestLoginMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestJoinMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginEmail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginPassword,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AutomaticSpaceJoinId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_RemoteAvatarClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_LoadingWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_WidgetsToLoad_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_WidgetsToLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_Lasers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACavrnusSpatialConnector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACavrnusSpatialConnector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::ClassParams = {
		&ACavrnusSpatialConnector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACavrnusSpatialConnector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACavrnusSpatialConnector()
	{
		if (!Z_Registration_Info_UClass_ACavrnusSpatialConnector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACavrnusSpatialConnector.OuterSingleton, Z_Construct_UClass_ACavrnusSpatialConnector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACavrnusSpatialConnector.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<ACavrnusSpatialConnector>()
	{
		return ACavrnusSpatialConnector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACavrnusSpatialConnector);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_Statics::EnumInfo[] = {
		{ ECavrnusAuthMethod_StaticEnum, TEXT("ECavrnusAuthMethod"), &Z_Registration_Info_UEnum_ECavrnusAuthMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4153681174U) },
		{ ECavrnusMemberLoginMethod_StaticEnum, TEXT("ECavrnusMemberLoginMethod"), &Z_Registration_Info_UEnum_ECavrnusMemberLoginMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4187091145U) },
		{ ECavrnusGuestLoginMethod_StaticEnum, TEXT("ECavrnusGuestLoginMethod"), &Z_Registration_Info_UEnum_ECavrnusGuestLoginMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 448114272U) },
		{ ECavrnusSpaceJoinMethod_StaticEnum, TEXT("ECavrnusSpaceJoinMethod"), &Z_Registration_Info_UEnum_ECavrnusSpaceJoinMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3919926405U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACavrnusSpatialConnector, ACavrnusSpatialConnector::StaticClass, TEXT("ACavrnusSpatialConnector"), &Z_Registration_Info_UClass_ACavrnusSpatialConnector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACavrnusSpatialConnector), 3946334273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_3400671572(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
