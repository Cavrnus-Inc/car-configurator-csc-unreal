#pragma once

#include <MathUtil.h>
#include "CavrnusRelayModel.h"
#include "SpacePropertyModel.h"
#include "CavrnusPropertyValue.h"
#include "RelayModel/PropertyId.h"

namespace Cavrnus
{
	class CavrnusVirtualPropertyUpdate
	{
	public:
		CavrnusVirtualPropertyUpdate();
		CavrnusVirtualPropertyUpdate(Cavrnus::CavrnusRelayModel* relayModel, FCavrnusSpaceConnection spaceConn, const FPropertyId& propertyId, const FPropertyValue& propVal);
		~CavrnusVirtualPropertyUpdate();

		void UpdateWithNewData(const FPropertyValue& propVal);
		void Finalize();
		void Finalize(const FPropertyValue& propVal);

		void Cancel();

		double lastUpdatedTimeMs;

		FPropertyValue lastSentValue;

	protected:
		FCavrnusSpaceConnection SpaceConn;

		FString LiveUpdaterId;

		FPropertyId PropertyId;

		Cavrnus::CavrnusRelayModel* RelayModel;

		
	};
	
}