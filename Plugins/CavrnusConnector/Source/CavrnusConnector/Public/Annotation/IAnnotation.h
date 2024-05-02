// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <UObject/Interface.h>
#include "IAnnotation.generated.h"

enum class EAnnotationDimension : uint8
{
	None,
	_2D,
	_3D
};

/**
 * BoardStateData structure contains data about annotation state on board
 */
struct BoardStateData
{
	int32 Frame;					/**< from what frame annotation will be displayed. Mostly used for PDF boards */
	int32 FrameStart = 0; /**< from what frame annotation will be displayed. Mostly used for VIDEO boards */
	FString Source;
	int32 StateTypeCase; /**< describe which field will be used: Frame, FrameStart or Source */
};

/**
 *  AnnotationData structure contains data about annotation. Can be 2D or 3D depends on type of object that annotation is attached to
 */
struct AnnotationData
{
	AnnotationData() {}
	AnnotationData(const AnnotationData& rhs)
	{
		Dimension = rhs.Dimension;
		ID = rhs.ID;
		Color = rhs.Color;
		VisibleWithingState = rhs.VisibleWithingState;
		Time = rhs.Time;
	}

	EAnnotationDimension Dimension;			/**< Dimension of the annotation. Can be 2D or 3D */
	FString ID;													/**< Annotation unique identifier */
	FLinearColor Color;									/**< Annotation color */
	BoardStateData VisibleWithingState; /**< Annotation state See BoardStateData */
	int64 Time;													/**< date (in Seconds) at which annotation was created */

	/**
	 * Construct a full copy of this annotation object
	 */
	virtual AnnotationData* Clone() const
	{
		return new AnnotationData(*this);
	}

	virtual ~AnnotationData()
	{
	}
};

/**
 * LineAnnotationData structure contains data about Line annotation. Can be 2D or 3D
 */
struct LineAnnotationData : AnnotationData
{
	LineAnnotationData()
		: AnnotationData() {}
	LineAnnotationData(const LineAnnotationData& rhs)
		: AnnotationData(rhs)
	{
		Points = rhs.Points;
		Normals = rhs.Normals;
		Width = rhs.Width;
	}

	TArray<FVector> Points;	 /**< Location of each line point on a object its attached to */
	TArray<FVector> Normals; /**< Normal of each line point on a object its attached to */
	float Width;						 /**< Width of the line annotation */

	/**
	 * Construct a full copy of this annotation object
	 */
	virtual AnnotationData* Clone() const override
	{
		return new LineAnnotationData(*this);
	}

	virtual ~LineAnnotationData() override
	{
	}
};

/**
 * TextAnnotationData structure contains data about Text annotation. Can be 2D or 3D
 */
struct TextAnnotationData : AnnotationData
{
	TextAnnotationData()
		: AnnotationData() {}
	TextAnnotationData(const TextAnnotationData& rhs)
		: AnnotationData(rhs)
	{
		Language = rhs.Language;
		Text = rhs.Text;
		AnchorPosition = rhs.AnchorPosition;
		Height = rhs.Height;
		TagOffet = rhs.TagOffet;
	}

	FString Language;				/**< Text language */
	FString Text;						/**< Text of this annotation */
	FVector AnchorPosition; /**< Annotation root position */
	float Height;						/**< Height of the text block */
	FVector TagOffet;				/**< ? */

	/**
	 * Construct a full copy of this annotation object
	 */
	virtual AnnotationData* Clone() const override
	{
		return new TextAnnotationData(*this);
	}

	virtual ~TextAnnotationData() override
	{
	}
};

/**
 * AnnotationsData structure is a container for any annotations on the object they attached to
 */
struct AnnotationsData
{
	AnnotationsData()
	{
		Lines.Reserve(10);
		Texts.Reserve(10);
	}

	AnnotationsData(const AnnotationsData& rhs)
	{
		RootComponentID = rhs.RootComponentID;
		for (LineAnnotationData* Line : rhs.Lines)
			Lines.Add(dynamic_cast<LineAnnotationData*>(Line->Clone()));

		for (TextAnnotationData* Text : rhs.Texts)
			Texts.Add(dynamic_cast<TextAnnotationData*>(Text->Clone()));
	}

	FString RootComponentID;					 /**< Identifier of the component annotations are attached to */
	TArray<LineAnnotationData*> Lines; /**< Lines annotations */
	TArray<TextAnnotationData*> Texts; /**< Text annotations */

	/**
	 * Construct a full copy of this annotation object
	 */
	virtual AnnotationsData* Clone() const
	{
		return new AnnotationsData(*this);
	}

	virtual ~AnnotationsData()
	{
		for (LineAnnotationData*& Data : Lines)
		{
			delete Data;
			Data = nullptr;
		}
		Lines.Empty();

		for (TextAnnotationData*& Data : Texts)
		{
			delete Data;
			Data = nullptr;
		}
		Texts.Empty();
	}
};

/**
 * LiveAnnotationData structure contains data about annotation created in runtime
 */
struct LiveAnnotationData
{
	FString RootID;											/**< Identifier of this annotation */
	FString RootComponentID;						/**< Identifier of the component this annotations is attached to */
	LineAnnotationData* Line = nullptr; /**< Line annotation. Can bu null */
	TextAnnotationData* Text = nullptr; /**< Text annotation. Can bu null */
	bool bRemoveAnnotation = false;

	~LiveAnnotationData()
	{
		if (Line)
		{
			delete Line;
		}
		Line = nullptr;

		if (Text)
		{
			delete Text;
		}
		Text = nullptr;
	}
};

UINTERFACE()
class CAVRNUSCONNECTOR_API UAnnotation : public UInterface
{
	GENERATED_BODY()
};

/**
 * Annotation interface
 */
class CAVRNUSCONNECTOR_API IAnnotation
{
public:
	GENERATED_BODY()

	FString ID; /**< Annotation identifier */
	EAnnotationDimension Dimension; /**< annotation dimension */
	int32 FrameStart = 0; /**< from what frame this annotation will be visible */
	int32 VisibleAtFrame = 0; /**< at what frame this annotation will be visible */
	int64 Time; /**< annotation creation time in seconds */
	FVector2D Scale; /**< annotation scale */
	FLinearColor Color; /**< annotation color */
	bool Rendered = false; /**< already rendered on object */

	/**
	 * base function of destroying annotation
	 */
	virtual void DestroyAnnotation()
	{
	};

	/**
	 * base function of updating scale
	 */
	virtual void UpdateScale()
	{
	}
};
