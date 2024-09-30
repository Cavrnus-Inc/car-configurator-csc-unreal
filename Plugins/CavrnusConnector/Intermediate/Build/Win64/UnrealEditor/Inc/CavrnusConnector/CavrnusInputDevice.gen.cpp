// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Types/CavrnusInputDevice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusInputDevice() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusInputDevice();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CavrnusInputDevice;
class UScriptStruct* FCavrnusInputDevice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CavrnusInputDevice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CavrnusInputDevice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCavrnusInputDevice, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("CavrnusInputDevice"));
	}
	return Z_Registration_Info_UScriptStruct_CavrnusInputDevice.OuterSingleton;
}
template<> CAVRNUSCONNECTOR_API UScriptStruct* StaticStruct<FCavrnusInputDevice>()
{
	return FCavrnusInputDevice::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* @brief Structure to hold information about an audio input device (microphone) in Cavrnus.\n*\n* The FCavrnusInputDevice structure contains fields representing metadata about an available microphone in Cavrnus.\n* This includes the device name and device ID, which can be used for selecting and displaying audio input options in the user interface.\n*/" },
		{ "ModuleRelativePath", "Public/Types/CavrnusInputDevice.h" },
		{ "ToolTip", "@brief Structure to hold information about an audio input device (microphone) in Cavrnus.\n\nThe FCavrnusInputDevice structure contains fields representing metadata about an available microphone in Cavrnus.\nThis includes the device name and device ID, which can be used for selecting and displaying audio input options in the user interface." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCavrnusInputDevice>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Cavrnus|Input" },
		{ "Comment", "/** The name of the audio input device. Useful for displaying the device in a UI selector. */" },
		{ "ModuleRelativePath", "Public/Types/CavrnusInputDevice.h" },
		{ "ToolTip", "The name of the audio input device. Useful for displaying the device in a UI selector." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusInputDevice, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::NewProp_DeviceId_MetaData[] = {
		{ "Category", "Cavrnus|Input" },
		{ "Comment", "/** The unique identifier for the audio input device. */" },
		{ "ModuleRelativePath", "Public/Types/CavrnusInputDevice.h" },
		{ "ToolTip", "The unique identifier for the audio input device." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusInputDevice, DeviceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::NewProp_DeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::NewProp_DeviceId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::NewProp_DeviceId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		&NewStructOps,
		"CavrnusInputDevice",
		sizeof(FCavrnusInputDevice),
		alignof(FCavrnusInputDevice),
		Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCavrnusInputDevice()
	{
		if (!Z_Registration_Info_UScriptStruct_CavrnusInputDevice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CavrnusInputDevice.InnerSingleton, Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CavrnusInputDevice.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusInputDevice_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusInputDevice_h_Statics::ScriptStructInfo[] = {
		{ FCavrnusInputDevice::StaticStruct, Z_Construct_UScriptStruct_FCavrnusInputDevice_Statics::NewStructOps, TEXT("CavrnusInputDevice"), &Z_Registration_Info_UScriptStruct_CavrnusInputDevice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCavrnusInputDevice), 2461686785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusInputDevice_h_83465718(TEXT("/Script/CavrnusConnector"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusInputDevice_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusInputDevice_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
