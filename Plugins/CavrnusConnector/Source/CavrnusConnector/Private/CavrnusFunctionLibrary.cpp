#include "Public/CavrnusFunctionLibrary.h"
#include "CavrnusConnectorModule.h"
#include <GameFramework/PlayerController.h>
#include <HAL/FileManager.h>
#include <Misc/FileHelper.h>
#include <Misc/Paths.h>
#include "Types/CavrnusCallbackTypes.h"
#include "LivePropertyUpdates/CavrnusLiveBoolPropertyUpdate.h"
#include "LivePropertyUpdates/CavrnusLiveColorPropertyUpdate.h"
#include "LivePropertyUpdates/CavrnusLiveFloatPropertyUpdate.h"
#include "LivePropertyUpdates/CavrnusLiveStringPropertyUpdate.h"
#include "LivePropertyUpdates/CavrnusLiveTransformPropertyUpdate.h"
#include "LivePropertyUpdates/CavrnusLiveVectorPropertyUpdate.h"
#include "Types\CavrnusPropertyValue.h"
#include "CavrnusSpatialConnectorSubSystem.h"
#include "RelayModel\CavrnusRelayModel.h"
#include "RelayModel\RelayCallbackModel.h"
#include "RelayModel\DataState.h"
#include "RelayModel\SpacePropertyModel.h"
#include "Types\PropertyId.h"
#include "RelayModel\SpacePermissionsModel.h"
#include "Translation\CavrnusProtoTranslation.h"
#include "CavrnusSpatialConnector.h"

void UCavrnusFunctionLibrary::Unbind(FCavrnusBinding Binding)
{
	if (Binding.Unhook)
	{
		Binding.Unhook();
	}
	else
	{
		UE_LOG(LogCavrnusConnector, Warning, TEXT("Unbinding FCavrnusBinding with no Unhook function"));
	}
}

#pragma region Data Model Access/Shutdown

// ============================================
// Data Model
// ============================================

Cavrnus::CavrnusRelayModel* UCavrnusFunctionLibrary::RelayModel = nullptr;

Cavrnus::CavrnusRelayModel* UCavrnusFunctionLibrary::GetDataModel()
{
	if (RelayModel == nullptr)
		RelayModel = new Cavrnus::CavrnusRelayModel();
	return RelayModel;
}

void UCavrnusFunctionLibrary::KillDataModel()
{
	if (RelayModel != nullptr)
	{
		delete RelayModel;
		RelayModel = nullptr;
	}
}

#pragma endregion

#pragma region Authentication

// ============================================
// Authentication Functions
// ============================================

UCavrnusSpatialConnectorSubSystemProxy* UCavrnusFunctionLibrary::GetCavrnusSpatialConnectorSubSystemProxy()
{
	TArray<UObject*> Results;
	GetObjectsOfClass(UCavrnusSpatialConnectorSubSystemProxy::StaticClass(), Results);

	UCavrnusSpatialConnectorSubSystemProxy* SpatialCore = nullptr;
	if (Results.Num() > 0)
	{
		ensure(Results.Num() == 1); // We don't expect more than one spatial core.
		SpatialCore = Cast<UCavrnusSpatialConnectorSubSystemProxy>(Results.Top());
	}

	return SpatialCore;
}

ACavrnusSpatialConnector* UCavrnusFunctionLibrary::GetCavrnusSpatialConnector()
{
	TArray<UObject*> Results;
	GetObjectsOfClass(ACavrnusSpatialConnector::StaticClass(), Results);

	ACavrnusSpatialConnector* SpatialConnector = nullptr;
	if (Results.Num() > 0)
	{
		ensure(Results.Num() == 1); // We don't expect more than one spatial core.
		SpatialConnector = Cast<ACavrnusSpatialConnector>(Results.Top());
	}

	return SpatialConnector;
}

bool UCavrnusFunctionLibrary::IsLoggedIn()
{
	return GetDataModel()->GetDataState()->CurrentAuthentication != nullptr;
}

void UCavrnusFunctionLibrary::AuthenticateWithPassword(FString Server, FString Email, FString Password, FCavrnusAuthRecv OnSuccess, FCavrnusError OnFailure)
{
	int RequestId = GetDataModel()->GetCallbackModel()->RegisterLoginPasswordCallback(OnSuccess, OnFailure);
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildAuthenticateWithPassword(RequestId, Server, Email, Password));
}

void UCavrnusFunctionLibrary::AuthenticateAsGuest(FString Server, FString UserName, FCavrnusAuthRecv OnSuccess, FCavrnusError OnFailure)
{
	int RequestId = GetDataModel()->GetCallbackModel()->RegisterLoginGuestCallback(OnSuccess, OnFailure);
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildAuthenticateGuest(RequestId, Server, UserName));
}

void UCavrnusFunctionLibrary::AwaitAuthentication(FCavrnusAuthRecv OnAuth)
{
	if (GetDataModel()->GetDataState()->CurrentAuthentication != nullptr)
		OnAuth.ExecuteIfBound(*GetDataModel()->GetDataState()->CurrentAuthentication);
	else
		GetDataModel()->GetCallbackModel()->RegisterAuthCallback(OnAuth);
}

#pragma endregion

#pragma region Spaces

// ============================================
// Space Functions
// ============================================

void UCavrnusFunctionLibrary::FetchJoinableSpaces(FCavrnusAllSpacesInfoEvent onRecvCurrentJoinableSpaces)
{
	int RequestId = GetDataModel()->GetCallbackModel()->RegisterFetchAvailableSpacesCallback(onRecvCurrentJoinableSpaces);
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildFetchAvailableSpaces(RequestId));
}

FCavrnusBinding UCavrnusFunctionLibrary::BindJoinableSpaces(FCavrnusSpaceInfoEvent SpaceAdded, FCavrnusSpaceInfoEvent SpaceUpdated, FCavrnusSpaceInfoEvent SpaceRemoved)
{
	return GetDataModel()->GetDataState()->BindJoinableSpaces(SpaceAdded, SpaceUpdated, SpaceRemoved);
}

bool UCavrnusFunctionLibrary::IsConnectedToAnySpace()
{
	return GetDataModel()->GetDataState()->GetCurrentSpaceConnections().Num() > 0;
}

void UCavrnusFunctionLibrary::JoinSpace(FString SpaceId, FCavrnusSpaceConnected OnConnected, FCavrnusError OnFailure)
{
	CavrnusSpaceConnected callback = [OnConnected](const FCavrnusSpaceConnection& val)
	{
		OnConnected.ExecuteIfBound(val);
	};
	CavrnusError errorCallback = [OnFailure](const FString& val)
	{
		OnFailure.ExecuteIfBound(val);
	};

	JoinSpace(SpaceId, callback, errorCallback);
}

void UCavrnusFunctionLibrary::JoinSpace(FString SpaceId, CavrnusSpaceConnected OnConnected, CavrnusError OnFailure)
{
	int RequestId = GetDataModel()->GetCallbackModel()->RegisterJoinSpaceCallback(OnConnected, OnFailure);
	GetDataModel()->GetCallbackModel()->HandleSpaceBeginLoading(SpaceId);
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildJoinSpaceWithId(RequestId, SpaceId));
}

void UCavrnusFunctionLibrary::AwaitAnySpaceBeginLoading(FCavrnusSpaceBeginLoading OnBeginLoading)
{
	CavrnusSpaceBeginLoading callback = [OnBeginLoading](const FString& val)
	{
		OnBeginLoading.ExecuteIfBound(val);
	};

	AwaitAnySpaceBeginLoading(callback);
}

void UCavrnusFunctionLibrary::AwaitAnySpaceBeginLoading(CavrnusSpaceBeginLoading OnBeginLoading)
{
	GetDataModel()->GetCallbackModel()->RegisterBeginLoadingSpaceCallback(OnBeginLoading);
}

void UCavrnusFunctionLibrary::AwaitAnySpaceConnection(FCavrnusSpaceConnected OnConnected)
{
	CavrnusSpaceConnected callback = [OnConnected](const FCavrnusSpaceConnection& SpaceConn)
	{
		OnConnected.ExecuteIfBound(SpaceConn);
	};

	AwaitAnySpaceConnection(callback);
}

void UCavrnusFunctionLibrary::AwaitAnySpaceConnection(CavrnusSpaceConnected OnConnected)
{
	GetDataModel()->GetDataState()->AwaitAnySpaceConnection(OnConnected);
}

void UCavrnusFunctionLibrary::ExitSpace(FCavrnusSpaceConnection SpaceConnection)
{
	CheckErrors(SpaceConnection);
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildExitSpaceMsg(SpaceConnection));
}

#pragma endregion

// ============================================
// Properties!
// ============================================

#pragma region Generic Prop Functions

void UCavrnusFunctionLibrary::DefineGenericPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, Cavrnus::FPropertyValue PropertyValue, bool overrideExistingDefault)
{
	CheckErrors(SpaceConnection);

	if (!overrideExistingDefault && GetDataModel()->GetSpacePropertyModel(SpaceConnection)->CurrDefinedProps.Contains(FPropertyId(ContainerName, PropertyName)))
		return;

	GetDataModel()->GetSpacePropertyModel(SpaceConnection)->SetIsDefined(FPropertyId(ContainerName, PropertyName));
	int localChangeId = GetDataModel()->GetSpacePropertyModel(SpaceConnection)->SetLocalPropVal(FPropertyId(ContainerName, PropertyName), PropertyValue);
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildDefinePropMsg(SpaceConnection, FPropertyId(ContainerName, PropertyName), PropertyValue, localChangeId));
}

Cavrnus::FPropertyValue UCavrnusFunctionLibrary::GetGenericPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName)
{
	CheckErrors(SpaceConnection);
	return GetDataModel()->GetSpacePropertyModel(SpaceConnection)->GetPropValue(FPropertyId(ContainerName, PropertyName));
}

FCavrnusBinding UCavrnusFunctionLibrary::BindGenericPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, const CavrnusPropertyFunction& OnPropertyUpdated)
{
	CheckErrors(SpaceConnection);

	return GetDataModel()->GetSpacePropertyModel(SpaceConnection)->BindProperty(FPropertyId(ContainerName, PropertyName), OnPropertyUpdated);
}

void UCavrnusFunctionLibrary::PostGenericPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, Cavrnus::FPropertyValue PropertyValue)
{
	CheckErrors(SpaceConnection);
	int localChangeId = GetDataModel()->GetSpacePropertyModel(SpaceConnection)->SetLocalPropVal(FPropertyId(ContainerName, PropertyName), PropertyValue);
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildUpdatePropMsg(SpaceConnection, FPropertyId(ContainerName, PropertyName), PropertyValue, localChangeId));
}

#pragma endregion


#pragma region Color Prop Functions

void UCavrnusFunctionLibrary::DefineColorPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FLinearColor PropertyValue)
{
	DefineGenericPropertyDefaultValue(SpaceConnection, ContainerName, PropertyName, Cavrnus::FPropertyValue::ColorPropValue(PropertyValue));
}

FLinearColor UCavrnusFunctionLibrary::GetColorPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName)
{
	return GetGenericPropertyValue(SpaceConnection, ContainerName, PropertyName).ColorValue;
}

FCavrnusBinding UCavrnusFunctionLibrary::BindColorPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FColorPropertyUpdated PropertyUpdateEvent)
{
	CavrnusPropertyFunction propUpdateCallback = [PropertyUpdateEvent](const Cavrnus::FPropertyValue& Prop, const FString& ContainerName, const FString& PropertyName)
	{
		PropertyUpdateEvent.ExecuteIfBound(Prop.ColorValue, ContainerName, PropertyName);
	};

	return BindGenericPropertyValue(SpaceConnection, ContainerName, PropertyName, propUpdateCallback);
}

FCavrnusBinding UCavrnusFunctionLibrary::BindColorPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, const CavrnusColorFunction& OnPropertyUpdated)
{
	CavrnusPropertyFunction propUpdateCallback = [OnPropertyUpdated](const Cavrnus::FPropertyValue& Prop, const FString& ContainerName, const FString& PropertyName)
	{
		OnPropertyUpdated(Prop.ColorValue, ContainerName, PropertyName);
	};

	return BindGenericPropertyValue(SpaceConnection, ContainerName, PropertyName, propUpdateCallback);
}

UCavrnusLiveColorPropertyUpdate* UCavrnusFunctionLibrary::BeginTransientColorPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FLinearColor PropertyValue)
{
	CheckErrors(SpaceConnection);

	UCavrnusLiveColorPropertyUpdate* res = NewObject<UCavrnusLiveColorPropertyUpdate>();
	res->Initialize(GetDataModel(), SpaceConnection, FPropertyId(ContainerName, PropertyName), PropertyValue);

	return res;
}

void UCavrnusFunctionLibrary::PostColorPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FLinearColor PropertyValue)
{
	PostGenericPropertyUpdate(SpaceConnection, ContainerName, PropertyName, Cavrnus::FPropertyValue::ColorPropValue(PropertyValue));
}

#pragma endregion

#pragma region Bool Prop Functions

void UCavrnusFunctionLibrary::DefineBoolPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, bool PropertyValue)
{
	DefineGenericPropertyDefaultValue(SpaceConnection, ContainerName, PropertyName, Cavrnus::FPropertyValue::BoolPropValue(PropertyValue));
}

bool UCavrnusFunctionLibrary::GetBoolPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName)
{
	return GetGenericPropertyValue(SpaceConnection, ContainerName, PropertyName).BoolValue;
}

FCavrnusBinding UCavrnusFunctionLibrary::BindBooleanPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FBoolPropertyUpdated PropertyUpdateEvent)
{
	CavrnusPropertyFunction propUpdateCallback = [PropertyUpdateEvent](const Cavrnus::FPropertyValue& Prop, const FString& ContainerName, const FString& PropertyName)
	{
		PropertyUpdateEvent.ExecuteIfBound(Prop.BoolValue, ContainerName, PropertyName);
	};

	return BindGenericPropertyValue(SpaceConnection, ContainerName, PropertyName, propUpdateCallback);
}

FCavrnusBinding UCavrnusFunctionLibrary::BindBooleanPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, const CavrnusBoolFunction& OnPropertyUpdated)
{
	CavrnusPropertyFunction propUpdateCallback = [OnPropertyUpdated](const Cavrnus::FPropertyValue& Prop, const FString& ContainerName, const FString& PropertyName)
	{
		OnPropertyUpdated(Prop.BoolValue, ContainerName, PropertyName);
	};

	return BindGenericPropertyValue(SpaceConnection, ContainerName, PropertyName, propUpdateCallback);
}

UCavrnusLiveBoolPropertyUpdate* UCavrnusFunctionLibrary::BeginTransientBoolPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, bool PropertyValue)
{
	CheckErrors(SpaceConnection);

	UCavrnusLiveBoolPropertyUpdate* res = NewObject<UCavrnusLiveBoolPropertyUpdate>();
	res->Initialize(GetDataModel(), SpaceConnection, FPropertyId(ContainerName, PropertyName), PropertyValue);

	return res;
}

void UCavrnusFunctionLibrary::PostBoolPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, bool PropertyValue)
{
	PostGenericPropertyUpdate(SpaceConnection, ContainerName, PropertyName, Cavrnus::FPropertyValue::BoolPropValue(PropertyValue));
}

#pragma endregion

#pragma region Float Prop Functions

void UCavrnusFunctionLibrary::DefineFloatPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, float PropertyValue)
{
	DefineGenericPropertyDefaultValue(SpaceConnection, ContainerName, PropertyName, Cavrnus::FPropertyValue::FloatPropValue(PropertyValue));
}

float UCavrnusFunctionLibrary::GetFloatPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName)
{
	return GetGenericPropertyValue(SpaceConnection, ContainerName, PropertyName).FloatValue;
}

FCavrnusBinding UCavrnusFunctionLibrary::BindFloatPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FFloatPropertyUpdated PropertyUpdateEvent)
{
	CavrnusPropertyFunction propUpdateCallback = [PropertyUpdateEvent](const Cavrnus::FPropertyValue& Prop, const FString& ContainerName, const FString& PropertyName)
	{
		PropertyUpdateEvent.ExecuteIfBound(Prop.FloatValue, ContainerName, PropertyName);
	};

	return BindGenericPropertyValue(SpaceConnection, ContainerName, PropertyName, propUpdateCallback);
}

FCavrnusBinding UCavrnusFunctionLibrary::BindFloatPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, const CavrnusFloatFunction& OnPropertyUpdated)
{
	CavrnusPropertyFunction propUpdateCallback = [OnPropertyUpdated](const Cavrnus::FPropertyValue& Prop, const FString& ContainerName, const FString& PropertyName)
	{
		OnPropertyUpdated(Prop.FloatValue, ContainerName, PropertyName);
	};

	return BindGenericPropertyValue(SpaceConnection, ContainerName, PropertyName, propUpdateCallback);
}

UCavrnusLiveFloatPropertyUpdate* UCavrnusFunctionLibrary::BeginTransientFloatPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, float PropertyValue)
{
	CheckErrors(SpaceConnection);

	UCavrnusLiveFloatPropertyUpdate* res = NewObject<UCavrnusLiveFloatPropertyUpdate>();
	res->Initialize(GetDataModel(), SpaceConnection, FPropertyId(ContainerName, PropertyName), PropertyValue);

	return res;
}

void UCavrnusFunctionLibrary::PostFloatPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, float PropertyValue)
{
	PostGenericPropertyUpdate(SpaceConnection, ContainerName, PropertyName, Cavrnus::FPropertyValue::FloatPropValue(PropertyValue));
}

#pragma endregion

#pragma region String Prop Functions

void UCavrnusFunctionLibrary::DefineStringPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FString PropertyValue)
{
	DefineGenericPropertyDefaultValue(SpaceConnection, ContainerName, PropertyName, Cavrnus::FPropertyValue::StringPropValue(PropertyValue));
}

FString UCavrnusFunctionLibrary::GetStringPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName)
{
	return GetGenericPropertyValue(SpaceConnection, ContainerName, PropertyName).StringValue;
}

FCavrnusBinding UCavrnusFunctionLibrary::BindStringPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FStringPropertyUpdated PropertyUpdateEvent)
{
	CavrnusPropertyFunction propUpdateCallback = [PropertyUpdateEvent](const Cavrnus::FPropertyValue& Prop, const FString& ContainerName, const FString& PropertyName)
	{
		PropertyUpdateEvent.ExecuteIfBound(Prop.StringValue, ContainerName, PropertyName);
	};

	return BindGenericPropertyValue(SpaceConnection, ContainerName, PropertyName, propUpdateCallback);
}

FCavrnusBinding UCavrnusFunctionLibrary::BindStringPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, const CavrnusStringFunction& OnPropertyUpdated)
{
	CavrnusPropertyFunction propUpdateCallback = [OnPropertyUpdated](const Cavrnus::FPropertyValue& Prop, const FString& ContainerName, const FString& PropertyName)
	{
		OnPropertyUpdated(Prop.StringValue, ContainerName, PropertyName);
	};

	return BindGenericPropertyValue(SpaceConnection, ContainerName, PropertyName, propUpdateCallback);
}

UCavrnusLiveStringPropertyUpdate* UCavrnusFunctionLibrary::BeginTransientStringPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FString PropertyValue)
{
	CheckErrors(SpaceConnection);

	UCavrnusLiveStringPropertyUpdate* res = NewObject<UCavrnusLiveStringPropertyUpdate>();
	res->Initialize(GetDataModel(), SpaceConnection, FPropertyId(ContainerName, PropertyName), PropertyValue);

	return res;
}

void UCavrnusFunctionLibrary::PostStringPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FString PropertyValue)
{
	PostGenericPropertyUpdate(SpaceConnection, ContainerName, PropertyName, Cavrnus::FPropertyValue::StringPropValue(PropertyValue));
}

#pragma endregion

#pragma region Vector Prop Functions

void UCavrnusFunctionLibrary::DefineVectorPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FVector4 PropertyValue)
{
	DefineGenericPropertyDefaultValue(SpaceConnection, ContainerName, PropertyName, Cavrnus::FPropertyValue::VectorPropValue(PropertyValue));
}

FVector4 UCavrnusFunctionLibrary::GetVectorPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName)
{
	return GetGenericPropertyValue(SpaceConnection, ContainerName, PropertyName).VectorValue;
}

FCavrnusBinding UCavrnusFunctionLibrary::BindVectorPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FVectorPropertyUpdated PropertyUpdateEvent)
{
	CavrnusPropertyFunction propUpdateCallback = [PropertyUpdateEvent](const Cavrnus::FPropertyValue& Prop, const FString& ContainerName, const FString& PropertyName)
	{
		PropertyUpdateEvent.ExecuteIfBound(Prop.VectorValue, ContainerName, PropertyName);
	};

	return BindGenericPropertyValue(SpaceConnection, ContainerName, PropertyName, propUpdateCallback);
}

FCavrnusBinding UCavrnusFunctionLibrary::BindVectorPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, const CavrnusVectorFunction& OnPropertyUpdated)
{
	CavrnusPropertyFunction propUpdateCallback = [OnPropertyUpdated](const Cavrnus::FPropertyValue& Prop, const FString& ContainerName, const FString& PropertyName)
	{
		OnPropertyUpdated(Prop.VectorValue, ContainerName, PropertyName);
	};

	return BindGenericPropertyValue(SpaceConnection, ContainerName, PropertyName, propUpdateCallback);
}

UCavrnusLiveVectorPropertyUpdate* UCavrnusFunctionLibrary::BeginTransientVectorPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FVector4 PropertyValue)
{
	CheckErrors(SpaceConnection);

	UCavrnusLiveVectorPropertyUpdate* res = NewObject<UCavrnusLiveVectorPropertyUpdate>();
	res->Initialize(GetDataModel(), SpaceConnection, FPropertyId(ContainerName, PropertyName), PropertyValue);

	return res;
}

void UCavrnusFunctionLibrary::PostVectorPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FVector4 PropertyValue)
{
	PostGenericPropertyUpdate(SpaceConnection, ContainerName, PropertyName, Cavrnus::FPropertyValue::VectorPropValue(PropertyValue));
}

#pragma endregion

#pragma region Transform Prop Functions

void UCavrnusFunctionLibrary::DefineTransformPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FTransform PropertyValue)
{
	DefineGenericPropertyDefaultValue(SpaceConnection, ContainerName, PropertyName, Cavrnus::FPropertyValue::TransformPropValue(PropertyValue));
}

FTransform UCavrnusFunctionLibrary::GetTransformPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName)
{
	return GetGenericPropertyValue(SpaceConnection, ContainerName, PropertyName).TransformValue;
}

FCavrnusBinding UCavrnusFunctionLibrary::BindTransformPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FTransformPropertyUpdated PropertyUpdateEvent)
{
	CavrnusPropertyFunction propUpdateCallback = [PropertyUpdateEvent](const Cavrnus::FPropertyValue& Prop, const FString& ContainerName, const FString& PropertyName)
	{
		PropertyUpdateEvent.ExecuteIfBound(Prop.TransformValue, ContainerName, PropertyName);
	};

	return BindGenericPropertyValue(SpaceConnection, ContainerName, PropertyName, propUpdateCallback);
}

FCavrnusBinding UCavrnusFunctionLibrary::BindTransformPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, const CavrnusTransformFunction& OnPropertyUpdated)
{
	CavrnusPropertyFunction propUpdateCallback = [OnPropertyUpdated](const Cavrnus::FPropertyValue& Prop, const FString& ContainerName, const FString& PropertyName)
	{
		OnPropertyUpdated(Prop.TransformValue, ContainerName, PropertyName);
	};

	return BindGenericPropertyValue(SpaceConnection, ContainerName, PropertyName, propUpdateCallback);
}

UCavrnusLiveTransformPropertyUpdate* UCavrnusFunctionLibrary::BeginTransientTransformPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FTransform PropertyValue)
{
	CheckErrors(SpaceConnection);

	UCavrnusLiveTransformPropertyUpdate* res = NewObject<UCavrnusLiveTransformPropertyUpdate>();
	res->Initialize(GetDataModel(), SpaceConnection, FPropertyId(ContainerName, PropertyName), PropertyValue);

	return res;
}

void UCavrnusFunctionLibrary::PostTransformPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FTransform PropertyValue)
{
	PostGenericPropertyUpdate(SpaceConnection, ContainerName, PropertyName, Cavrnus::FPropertyValue::TransformPropValue(PropertyValue));
}

#pragma endregion

#pragma region Permissions

UPARAM(DisplayName = "Disposable")FCavrnusBinding UCavrnusFunctionLibrary::BindGlobalPolicy(FString Policy, FCavrnusPolicyUpdated OnPolicyUpdated)
{
	CavrnusPolicyUpdated callback = [OnPolicyUpdated](const FString& policy, bool allowed)
	{
		OnPolicyUpdated.ExecuteIfBound(policy, allowed);
	};

	return BindGlobalPolicy(Policy, callback);
}

FCavrnusBinding UCavrnusFunctionLibrary::BindGlobalPolicy(FString Policy, CavrnusPolicyUpdated OnPolicyUpdated)
{
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildRequestGlobalPermission(Policy));

	return GetDataModel()->GetGlobalPermissionsModel()->BindPolicyAllowed(Policy, OnPolicyUpdated);
}

UPARAM(DisplayName = "Disposable")FCavrnusBinding UCavrnusFunctionLibrary::BindSpacePolicy(FCavrnusSpaceConnection SpaceConnection, FString Policy, FCavrnusPolicyUpdated OnPolicyUpdated)
{
	CavrnusPolicyUpdated callback = [OnPolicyUpdated](const FString& policy, bool allowed)
	{
		OnPolicyUpdated.ExecuteIfBound(policy, allowed);
	};

	return BindSpacePolicy(SpaceConnection, Policy, callback);
}

FCavrnusBinding UCavrnusFunctionLibrary::BindSpacePolicy(FCavrnusSpaceConnection SpaceConnection, FString Policy, CavrnusPolicyUpdated OnPolicyUpdated)
{
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildRequestSpacePermission(SpaceConnection, Policy));

	return GetDataModel()->GetSpacePermissionsModel(SpaceConnection)->BindPolicyAllowed(Policy, OnPolicyUpdated);
}

#pragma endregion


#pragma region Spawned Objects

UPARAM(DisplayName = "Container Name")FString UCavrnusFunctionLibrary::SpawnObject(FCavrnusSpaceConnection SpaceConnection, FString UniqueIdentifier, const FCavrnusSpawnedObjectArrived& spawnedObjectArrived)
{
	CheckErrors(SpaceConnection);

	CavrnusSpawnedObjectFunction propUpdateCallback = [spawnedObjectArrived](const FCavrnusSpawnedObject& SpawnedOb)
	{
		spawnedObjectArrived.ExecuteIfBound(SpawnedOb);
	};

	return SpawnObject(SpaceConnection, UniqueIdentifier, propUpdateCallback);
}

FString UCavrnusFunctionLibrary::SpawnObject(FCavrnusSpaceConnection SpaceConnection, FString UniqueIdentifier, CavrnusSpawnedObjectFunction spawnedObjectArrived)
{
	CheckErrors(SpaceConnection);

	FString InstanceId = CreateTransientId();

	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildCreateOp(SpaceConnection, UniqueIdentifier, InstanceId));

	TSharedPtr<CavrnusSpawnedObjectFunction> CallbackPtr = MakeShareable(new CavrnusSpawnedObjectFunction(spawnedObjectArrived));
	RelayModel->ObjectCreationCallbacks.Add(InstanceId, CallbackPtr);

	return InstanceId;
}

void UCavrnusFunctionLibrary::DestroyObject(FCavrnusSpawnedObject SpawnedObject)
{
	CheckErrors(SpawnedObject.SpaceConnection);
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildDestroyOp(SpawnedObject.SpaceConnection, SpawnedObject.CreationOpId));

}

FCavrnusSpawnedObject UCavrnusFunctionLibrary::GetIfIsSpawnedObject(FCavrnusSpaceConnection SpaceConnection, AActor* Actor)
{
	if (UCavrnusSpatialConnectorSubSystemProxy* SubProxy = UCavrnusFunctionLibrary::GetCavrnusSpatialConnectorSubSystemProxy())
	{
		return SubProxy->GetSpawnedObject(Actor);
	}

	return 	FCavrnusSpawnedObject();
}

#pragma endregion


#pragma region Space Users

// ============================================
// Space Users 
// ============================================

TArray<FCavrnusUser> UCavrnusFunctionLibrary::GetCurrentSpaceUsers(FCavrnusSpaceConnection SpaceConnection)
{
	CheckErrors(SpaceConnection);
	TArray<FCavrnusUser> users;
	GetDataModel()->GetSpacePropertyModel(SpaceConnection)->CurrSpaceUsers.GenerateValueArray(users);

	return users;
}

void UCavrnusFunctionLibrary::AwaitLocalUser(FCavrnusSpaceConnection SpaceConnection, FCavrnusSpaceUserEvent LocalUserArrived)
{
	CheckErrors(SpaceConnection);
	if (GetDataModel()->GetSpacePropertyModel(SpaceConnection)->LocalUser != nullptr)
	{
		LocalUserArrived.ExecuteIfBound(*GetDataModel()->GetSpacePropertyModel(SpaceConnection)->LocalUser);
	}
	else
	{
		GetDataModel()->GetSpacePropertyModel(SpaceConnection)->AwaitLocalUser(LocalUserArrived);
	}
}

FCavrnusBinding UCavrnusFunctionLibrary::BindSpaceUsers(FCavrnusSpaceConnection SpaceConnection, FCavrnusSpaceUserEvent UserAdded, FCavrnusSpaceUserEvent UserRemoved)
{
	CheckErrors(SpaceConnection);
	return GetDataModel()->GetSpacePropertyModel(SpaceConnection)->BindSpaceUsers(UserAdded, UserRemoved);
}

UPARAM(DisplayName = "Disposable") FCavrnusBinding UCavrnusFunctionLibrary::BindUserVideoFrames(FCavrnusSpaceConnection SpaceConnection, const FCavrnusUser& User, FCavrnusUserVideoFrameEvent OnVideoFrameUpdate)
{
	VideoFrameUpdateFunction VideoFrameUpdateCallback = [OnVideoFrameUpdate](UTexture2D* VideoTexture)
	{
		OnVideoFrameUpdate.ExecuteIfBound(VideoTexture);
	};

	return BindUserVideoFrames(SpaceConnection, User, VideoFrameUpdateCallback);
}

FCavrnusBinding UCavrnusFunctionLibrary::BindUserVideoFrames(FCavrnusSpaceConnection SpaceConnection, const FCavrnusUser& User, const VideoFrameUpdateFunction& OnVideoFrameUpdate)
{
	CheckErrors(SpaceConnection);
	return GetDataModel()->GetSpacePropertyModel(SpaceConnection)->BindUserVideoTexture(User, OnVideoFrameUpdate);
}

#pragma endregion

#pragma region Voice and Video

// ============================================
// Voice and Video
// ============================================

void UCavrnusFunctionLibrary::SetLocalUserMutedState(FCavrnusSpaceConnection SpaceConnection, bool bIsMuted)
{
	CheckErrors(SpaceConnection);
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildSetLocalUserMuted(SpaceConnection, bIsMuted));
}

void UCavrnusFunctionLibrary::SetLocalUserStreamingState(FCavrnusSpaceConnection SpaceConnection, bool bIsStreaming)
{
	CheckErrors(SpaceConnection);
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildSetLocalUserStreaming(SpaceConnection, bIsStreaming));
}

void UCavrnusFunctionLibrary::FetchAudioInputs(FCavrnusAvailableInputDevices OnReceiveDevices)
{
	int RequestId = GetDataModel()->GetCallbackModel()->RegisterFetchAudioInputs(OnReceiveDevices);

	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildRequestAudioInputs(RequestId));
}

void UCavrnusFunctionLibrary::UpdateAudioInput(FCavrnusInputDevice Device)
{
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildSetAudioInput(Device));
}

void UCavrnusFunctionLibrary::FetchAudioOutputs(FCavrnusAvailableOutputDevices OnReceiveDevices)
{
	int RequestId = GetDataModel()->GetCallbackModel()->RegisterFetchAudioOutputs(OnReceiveDevices);

	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildRequestAudioOutputs(RequestId));
}

void UCavrnusFunctionLibrary::UpdateAudioOutput(FCavrnusOutputDevice Device)
{
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildSetAudioOutput(Device));
}

void UCavrnusFunctionLibrary::FetchVideoInputs(FCavrnusAvailableVideoInputDevices OnReceiveDevices)
{
	int RequestId = GetDataModel()->GetCallbackModel()->RegisterFetchVideoInputs(OnReceiveDevices);

	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildRequestVideoInputs(RequestId));
}

void UCavrnusFunctionLibrary::UpdateVideoInput(FCavrnusVideoInputDevice Device)
{
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildSetVideoInput(Device));
}

void UCavrnusFunctionLibrary::FetchFileById(FString ContentId, FCavrnusContentProgressFunction OnProgress, FCavrnusContentFunction OnContentLoaded)
{
	CavrnusContentProgressFunction progressCallback = [OnProgress](const float prog, const FString& step)
	{
		OnProgress.ExecuteIfBound(prog, step);
	};

	CavrnusContentFunction completeCallback = [OnContentLoaded](const TArray<uint8>& bytes)
	{
		OnContentLoaded.ExecuteIfBound(bytes);
	};

	FetchFileById(ContentId, progressCallback, completeCallback);
}

void UCavrnusFunctionLibrary::FetchFileById(FString ContentId, const CavrnusContentProgressFunction& OnProgress, const CavrnusContentFunction& OnContentLoaded)
{
	//Sending this multiple times shouldn't hurt anything...
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildRequestFileById(ContentId));

	GetDataModel()->ContentModel.RegisterContentCallbacks(ContentId, OnProgress, OnContentLoaded);
}

void UCavrnusFunctionLibrary::FetchFileByIdToDisk(FString ContentId, FString FileDestination, FCavrnusContentProgressFunction OnProgress, FCavrnusContentFileFunction OnContentLoaded)
{
	CavrnusContentProgressFunction progressCallback = [OnProgress](const float prog, const FString& step)
	{
		OnProgress.ExecuteIfBound(prog, step);
	};

	const TFunction<void(FString)>& completeCallback = [OnContentLoaded](const FString& path)
	{
		OnContentLoaded.ExecuteIfBound(path);
	};

	FetchFileByIdToDisk(ContentId, FileDestination, progressCallback, completeCallback);
}

void UCavrnusFunctionLibrary::FetchFileByIdToDisk(FString ContentId, FString FileDestination, const CavrnusContentProgressFunction& OnProgress, const TFunction<void(FString)>& OnContentLoaded)
{
	CavrnusContentFunction callback = [FileDestination, OnContentLoaded](const TArray<uint8>& bytes)
	{
		FFileHelper::SaveArrayToFile(bytes, *FileDestination, &IFileManager::Get(), 0);
		OnContentLoaded(FileDestination);
	};

	FetchFileById(ContentId, OnProgress, callback);
}

void UCavrnusFunctionLibrary::FetchAllUploadedContent(FCavrnusRemoteContentFunction OnAvailableContentFetched)
{
	const CavrnusRemoteContentFunction remoteContentCallback = [OnAvailableContentFetched](const TArray<FCavrnusRemoteContent>& allContent)
	{
		OnAvailableContentFetched.ExecuteIfBound(allContent);
	};

	FetchAllUploadedContent(remoteContentCallback);
}

void UCavrnusFunctionLibrary::FetchAllUploadedContent(const CavrnusRemoteContentFunction& OnAvailableContentFetched)
{
	int RequestId = GetDataModel()->GetCallbackModel()->RegisterFetchAllAvailableContent(OnAvailableContentFetched);
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildRequestAllUploadedContent(RequestId));
}

void UCavrnusFunctionLibrary::UploadContent(FString FilePath, FCavrnusUploadCompleteFunction OnUploadComplete)
{
	UploadContentWithTags(FilePath, TMap<FString, FString>(), OnUploadComplete);
}

void UCavrnusFunctionLibrary::UploadContent(FString FilePath, const CavrnusUploadCompleteFunction& OnUploadComplete)
{
	UploadContentWithTags(FilePath, TMap<FString, FString>(), OnUploadComplete);
}

void UCavrnusFunctionLibrary::UploadContentWithTags(FString FilePath, TMap<FString, FString> Tags, FCavrnusUploadCompleteFunction OnUploadComplete)
{
	CavrnusUploadCompleteFunction callback = [OnUploadComplete](const FCavrnusRemoteContent& uploadedContent)
	{
		OnUploadComplete.ExecuteIfBound(uploadedContent);
	};

	UploadContentWithTags(FilePath, Tags, callback);
}

void UCavrnusFunctionLibrary::UploadContentWithTags(FString FilePath, TMap<FString, FString> Tags, const CavrnusUploadCompleteFunction& OnUploadComplete)
{
	int RequestId = GetDataModel()->GetCallbackModel()->RegisterUploadContent(OnUploadComplete);
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildUploadContent(RequestId, FilePath, Tags));
}

#pragma endregion

#pragma region ModeUtils

void UCavrnusFunctionLibrary::SetInputModeMix(UObject* WorldContextObject)
{
	if (WorldContextObject)
	{
		if (APlayerController* player = WorldContextObject->GetWorld()->GetFirstPlayerController())
		{
			FInputModeGameAndUI mdb;
			mdb.SetHideCursorDuringCapture(true);
			player->SetShowMouseCursor(true);
			player->SetInputMode(mdb);
		}
	}
}

#pragma endregion


