#pragma once
#include "CoreMinimal.h"
#include "CavrnusFunctionLibrary.h"
#include <Components/SceneComponent.h>
#include <Materials/MaterialInstanceDynamic.h>
#include "CavrnusSyncMaterial.generated.h"

class UCavrnusValueSyncBase;

// Class definition
UCLASS(BlueprintType, Blueprintable)
class CAVRNUSCONNECTOR_API UCavrnusSyncMaterial : public USceneComponent
{
	GENERATED_BODY()

public:
	// Constructor
	UCavrnusSyncMaterial();

	// Destructor
	~UCavrnusSyncMaterial();


	virtual void BeginPlay();

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Cavrnus")
	UMaterial* GetMaterial() const;
	virtual UMaterial* GetMaterial_Implementation() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Cavrnus")
	UMaterialInstanceDynamic* GetMaterialInstance() const;
	virtual UMaterialInstanceDynamic* GetMaterialInstance_Implementation() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Cavrnus")
	void SetMaterialInstance(UMaterialInstanceDynamic* NewMaterialInstance);
	virtual void SetMaterialInstance_Implementation(UMaterialInstanceDynamic* NewInstance);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Cavrnus")
	UMaterialInstanceDynamic* MaterialInstance;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cavrnus")
	bool SendChanges = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Cavrnus")
	UMaterial* DefaultMaterial;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Cavrnus")
	TMap<uint8, TSubclassOf<UCavrnusValueSyncBase>> MaterialSyncMap;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cavrnus")
	TArray<UCavrnusValueSyncBase*> SyncedPropertyComponents;

private:
	void CreatePropertySyncComponents();
};