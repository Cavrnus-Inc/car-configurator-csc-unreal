#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IPropertySyncInterface.h"
#include "Types/CavrnusBinding.h"
#include "Types/CavrnusSpaceConnection.h"
#include "../Private/RelayModel/CavrnusVirtualPropertyUpdate.h"

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

	void BeginPlay();
	void EndPlay(const EEndPlayReason::Type Reason);
	void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void OnComponentCreated() override;
	void AutoAttachPropertiesContainer();
	FString GetGeneratedContainerName() const;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cavrnus", meta = (ExposeOnSpawn))
	FString PropertyName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cavrnus", meta = (ExposeOnSpawn))
	bool SendChanges = true;

	//TODO: Custom Inspector like CSC to hide this???
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cavrnus")
	bool InitialSetupComplete = false;

	bool RecvChanges = true;

	virtual Cavrnus::FPropertyValue GetPropertyValue()PURE_VIRTUAL(IPropertySyncInterface::GetPropertyValue, return Cavrnus::FPropertyValue(););
	virtual void SetPropertyValue(Cavrnus::FPropertyValue value)PURE_VIRTUAL(IPropertySyncInterface::SetPropertyValue);

private:
	bool ShouldAutoAddPropertiesContainer() const;

	Cavrnus::CavrnusVirtualPropertyUpdate* liveUpdater = nullptr;
	Cavrnus::FPropertyValue lastSentPropValue;

	void SpaceConnected(FCavrnusSpaceConnection spaceConn);

	void PollForPropertyChanges();
	void TrySendPropertyChanges();

	static const float PollingTimeSeconds;
	float PollingTimeRemaining;

	static const double SecondsToWaitBeforePosting;

	bool shouldSync = false;
	FCavrnusSpaceConnection SpaceConn;
	FCavrnusBinding PropertyBinding;

	FString ReportOwnerName() const;

	UCavrnusPropertiesContainer* GetContainer() const;
	FString GetContainerName() const;
};