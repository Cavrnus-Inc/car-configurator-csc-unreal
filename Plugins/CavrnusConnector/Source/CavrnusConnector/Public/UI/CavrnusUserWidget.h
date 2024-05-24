// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include <Blueprint/UserWidget.h>
#include "Types/CavrnusBinding.h"
#include "Types/CavrnusCallbackTypes.h"

#include "CavrnusUserWidget.generated.h"

class UTexture2D;

/**
 *
 * Base class for widget representing a Cavrnus User in the UI
 *
 */

UCLASS(Abstract)
class CAVRNUSCONNECTOR_API UCavrnusUserWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeDestruct() override;

protected:
	UFUNCTION(BlueprintCallable, Category = "Cavrnus|UI")
	void InitializeUserConnection(const FCavrnusSpaceConnection& InSpaceConnection, const FCavrnusUser& InUser);

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UImage* RtcStreamImage;

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus", meta = (BindWidget))
	class UImage* ProfileImage;

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus")
	FCavrnusSpaceConnection SpaceConnection;

	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus")
	FCavrnusUser User;

private:
	void BindUserVideo();
	void UnbindUserVideo();

	UPROPERTY()
	UCavrnusBinding* UserVideoFrameBinding;

	FVector2D CurrentStreamImageSize = FVector2D(0,0);

	bool TextureSizeChanged(FVector2D NewSize) const;
};
