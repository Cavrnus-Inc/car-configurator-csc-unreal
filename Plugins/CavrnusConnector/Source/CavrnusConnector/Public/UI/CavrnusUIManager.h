// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UI/CavrnusWidgetBase.h"
#include "CavrnusSpatialConnector.h"
#include "CavrnusUIManager.generated.h"

/**
 * Class responsible for managing all cavrnus related uis.
 */
UCLASS(BlueprintType, Blueprintable)
class CAVRNUSCONNECTOR_API UCavrnusUIManager : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	void Initialize(ACavrnusSpatialConnector* Connector);

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	UCavrnusWidgetBase* SpawnWidget(TSubclassOf<UCavrnusWidgetBase> WidgetClass);

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	void RemoveWidget(UCavrnusWidgetBase* Widget);

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	void RemoveAllWidgets();

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	void ShowGuestLoginWidget(FCavrnusAuthRecv SuccessDelegate, FCavrnusError FailureDelegate);

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	void ShowLoginWidget(FCavrnusAuthRecv SuccessDelegate, FCavrnusError FailureDelegate);

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	void ShowLoadingWidget(bool bShowWidget);

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	void ShowSpaceList();

	ACavrnusSpatialConnector* GetConnector();

public:
	TArray<TWeakObjectPtr<UCavrnusWidgetBase>> CavrnusWidgets;

private:
	UWorld* World;
	TWeakObjectPtr<UCavrnusWidgetBase> LoadingWidget;
	TWeakObjectPtr<ACavrnusSpatialConnector> CurrentCavrnusSpatialConnector;
};
