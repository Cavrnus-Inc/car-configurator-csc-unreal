// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include <Blueprint/UserWidget.h>
#include <Components/SceneComponent.h>

#include <CavrnusFunctionLibrary.h>
#include "../Types/CavrnusCallbackTypes.h"

#include "CavrnusSpaceUILoaderComponent.generated.h"

/**
 * Component which determines which UI widgets are loaded
 */

UCLASS(BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))
class CAVRNUSCONNECTOR_API UCavrnusSpaceUILoaderComponent : public USceneComponent
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Cavrnus")
	TSubclassOf<UUserWidget> LoadingWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Cavrnus")
	TArray<TSubclassOf<UUserWidget>> WidgetsToLoad;

	UPROPERTY()
	UUserWidget* LoadingWidget;

	UFUNCTION()
	UUserWidget* SpawnWidget(TSubclassOf<UUserWidget> WidgetClass);

	virtual void BeginPlay();

	UFUNCTION()
	void SpaceConnected(FCavrnusSpaceConnection spaceConn);

protected:
	FCavrnusSpaceConnected OnSpaceConnected;

private:
};
