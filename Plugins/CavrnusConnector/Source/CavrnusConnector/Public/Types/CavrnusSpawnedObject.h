#pragma once

#include "CoreMinimal.h"
#include "CavrnusSpaceConnection.h"
#include <Engine/Texture2D.h>

// Always last
#include "CavrnusSpawnedObject.generated.h"
/**
 *
 */
USTRUCT(BlueprintType)
struct CAVRNUSCONNECTOR_API FCavrnusSpawnedObject
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Users")
	FCavrnusSpaceConnection SpaceConnection = FCavrnusSpaceConnection();

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Users")
	FString PropertiesContainerName = "";

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Users")
	FString CreationOpId = "";

	FCavrnusSpawnedObject(const FString& PropertiesContainerName, const FString& CreationOpId, AActor* Actor)
		: PropertiesContainerName(PropertiesContainerName), CreationOpId(CreationOpId)
	{
	}

	FCavrnusSpawnedObject() = default;
};