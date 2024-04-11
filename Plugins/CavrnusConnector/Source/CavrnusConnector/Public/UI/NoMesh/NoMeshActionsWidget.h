// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NoMeshActionsWidget.generated.h"

DECLARE_DELEGATE_OneParam(FAction, FString);

/**
 *
 */
UCLASS()
class CAVRNUSCONNECTOR_API UNoMeshActionsWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	FAction Action;

};
