#include "Public/CavrnusFunctionLibrary.h"
#include "CavrnusConnectorModule.h"
#include <GameFramework/PlayerController.h>
#include <HAL/FileManager.h>
#include <Misc/Paths.h>
#include "Types/CavrnusCallbackTypes.h"
#include "Types/CavrnusLiveBoolPropertyUpdate.h"
#include "Types/CavrnusLiveColorPropertyUpdate.h"
#include "Types/CavrnusLiveFloatPropertyUpdate.h"
#include "Types/CavrnusLiveStringPropertyUpdate.h"
#include "Types/CavrnusLiveTransformPropertyUpdate.h"
#include "Types/CavrnusLiveVectorPropertyUpdate.h"
#include "RelayModel\CavrnusPropertyValue.h"
#include "CavrnusSpatialConnectorSubSystem.h"
#include "RelayModel\CavrnusRelayModel.h"
#include "RelayModel\RelayCallbackModel.h"
#include "RelayModel\DataState.h"
#include "RelayModel\SpacePropertyModel.h"
#include "RelayModel\PropertyId.h"
#include "RelayModel\SpacePermissionsModel.h"
#include "Translation\CavrnusProtoTranslation.h"

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
	int RequestId = GetDataModel()->GetCallbackModel()->RegisterJoinSpaceCallback(OnConnected, OnFailure);
	GetDataModel()->GetCallbackModel()->HandleSpaceBeginLoading(SpaceId);
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildJoinSpaceWithId(RequestId, SpaceId));
}

void UCavrnusFunctionLibrary::AwaitAnySpaceBeginLoading(FCavrnusSpaceBeginLoading OnBeginLoading)
{
	GetDataModel()->GetCallbackModel()->RegisterBeginLoadingSpaceCallback(OnBeginLoading);
}

void UCavrnusFunctionLibrary::AwaitAnySpaceConnection(FCavrnusSpaceConnected OnConnected)
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

#pragma region Color Prop Functions

void UCavrnusFunctionLibrary::DefineColorPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FLinearColor PropertyValue)
{
	CheckErrors(SpaceConnection);
	int localChangeId = GetDataModel()->GetSpacePropertyModel(SpaceConnection)->SetLocalPropVal(Cavrnus::PropertyId(ContainerName, PropertyName), Cavrnus::FPropertyValue::ColorPropValue(PropertyValue));
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildDefineColorPropMsg(SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue, localChangeId));
}

FLinearColor UCavrnusFunctionLibrary::GetColorPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName)
{
	CheckErrors(SpaceConnection);
	return GetDataModel()->GetSpacePropertyModel(SpaceConnection)->GetColorPropValue(Cavrnus::PropertyId(ContainerName, PropertyName));
}

FCavrnusBinding UCavrnusFunctionLibrary::BindColorPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FColorPropertyUpdated PropertyUpdateEvent)
{
	CheckErrors(SpaceConnection);
	return GetDataModel()->GetSpacePropertyModel(SpaceConnection)->BindColorProperty(Cavrnus::PropertyId(ContainerName, PropertyName), PropertyUpdateEvent);
}

UCavrnusLiveColorPropertyUpdate* UCavrnusFunctionLibrary::BeginTransientColorPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FLinearColor PropertyValue)
{
	CheckErrors(SpaceConnection);

	UCavrnusLiveColorPropertyUpdate* res = NewObject<UCavrnusLiveColorPropertyUpdate>();
	res->Initialize(GetDataModel(), SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue);

	return res;
}

void UCavrnusFunctionLibrary::PostColorPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FLinearColor PropertyValue)
{
	CheckErrors(SpaceConnection);
	int localChangeId = GetDataModel()->GetSpacePropertyModel(SpaceConnection)->SetLocalPropVal(Cavrnus::PropertyId(ContainerName, PropertyName), Cavrnus::FPropertyValue::ColorPropValue(PropertyValue));
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildUpdateColorPropMsg(SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue, localChangeId));
}

#pragma endregion

#pragma region Bool Prop Functions

void UCavrnusFunctionLibrary::DefineBoolPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, bool PropertyValue)
{
	CheckErrors(SpaceConnection);
	int localChangeId = GetDataModel()->GetSpacePropertyModel(SpaceConnection)->SetLocalPropVal(Cavrnus::PropertyId(ContainerName, PropertyName), Cavrnus::FPropertyValue::BoolPropValue(PropertyValue));
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildDefineBoolPropMsg(SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue, localChangeId));
}

bool UCavrnusFunctionLibrary::GetBoolPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName)
{
	CheckErrors(SpaceConnection);
	return GetDataModel()->GetSpacePropertyModel(SpaceConnection)->GetBoolPropValue(Cavrnus::PropertyId(ContainerName, PropertyName));
}

FCavrnusBinding UCavrnusFunctionLibrary::BindBooleanPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FBoolPropertyUpdated PropertyUpdateEvent)
{
	CheckErrors(SpaceConnection);
	return GetDataModel()->GetSpacePropertyModel(SpaceConnection)->BindBoolProperty(Cavrnus::PropertyId(ContainerName, PropertyName), PropertyUpdateEvent);
}

UCavrnusLiveBoolPropertyUpdate* UCavrnusFunctionLibrary::BeginTransientBoolPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, bool PropertyValue)
{
	CheckErrors(SpaceConnection);

	UCavrnusLiveBoolPropertyUpdate* res = NewObject<UCavrnusLiveBoolPropertyUpdate>();
	res->Initialize(GetDataModel(), SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue);

	return res;
}

void UCavrnusFunctionLibrary::PostBoolPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, bool PropertyValue)
{
	CheckErrors(SpaceConnection);
	int localChangeId = GetDataModel()->GetSpacePropertyModel(SpaceConnection)->SetLocalPropVal(Cavrnus::PropertyId(ContainerName, PropertyName), Cavrnus::FPropertyValue::BoolPropValue(PropertyValue));
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildUpdateBoolPropMsg(SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue, localChangeId));
}

#pragma endregion

#pragma region Float Prop Functions

void UCavrnusFunctionLibrary::DefineFloatPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, float PropertyValue)
{
	CheckErrors(SpaceConnection);
	int localChangeId = GetDataModel()->GetSpacePropertyModel(SpaceConnection)->SetLocalPropVal(Cavrnus::PropertyId(ContainerName, PropertyName), Cavrnus::FPropertyValue::FloatPropValue(PropertyValue));
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildDefineFloatPropMsg(SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue, localChangeId));
}

float UCavrnusFunctionLibrary::GetFloatPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName)
{
	CheckErrors(SpaceConnection);
	return GetDataModel()->GetSpacePropertyModel(SpaceConnection)->GetFloatPropValue(Cavrnus::PropertyId(ContainerName, PropertyName));
}

FCavrnusBinding UCavrnusFunctionLibrary::BindFloatPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FFloatPropertyUpdated PropertyUpdateEvent)
{
	CheckErrors(SpaceConnection);
	return GetDataModel()->GetSpacePropertyModel(SpaceConnection)->BindFloatProperty(Cavrnus::PropertyId(ContainerName, PropertyName), PropertyUpdateEvent);
}

UCavrnusLiveFloatPropertyUpdate* UCavrnusFunctionLibrary::BeginTransientFloatPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, float PropertyValue)
{
	CheckErrors(SpaceConnection);

	UCavrnusLiveFloatPropertyUpdate* res = NewObject<UCavrnusLiveFloatPropertyUpdate>();
	res->Initialize(GetDataModel(), SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue);

	return res;
}

void UCavrnusFunctionLibrary::PostFloatPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, float PropertyValue)
{
	CheckErrors(SpaceConnection);
	int localChangeId = GetDataModel()->GetSpacePropertyModel(SpaceConnection)->SetLocalPropVal(Cavrnus::PropertyId(ContainerName, PropertyName), Cavrnus::FPropertyValue::FloatPropValue(PropertyValue));
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildUpdateFloatPropMsg(SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue, localChangeId));
}

#pragma endregion

#pragma region String Prop Functions

void UCavrnusFunctionLibrary::DefineStringPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FString PropertyValue)
{
	CheckErrors(SpaceConnection);
	int localChangeId = GetDataModel()->GetSpacePropertyModel(SpaceConnection)->SetLocalPropVal(Cavrnus::PropertyId(ContainerName, PropertyName), Cavrnus::FPropertyValue::StringPropValue(PropertyValue));
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildDefineStringPropMsg(SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue, localChangeId));
}

FString UCavrnusFunctionLibrary::GetStringPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName)
{
	CheckErrors(SpaceConnection);
	return GetDataModel()->GetSpacePropertyModel(SpaceConnection)->GetStringPropValue(Cavrnus::PropertyId(ContainerName, PropertyName));
}

FCavrnusBinding UCavrnusFunctionLibrary::BindStringPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FStringPropertyUpdated PropertyUpdateEvent)
{
	CheckErrors(SpaceConnection);
	return GetDataModel()->GetSpacePropertyModel(SpaceConnection)->BindStringProperty(Cavrnus::PropertyId(ContainerName, PropertyName), PropertyUpdateEvent);
}


UCavrnusLiveStringPropertyUpdate* UCavrnusFunctionLibrary::BeginTransientStringPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FString PropertyValue)
{
	CheckErrors(SpaceConnection);

	UCavrnusLiveStringPropertyUpdate* res = NewObject<UCavrnusLiveStringPropertyUpdate>();
	res->Initialize(GetDataModel(), SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue);

	return res;
}

void UCavrnusFunctionLibrary::PostStringPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FString PropertyValue)
{
	CheckErrors(SpaceConnection);
	int localChangeId = GetDataModel()->GetSpacePropertyModel(SpaceConnection)->SetLocalPropVal(Cavrnus::PropertyId(ContainerName, PropertyName), Cavrnus::FPropertyValue::StringPropValue(PropertyValue));
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildUpdateStringPropMsg(SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue, localChangeId));
}

#pragma endregion

#pragma region Vector Prop Functions

void UCavrnusFunctionLibrary::DefineVectorPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FVector4 PropertyValue)
{
	CheckErrors(SpaceConnection);
	int localChangeId = GetDataModel()->GetSpacePropertyModel(SpaceConnection)->SetLocalPropVal(Cavrnus::PropertyId(ContainerName, PropertyName), Cavrnus::FPropertyValue::VectorPropValue(PropertyValue));
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildDefineVectorPropMsg(SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue, localChangeId));
}

FVector4 UCavrnusFunctionLibrary::GetVectorPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName)
{
	CheckErrors(SpaceConnection);
	return GetDataModel()->GetSpacePropertyModel(SpaceConnection)->GetVectorPropValue(Cavrnus::PropertyId(ContainerName, PropertyName));
}

FCavrnusBinding UCavrnusFunctionLibrary::BindVectorPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FVectorPropertyUpdated PropertyUpdateEvent)
{
	return GetDataModel()->GetSpacePropertyModel(SpaceConnection)->BindVectorProperty(Cavrnus::PropertyId(ContainerName, PropertyName), PropertyUpdateEvent);
}

UCavrnusLiveVectorPropertyUpdate* UCavrnusFunctionLibrary::BeginTransientVectorPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FVector4 PropertyValue)
{
	CheckErrors(SpaceConnection);

	UCavrnusLiveVectorPropertyUpdate* res = NewObject<UCavrnusLiveVectorPropertyUpdate>();
	res->Initialize(GetDataModel(), SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue);

	return res;
}

void UCavrnusFunctionLibrary::PostVectorPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FVector4 PropertyValue)
{
	CheckErrors(SpaceConnection);
	int localChangeId = GetDataModel()->GetSpacePropertyModel(SpaceConnection)->SetLocalPropVal(Cavrnus::PropertyId(ContainerName, PropertyName), Cavrnus::FPropertyValue::VectorPropValue(PropertyValue));
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildUpdateVectorPropMsg(SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue, localChangeId));
}

#pragma endregion

#pragma region Transform Prop Functions

void UCavrnusFunctionLibrary::DefineTransformPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FTransform PropertyValue)
{
	CheckErrors(SpaceConnection);
	int localChangeId = GetDataModel()->GetSpacePropertyModel(SpaceConnection)->SetLocalPropVal(Cavrnus::PropertyId(ContainerName, PropertyName), Cavrnus::FPropertyValue::TransformPropValue(PropertyValue));
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildDefineTransformPropMsg(SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue, localChangeId));
}

FTransform UCavrnusFunctionLibrary::GetTransformPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName)
{
	CheckErrors(SpaceConnection);
	return GetDataModel()->GetSpacePropertyModel(SpaceConnection)->GetTransformPropValue(Cavrnus::PropertyId(ContainerName, PropertyName));
}

FCavrnusBinding UCavrnusFunctionLibrary::BindTransformPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FTransformPropertyUpdated PropertyUpdateEvent)
{
	CheckErrors(SpaceConnection);
	return GetDataModel()->GetSpacePropertyModel(SpaceConnection)->BindTransformProperty(Cavrnus::PropertyId(ContainerName, PropertyName), PropertyUpdateEvent);
}

UCavrnusLiveTransformPropertyUpdate* UCavrnusFunctionLibrary::BeginTransientTransformPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FTransform PropertyValue)
{
	CheckErrors(SpaceConnection);

	UCavrnusLiveTransformPropertyUpdate* res = NewObject<UCavrnusLiveTransformPropertyUpdate>();
	res->Initialize(GetDataModel(), SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue);

	return res;
}

void UCavrnusFunctionLibrary::PostTransformPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FTransform PropertyValue)
{
	CheckErrors(SpaceConnection);
	int localChangeId = GetDataModel()->GetSpacePropertyModel(SpaceConnection)->SetLocalPropVal(Cavrnus::PropertyId(ContainerName, PropertyName), Cavrnus::FPropertyValue::TransformPropValue(PropertyValue));
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildUpdateTransformPropMsg(SpaceConnection, Cavrnus::PropertyId(ContainerName, PropertyName), PropertyValue, localChangeId));
}

#pragma endregion

#pragma region Permissions

UPARAM(DisplayName = "Disposable")FCavrnusBinding UCavrnusFunctionLibrary::BindGlobalPolicy(FString Policy, FCavrnusPolicyUpdated OnPolicyUpdated)
{
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildRequestGlobalPermission(Policy));

	return GetDataModel()->GetGlobalPermissionsModel()->BindPolicyAllowed(Policy, OnPolicyUpdated);
}

UPARAM(DisplayName = "Disposable")FCavrnusBinding UCavrnusFunctionLibrary::BindSpacePolicy(FCavrnusSpaceConnection SpaceConnection, FString Policy, FCavrnusPolicyUpdated OnPolicyUpdated)
{
	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildRequestSpacePermission(SpaceConnection, Policy));

	return GetDataModel()->GetSpacePermissionsModel(SpaceConnection)->BindPolicyAllowed(Policy, OnPolicyUpdated);
}

#pragma endregion


#pragma region Spawned Objects

FString UCavrnusFunctionLibrary::SpawnObject(FCavrnusSpaceConnection SpaceConnection, FString UniqueIdentifier)
{
	CheckErrors(SpaceConnection);

	FString InstanceId = CreateTransientId();

	GetDataModel()->SendMessage(Cavrnus::CavrnusProtoTranslation::BuildCreateOp(SpaceConnection, UniqueIdentifier, InstanceId));

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


