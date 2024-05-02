// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TextRenderer.h"
#include "Blueprint/UserWidget.h"
#include "TextRenderer3D.generated.h"

/**
 * 3D Text annotation
 */
UCLASS(Blueprintable)
class CAVRNUSCONNECTOR_API UTextRenderer3D : public USceneComponent, public ITextRenderer
{
	GENERATED_BODY()

private:
	UPROPERTY()
	AActor* UserActor; /**< Pointer to current user. Used to calculate annotation rotation */

	UPROPERTY(EditAnywhere, Category = "Cavrnus")
	class UStaticMesh* StickMesh;
	UPROPERTY(EditAnywhere, Category = "Cavrnus")
	class TSubclassOf<UUserWidget> TextWidgetClass; /**< user widget class representing 3d text annotation */

	UPROPERTY()
	class UStaticMeshComponent* SpringArm;
	UPROPERTY()
	class UWidgetComponent* TextWidgetComponent;

	UPROPERTY()
	class UTextAnnotationWidget* AnnotationWidget; /**< user widget class representing 3d text annotation */

public:
	UTextRenderer3D();

	virtual void SetAnnotationText(const FString& InText) override;
	virtual void SetAnnotationTextColor(const FLinearColor& InColor) override;
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction) override;

	virtual void DestroyAnnotation() override;
	virtual void UpdateScale() override;

private:
	void RecalculateScale();
};
