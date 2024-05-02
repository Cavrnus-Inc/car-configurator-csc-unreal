#include "RelayModel/SpacePermissionsModel.h"

namespace Cavrnus
{

	SpacePermissionsModel::SpacePermissionsModel()
	{
	}

	SpacePermissionsModel::~SpacePermissionsModel()
	{

	}

	void SpacePermissionsModel::UpdatePolicyAllowed(FString policy, bool allowed)
	{
		bool exists = CurrPolicyAllowedValues.Contains(policy);
		CurrPolicyAllowedValues.FindOrAdd(policy);

		bool changed = !CurrPolicyAllowedValues[policy] == allowed;
		CurrPolicyAllowedValues[policy] = allowed;

		if (PolicyBindings.Contains(policy) && (!exists || changed))
		{
			for (int i = 0; i < PolicyBindings[policy].Num(); i++)
				PolicyBindings[policy][i].ExecuteIfBound(policy, allowed);
		}
	}

	FCavrnusBinding SpacePermissionsModel::BindPolicyAllowed(FString policy, FCavrnusPolicyUpdated callback)
	{
		if (CurrPolicyAllowedValues.Contains(policy))
			callback.ExecuteIfBound(policy, CurrPolicyAllowedValues[policy]);

		PolicyBindings.FindOrAdd(policy);
		PolicyBindings[policy].Add(callback);

		return FCavrnusBinding([this, policy, callback]() { PolicyBindings[policy].Remove(callback); });
	}
}