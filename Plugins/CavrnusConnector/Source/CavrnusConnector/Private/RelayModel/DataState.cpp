#include "RelayModel/DataState.h"

namespace Cavrnus
{

	DataState::DataState()
	{
	}

	DataState::~DataState()
	{

	}

	TArray<FCavrnusSpaceConnection> DataState::GetCurrentSpaceConnections()
	{
		return CurrentSpaceConnections;
	}

	void DataState::AddSpaceConnection(const FCavrnusSpaceConnection& spaceConnection)
	{
		CurrentSpaceConnections.Add(spaceConnection);

		for (int i = 0; i < spaceConnectionBindings.Num(); i++)
		{
			(*spaceConnectionBindings[i])(spaceConnection);
		}
		spaceConnectionBindings.Empty();
	}

	void DataState::AwaitAnySpaceConnection(const CavrnusSpaceConnected& onConnected)
	{
		if (CurrentSpaceConnections.Num() > 0)
		{
			onConnected(CurrentSpaceConnections[0]);
		}
		else
		{
			using spaceFunction = const CavrnusSpaceConnected;
			TSharedPtr<spaceFunction> CallbackPtr = MakeShareable(new spaceFunction(onConnected));

			spaceConnectionBindings.Add(CallbackPtr);
		}
	}

	void DataState::AddJoinableSpace(FCavrnusSpaceInfo space)
	{
		CurrJoinableSpaces.Add(space);

		for (int i = 0; i < JoinableSpaceAddedBindings.Num(); i++)
			JoinableSpaceAddedBindings[i].ExecuteIfBound(space);
	}

	void DataState::UpdateJoinableSpace(FCavrnusSpaceInfo space)
	{
		int indexToRem = -1;
		for (int i = 0; i < CurrJoinableSpaces.Num(); i++) {
			if (CurrJoinableSpaces[i].SpaceId == space.SpaceId)
			{
				indexToRem = i;
				break;
			}
		}
		if (indexToRem != -1)
		{
			CurrJoinableSpaces.RemoveAt(indexToRem);
		}
		CurrJoinableSpaces.Add(space);

		for (int i = 0; i < JoinableSpaceUpdatedBindings.Num(); i++)
			JoinableSpaceUpdatedBindings[i].ExecuteIfBound(space);
	}

	void DataState::RemoveJoinableSpace(FCavrnusSpaceInfo space)
	{
		CurrJoinableSpaces.Remove(space);

		for (int i = 0; i < JoinableSpaceRemovedBindings.Num(); i++)
			JoinableSpaceRemovedBindings[i].ExecuteIfBound(space);
	}

	FCavrnusBinding DataState::BindJoinableSpaces(FCavrnusSpaceInfoEvent spaceAdded, FCavrnusSpaceInfoEvent spaceUpdated, FCavrnusSpaceInfoEvent spaceRemoved)
	{
		JoinableSpaceAddedBindings.Add(spaceAdded);
		JoinableSpaceUpdatedBindings.Add(spaceUpdated);
		JoinableSpaceRemovedBindings.Add(spaceRemoved);

		for (int i = 0; i < CurrJoinableSpaces.Num(); i++)
			spaceAdded.ExecuteIfBound(CurrJoinableSpaces[i]);

		return FCavrnusBinding([this, spaceAdded, spaceUpdated, spaceRemoved]()
			{
				JoinableSpaceAddedBindings.Remove(spaceAdded);
				JoinableSpaceUpdatedBindings.Remove(spaceUpdated);
				JoinableSpaceRemovedBindings.Remove(spaceRemoved);
			});
	}

}