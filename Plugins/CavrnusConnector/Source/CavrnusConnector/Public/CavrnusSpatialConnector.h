#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/Actor.h"
#include "UI/CavrnusLoginWidget.h"
#include "UI/CavrnusGuestLoginWidget.h"
#include "UI/CavrnusSpaceListWidget.h"
#include "Types/CavrnusCallbackTypes.h"
#include "Types/CavrnusSpawnedObject.h"

#include "CavrnusSpatialConnector.generated.h"

UENUM()
enum class ECavrnusAuthMethod
{
	None,
	JoinAsMember,
	JoinAsGuest
};

UENUM()
enum class ECavrnusMemberLoginMethod
{
	None,
	EnterMemberLoginCredentials,
	PromptMemberToLogin
};

UENUM()
enum class ECavrnusGuestLoginMethod
{
	None,
	EnterNameBelow,
	PromptToEnterName
};

UENUM()
enum class ECavrnusSpaceJoinMethod
{
	None,
	EnterSpaceId,
	SpacesList
};

UCLASS()
class CAVRNUSCONNECTOR_API ACavrnusSpatialConnector : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACavrnusSpatialConnector();

	void CavrnusBeginPlay();
	void CavrnusEndPlay();

protected:
	virtual void PostInitializeComponents() override;

	/** Overridable native event for when play begins for this actor. */
	virtual void BeginPlay() override;

	/** Overridable function called whenever this actor is being removed from a level */
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cavrnus")
	FString MyServer;

	// ------------------------------------------------------------ Authentication --------------------------------------------------------------------
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cavrnus", META = (DisplayName = "Authentication Method"))
	ECavrnusAuthMethod AuthMethod;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cavrnus", META = (EditCondition = "AuthMethod == ECavrnusAuthMethod::JoinAsGuest", EditConditionHides))
	ECavrnusGuestLoginMethod GuestLoginMethod;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cavrnus", META = (EditCondition = "AuthMethod == ECavrnusAuthMethod::JoinAsMember", EditConditionHides))
	ECavrnusMemberLoginMethod MemberLoginMethod;

	// Guest Join Auto
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cavrnus", META = (EditCondition = "AuthMethod == ECavrnusAuthMethod::JoinAsGuest && GuestLoginMethod == ECavrnusGuestLoginMethod::EnterNameBelow", EditConditionHides))
	FString GuestName;

	// Guest Join Manual
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cavrnus", META = (EditCondition = "AuthMethod == ECavrnusAuthMethod::JoinAsGuest && GuestLoginMethod == ECavrnusGuestLoginMethod::PromptToEnterName", EditConditionHides))
	TSubclassOf<UCavrnusGuestLoginWidget> GuestJoinMenu;

	// Login Auto
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cavrnus", META = (EditCondition = "AuthMethod == ECavrnusAuthMethod::JoinAsMember && MemberLoginMethod == ECavrnusMemberLoginMethod::EnterMemberLoginCredentials", EditConditionHides))
	FString MemberLoginEmail;

	UPROPERTY(EditAnywhere, Category = "Cavrnus", META = (EditCondition = "AuthMethod == ECavrnusAuthMethod::JoinAsMember && MemberLoginMethod == ECavrnusMemberLoginMethod::EnterMemberLoginCredentials", EditConditionHides))
	FString MemberLoginPassword;

	// Login Manual
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cavrnus", META = (EditCondition = "AuthMethod == ECavrnusAuthMethod::JoinAsMember && MemberLoginMethod == ECavrnusMemberLoginMethod::PromptMemberToLogin", EditConditionHides))
	TSubclassOf<UCavrnusLoginWidget> MemberLoginMenu;
	// --------------------------------------------------------- Space Joining ------------------------------------------------------------------

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cavrnus")
	ECavrnusSpaceJoinMethod SpaceJoinMethod;

	// Space Join Automatic
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cavrnus", META = (EditCondition = "SpaceJoinMethod == ECavrnusSpaceJoinMethod::EnterSpaceId", EditConditionHides))
	FString AutomaticSpaceJoinId;

	// Space Join Manual
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cavrnus", META = (EditCondition = "SpaceJoinMethod == ECavrnusSpaceJoinMethod::SpacesList", EditConditionHides))
	TSubclassOf<UUserWidget> SpaceJoinMenu;

	// ------------------------------------------- Avatar Management ----------------------------------------------------------------------------

	// Asset class type used to represent remote users
	UPROPERTY(BlueprintReadOnly, EditAnywhere, BlueprintReadOnly, Category = "Cavrnus")
	TSubclassOf<AActor> RemoteAvatarClass;

	// ------------------------------------------- In Space UI ----------------------------------------------------------------------------------

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cavrnus")
	TSubclassOf<UUserWidget> AuthenticationWidgetClass;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cavrnus")
	TSubclassOf<class UUserWidget> LoadingWidgetClass;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cavrnus")
	TArray<TSubclassOf<class UUserWidget>> WidgetsToLoad;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cavrnus")
	TMap<FString, TSubclassOf<AActor>> SpawnableIdentifiers;
};
