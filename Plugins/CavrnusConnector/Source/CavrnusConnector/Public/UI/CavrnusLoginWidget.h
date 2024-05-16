// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <Blueprint/UserWidget.h>
#include "CavrnusLoginWidget.generated.h"

class UTexture2D;

/**
 *
 * Base class for widget for obtaining login credentials
 *
 */

DECLARE_MULTICAST_DELEGATE_TwoParams(FOnLoginClicked, FString, FString);

UCLASS(Abstract)
class CAVRNUSCONNECTOR_API UCavrnusLoginWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	void Setup();
	
	UFUNCTION()
	void OnLoginClicked();

public:
	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UEditableTextBox* EmailInput;

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UEditableTextBox* PasswordInput;

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UButton* LoginButton;

	FOnLoginClicked OnLogin;
};
