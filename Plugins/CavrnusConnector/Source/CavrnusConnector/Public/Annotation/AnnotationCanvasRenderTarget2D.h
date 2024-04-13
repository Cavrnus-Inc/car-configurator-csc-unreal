// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/CanvasRenderTarget2D.h"
#include "Materials/MaterialInstanceDynamic.h"

#include <Misc/EngineVersionComparison.h>
#if !UE_VERSION_OLDER_THAN(5,4,0)
#define UE_5_4_LINKER_FIX
#include <PixelFormat.h>
#endif

#include "AnnotationCanvasRenderTarget2D.generated.h"

/**
 * Canvas render target for 2D annotations
 */
UCLASS()
class CAVRNUSCONNECTOR_API UAnnotationCanvasRenderTarget2D : public UCanvasRenderTarget2D
{
	GENERATED_BODY()

private:
	UPROPERTY()
	class UMaterialInstanceDynamic* MaterialInstance; /**< annotation material */

	UPROPERTY()
	class UFont* TextFont; /**< annotation text font */

	UPROPERTY()
	class UCanvas* DrawCanvas = nullptr; /**< draw canvas on which all annotations will be drawn */

	UPROPERTY()
	class UCanvasRenderTarget2D* EraserRenderTarget; /**< render target for erasers */

	UPROPERTY()
	class UCanvasRenderTarget2D* LinesRenderTarget; /**< render target for lines */
	UPROPERTY()
	class UCanvasRenderTarget2D* TextsRenderTarget; /**< render target for texts */

public:

	/**
	 * initialize all needed resources to draw any annotations
	 * @param InMaterialInstance -- annotation material
	 */
	void InitResources(class UMaterialInstanceDynamic* InMaterialInstance);

	/**
	 * Tries to render text annotation
	 * @param Text -- text annotation to render
	 */
	void TryRenderText(class UTextRenderer2D* Text);

	/**
	 * Tries to render line annotation
	 * @paaram Line -- line annotation to render
	 */
	void TryRenderLine(class ULineRenderer2D* Line);

	/**
	 * Tries to render any 2D annotation
	 * @param Annotation -- annotation to render
	 */
	void RenderAnnotation(class IAnnotation* Annotation);

	/**
	 * clear any 2D annotation from the canvas
	 * @param Annotation -- annotation to remove
	 */
	void ClearAnnotation(class IAnnotation* Annotation);

	/**
	 * Clear all canvases
	 */
	void Cleanup();

	/**
	 * Implementation copied from UTextureRenderTarget2D, as this was causing compile issues in UE5.1
	 * see https://forums.unrealengine.com/t/unresolved-external-symbol-utexturerendertarget2d-calctexturememorysizeenum/734482
	 */
	virtual uint32 CalcTextureMemorySizeEnum(ETextureMipCount Enum) const override;

	/**
	* Changing world invalidates cache of this render target.
	* The current world is updated with this helper.
	*/
	void SetCavrnusWorld(UObject* WorldContext);

#ifdef UE_5_4_LINKER_FIX
#if WITH_EDITOR
	virtual bool CanEditChange(const FProperty* InProperty) const override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	virtual bool CanConvertToTexture(ETextureSourceFormat& OutTextureSourceFormat, EPixelFormat& OutPixelFormat, FText* OutErrorMessage) const override;
	virtual TSubclassOf<UTexture> GetTextureUClass() const override;
	virtual EPixelFormat GetFormat() const override;
	virtual bool IsSRGB() const override;
	virtual float GetDisplayGamma() const override;
#endif

private:
	class FAnnotationTextItem BuildTextAnnotationRenderData(class UTextRenderer2D* Text);

	void DrawEraser(class UObject* AnnoObject);
	void CleanupSpecific(UCanvasRenderTarget2D* RenderTarget);
};
