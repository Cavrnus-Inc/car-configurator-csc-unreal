// Fill out your copyright notice in the Description page of Project Settings.


#include "Annotation/Line/LineRenderer3D.h"
#include "Chaos/AABB.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstanceDynamic.h"

void ULineRenderer3D::DestroyAnnotation()
{
	ClearAllMeshSections();
	MarkRenderStateDirty();
}


ULineRenderer3D::ULineRenderer3D(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Dimension = EAnnotationDimension::_3D;
}

void ULineRenderer3D::ConstructLine(const TArray<FVector>& InPoints, const TArray<FVector>& InNormals,
	const FLinearColor& InColor, float InWidth, bool ComponentBasedLine /*= true*/)
{
	TArray<int32> Triangles;
	TArray<FVector> Vertices;
	TArray<FVector> VertNormals;

	TArray<TPair<FVector, FVector>> PointsWithConnectors;
	PointsWithConnectors.Add(TPair<FVector, FVector>(InPoints[0], InNormals[0]));

	for (int32 Index = 0; Index < InPoints.Num() - 1; Index++)
	{
		FVector CurrentPoint = InPoints[Index];
		FVector NextPoint = InPoints[Index + 1];

		FVector CurrentNormal = InNormals[Index];
		FVector NextNormal = InNormals[Index + 1];

		FVector FromTo = NextPoint - CurrentPoint;
		if (FromTo.Size() < .000001f) // duplicate point.
		{
			continue;
		}


		if (ComponentBasedLine)
		{
			const auto FacedConnector = CalculateCoPlanarConnectorPointIfNeeded(
				CurrentPoint, CurrentNormal, NextPoint, NextNormal);
			if (FacedConnector != TPair<FVector, FVector>())
			{
				PointsWithConnectors.Add(FacedConnector);
			}
		}

		const auto Connector = TPair<FVector, FVector>(NextPoint, NextNormal);
		PointsWithConnectors.Add(Connector);
	}

	int32 VSSinceReset = 0;

	TPair<FVector, FVector> From = TPair<FVector, FVector>(FVector::ZeroVector, FVector::ZeroVector);
	FVector RemainingSideVec = FVector::ZeroVector;
	for (int32 Index = 0; Index < PointsWithConnectors.Num(); Index++)
	{
		const auto To = PointsWithConnectors[Index];
		if (From.Key == FVector::ZeroVector)
		{
			From = To;
			continue;
		}

		if (To.Key == FVector::ZeroVector)
		{
			VSSinceReset = 0;
			if (Vertices.Num() > 2)
			{
				const int32 VerticesNum = Vertices.Num();
				Vertices[VerticesNum - 2] = Vertices[VerticesNum - 2] - RemainingSideVec;
				Vertices[VerticesNum - 1] = Vertices[VerticesNum - 1] + RemainingSideVec;
			}
			continue;
		}

		const FVector Forward = SafeNormalize(To.Key - From.Key, -FVector::ForwardVector);
		const FVector UpFrom = SafeNormalize(FVector::CrossProduct(Forward, From.Value), FVector::UpVector);
		const FVector UpTo = SafeNormalize(FVector::CrossProduct(Forward, To.Value), FVector::UpVector);

		float AdjustedWidth = InWidth * .5f;
		if (Vertices.Num() > 1 && VSSinceReset > 1)
		{
			const int32 VerticesNum = Vertices.Num();
			const int32 NormalsNum = VertNormals.Num();

			const FVector SideVec = UpTo * AdjustedWidth * .5f;
			Vertices[VerticesNum - 2] = Vertices[VerticesNum - 2] + -SideVec;
			Vertices[VerticesNum - 1] = Vertices[VerticesNum - 1] + SideVec;

			VertNormals[NormalsNum - 2] = SafeNormalize(
				VertNormals[NormalsNum - 2] + SafeNormalize(From.Value, FVector::RightVector), FVector::RightVector);
			VertNormals[NormalsNum - 1] = SafeNormalize(
				VertNormals[NormalsNum - 1] + SafeNormalize(From.Value, FVector::RightVector), FVector::RightVector);
		}
		else
		{
			Vertices.Add(FVector(From.Key - UpFrom * AdjustedWidth));
			Vertices.Add(FVector(From.Key + UpFrom * AdjustedWidth));

			VertNormals.Add(SafeNormalize(From.Value, FVector::RightVector));
			VertNormals.Add(SafeNormalize(From.Value, FVector::RightVector));
		}

		RemainingSideVec = UpTo * AdjustedWidth * .5f;

		Vertices.Add(FVector(To.Key - RemainingSideVec));
		Vertices.Add(FVector(To.Key + RemainingSideVec));

		VertNormals.Add(To.Value.GetSafeNormal());
		VertNormals.Add(To.Value.GetSafeNormal());

		VSSinceReset += 2;

		const int32 VerticesNum = Vertices.Num();
		Triangles.Append(TArray<int32>{
			VerticesNum - 4, VerticesNum - 2, VerticesNum - 3, VerticesNum - 3, VerticesNum - 2, VerticesNum - 1
		});

		From = To;
	}

	if (Vertices.Num() > 2)
	{
		const int32 VerticesNum = Vertices.Num();
		Vertices[VerticesNum - 2] = Vertices[VerticesNum - 2] - RemainingSideVec;
		Vertices[VerticesNum - 1] = Vertices[VerticesNum - 1] + RemainingSideVec;
	}


	TArray<FVector2D> UV0;
	TArray<FLinearColor> VertColors;
	TArray<FProcMeshTangent> Tangents;
	CreateMeshSection_LinearColor(0, Vertices, Triangles, VertNormals, UV0, VertColors, Tangents, false);

	UMaterialInstanceDynamic* MaterialInstanceDynamic = UMaterialInstanceDynamic::Create(MaterialRef, nullptr);
	if (MaterialInstanceDynamic)
	{
		MaterialInstanceDynamic->SetVectorParameterValue(FName("Color"), SRGBToLinear(InColor));
		SetMaterial(0, MaterialInstanceDynamic);
	}

	SetCastShadow(false);
	MarkRenderStateDirty();
}


TPair<FVector, FVector> ULineRenderer3D::CalculateCoPlanarConnectorPointIfNeeded(const FVector& CurrentPoint,
	const FVector& CurrentNormal, const FVector& NextPoint, const FVector& NextNormal)
{
	FVector FromTo = NextPoint - CurrentPoint;
	FromTo.Normalize();

	const float CurDot = FVector::DotProduct(CurrentNormal, FromTo);
	const float NextDot = FVector::DotProduct(NextNormal, FromTo);
	if (CurDot < -0.1f &&
		NextDot > 0.1f)
	{
		//find intermediate point
		const FPlane CurrentPlane = FPlane(CurrentPoint, CurrentNormal);
		const FPlane NextPlane = FPlane(NextPoint, NextNormal);

		FVector Direction, IntersectPoint;
		if (FMath::IntersectPlanes2(IntersectPoint, Direction, CurrentPlane, NextPlane))
		{
			const FRay DrawRay = FRay(CurrentPoint, FromTo, true);
			const FVector ClosestApproach = DrawRay.ClosestPoint(IntersectPoint);
			if (!ClosestApproach.Equals(DrawRay.Origin))
			{
				const FVector NormalizedNormals = (CurrentNormal + NextNormal).GetSafeNormal();
				return TPair<FVector, FVector>(ClosestApproach, NormalizedNormals);
			}
		}
	}
	return TPair<FVector, FVector>();
}


FVector ULineRenderer3D::SafeNormalize(const FVector& VectorToNormalize, const FVector& ValueIfNan)
{
	FVector Norm = VectorToNormalize.GetSafeNormal();
	if (Norm == FVector::ZeroVector)
	{
		Norm = ValueIfNan;
	}
	return Norm;
}
