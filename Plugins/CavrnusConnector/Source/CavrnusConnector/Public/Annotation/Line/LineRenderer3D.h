// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "LineRenderer.h"
#include "ProceduralMeshComponent.h"
#include "LineRenderer3D.generated.h"

/**
 * 3D line annotation placed on an space holo object
 */
UCLASS(Blueprintable)
class CAVRNUSCONNECTOR_API ULineRenderer3D : public UProceduralMeshComponent, public ILineRenderer
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Cavrnus")
	class UMaterial* MaterialRef; /**< annotation material */

public:
	ULineRenderer3D(const FObjectInitializer& ObjectInitializer);

	/**
	 * Creates 3D annotation line on objects and in space
	 * @param InPoints -- line points relative to object its lies on
	 * @param InNormail -- line points normals
	 * @param InColor -- line color
	 * @param InWidth -- line width
	 * @param ComponentBasedLine -- is line is based on component?
	 */
	void ConstructLine(const TArray<FVector>& InPoints, const TArray<FVector>& InNormals, const FLinearColor& InColor,
		float InWidth, bool ComponentBasedLine = true);

	virtual void DestroyAnnotation() override;

private:
	TPair<FVector, FVector> CalculateCoPlanarConnectorPointIfNeeded(const FVector& CurrentPoint,
		const FVector& CurrentNormal,
		const FVector& NextPoint,
		const FVector& NextNormal);
	FVector SafeNormalize(const FVector& VectorToNormalize, const FVector& ValueIfNan);
};
