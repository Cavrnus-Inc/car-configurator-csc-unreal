// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Components/WidgetComponent.h"
#include "Types/CavrnusSpaceConnection.h"
#include "Types/CavrnusCallbackTypes.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "NoMeshObject.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnContentCreated, class ANoMeshObject*, Actor, const FString&, ContentPath);

class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class UCanvasRenderTarget2D;

class UAnnotationCanvasRenderTarget2D;
struct TextAnnotationData;
struct LineAnnotationData;


/**
 * ENoMeshObjectType represent a type of the no mesh object
 */
UENUM()
enum class ENoMeshObjectType
{
	None = 0,
	ContentId = 1,
	Whiteboard = 2,
	StreamBoardOwner = 3,
	VideoBoard = 4,
	ImageBoard = 5,
	UserBoard = 6,
	ObjectProgress = 7,
	BoardProgress = 8,
	Textboard = 10,
	Script = 11,
	ArTracker = 15,
	PDFBoard = 20,
	CustomContentID = 21
};

UCLASS()
class CAVRNUSCONNECTOR_API ANoMeshObject : public AActor
{
	GENERATED_BODY()

private:
	int32 LastKnownAnnosCount = 0;

protected:
	float AspectRatio = 1.777778f;

	FVector2D ContentScale;

	ENoMeshObjectType Type;

	UPROPERTY()
	TMap<FString, UObject*> ObjectAnnotations;

	UPROPERTY()
	UAnnotationCanvasRenderTarget2D* AnnosRenderTarget;

	UPROPERTY()
	UCanvasRenderTarget2D* MainRenderTarget;

	UPROPERTY()
	USceneComponent* RootContainer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Cavrnus")
	UStaticMeshComponent* MeshComponent;

	UPROPERTY()
	UMaterialInterface* ContentMaterial;

	UPROPERTY()
	UMaterialInstanceDynamic* MaterialInstance;

	UPROPERTY()
	class UTexture* TextureRenderTarget;

public:
	// Sets default values for this actor's properties
	ANoMeshObject(const FObjectInitializer& ObjectInitializer);

	virtual void BeginPlay() override;

	FOnContentCreated OnContentCreated;

	/**
	 * Used to clear decrypted resources to construct the object.
	 * This needs to be called if there are decrypted files required to construct this object.
	 * @param -- Path to the decrypted resources. Assumption is that, path is pointing to the resource under a folder
	 * Such as "TempDecryptedResource/Resource.file"
	 * This code will destroy TempDecryptedResource recursively. Everything regarding decrypted file will be removed.
	 */
	static void DestroyDecryptedResources(const FString& Path);

	/// Indicates if the object is being dragged or not.
	UPROPERTY(BlueprintReadOnly, Category = "Cavrnus")
	bool IsOnDrag = false;

	/// Delta move measurement helper. Handles update this to measure delta movement.
	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus")
	FVector DragPreviousLocation;

	/// Template mesh's aspect ratio.
	static constexpr float InitialAspectRatio = 1.68f;

protected:

	void UpdateResources();

	/**
	 * Adjust the aspect ratio based on its content.
	 */
	UFUNCTION(BlueprintCallable, Category = "Cavrnus|NoMesh")
	virtual void AdjustAspectRatio();

	/**
	 * Returns desired aspect ratio for the board. Contents may want to change the Mesh's default aspect ratio.
	 */
	virtual float GetDesiredAspectRatio() const;

	UFUNCTION(BlueprintCallable, Category = "Cavrnus")
	virtual void CreateContent(const FString& ContentPath);

	/// Storage for the scale arriving from Cavrnus Platform.
	FVector CavrnusScale;

	FCavrnusSpaceConnection SpaceConnection;
	FCavrnusSpaceConnected OnSpaceConnected;

public:

	UFUNCTION()
	void SpaceConnected(FCavrnusSpaceConnection spaceConn);
	virtual class UObject* CreateTextAnnotationComponent(TextAnnotationData* Text, USceneComponent* Parent);
	virtual class UObject* CreateLineAnnotationComponent(LineAnnotationData* Line, USceneComponent* Parent);
	virtual void MarkDirty(class IAnnotation* Annotation, bool Remove = false);
	virtual void MarkDirty();
	virtual FVector2D GetContentScale() const { return ContentScale; }
	void SetType(ENoMeshObjectType InType) { Type = InType; }
	ENoMeshObjectType GetType() const { return Type; }
	virtual void SetNewComponentMaterial(FString ComponentId, UMaterialInstanceDynamic* NewMaterial);
	virtual void Remove();
protected:
	virtual bool CanBeRendered(class IAnnotation* Anno) const { return true; }
	virtual void OnActionReceived(FString Action) {}

	UFUNCTION()
	void OnMainRenderTargetUpdated(class UCanvas* Canvas, int32 Width, int32 Height);

	bool IsAnyAnnotationRendered() const;
};
