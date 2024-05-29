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
#include "../Private/RelayModel/CavrnusRelayModel.h"
#include "Types/PropertyId.h"
#include "Types/CavrnusCallbackTypes.h"

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

#pragma region Data Model Access/Shutdown

	static Cavrnus::CavrnusRelayModel* GetDataModel();
	static void KillDataModel();

#pragma endregion

#pragma region Authentication

	// ============================================
	// Authentication Functions
	// ============================================

	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusError, FString, Error);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus")
	static class UCavrnusSpatialConnectorSubSystemProxy* GetCavrnusSpatialConnectorSubSystemProxy();

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus")
	static class ACavrnusSpatialConnector* GetCavrnusSpatialConnector();

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Authentication",
		meta = (ToolTip = "Checks if you are logged in", ShortToolTip = "Checks if you are logged in"))
	static bool IsLoggedIn();

	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusAuthRecv, FCavrnusAuthentication, Auth);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Authentication",
		meta = (ToolTip = "Gets guest user credentials, allowing you to join valid spaces and make other requests", ShortToolTip = "Gets guest user credentials"))
	static void AuthenticateWithPassword(const FString& Server, const FString& Email, const FString& Password, FCavrnusAuthRecv OnSuccess, FCavrnusError OnFailure);

	static void AuthenticateWithPassword(const FString& Server, const FString& Email, const FString& Password, CavrnusAuthRecv OnSuccess, CavrnusError OnFailure);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Authentication",
		meta = (ToolTip = "Gets guest user credentials via a link, and informs you of the spaceId you should then join", ShortToolTip = "Gets guest user credentials via a link"))
	static void AuthenticateAsGuest(const FString& Server, const FString& UserName, FCavrnusAuthRecv OnSuccess, FCavrnusError OnFailure);

	static void AuthenticateAsGuest(const FString& Server, const FString& UserName, CavrnusAuthRecv OnSuccess, CavrnusError OnFailure);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Authentication",
		meta = (ToolTip = "Throws an event when user authentication is complete", ShortToolTip = "Throws an event when user authentication is complete"))
	static void AwaitAuthentication(FCavrnusAuthRecv OnAuth);

	static void AwaitAuthentication(CavrnusAuthRecv OnAuth);

#pragma endregion

#pragma region Spaces

	// ============================================
	// Space Functions
	// ============================================

	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusAllSpacesInfoEvent, const TArray<FCavrnusSpaceInfo>&, SpacesInfo);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Spaces",
		meta = (ToolTip = "Gets a list of all current spaces which can be joined", ShortToolTip = "Gets a list of all current spaces which can be joined"))
	static void FetchJoinableSpaces(FCavrnusAllSpacesInfoEvent OnRecvCurrentJoinableSpaces);

	static void FetchJoinableSpaces(CavrnusAllSpacesInfoEvent OnRecvCurrentJoinableSpaces);

	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusSpaceInfoEvent, FCavrnusSpaceInfo, SpaceInfo);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Spaces",
		meta = (ToolTip = "Triggers when spaces become available to you that you can join, or when their metadata changes", ShortToolTip = "Maintains a list of spaces"))
	static UPARAM(DisplayName = "Disposable") UCavrnusBinding* BindJoinableSpaces(FCavrnusSpaceInfoEvent SpaceAdded, FCavrnusSpaceInfoEvent SpaceUpdated, FCavrnusSpaceInfoEvent SpaceRemoved);

	static UCavrnusBinding* BindJoinableSpaces(CavrnusSpaceInfoEvent SpaceAdded, CavrnusSpaceInfoEvent SpaceUpdated, CavrnusSpaceInfoEvent SpaceRemoved);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Spaces",
		meta = (ToolTip = "Checks if there is any active connection to a space", ShortToolTip = "Checks if you are connected to a space"))
	static bool IsConnectedToAnySpace();

	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusSpaceConnected, FCavrnusSpaceConnection, SpaceConnection);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Spaces",
		meta = (ToolTip = "Connects to a Space; joining voice & video and recieving/processing the journal", ShortToolTip = "Connects to a Space"))
	static void JoinSpace(FString SpaceId, FCavrnusSpaceConnected OnConnected, FCavrnusError OnFailure);

	static void JoinSpace(FString SpaceId, CavrnusSpaceConnected OnConnected, CavrnusError OnFailure);

	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusSpaceBeginLoading, FString, SpaceIdBeingLoaded);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Spaces",
		meta = (ToolTip = "Triggers when you begin attempting to join a space, returning the ID of the space being joined", ShortToolTip = "Triggers when you begin attempting to join a space"))
	static void AwaitAnySpaceBeginLoading(FCavrnusSpaceBeginLoading OnConnected);

	static void AwaitAnySpaceBeginLoading(CavrnusSpaceBeginLoading OnConnected);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Spaces",
		meta = (ToolTip = "Triggers immediately if you are already in a space, otherwise triggers as soon as you connect", ShortToolTip = "Triggers as soon as you connect to a space"))
	static void AwaitAnySpaceConnection(FCavrnusSpaceConnected OnConnected);

	static void AwaitAnySpaceConnection(CavrnusSpaceConnected OnConnected);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Spaces",
		meta = (ToolTip = "Disconnects you from a given space.  You will stop recieving property updates, and lose user & voice connections", ShortToolTip = "Disconnects you from a given space"))
	static void ExitSpace(FCavrnusSpaceConnection SpaceConnection);

#pragma endregion

	// ============================================
	// Property Functions
	// ============================================

#pragma region Generic Prop Functions
	static void DefineGenericPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, Cavrnus::FPropertyValue PropertyValue, bool overrideExistingDefault = true);

	static Cavrnus::FPropertyValue GetGenericPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName);

	static UCavrnusBinding* BindGenericPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, const CavrnusPropertyFunction& OnPropertyUpdated);

	static void PostGenericPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, Cavrnus::FPropertyValue PropertyValue);

#pragma endregion

#pragma region Color Prop Functions
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Defines what the application will show if a new prop value has not been assigned", ShortToolTip = "Defines the Propertie's initial value"))
	static void DefineColorPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FLinearColor PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Gets the current property value, whether the default or the one currently set", ShortToolTip = "Gets the current value"))
	static FLinearColor GetColorPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName);

	DECLARE_DYNAMIC_DELEGATE_ThreeParams(FColorPropertyUpdated, FLinearColor, Value, FString, ContainerName, FString, PropertyName);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Triggers an Event when the property changes, plus an inital event when first bound", ShortToolTip = "Triggers an Event when the property changes"))
	static UPARAM(DisplayName = "Disposable") UCavrnusBinding* BindColorPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FColorPropertyUpdated OnPropertyUpdated);

	static UCavrnusBinding* BindColorPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, const CavrnusColorFunction& OnPropertyUpdated);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Begins a temporary property update.  This will show for everyone in the space, but will not be saved unless finalized with a PostPropertyUpdate.", ShortToolTip = "Sends a temporary property update to the server"))
	static UCavrnusLiveColorPropertyUpdate* BeginTransientColorPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FLinearColor PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Updates the property value at the given path and synchronizes the data to the server", ShortToolTip = "Updates the property value at the given path"))
	static void PostColorPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FLinearColor PropertyValue);
#pragma endregion

#pragma region Bool Prop Functions
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Defines what the application will show if a new prop value has not been assigned", ShortToolTip = "Defines the Propertie's initial value"))
	static void DefineBoolPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, bool PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Gets the current property value, whether the default or the one currently set", ShortToolTip = "Gets the current value"))
	static bool GetBoolPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName);

	DECLARE_DYNAMIC_DELEGATE_ThreeParams(FBoolPropertyUpdated, bool, Value, FString, ContainerName, FString, PropertyName);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Triggers an Event when the property changes, plus an inital event when first bound", ShortToolTip = "Triggers an Event when the property changes"))
	static UPARAM(DisplayName = "Disposable") UCavrnusBinding* BindBooleanPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FBoolPropertyUpdated OnPropertyUpdated);

	static UCavrnusBinding* BindBooleanPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, const CavrnusBoolFunction& OnPropertyUpdated);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Begins a temporary property update.  This will show for everyone in the space, but will not be saved unless finalized with a PostPropertyUpdate.", ShortToolTip = "Sends a temporary property update to the server"))
	static UCavrnusLiveBoolPropertyUpdate* BeginTransientBoolPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, bool PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Updates the property value at the given path and synchronizes the data to the server", ShortToolTip = "Updates the property value at the given path"))
	static void PostBoolPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, bool PropertyValue);
#pragma endregion

#pragma region Float Prop Functions
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Defines what the application will show if a new prop value has not been assigned", ShortToolTip = "Defines the Propertie's initial value"))
	static void DefineFloatPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, float PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Gets the current property value, whether the default or the one currently set", ShortToolTip = "Gets the current value"))
	static float GetFloatPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName);

	DECLARE_DYNAMIC_DELEGATE_ThreeParams(FFloatPropertyUpdated, float, Value, FString, ContainerName, FString, PropertyName);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Triggers an Event when the property changes, plus an inital event when first bound", ShortToolTip = "Triggers an Event when the property changes"))
	static UPARAM(DisplayName = "Disposable") UCavrnusBinding* BindFloatPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FFloatPropertyUpdated OnPropertyUpdated);
	
	static UCavrnusBinding* BindFloatPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, const CavrnusFloatFunction& OnPropertyUpdated);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Begins a temporary property update.  This will show for everyone in the space, but will not be saved unless finalized with a PostPropertyUpdate.", ShortToolTip = "Sends a temporary property update to the server"))
	static UCavrnusLiveFloatPropertyUpdate* BeginTransientFloatPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, float PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Updates the property value at the given path and synchronizes the data to the server", ShortToolTip = "Updates the property value at the given path"))
	static void PostFloatPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, float PropertyValue);
#pragma endregion

#pragma region String Prop Functions
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Defines what the application will show if a new prop value has not been assigned", ShortToolTip = "Defines the Propertie's initial value"))
	static void DefineStringPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FString PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Gets the current property value, whether the default or the one currently set", ShortToolTip = "Gets the current value"))
	static FString GetStringPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName);

	DECLARE_DYNAMIC_DELEGATE_ThreeParams(FStringPropertyUpdated, FString, Value, FString, ContainerName, FString, PropertyName);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Triggers an Event when the property changes, plus an inital event when first bound", ShortToolTip = "Triggers an Event when the property changes"))
	static UPARAM(DisplayName = "Disposable") UCavrnusBinding* BindStringPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FStringPropertyUpdated OnPropertyUpdated);
	
	static UCavrnusBinding* BindStringPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, const CavrnusStringFunction& OnPropertyUpdated);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Begins a temporary property update.  This will show for everyone in the space, but will not be saved unless finalized with a PostPropertyUpdate.", ShortToolTip = "Sends a temporary property update to the server"))
	static UCavrnusLiveStringPropertyUpdate* BeginTransientStringPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FString PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Updates the property value at the given path and synchronizes the data to the server", ShortToolTip = "Updates the property value at the given path"))
	static void PostStringPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FString PropertyValue);
#pragma endregion

#pragma region Vector Prop Functions
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Defines what the application will show if a new prop value has not been assigned", ShortToolTip = "Defines the Propertie's initial value"))
	static void DefineVectorPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FVector4 PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Gets the current property value, whether the default or the one currently set", ShortToolTip = "Gets the current value"))
	static FVector4 GetVectorPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName);

	DECLARE_DYNAMIC_DELEGATE_ThreeParams(FVectorPropertyUpdated, FVector4, Value, FString, ContainerName, FString, PropertyName);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Triggers an Event when the property changes, plus an inital event when first bound", ShortToolTip = "Triggers an Event when the property changes"))
	static UPARAM(DisplayName = "Disposable") UCavrnusBinding* BindVectorPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FVectorPropertyUpdated OnPropertyUpdated);
	
	static UCavrnusBinding* BindVectorPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, const CavrnusVectorFunction& OnPropertyUpdated);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Begins a temporary property update.  This will show for everyone in the space, but will not be saved unless finalized with a PostPropertyUpdate.", ShortToolTip = "Sends a temporary property update to the server"))
	static UCavrnusLiveVectorPropertyUpdate* BeginTransientVectorPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FVector4 PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Updates the property value at the given path and synchronizes the data to the server", ShortToolTip = "Updates the property value at the given path"))
	static void PostVectorPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FVector4 PropertyValue);
#pragma endregion

#pragma region Transform Prop Functions
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Defines what the application will show if a new prop value has not been assigned", ShortToolTip = "Defines the Propertie's initial value"))
	static void DefineTransformPropertyDefaultValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FTransform PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Internal",
		meta = (ToolTip = "Gets the current property value, whether the default or the one currently set", ShortToolTip = "Gets the current value"))
	static FTransform GetTransformPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName);

	DECLARE_DYNAMIC_DELEGATE_ThreeParams(FTransformPropertyUpdated, FTransform, Value, FString, ContainerName, FString, PropertyName);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Triggers an Event when the property changes, plus an inital event when first bound", ShortToolTip = "Triggers an Event when the property changes"))
	static UPARAM(DisplayName = "Disposable") UCavrnusBinding* BindTransformPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FTransformPropertyUpdated OnPropertyUpdated);
	
	static UCavrnusBinding* BindTransformPropertyValue(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, const CavrnusTransformFunction& OnPropertyUpdated);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Begins a temporary property update.  This will show for everyone in the space, but will not be saved unless finalized with a PostPropertyUpdate.", ShortToolTip = "Sends a temporary property update to the server"))
	static UCavrnusLiveTransformPropertyUpdate* BeginTransientTransformPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FTransform PropertyValue);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Updates the property value at the given path and synchronizes the data to the server", ShortToolTip = "Updates the property value at the given path"))
	static void PostTransformPropertyUpdate(FCavrnusSpaceConnection SpaceConnection, const FString& ContainerName, const FString& PropertyName, FTransform PropertyValue);
#pragma endregion

#pragma region Permissions
	// ============================================
	// Permissions
	// ============================================

	DECLARE_DYNAMIC_DELEGATE_TwoParams(FCavrnusPolicyUpdated, FString, Policy, bool, IsAllowed);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Internal",
		meta = (ToolTip = "Binds an event to throw when a policy is/isn't allowed for the user (returns false until policies are fetched & resolved)", ShortToolTip = "Throws an event if a policy is allowed"))
	static UPARAM(DisplayName = "Disposable") UCavrnusBinding* BindGlobalPolicy(const FString& Policy, FCavrnusPolicyUpdated OnPolicyUpdated);

	static UCavrnusBinding* BindGlobalPolicy(FString Policy, CavrnusPolicyUpdated OnPolicyUpdated);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Internal",
		meta = (ToolTip = "Binds an event to throw when a policy is/isn't allowed for the user in a given space (returns false until policies are fetched & resolved)", ShortToolTip = "Throws an event if a policy is allowed"))
	static UPARAM(DisplayName = "Disposable") UCavrnusBinding* BindSpacePolicy(FCavrnusSpaceConnection SpaceConnection, const FString& Policy, FCavrnusPolicyUpdated OnPolicyUpdated);

	static UCavrnusBinding* BindSpacePolicy(FCavrnusSpaceConnection SpaceConnection, const FString& Policy, CavrnusPolicyUpdated OnPolicyUpdated);
#pragma endregion

#pragma region Spawned Objects
	// ============================================
	// Spawned Objects
	// ============================================

	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusSpawnedObjectArrived, FCavrnusSpawnedObject, spawnedObject);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Objects",
		meta = (AutoCreateRefTerm = "spawnedObjectArrived",	ToolTip = "Instantiates the given object with no set properties (note you will need to pull the Container ID out of the Spawned Object and assign property values to it)", ShortToolTip = "Instantiates the given object"))
	static UPARAM(DisplayName = "Container Name") FString SpawnObject(FCavrnusSpaceConnection SpaceConnection, const FString& UniqueIdentifier, const FCavrnusSpawnedObjectArrived& spawnedObjectArrived);

	static FString SpawnObject(FCavrnusSpaceConnection SpaceConnection, const FString& UniqueIdentifier, CavrnusSpawnedObjectFunction spawnedObjectArrived);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Objects",
		meta = (ToolTip = "Destroys the given object", ShortToolTip = "Destroys the given object"))
	static void DestroyObject(FCavrnusSpawnedObject SpawnedObject);

#pragma endregion


#pragma region Space Users

	// ============================================
	// Space Users
	// ============================================

	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusSpaceUserEvent, FCavrnusUser, User);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Users",
		meta = (ToolTip = "Returns all users currently in the space", ShortToolTip = "Returns all users currently in the space"))
	static void AwaitLocalUser(FCavrnusSpaceConnection SpaceConnection, FCavrnusSpaceUserEvent LocalUserArrived);

	static void AwaitLocalUser(FCavrnusSpaceConnection SpaceConnection, CavrnusSpaceUserEvent LocalUserArrived);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Users",
		meta = (ToolTip = "Returns all users currently in the space", ShortToolTip = "Returns all users currently in the space"))
	static TArray<FCavrnusUser> GetCurrentSpaceUsers(FCavrnusSpaceConnection SpaceConnection);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Users",
		meta = (ToolTip = "Triggers whenever users join or leave a given space", ShortToolTip = "Triggers whenever users join or leave a given space"))
	static UPARAM(DisplayName = "Disposable") UCavrnusBinding* BindSpaceUsers(FCavrnusSpaceConnection SpaceConnection, FCavrnusSpaceUserEvent UserAdded, FCavrnusSpaceUserEvent UserRemoved);

	static UCavrnusBinding* BindSpaceUsers(FCavrnusSpaceConnection SpaceConnection, CavrnusSpaceUserEvent UserAdded, CavrnusSpaceUserEvent UserRemoved);

	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusUserVideoFrameEvent, UTexture2D*, UserVideoFrame);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Properties",
		meta = (ToolTip = "Triggers an Event when the property changes, plus an inital event when first bound", ShortToolTip = "Triggers an Event when the property changes"))
	static UPARAM(DisplayName = "Disposable") UCavrnusBinding* BindUserVideoFrames(FCavrnusSpaceConnection SpaceConnection, const FCavrnusUser& User, FCavrnusUserVideoFrameEvent OnVideoFrameUpdate);

	static UCavrnusBinding* BindUserVideoFrames(FCavrnusSpaceConnection SpaceConnection, const FCavrnusUser& User, const VideoFrameUpdateFunction& UpdateFrameCallback);
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

	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusSavedInputDevice, const FCavrnusInputDevice&, InputDevice);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Voice and Video",
		meta = (ToolTip = "Gets the last microphone used, or a default if none is set", ShortToolTip = "Gets the last microphone used"))
	static void FetchSavedAudioInput(FCavrnusSavedInputDevice OnReceiveDevice);

	static void FetchSavedAudioInput(CavrnusSavedInputDevice OnReceiveDevice);

	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusAvailableInputDevices, const TArray<FCavrnusInputDevice>&, InputDevices);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Voice and Video",
		meta = (ToolTip = "Gets available microphones", ShortToolTip = "Gets available microphones"))
	static void FetchAudioInputs(FCavrnusAvailableInputDevices OnReceiveDevices);

	static void FetchAudioInputs(CavrnusAvailableInputDevices OnReceiveDevices);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Voice and Video",
		meta = (ToolTip = "Sets which microphone to use", ShortToolTip = "Sets which microphone to use"))
	static void UpdateAudioInput(FCavrnusInputDevice Device);

	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusSavedOutputDevice, const FCavrnusOutputDevice&, OutputDevice);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Voice and Video",
		meta = (ToolTip = "Gets the last speakers used, or a default if none is set", ShortToolTip = "Gets the last speakers used"))
	static void FetchSavedAudioOutput(FCavrnusSavedOutputDevice OnReceiveDevice);

	static void FetchSavedAudioOutput(CavrnusSavedOutputDevice OnReceiveDevice);

	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusAvailableOutputDevices, const TArray<FCavrnusOutputDevice>&, OutputDevices);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Voice and Video",
		meta = (ToolTip = "Gets available speakers", ShortToolTip = "Gets available speakers"))
	static void FetchAudioOutputs(FCavrnusAvailableOutputDevices OnReceiveDevices);

	static void FetchAudioOutputs(CavrnusAvailableOutputDevices OnReceiveDevices);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Voice and Video",
		meta = (ToolTip = "Sets which speaker to use", ShortToolTip = "Sets which speaker to use"))
	static void UpdateAudioOutput(FCavrnusOutputDevice Device);

	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusAvailableVideoInputDevices, const TArray<FCavrnusVideoInputDevice>&, VideoInputDevices);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Voice and Video",
		meta = (ToolTip = "Gets available camera/stream sources", ShortToolTip = "Gets available camera/stream sources"))
	static void FetchVideoInputs(FCavrnusAvailableVideoInputDevices OnReceiveDevices);

	static void FetchVideoInputs(CavrnusAvailableVideoInputDevices OnReceiveDevices);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Voice and Video",
		meta = (ToolTip = "Sets which camera/stream source to use", ShortToolTip = "Sets which camera/stream source to use"))
	static void UpdateVideoInput(FCavrnusVideoInputDevice Device);
#pragma endregion


#pragma region Remote Content

	DECLARE_DYNAMIC_DELEGATE_TwoParams(FCavrnusContentProgressFunction, float, Progress, FString, Step);
	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusContentFunction, const TArray<uint8>&, bytes);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Content",
		meta = (ToolTip = "Downloads the given content on your device and returns an array of its bytes", ShortToolTip = "Downloads the given content"))
	static void FetchFileById(FString ContentId, FCavrnusContentProgressFunction OnProgress, FCavrnusContentFunction OnContentLoaded);
	static void FetchFileById(FString ContentId, const CavrnusContentProgressFunction& OnProgress, const CavrnusContentFunction& OnContentLoaded);

	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusContentFileFunction, FString, fileDest);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Content",
		meta = (ToolTip = "Downloads the given content to your disk and returns the filepath", ShortToolTip = "Downloads the given content"))
	static void FetchFileByIdToDisk(FString ContentId, FString FileDestination, FCavrnusContentProgressFunction OnProgress, FCavrnusContentFileFunction OnContentLoaded);
	static void FetchFileByIdToDisk(FString ContentId, FString FileDestination, const CavrnusContentProgressFunction& OnProgress, const TFunction<void(FString)>& OnContentLoaded);

	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusRemoteContentFunction, const TArray<FCavrnusRemoteContent>&, availableContent);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Content",
		meta = (ToolTip = "Fetch metadata on all uploaded content stored on the Cavrnus server", ShortToolTip = "Fetch metadata on all uploaded content"))
	static void FetchAllUploadedContent(FCavrnusRemoteContentFunction OnAvailableContentFetched);
	static void FetchAllUploadedContent(const CavrnusRemoteContentFunction& OnAvailableContentFetched);

	DECLARE_DYNAMIC_DELEGATE_OneParam(FCavrnusUploadCompleteFunction, const FCavrnusRemoteContent&, uploadedContent);
	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Content",
		meta = (ToolTip = "Uploads the given file path to the Cavrnus server", ShortToolTip = "Uploads the given file path"))
	static void UploadContent(FString FilePath, FCavrnusUploadCompleteFunction OnUploadComplete);
	static void UploadContent(FString FilePath, const CavrnusUploadCompleteFunction& OnUploadComplete);

	UFUNCTION(BlueprintCallable, CallInEditor, Exec, Category = "Cavrnus|Content",
		meta = (ToolTip = "Uploads the given file path to the Cavrnus server", ShortToolTip = "Uploads the given file path"))
	static void UploadContentWithTags(FString FilePath, TMap<FString, FString> Tags, FCavrnusUploadCompleteFunction OnUploadComplete);
	static void UploadContentWithTags(FString FilePath, TMap<FString, FString> Tags, const CavrnusUploadCompleteFunction& OnUploadComplete);

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
};