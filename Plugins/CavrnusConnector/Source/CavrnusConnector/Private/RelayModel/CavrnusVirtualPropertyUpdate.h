// Copyright(c) Cavrnus. All rights reserved.
#pragma once

#include <MathUtil.h>
#include "Types/CavrnusPropertyValue.h"
#include "Types/PropertyId.h"
#include "Types/PropertyPostOptions.h"

namespace Cavrnus
{
	class CavrnusRelayModel;

	class CavrnusVirtualPropertyUpdate
	{
	public:
		CavrnusVirtualPropertyUpdate();
		CavrnusVirtualPropertyUpdate(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const FPropertyId& propertyId, const FPropertyValue& propVal, const FPropertyPostOptions& options = FPropertyPostOptions());
		~CavrnusVirtualPropertyUpdate();

		void UpdateWithNewData(const FPropertyValue& propVal);
		void Finalize();
		void Finalize(const FPropertyValue& propVal);

		void Cancel();

		double lastUpdatedTimeSec;

		FPropertyValue lastSentValue;

	protected:
		FCavrnusSpaceConnection SpaceConn;

		FString LiveUpdaterId;

		FPropertyId PropertyId;

		Cavrnus::CavrnusRelayModel* RelayModel;

		FPropertyPostOptions Options;
	};
}
