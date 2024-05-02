#pragma once

#include <Containers/Map.h>
#include "../../Public/Types/CavrnusBinding.h"
#include "../../Public/Types/CavrnusCallbackTypes.h"

namespace Cavrnus
{
	class SpacePermissionsModel
	{
	public:
		SpacePermissionsModel();
		virtual ~SpacePermissionsModel();

		void UpdatePolicyAllowed(FString policy, bool allowed);

		FCavrnusBinding BindPolicyAllowed(FString policy, FCavrnusPolicyUpdated callback);

	private:
		TMap<FString, bool> CurrPolicyAllowedValues;

		TMap<FString, TArray<FCavrnusPolicyUpdated>> PolicyBindings;
	};

} // namespace CavrnusRelay