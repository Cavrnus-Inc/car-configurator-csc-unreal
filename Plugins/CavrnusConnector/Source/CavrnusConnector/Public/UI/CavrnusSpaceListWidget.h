// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include <Blueprint/UserWidget.h>

#include "CavrnusSpaceListWidget.generated.h"

/**
 *
 * Base class for widget for obtaining a space ID
 *
 */

DECLARE_MULTICAST_DELEGATE_OneParam(FOnCavrnusSpaceSelected, FString);

UCLASS(Abstract)
class CAVRNUSCONNECTOR_API UCavrnusSpaceListWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UListView* SpaceList;

	UFUNCTION(BlueprintImplementableEvent, Category = "Cavrnus")
	FString GetSpaceID(UObject* Item);

	FOnCavrnusSpaceSelected OnCavrnusSpaceSelected;

private:
	void NativeOnInitialized() override;
};
