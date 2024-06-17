// Copyright(c) Cavrnus. All rights reserved.
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
	FString ContainerName = "";
	FString PropValueId = "";

	FPropertyId()
	{
		PropValueId = "";
		ContainerName = "";
	}
	FPropertyId(FString fullName)
	{
		if (fullName.StartsWith("/"))
			fullName.RemoveFromStart("/");
		if (fullName.EndsWith("/"))
			fullName.RemoveFromEnd("/");

		PropValueId = "";
		for (int i = fullName.Len() - 1; i >= 0; i--)
		{
			if (fullName[i] == '/')
			{
				PropValueId = PropValueId.Reverse();
				break;
			}
			PropValueId.AppendChar(fullName[i]);
		}

		ContainerName = fullName;
		ContainerName.RemoveFromEnd("/" + PropValueId);
	}

	FPropertyId(FString containerName, FString propId)
	{
		PropValueId = propId;
		ContainerName = containerName;

		//Clean up & standardize the ContainerName
		if (ContainerName.StartsWith("/"))
			ContainerName.RemoveFromStart("/");
		if (ContainerName.EndsWith("/"))
			ContainerName.RemoveFromEnd("/");
	}

	~FPropertyId(){}

	static const FString GetCombinedName(FPropertyId pId)
	{
		return pId.ContainerName + "/" + pId.PropValueId;
	}

	friend uint32 GetTypeHash(const FPropertyId& propertyId)
	{
		return HashCombine(GetTypeHash(propertyId.ContainerName), GetTypeHash(propertyId.PropValueId));
	}

	bool operator==(const FPropertyId& other) const
	{
		return ContainerName.Equals(other.ContainerName, ESearchCase::CaseSensitive) && PropValueId.Equals(other.PropValueId, ESearchCase::CaseSensitive);
	}


};
