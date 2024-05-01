#pragma once

#include <Containers/Map.h>
#include "Types/CavrnusBinding.h"
#include "Types/CavrnusCallbackTypes.h"

#include "PropertyId.generated.h"

USTRUCT()
struct CAVRNUSCONNECTOR_API FPropertyId
{
	GENERATED_BODY()

public:
	FPropertyId();
	FPropertyId(FString fullName);
	FPropertyId(FString containerName, FString propId);
	virtual ~FPropertyId();

	FString ContainerName;
	FString PropValueId;

	static const FString GetCombinedName(FPropertyId pId);

	bool operator==(const FPropertyId& other) const;

	friend uint32 GetTypeHash(const FPropertyId& propertyId)
	{
		return HashCombine(GetTypeHash(propertyId.ContainerName), GetTypeHash(propertyId.PropValueId));
	}
};
