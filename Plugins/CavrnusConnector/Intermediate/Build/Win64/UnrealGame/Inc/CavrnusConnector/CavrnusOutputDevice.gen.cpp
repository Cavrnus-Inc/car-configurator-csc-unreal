// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CavrnusConnector/Public/Types/CavrnusOutputDevice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCavrnusOutputDevice() {}
// Cross Module References
	CAVRNUSCONNECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FCavrnusOutputDevice();
	UPackage* Z_Construct_UPackage__Script_CavrnusConnector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CavrnusOutputDevice;
class UScriptStruct* FCavrnusOutputDevice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CavrnusOutputDevice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CavrnusOutputDevice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCavrnusOutputDevice, Z_Construct_UPackage__Script_CavrnusConnector(), TEXT("CavrnusOutputDevice"));
	}
	return Z_Registration_Info_UScriptStruct_CavrnusOutputDevice.OuterSingleton;
}
template<> CAVRNUSCONNECTOR_API UScriptStruct* StaticStruct<FCavrnusOutputDevice>()
{
	return FCavrnusOutputDevice::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Types/CavrnusOutputDevice.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCavrnusOutputDevice>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Cavrnus|Input" },
		{ "ModuleRelativePath", "Public/Types/CavrnusOutputDevice.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusOutputDevice, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::NewProp_DeviceId_MetaData[] = {
		{ "Category", "Cavrnus|Input" },
		{ "ModuleRelativePath", "Public/Types/CavrnusOutputDevice.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCavrnusOutputDevice, DeviceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::NewProp_DeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::NewProp_DeviceId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::NewProp_DeviceId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CavrnusConnector,
		nullptr,
		&NewStructOps,
		"CavrnusOutputDevice",
		sizeof(FCavrnusOutputDevice),
		alignof(FCavrnusOutputDevice),
		Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCavrnusOutputDevice()
	{
		if (!Z_Registration_Info_UScriptStruct_CavrnusOutputDevice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CavrnusOutputDevice.InnerSingleton, Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CavrnusOutputDevice.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusOutputDevice_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusOutputDevice_h_Statics::ScriptStructInfo[] = {
		{ FCavrnusOutputDevice::StaticStruct, Z_Construct_UScriptStruct_FCavrnusOutputDevice_Statics::NewStructOps, TEXT("CavrnusOutputDevice"), &Z_Registration_Info_UScriptStruct_CavrnusOutputDevice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCavrnusOutputDevice), 2894616731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusOutputDevice_h_3341838518(TEXT("/Script/CavrnusConnector"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusOutputDevice_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_CavrnusConnector_Source_CavrnusConnector_Public_Types_CavrnusOutputDevice_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
