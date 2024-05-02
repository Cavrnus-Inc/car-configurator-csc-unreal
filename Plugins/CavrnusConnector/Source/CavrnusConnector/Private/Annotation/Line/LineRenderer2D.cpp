// Fill out your copyright notice in the Description page of Project Settings.


#include "Annotation/Line/LineRenderer2D.h"


FVector2D CalculateLineIntersection(const FVector2D& CurrentPoint,
	const FVector2D& CurrentNormal, const FVector2D& NextPoint,
	const FVector2D& NextNormal)
{
	const float PerpendDot = CurrentNormal.X * NextNormal.Y - CurrentNormal.Y * NextNormal.X;
	if (PerpendDot == 0)
	{
		return CurrentPoint;
	}
	const float CX = NextPoint.X - CurrentPoint.X;
	const float CY = NextPoint.Y - CurrentPoint.Y;
	const float T = (CX * NextNormal.Y - CY * NextNormal.X) / PerpendDot;

	return FVector2D(CurrentPoint.X + T * CurrentNormal.X, CurrentPoint.Y + T * CurrentNormal.Y);
}


FVector To3DVector(const FVector2D& In2DVector, const int32 ZPos)
{
	return FVector(In2DVector.X, ZPos, In2DVector.Y);
}


void ULineRenderer2D::Init(const TArray<FVector>& InPoints, const FLinearColor& InColor, float InThickness,
	float CanvasWidth, float CanvasHeight, float AspectRatio)
{
	Dimension = EAnnotationDimension::_2D;

	for (const FVector& Point : InPoints)
	{
		const FVector2D Anchor = FVector2D(Point.X / AspectRatio, 1.f - Point.Z);
		const float X = CanvasWidth * Anchor.X;
		const float Y = CanvasHeight * Anchor.Y;
		Points.Add(FVector2D(X, Y));
	}

	Color = InColor;
	Thickness = InThickness;
}
