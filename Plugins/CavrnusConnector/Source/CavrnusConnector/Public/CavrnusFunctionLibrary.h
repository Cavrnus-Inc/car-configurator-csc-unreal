// Includes
#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <Containers/Map.h>
#include <Delegates/Delegate.h>
#include "Types/CavrnusInputDevice.h"
#include "Types/CavrnusOutputDevice.h"
#include "Types/CavrnusVideoInputDevice.h"
#include "Types/CavrnusAuthentication.h"
#include "Types/CavrnusSpaceConnection.h"
#include "Types/CavrnusSpaceInfo.h"
#include "Types/CavrnusUser.h"
#include "Types/CavrnusSpawnedObject.h"
#include "Types/CavrnusBinding.h"
#include "../Private/RelayModel/PropertyId.h"
#include "Types/CavrnusCallbackTypes.h"
#include "../Private/RelayModel/CavrnusRelayModel.h"

#include <algorithm>

// Always last
#include "CavrnusFunctionLibrary.generated.h"

// ============================================
// Extra Types
// ============================================

// Forward declarations
class UCavrnusLiveBoolPropertyUpdate;
class UCavrnusLiveColorPropertyUpdate;
class UCavrnusLiveFloatPropertyUpdate;
class UCavrnusLiveStringPropertyUpdate;
class UCavrnusLiveTransformPropertyUpdate;
class UCavrnusLiveVectorPropertyUpdate;

// ============================================
// Class Definition
// ============================================
UCLASS(Abstract)
class CAVRNUSCONNECTOR_API UCavrnusFunctionLibrary : public UBlueprintFunctionLibrary
{

	GENERATED_BODY()

	// Functions
public:

	//Stop listening for property updated
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Bindings",
		meta = (ToolTip = "Unregisters the Binding so the callback will no longer be hit", ShortToolTip = "Unregisters the binding"))
	static void Unbind(FCavrnusBinding disposable);

#pragma region Data Model Access/Shutdown

	static Cavrnus::CavrnusRelayModel* GetDataModel();
	static void KillDataModel();

#pragma endregion

#pragma region Authentication

	// ============================================
	// Authentication Functions
	// ============================================

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus")
	static class UCavrnusSpatialConnectorSubSystemProxy* GetCavrnusSpatialConnectorSubSystemProxy();

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Authentication",
		meta = (ToolTip = "Checks if you are logged in", ShortToolTip = "Checks if you are logged in"))
	static bool IsLoggedIn();

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Authentication",
		meta = (ToolTip = "Gets guest user credentials, allowing you to join valid spaces and make other requests", ShortToolTip = "Gets guest user credentials"))
	static void AuthenticateWithPassword(FString Server, FString Email, FString Password, FCavrnusAuthRecv OnSuccess, FCavrnusError OnFailure);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Authentication",
		meta = (ToolTip = "Gets guest user credentials via a link, and informs you of the spaceId you should then join", ShortToolTip = "Gets guest user credentials via a link"))
	static void AuthenticateAsGuest(FString Server, FString UserName, FCavrnusAuthRecv OnSuccess, FCavrnusError OnFailure);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Authentication",
		meta = (ToolTip = "Throws an event when user authentication is complete", ShortToolTip = "Throws an event when user authentication is complete"))
	static void AwaitAuthentication(FCavrnusAuthRecv OnAuth);

#pragma endregion

#pragma region Spaces

	// ============================================
	// Space Functions
	// ============================================

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Spaces",
		meta = (ToolTip = "Gets a list of all current spaces which can be joined", ShortToolTip = "Gets a list of all current spaces which can be joined"))
	static void FetchJoinableSpaces(FCavrnusAllSpacesInfoEvent OnRecvCurrentJoinableSpaces);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Spaces",
		meta = (ToolTip = "Triggers when spaces become available to you that you can join, or when their metadata changes", ShortToolTip = "Maintains a list of spaces"))
	static UPARAM(DisplayName = "Disposable") FCavrnusBinding BindJoinableSpaces(FCavrnusSpaceInfoEvent SpaceAdded, FCavrnusSpaceInfoEvent SpaceUpdated, FCavrnusSpaceInfoEvent SpaceRemoved);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Spaces",
		meta = (ToolTip = "Checks if there is any active connection to a space", ShortToolTip = "Checks if you are connected to a space"))
	static bool IsConnectedToAnySpace();

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Spaces",
		meta = (ToolTip = "Connects to a Space; joining voice & video and recieving/processing the journal", ShortToolTip = "Connects to a Space"))
	static void JoinSpace(FString SpaceId, FCavrnusSpaceConnected OnConnected, FCavrnusError OnFailure);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Spaces",
		meta = (ToolTip = "Triggers when you begin attempting to join a space, returning the ID of the space being joined", ShortToolTip = "Triggers when you begin attempting to join a space"))
	static void AwaitAnySpaceBeginLoading(FCavrnusSpaceBeginLoading OnConnected);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Spaces",
		meta = (ToolTip = "Triggers immediately if you are already in a space, otherwise triggers as soon as you connect", ShortToolTip = "Triggers as soon as you connect to a space"))
	static void AwaitAnySpaceConnection(FCavrnusSpaceConnected OnConnected);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Spaces",
		meta = (ToolTip = "Disconnects you from a given space.  You will stop recieving property updates, and lose user & voice connections", ShortToolTip = "Disconnects you from a given space"))
	static void ExitSpace(FCavrnusSpaceConnection SpaceConnection);

#pragma endregion

	// ============================================
	// Property Functions
	// ============================================

#pragma region Color Prop Functions
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Defines what the application will show if a new prop value has not been assigned", ShortToolTip = "Defines the Propertie's initial value"))
	static void DefineColorPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FLinearColor PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Gets the current property value, whether the default or the one currently set", ShortToolTip = "Gets the current value"))
	static FLinearColor GetColorPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Triggers an Event when the property changes, plus an inital event when first bound", ShortToolTip = "Triggers an Event when the property changes"))
	static UPARAM(DisplayName = "Disposable") FCavrnusBinding BindColorPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FColorPropertyUpdated OnPropertyUpdated);

	static FCavrnusBinding BindColorPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, const CavrnusColorFunction& OnPropertyUpdated);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Begins a temporary property update.  This will show for everyone in the space, but will not be saved unless finalized with a PostPropertyUpdate.", ShortToolTip = "Sends a temporary property update to the server"))
	static UCavrnusLiveColorPropertyUpdate* BeginTransientColorPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FLinearColor PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Updates the property value at the given path and synchronizes the data to the server", ShortToolTip = "Updates the property value at the given path"))
	static void PostColorPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FLinearColor PropertyValue);
#pragma endregion

#pragma region Bool Prop Functions
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Defines what the application will show if a new prop value has not been assigned", ShortToolTip = "Defines the Propertie's initial value"))
	static void DefineBoolPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, bool PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Gets the current property value, whether the default or the one currently set", ShortToolTip = "Gets the current value"))
	static bool GetBoolPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Triggers an Event when the property changes, plus an inital event when first bound", ShortToolTip = "Triggers an Event when the property changes"))
	static UPARAM(DisplayName = "Disposable") FCavrnusBinding BindBooleanPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FBoolPropertyUpdated OnPropertyUpdated);

	static FCavrnusBinding BindBooleanPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, const CavrnusBoolFunction& OnPropertyUpdated);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Begins a temporary property update.  This will show for everyone in the space, but will not be saved unless finalized with a PostPropertyUpdate.", ShortToolTip = "Sends a temporary property update to the server"))
	static UCavrnusLiveBoolPropertyUpdate* BeginTransientBoolPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, bool PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Updates the property value at the given path and synchronizes the data to the server", ShortToolTip = "Updates the property value at the given path"))
	static void PostBoolPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, bool PropertyValue);
#pragma endregion

#pragma region Float Prop Functions
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Defines what the application will show if a new prop value has not been assigned", ShortToolTip = "Defines the Propertie's initial value"))
	static void DefineFloatPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, float PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Gets the current property value, whether the default or the one currently set", ShortToolTip = "Gets the current value"))
	static float GetFloatPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Triggers an Event when the property changes, plus an inital event when first bound", ShortToolTip = "Triggers an Event when the property changes"))
	static UPARAM(DisplayName = "Disposable") FCavrnusBinding BindFloatPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FFloatPropertyUpdated OnPropertyUpdated);
	
	static FCavrnusBinding BindFloatPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, const CavrnusFloatFunction& OnPropertyUpdated);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Begins a temporary property update.  This will show for everyone in the space, but will not be saved unless finalized with a PostPropertyUpdate.", ShortToolTip = "Sends a temporary property update to the server"))
	static UCavrnusLiveFloatPropertyUpdate* BeginTransientFloatPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, float PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Updates the property value at the given path and synchronizes the data to the server", ShortToolTip = "Updates the property value at the given path"))
	static void PostFloatPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, float PropertyValue);
#pragma endregion

#pragma region String Prop Functions
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Defines what the application will show if a new prop value has not been assigned", ShortToolTip = "Defines the Propertie's initial value"))
	static void DefineStringPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FString PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Gets the current property value, whether the default or the one currently set", ShortToolTip = "Gets the current value"))
	static FString GetStringPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Triggers an Event when the property changes, plus an inital event when first bound", ShortToolTip = "Triggers an Event when the property changes"))
	static UPARAM(DisplayName = "Disposable") FCavrnusBinding BindStringPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FStringPropertyUpdated OnPropertyUpdated);
	
	static FCavrnusBinding BindStringPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, const CavrnusStringFunction& OnPropertyUpdated);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Begins a temporary property update.  This will show for everyone in the space, but will not be saved unless finalized with a PostPropertyUpdate.", ShortToolTip = "Sends a temporary property update to the server"))
	static UCavrnusLiveStringPropertyUpdate* BeginTransientStringPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FString PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Updates the property value at the given path and synchronizes the data to the server", ShortToolTip = "Updates the property value at the given path"))
	static void PostStringPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FString PropertyValue);
#pragma endregion

#pragma region Vector Prop Functions
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Defines what the application will show if a new prop value has not been assigned", ShortToolTip = "Defines the Propertie's initial value"))
	static void DefineVectorPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FVector4 PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Gets the current property value, whether the default or the one currently set", ShortToolTip = "Gets the current value"))
	static FVector4 GetVectorPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Triggers an Event when the property changes, plus an inital event when first bound", ShortToolTip = "Triggers an Event when the property changes"))
	static UPARAM(DisplayName = "Disposable") FCavrnusBinding BindVectorPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FVectorPropertyUpdated OnPropertyUpdated);
	
	static FCavrnusBinding BindVectorPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, const CavrnusVectorFunction& OnPropertyUpdated);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Begins a temporary property update.  This will show for everyone in the space, but will not be saved unless finalized with a PostPropertyUpdate.", ShortToolTip = "Sends a temporary property update to the server"))
	static UCavrnusLiveVectorPropertyUpdate* BeginTransientVectorPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FVector4 PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Updates the property value at the given path and synchronizes the data to the server", ShortToolTip = "Updates the property value at the given path"))
	static void PostVectorPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FVector4 PropertyValue);
#pragma endregion

#pragma region Transform Prop Functions
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Defines what the application will show if a new prop value has not been assigned", ShortToolTip = "Defines the Propertie's initial value"))
	static void DefineTransformPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FTransform PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Internal",
		meta = (ToolTip = "Gets the current property value, whether the default or the one currently set", ShortToolTip = "Gets the current value"))
	static FTransform GetTransformPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Triggers an Event when the property changes, plus an inital event when first bound", ShortToolTip = "Triggers an Event when the property changes"))
	static UPARAM(DisplayName = "Disposable") FCavrnusBinding BindTransformPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FTransformPropertyUpdated OnPropertyUpdated);
	
	static FCavrnusBinding BindTransformPropertyValue(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, const CavrnusTransformFunction& OnPropertyUpdated);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Begins a temporary property update.  This will show for everyone in the space, but will not be saved unless finalized with a PostPropertyUpdate.", ShortToolTip = "Sends a temporary property update to the server"))
	static UCavrnusLiveTransformPropertyUpdate* BeginTransientTransformPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FTransform PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Updates the property value at the given path and synchronizes the data to the server", ShortToolTip = "Updates the property value at the given path"))
	static void PostTransformPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, FString ContainerName, FString PropertyName, FTransform PropertyValue);
#pragma endregion

#pragma region Permissions
	// ============================================
	// Permissions
	// ============================================

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Internal",
		meta = (ToolTip = "Binds an event to throw when a policy is/isn't allowed for the user (returns false until policies are fetched & resolved)", ShortToolTip = "Throws an event if a policy is allowed"))
	static UPARAM(DisplayName = "Disposable") FCavrnusBinding BindGlobalPolicy(FString Policy, FCavrnusPolicyUpdated OnPolicyUpdated);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Internal",
		meta = (ToolTip = "Binds an event to throw when a policy is/isn't allowed for the user in a given space (returns false until policies are fetched & resolved)", ShortToolTip = "Throws an event if a policy is allowed"))
	static UPARAM(DisplayName = "Disposable") FCavrnusBinding BindSpacePolicy(FCavrnusSpaceConnection SpaceConnection, FString Policy, FCavrnusPolicyUpdated OnPolicyUpdated);
#pragma endregion

#pragma region Spawned Objects
	// ============================================
	// Spawned Objects
	// ============================================

	//TODO: RETURN FCavrnusSpawnedObject directly!
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Objects",
		meta = (ToolTip = "Instantiates the given object with no set properties (note you will need to pull the Container ID out of the Spawned Object and assign property values to it)", ShortToolTip = "Instantiates the given object"))
	static UPARAM(DisplayName = "Container Name") FString SpawnObject(FCavrnusSpaceConnection SpaceConnection, FString UniqueIdentifier);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Objects",
		meta = (ToolTip = "Destroys the given object", ShortToolTip = "Destroys the given object"))
	static void DestroyObject(FCavrnusSpawnedObject SpawnedObject);

	//TODO: USE COMPONENTS
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Objects",
		meta = (ToolTip = "Gets the spawned object's data if it was created by Cavrnus", ShortToolTip = "Gets the spawned object's data"))
	static FCavrnusSpawnedObject GetIfIsSpawnedObject(FCavrnusSpaceConnection SpaceConnection, AActor* Actor);

#pragma endregion


#pragma region Space Users

	// ============================================
	// Space Users
	// ============================================

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Users",
		meta = (ToolTip = "Returns all users currently in the space", ShortToolTip = "Returns all users currently in the space"))
	static void AwaitLocalUser(FCavrnusSpaceConnection SpaceConnection, FCavrnusSpaceUserEvent LocalUserArrived);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Users",
		meta = (ToolTip = "Returns all users currently in the space", ShortToolTip = "Returns all users currently in the space"))
	static TArray<FCavrnusUser> GetCurrentSpaceUsers(FCavrnusSpaceConnection SpaceConnection);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Users",
		meta = (ToolTip = "Triggers whenever users join or leave a given space", ShortToolTip = "Triggers whenever users join or leave a given space"))
	static UPARAM(DisplayName = "Disposable") FCavrnusBinding BindSpaceUsers(FCavrnusSpaceConnection SpaceConnection, FCavrnusSpaceUserEvent UserAdded, FCavrnusSpaceUserEvent UserRemoved);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Triggers an Event when the property changes, plus an inital event when first bound", ShortToolTip = "Triggers an Event when the property changes"))
	static UPARAM(DisplayName = "Disposable") FCavrnusBinding BindUserVideoFrames(FCavrnusSpaceConnection SpaceConnection, const FCavrnusUser& User, FCavrnusUserVideoFrameEvent OnVideoFrameUpdate);

#pragma endregion

#pragma region Voice and Video
	// ============================================
	// Voice and Video
	// ============================================

	//Sets muted state for local user
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Voice and Video",
		meta = (ToolTip = "Sets muted state for local user", ShortToolTip = "Set my muted state"))
	static void SetLocalUserMutedState(FCavrnusSpaceConnection SpaceConnection, bool bIsMuted);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Voice and Video",
		meta = (ToolTip = "Sets streaming state for local user", ShortToolTip = "Set my streaming state"))
	static void SetLocalUserStreamingState(FCavrnusSpaceConnection SpaceConnection, bool bIsStreaming);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Voice and Video",
		meta = (ToolTip = "Gets available microphones", ShortToolTip = "Gets available microphones"))
	static void FetchAudioInputs(FCavrnusAvailableInputDevices OnReceiveDevices);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Voice and Video",
		meta = (ToolTip = "Sets which microphone to use", ShortToolTip = "Sets which microphone to use"))
	static void UpdateAudioInput(FCavrnusInputDevice Device);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Voice and Video",
		meta = (ToolTip = "Gets available speakers", ShortToolTip = "Gets available speakers"))
	static void FetchAudioOutputs(FCavrnusAvailableOutputDevices OnReceiveDevices);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Voice and Video",
		meta = (ToolTip = "Sets which speaker to use", ShortToolTip = "Sets which speaker to use"))
	static void UpdateAudioOutput(FCavrnusOutputDevice Device);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Voice and Video",
		meta = (ToolTip = "Gets available camera/stream sources", ShortToolTip = "Gets available camera/stream sources"))
	static void FetchVideoInputs(FCavrnusAvailableVideoInputDevices OnReceiveDevices);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Voice and Video",
		meta = (ToolTip = "Sets which camera/stream source to use", ShortToolTip = "Sets which camera/stream source to use"))
	static void UpdateVideoInput(FCavrnusVideoInputDevice Device);
#pragma endregion


#pragma region Remote Content
	//TODO:
	/*
	public static void FetchFileById(CavrnusSpaceConnection spaceConn, string id, Action<string, float> progress, Func<Stream, long, Task> onStreamLoaded)
		{
			CavrnusContentHelpers.FetchFileById(spaceConn, id, progress, onStreamLoaded);
		}

		public static void FetchAllUploadedContent(Action<List<CavrnusRemoteContent>> onCurrentContentArrived)
		{
			CavrnusContentHelpers.FetchAllUploadedContent(onCurrentContentArrived);
		}
		*/

#pragma endregion


#pragma region ModeUtils
		/**
		 * Set input mode to mix state which allows interacting with ui widgets and
		 * world in a mixed way. Default Cavrnus App Input Mode.
		 */
	UFUNCTION(BlueprintCallable, Category = "Cavrnus|Mode Utils", meta = (WorldContext = "WorldContextObject"))
	static void SetInputModeMix(UObject* WorldContextObject);
#pragma endregion
private:

	static Cavrnus::CavrnusRelayModel* RelayModel;

	static bool CheckErrors(FCavrnusSpaceConnection SpaceConnection)
	{
		if (SpaceConnection.SpaceConnectionId == -1)
		{
			UE_LOG(LogCavrnusConnector, Error, TEXT("No CavrnusSpaceConnection provided, function will not execute!"));
			return false;
		}
		return true;
	}

	static FString CreateTransientId()
	{
		//Copied from: https://stackoverflow.com/questions/440133/how-do-i-create-a-random-alpha-numeric-string-in-c

		size_t length = 8;
		auto randchar = []() -> char
			{
				const char charset[] =
					"0123456789"
					"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
					"abcdefghijklmnopqrstuvwxyz";
				const size_t max_index = (sizeof(charset) - 1);
				return charset[rand() % max_index];
			};
		std::string str(length, 0);
		std::generate_n(str.begin(), length, randchar);
		return str.c_str();
	}
};