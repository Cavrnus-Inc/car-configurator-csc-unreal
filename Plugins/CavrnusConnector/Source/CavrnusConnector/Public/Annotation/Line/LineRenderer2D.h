// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LineRenderer.h"
#include "UObject/NoExportTypes.h"
#include "LineRenderer2D.generated.h"

/**
 * 2D line annotation
 */
UCLASS()
class CAVRNUSCONNECTOR_API ULineRenderer2D : public UObject, public ILineRenderer
{
	GENERATED_BODY()

	TArray<FVector2D> Points;
	float Thickness;

public:
	TArray<FVector> Vertices; /**< line vertices to render */
	TArray<int> Triangles; /**< line triangles to render */

	/**
	 * Transform 3D points into 2D points and initialize all values used to render line on a canvas
	 * @param InPoints -- line points
	 * @param Color -- line color
	 * @param InThickness -- line thickness
	 * @param CanvasWidth -- canvas width this annotation will render on
	 * @param CanvasHeight -- canvas height this annotation will render on
	 * @param AspectRation -- aspect ratio of the plane this annotation will render on
	 */
	void Init(const TArray<FVector>& InPoints, const FLinearColor& Color, float InThickness, float CanvasWidth,
		float CanvasHeight, float AspectRatio);

	TArray<FVector2D> GetPoints() const { return Points; }
	FLinearColor GetColor() const { return Color; }
	float GetThickness() const { return Thickness; }



	/*
private:
	FVector2D CalculateLineIntersection(const FVector2D& CurrentPoint, const FVector2D& CurrentNormal, const FVector2D& NextPoint, const FVector2D& NextNormal);
	FVector To3DVector(const FVector2D& In2DVector, const int32 ZPos);
	*/
};
