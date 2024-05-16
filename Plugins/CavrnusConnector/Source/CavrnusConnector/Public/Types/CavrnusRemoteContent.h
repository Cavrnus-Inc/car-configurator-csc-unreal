#pragma once

#include "CoreMinimal.h"

// Always last
#include "CavrnusRemoteContent.generated.h"
/**
 *
 */
USTRUCT(BlueprintType)
struct CAVRNUSCONNECTOR_API FCavrnusRemoteContent
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Content")
	FString Id = "";

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Content")
	FString Name = "";

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Content")
	FString FileName = "";

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Content")
	FString ThumbnailUrl = "";

	UPROPERTY(BlueprintReadWrite, Category = "Cavrnus|Content")
	TMap<FString, FString> Tags = TMap<FString, FString>();

	FCavrnusRemoteContent() {}

	FCavrnusRemoteContent(FString id, FString name, FString fileName, FString thumbnailUrl, TMap<FString, FString> tags) 
	{
		Id = id;
		Name = name;
		FileName = fileName;
		ThumbnailUrl = thumbnailUrl;
		Tags = tags;
	}
};