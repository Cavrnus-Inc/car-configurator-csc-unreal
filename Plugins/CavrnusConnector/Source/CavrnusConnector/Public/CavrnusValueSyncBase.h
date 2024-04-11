#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Interfaces/IPropertySyncInterface.h"
#include "Types/CavrnusBinding.h"
#include "Types/CavrnusSpaceConnection.h"

#include "CavrnusValueSyncBase.generated.h"

class UCavrnusPropertiesContainer;
class UCavrnusLivePropertyUpdate;

// Class definition
UCLASS(BlueprintType, HideCategories=(Transform, Physics, Collision, Rendering), Abstract)
class CAVRNUSCONNECTOR_API UCavrnusValueSyncBase : public USceneComponent, public IPropertySyncInterface
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusValueSyncBase();

	// Destructor
	~UCavrnusValueSyncBase();

	UCavrnusPropertiesContainer* GetContainer() const;

	virtual void BeginPlay();
	virtual void EndPlay(const EEndPlayReason::Type Reason);

	/**
	* Set the syncing flag and perform checks.
	*/
	virtual void StartSyncing();

	/**
	* Clear the event poll and unbind property which stops syncing the values.
	*/
	virtual void StopSyncing();

	void OnComponentCreated() override;
	void AutoAttachPropertiesContainer();
	FString GetGeneratedContainerName() const;

	UFUNCTION()
	void SpaceConnected(FCavrnusSpaceConnection spaceConn);

	UFUNCTION()
	void PollForPropertyChanges();

	UPROPERTY()
	FCavrnusSpaceConnection SpaceConn;

	UPROPERTY()
	FCavrnusBinding PropertyBinding;

	UPROPERTY()
	FTimerHandle PollTimer;

	UPROPERTY()
	FString ContainerName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cavrnus", meta = (ExposeOnSpawn))
	FString PropertyName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cavrnus", meta = (ExposeOnSpawn))
	bool SendChanges = true;

	bool RecvChanges = true;

	// IPropertySyncInterface implementation
	virtual void DefineDefaultPropertyValue() PURE_VIRTUAL(IPropertySyncInterface::DefineDefaultPropertyValue);
	virtual FCavrnusBinding BindPropertyValue() PURE_VIRTUAL(IPropertySyncInterface::BindPropertyValue, return FCavrnusBinding([]() {}););
	virtual void SendPropertyChanges() PURE_VIRTUAL(IPropertySyncInterface::SendPropertyChanges);

protected:

	UPROPERTY()
	UCavrnusLivePropertyUpdate* liveUpdater = nullptr;

	bool bSyncingValue; // Indicates if sync started or not.

	FString ReportOwnerName() const;

private:
	bool ShouldAutoAddPropertiesContainer() const;
};