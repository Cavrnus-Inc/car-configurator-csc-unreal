#pragma once

#include <Containers/Map.h>
#include "../../Public/Types/CavrnusBinding.h"
#include "../../Public/Types/CavrnusCallbackTypes.h"

namespace Cavrnus
{
	struct PropertyId
	{
	public:
		PropertyId();
		PropertyId(FString fullName);
		PropertyId(FString containerName, FString propId);
		virtual ~PropertyId();

		FString ContainerName;
		FString PropValueId;

		static const FString GetCombinedName(PropertyId pId);

		bool operator==(const PropertyId& other) const;

		friend uint32 GetTypeHash(const PropertyId& propertyId)
		{
			return HashCombine(GetTypeHash(propertyId.ContainerName), GetTypeHash(propertyId.PropValueId));
		}
	};

} // namespace CavrnusRelay