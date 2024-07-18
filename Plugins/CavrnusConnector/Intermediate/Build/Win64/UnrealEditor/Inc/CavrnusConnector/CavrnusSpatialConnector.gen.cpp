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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusGuestLoginWidget_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusLoginWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
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
		{ "Comment", "/** Define various options for authentication methods, member and guest login methods, and space join methods used by the ACavrnusSpatialConnector class. */" },
		{ "JoinAsGuest.Name", "ECavrnusAuthMethod::JoinAsGuest" },
		{ "JoinAsMember.Name", "ECavrnusAuthMethod::JoinAsMember" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "None.Name", "ECavrnusAuthMethod::None" },
		{ "ToolTip", "Define various options for authentication methods, member and guest login methods, and space join methods used by the ACavrnusSpatialConnector class." },
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
	void ACavrnusSpatialConnector::StaticRegisterNativesACavrnusSpatialConnector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACavrnusSpatialConnector);
	UClass* Z_Construct_UClass_ACavrnusSpatialConnector_NoRegister()
	{
		return ACavrnusSpatialConnector::StaticClass();
	}
	struct Z_Construct_UClass_ACavrnusSpatialConnector_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthenticationWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AuthenticationWidgetClass;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACavrnusSpatialConnector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
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
		{ "Comment", "/** Server address */" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Server address" },
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
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AuthMethod = { "AuthMethod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, AuthMethod), Z_Construct_UEnum_CavrnusConnector_ECavrnusAuthMethod, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AuthMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AuthMethod_MetaData)) }; // 3363427875
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestLoginMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestLoginMethod_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** Enum property for selecting the guest login method. Editable only if AuthMethod is JoinAsGuest. Otherwise hidden. */" },
		{ "EditCondition", "AuthMethod == ECavrnusAuthMethod::JoinAsGuest" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Enum property for selecting the guest login method. Editable only if AuthMethod is JoinAsGuest. Otherwise hidden." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestLoginMethod = { "GuestLoginMethod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, GuestLoginMethod), Z_Construct_UEnum_CavrnusConnector_ECavrnusGuestLoginMethod, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestLoginMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestLoginMethod_MetaData)) }; // 448114272
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMethod_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** Enum property for selecting the member login method. Editable only if AuthMethod is JoinAsMember. Otherwise hidden. */" },
		{ "EditCondition", "AuthMethod == ECavrnusAuthMethod::JoinAsMember" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Enum property for selecting the member login method. Editable only if AuthMethod is JoinAsMember. Otherwise hidden." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMethod = { "MemberLoginMethod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, MemberLoginMethod), Z_Construct_UEnum_CavrnusConnector_ECavrnusMemberLoginMethod, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMethod_MetaData)) }; // 4187091145
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestName_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** Property for selecting a guest login widget class, editable only if AuthMethod is JoinAsGuest, and GuestLoginMethod is set to PromptToEnterName. Otherwise hidden */" },
		{ "EditCondition", "AuthMethod == ECavrnusAuthMethod::JoinAsGuest && GuestLoginMethod == ECavrnusGuestLoginMethod::EnterNameBelow" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Property for selecting a guest login widget class, editable only if AuthMethod is JoinAsGuest, and GuestLoginMethod is set to PromptToEnterName. Otherwise hidden" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestName = { "GuestName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, GuestName), METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestJoinMenu_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** Property for selecting a guest login widget class, editable only if AuthMethod is JoinAsGuest, and GuestLoginMethod is set to PromptToEnterName. */" },
		{ "EditCondition", "AuthMethod == ECavrnusAuthMethod::JoinAsGuest && GuestLoginMethod == ECavrnusGuestLoginMethod::PromptToEnterName" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Property for selecting a guest login widget class, editable only if AuthMethod is JoinAsGuest, and GuestLoginMethod is set to PromptToEnterName." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestJoinMenu = { "GuestJoinMenu", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, GuestJoinMenu), Z_Construct_UClass_UCavrnusGuestLoginWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestJoinMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_GuestJoinMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginEmail_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** Property for selecting member login email, editable only if AuthMethod is JoinAsMember, and MemberLoginMethod is set to EnterMemberLoginCredentials. Otherwise hidden */" },
		{ "EditCondition", "AuthMethod == ECavrnusAuthMethod::JoinAsMember && MemberLoginMethod == ECavrnusMemberLoginMethod::EnterMemberLoginCredentials" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Property for selecting member login email, editable only if AuthMethod is JoinAsMember, and MemberLoginMethod is set to EnterMemberLoginCredentials. Otherwise hidden" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginEmail = { "MemberLoginEmail", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, MemberLoginEmail), METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginEmail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginPassword_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** String property for member login password, editable only if AuthMethod is JoinAsMember, and MemberLoginMethod is set to EnterMemberLoginCredentials. Otherwise hidden */" },
		{ "EditCondition", "AuthMethod == ECavrnusAuthMethod::JoinAsMember && MemberLoginMethod == ECavrnusMemberLoginMethod::EnterMemberLoginCredentials" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "PasswordField", "TRUE" },
		{ "ToolTip", "String property for member login password, editable only if AuthMethod is JoinAsMember, and MemberLoginMethod is set to EnterMemberLoginCredentials. Otherwise hidden" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginPassword = { "MemberLoginPassword", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, MemberLoginPassword), METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginPassword_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginPassword_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMenu_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** Property for selecting a member login widget class, editable only if AuthMethod is JoinAsMember, and MemberLoginMethod is set to PromptMemberToLogin. Otherwise hidden */" },
		{ "EditCondition", "AuthMethod == ECavrnusAuthMethod::JoinAsMember && MemberLoginMethod == ECavrnusMemberLoginMethod::PromptMemberToLogin" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Property for selecting a member login widget class, editable only if AuthMethod is JoinAsMember, and MemberLoginMethod is set to PromptMemberToLogin. Otherwise hidden" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMenu = { "MemberLoginMenu", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, MemberLoginMenu), Z_Construct_UClass_UCavrnusLoginWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_MemberLoginMenu_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMethod_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** Enum property for selecting the space join method. */" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Enum property for selecting the space join method." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMethod = { "SpaceJoinMethod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, SpaceJoinMethod), Z_Construct_UEnum_CavrnusConnector_ECavrnusSpaceJoinMethod, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMethod_MetaData)) }; // 3919926405
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AutomaticSpaceJoinId_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** String property for the automatic space join ID, editable only if SpaceJoinMethod is EnterSpaceId. */" },
		{ "EditCondition", "SpaceJoinMethod == ECavrnusSpaceJoinMethod::EnterSpaceId" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "String property for the automatic space join ID, editable only if SpaceJoinMethod is EnterSpaceId." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AutomaticSpaceJoinId = { "AutomaticSpaceJoinId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, AutomaticSpaceJoinId), METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AutomaticSpaceJoinId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AutomaticSpaceJoinId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMenu_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** Property for selecting a space join menu widget class, editable only if SpaceJoinMethod is SpacesList. */" },
		{ "EditCondition", "SpaceJoinMethod == ECavrnusSpaceJoinMethod::SpacesList" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Property for selecting a space join menu widget class, editable only if SpaceJoinMethod is SpacesList." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMenu = { "SpaceJoinMenu", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, SpaceJoinMenu), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpaceJoinMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_RemoteAvatarClass_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** Property for selecting the asset class type used to represent remote users. */" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Property for selecting the asset class type used to represent remote users." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_RemoteAvatarClass = { "RemoteAvatarClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, RemoteAvatarClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_RemoteAvatarClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_RemoteAvatarClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AuthenticationWidgetClass_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** Property for selecting the authentication widget class. */" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Property for selecting the authentication widget class." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AuthenticationWidgetClass = { "AuthenticationWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, AuthenticationWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AuthenticationWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AuthenticationWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_LoadingWidgetClass_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** Property for selecting the loading widget class */" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Property for selecting the loading widget class" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_LoadingWidgetClass = { "LoadingWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, LoadingWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_LoadingWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_LoadingWidgetClass_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_WidgetsToLoad_Inner = { "WidgetsToLoad", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_WidgetsToLoad_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** Array property for specifying widgets to load. The array length is adjustable in the editor. */" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Array property for specifying widgets to load. The array length is adjustable in the editor." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_WidgetsToLoad = { "WidgetsToLoad", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, WidgetsToLoad), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_WidgetsToLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_WidgetsToLoad_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers_ValueProp = { "SpawnableIdentifiers", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers_Key_KeyProp = { "SpawnableIdentifiers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers_MetaData[] = {
		{ "Category", "Cavrnus" },
		{ "Comment", "/** Map property for specifying spawnable identifiers and their corresponding actor classes. */" },
		{ "ModuleRelativePath", "Public/CavrnusSpatialConnector.h" },
		{ "ToolTip", "Map property for specifying spawnable identifiers and their corresponding actor classes." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers = { "SpawnableIdentifiers", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACavrnusSpatialConnector, SpawnableIdentifiers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers_MetaData)) };
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_AuthenticationWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_LoadingWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_WidgetsToLoad_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_WidgetsToLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACavrnusSpatialConnector_Statics::NewProp_SpawnableIdentifiers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACavrnusSpatialConnector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACavrnusSpatialConnector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACavrnusSpatialConnector_Statics::ClassParams = {
		&ACavrnusSpatialConnector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACavrnusSpatialConnector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	struct Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_Statics::EnumInfo[] = {
		{ ECavrnusAuthMethod_StaticEnum, TEXT("ECavrnusAuthMethod"), &Z_Registration_Info_UEnum_ECavrnusAuthMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3363427875U) },
		{ ECavrnusMemberLoginMethod_StaticEnum, TEXT("ECavrnusMemberLoginMethod"), &Z_Registration_Info_UEnum_ECavrnusMemberLoginMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4187091145U) },
		{ ECavrnusGuestLoginMethod_StaticEnum, TEXT("ECavrnusGuestLoginMethod"), &Z_Registration_Info_UEnum_ECavrnusGuestLoginMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 448114272U) },
		{ ECavrnusSpaceJoinMethod_StaticEnum, TEXT("ECavrnusSpaceJoinMethod"), &Z_Registration_Info_UEnum_ECavrnusSpaceJoinMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3919926405U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACavrnusSpatialConnector, ACavrnusSpatialConnector::StaticClass, TEXT("ACavrnusSpatialConnector"), &Z_Registration_Info_UClass_ACavrnusSpatialConnector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACavrnusSpatialConnector), 1431732500U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_26973971(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CavrnusPlugin_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusSpatialConnector_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
