// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/CavrnusConnectorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusConnectorSettings() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusConnectorSettings_NoRegister();
	CAVRNUSCONNECTOR_API UClass* Z_Construct_UClass_UCavrnusConnectorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	void UCavrnusConnectorSettings::StaticRegisterNativesUCavrnusConnectorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCavrnusConnectorSettings);
	UClass* Z_Construct_UClass_UCavrnusConnectorSettings_NoRegister()
	{
		return UCavrnusConnectorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCavrnusConnectorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoStartConnector_MetaData[];
#endif
		static void NewProp_AutoStartConnector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoStartConnector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelayNetPort_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RelayNetPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelayNetIPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RelayNetIPAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelayNetExecutableRelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RelayNetExecutableRelativeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelayNetVerboseLogging_MetaData[];
#endif
		static void NewProp_RelayNetVerboseLogging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RelayNetVerboseLogging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelayNetLogOutputToFile_MetaData[];
#endif
		static void NewProp_RelayNetLogOutputToFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RelayNetLogOutputToFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCavrnusConnectorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusConnectorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CavrnusConnectorSettings.h" },
		{ "ModuleRelativePath", "Public/CavrnusConnectorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_AutoStartConnector_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "// Should we automatically try to launch CavrnusRelayNet and connect to it?\n" },
		{ "ModuleRelativePath", "Public/CavrnusConnectorSettings.h" },
		{ "ToolTip", "Should we automatically try to launch CavrnusRelayNet and connect to it?" },
	};
#endif
	void Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_AutoStartConnector_SetBit(void* Obj)
	{
		((UCavrnusConnectorSettings*)Obj)->AutoStartConnector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_AutoStartConnector = { "AutoStartConnector", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCavrnusConnectorSettings), &Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_AutoStartConnector_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_AutoStartConnector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_AutoStartConnector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetPort_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "// Port that the relay will use when launching the relay net .exe\n" },
		{ "ModuleRelativePath", "Public/CavrnusConnectorSettings.h" },
		{ "ToolTip", "Port that the relay will use when launching the relay net .exe" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetPort = { "RelayNetPort", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusConnectorSettings, RelayNetPort), METADATA_PARAMS(Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetIPAddress_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "// IP address that the relay will use when launching the relay net .exe\n" },
		{ "ModuleRelativePath", "Public/CavrnusConnectorSettings.h" },
		{ "ToolTip", "IP address that the relay will use when launching the relay net .exe" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetIPAddress = { "RelayNetIPAddress", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusConnectorSettings, RelayNetIPAddress), METADATA_PARAMS(Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetIPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetIPAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetExecutableRelativeLocation_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "// Relative location of the RelayNet .exe from the project root dir\n// \\todo make a version of this for plugin relative dir when we start shipping relaynet with plugin \n" },
		{ "ModuleRelativePath", "Public/CavrnusConnectorSettings.h" },
		{ "ToolTip", "Relative location of the RelayNet .exe from the project root dir\n\\todo make a version of this for plugin relative dir when we start shipping relaynet with plugin" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetExecutableRelativeLocation = { "RelayNetExecutableRelativeLocation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCavrnusConnectorSettings, RelayNetExecutableRelativeLocation), METADATA_PARAMS(Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetExecutableRelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetExecutableRelativeLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetVerboseLogging_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "// Optional Parameters:\n//   \"-v\" or \"-V\": Verbose logging in the CavrnusRelayNet process\n" },
		{ "ModuleRelativePath", "Public/CavrnusConnectorSettings.h" },
		{ "ToolTip", "Optional Parameters:\n  \"-v\" or \"-V\": Verbose logging in the CavrnusRelayNet process" },
	};
#endif
	void Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetVerboseLogging_SetBit(void* Obj)
	{
		((UCavrnusConnectorSettings*)Obj)->RelayNetVerboseLogging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetVerboseLogging = { "RelayNetVerboseLogging", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCavrnusConnectorSettings), &Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetVerboseLogging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetVerboseLogging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetVerboseLogging_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetLogOutputToFile_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "//   \"-f\" or \"-F\": Logging in the CavrnusRelayNet process saved to a file\n" },
		{ "ModuleRelativePath", "Public/CavrnusConnectorSettings.h" },
		{ "ToolTip", "\"-f\" or \"-F\": Logging in the CavrnusRelayNet process saved to a file" },
	};
#endif
	void Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetLogOutputToFile_SetBit(void* Obj)
	{
		((UCavrnusConnectorSettings*)Obj)->RelayNetLogOutputToFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetLogOutputToFile = { "RelayNetLogOutputToFile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCavrnusConnectorSettings), &Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetLogOutputToFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetLogOutputToFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetLogOutputToFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCavrnusConnectorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_AutoStartConnector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetIPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetExecutableRelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetVerboseLogging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCavrnusConnectorSettings_Statics::NewProp_RelayNetLogOutputToFile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCavrnusConnectorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCavrnusConnectorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCavrnusConnectorSettings_Statics::ClassParams = {
		&UCavrnusConnectorSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCavrnusConnectorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusConnectorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCavrnusConnectorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCavrnusConnectorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCavrnusConnectorSettings()
	{
		if (!Z_Registration_Info_UClass_UCavrnusConnectorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCavrnusConnectorSettings.OuterSingleton, Z_Construct_UClass_UCavrnusConnectorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCavrnusConnectorSettings.OuterSingleton;
	}
	template<> CAVRNUSCONNECTOR_API UClass* StaticClass<UCavrnusConnectorSettings>()
	{
		return UCavrnusConnectorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCavrnusConnectorSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusConnectorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusConnectorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCavrnusConnectorSettings, UCavrnusConnectorSettings::StaticClass, TEXT("UCavrnusConnectorSettings"), &Z_Registration_Info_UClass_UCavrnusConnectorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCavrnusConnectorSettings), 2329018975U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusConnectorSettings_h_2503333689(TEXT("/Script/CavrnusConnector"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusConnectorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_CavrnusConnectorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
