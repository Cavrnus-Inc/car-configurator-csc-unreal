#pragma once

#include <Containers/Map.h>
#include "../../Public/Types/CavrnusBinding.h"
#include "../../Public/Types/CavrnusCallbackTypes.h"

namespace Cavrnus
{
	class DataState
	{
	public:
		DataState();
		virtual ~DataState();

		FCavrnusAuthentication* CurrentAuthentication;

		TArray<FCavrnusSpaceConnection> GetCurrentSpaceConnections();

		void AddSpaceConnection(const FCavrnusSpaceConnection& spaceConnection);

		void AwaitAnySpaceConnection(const CavrnusSpaceConnected& onConnected);

		void AddJoinableSpace(FCavrnusSpaceInfo space);
		void UpdateJoinableSpace(FCavrnusSpaceInfo space);
		void RemoveJoinableSpace(FCavrnusSpaceInfo space);

		FCavrnusBinding BindJoinableSpaces(FCavrnusSpaceInfoEvent spaceAdded, FCavrnusSpaceInfoEvent spaceUpdated, FCavrnusSpaceInfoEvent spaceRemoved);

	private:
		TArray<FCavrnusSpaceConnection> CurrentSpaceConnections;

		TArray<TSharedPtr<const CavrnusSpaceConnected>> spaceConnectionBindings;

		TArray<FCavrnusSpaceInfo> CurrJoinableSpaces;

		TArray<FCavrnusSpaceInfoEvent> JoinableSpaceAddedBindings;
		TArray<FCavrnusSpaceInfoEvent> JoinableSpaceUpdatedBindings;
		TArray<FCavrnusSpaceInfoEvent> JoinableSpaceRemovedBindings;
	};

} // namespace CavrnusRelay