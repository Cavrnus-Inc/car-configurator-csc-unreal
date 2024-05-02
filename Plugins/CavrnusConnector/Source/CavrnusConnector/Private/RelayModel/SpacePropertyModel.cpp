#include "RelayModel/SpacePropertyModel.h"
#include <TextureResource.h>

namespace Cavrnus
{
	SpacePropertyModel::SpacePropertyModel(){}

	SpacePropertyModel::~SpacePropertyModel(){}

	void SpacePropertyModel::UpdateServerPropVal(FPropertyId fullPropertyId, FPropertyValue value)
	{
		if (!CurrServerPropValues.Contains(fullPropertyId))
		{
			CurrServerPropValues.FindOrAdd(fullPropertyId);
		}
		
		CurrServerPropValues[fullPropertyId] = value;
		TryExecPropBindings(fullPropertyId);
	}

	int SpacePropertyModel::SetLocalPropVal(FPropertyId fullPropertyId, FPropertyValue value)
	{
		//We treat this like a has, but use a dict cuz stupid string comparison stuff
		if (CurrPropReadonlyMetadata.Contains(fullPropertyId)) 
		{
			return -1;
		}

		if (!CurrLocalPropValues.Contains(fullPropertyId))
		{
			CurrLocalPropValues.FindOrAdd(fullPropertyId);
			LocalPropValidationIds.FindOrAdd(fullPropertyId);
		}

		CurrLocalPropValues[fullPropertyId] = value;
		TryExecPropBindings(fullPropertyId);

		validationIdIncrementer++;
		LocalPropValidationIds[fullPropertyId] = validationIdIncrementer;
		return validationIdIncrementer;
	}

	FPropertyValue SpacePropertyModel::GetCurrentPropValue(FPropertyId fullPropertyId)
	{
		//Returns an invalid value
		if (!PropValueExists(fullPropertyId))
			return FPropertyValue();

		if (!CurrServerPropValues.Contains(fullPropertyId))
			return CurrLocalPropValues[fullPropertyId];

		if (!CurrLocalPropValues.Contains(fullPropertyId))
			return CurrServerPropValues[fullPropertyId];

		if (CurrServerPropValues[fullPropertyId].Priority > CurrLocalPropValues[fullPropertyId].Priority)
			return CurrServerPropValues[fullPropertyId];

		return CurrLocalPropValues[fullPropertyId];
	}

	void SpacePropertyModel::InvalidateLocalPropValue(FPropertyId fullPropertyId, int propValidationId)
	{
		if (LocalPropValidationIds.Contains(fullPropertyId) && LocalPropValidationIds[fullPropertyId] == propValidationId)
		{
			LocalPropValidationIds.Remove(fullPropertyId);

			const FPropertyValue& oldPropVal = GetCurrentPropValue(fullPropertyId);

			CurrLocalPropValues.Remove(fullPropertyId);
			
			const FPropertyValue& newPropVal = GetCurrentPropValue(fullPropertyId);

			bool changed = !(newPropVal == oldPropVal);
			if (changed)
				TryExecPropBindings(fullPropertyId);
		}
	}

	void SpacePropertyModel::UpdatePropMetadata(FPropertyId fullPropertyId, bool isReadonly)
	{
		if (!isReadonly && CurrPropReadonlyMetadata.Contains(fullPropertyId)) 
		{
			CurrPropReadonlyMetadata.Remove(fullPropertyId);
		}
		else if (isReadonly && !CurrPropReadonlyMetadata.Contains(fullPropertyId)) 
		{
			CurrPropReadonlyMetadata.Add(fullPropertyId, true);
		}

		if (isReadonly && LocalPropValidationIds.Contains(fullPropertyId)) 
		{
			LocalPropValidationIds.Remove(fullPropertyId);

			const FPropertyValue& oldPropVal = GetCurrentPropValue(fullPropertyId);

			CurrLocalPropValues.Remove(fullPropertyId);

			const FPropertyValue& newPropVal = GetCurrentPropValue(fullPropertyId);

			bool changed = !(newPropVal == oldPropVal);
			if (changed)
				TryExecPropBindings(fullPropertyId);
		}
	}

	void SpacePropertyModel::TryExecPropBindings(FPropertyId fullPropertyId)
	{
		const FPropertyValue& activePropVal = GetCurrentPropValue(fullPropertyId);

		//This shouldn't happen, but could potentially when handling oddly ordered stuff.
		//We'll ignore it since it shouldn't be the case for long.
		if (activePropVal.PropType == FPropertyValue::PropertyType::Invalid)
			return;

		if (PropBindings.Contains(fullPropertyId))
		{
			for (int i = 0; i < PropBindings[fullPropertyId].Num(); i++)
				(*PropBindings[fullPropertyId][i])(activePropVal, fullPropertyId.ContainerName, fullPropertyId.PropValueId);
		}
	}

	bool SpacePropertyModel::PropValueExists(FPropertyId fullPropertyId)
	{
		return CurrLocalPropValues.Contains(fullPropertyId) || CurrServerPropValues.Contains(fullPropertyId);
	}

	FCavrnusBinding SpacePropertyModel::BindProperty(FPropertyId fullPropertyId, const CavrnusPropertyFunction& callback)
	{
		if (PropValueExists(fullPropertyId))
			callback(GetCurrentPropValue(fullPropertyId), fullPropertyId.ContainerName, fullPropertyId.PropValueId);

		using propFunction = const CavrnusPropertyFunction;
		TSharedPtr<propFunction> CallbackPtr = MakeShareable(new propFunction(callback));

		PropBindings.FindOrAdd(fullPropertyId);
		PropBindings[fullPropertyId].Add(CallbackPtr);

		return FCavrnusBinding([this, fullPropertyId, CallbackPtr]() {
			PropBindings[fullPropertyId].Remove(CallbackPtr);
			if (PropBindings[fullPropertyId].IsEmpty())
				PropBindings.Remove(fullPropertyId);
		});
	}

	FCavrnusBinding SpacePropertyModel::BindUserVideoTexture(const FCavrnusUser& User, const VideoFrameUpdateFunction& Callback)
	{
		FString UserConnectionId = User.UserConnectionId;

		if (CurrSpaceUsers.Contains(UserConnectionId))
			Callback(CurrSpaceUsers[UserConnectionId].VideoFrameTexture);

		using FrameUpdateFunction = const VideoFrameUpdateFunction;
		TSharedPtr<FrameUpdateFunction> CallbackPtr = MakeShareable(new FrameUpdateFunction(Callback));

		UserVideoFrameBindings.FindOrAdd(UserConnectionId);
		UserVideoFrameBindings[UserConnectionId].Add(CallbackPtr);

		return FCavrnusBinding([this, UserConnectionId, CallbackPtr]() { UserVideoFrameBindings[UserConnectionId].Remove(CallbackPtr); });
	}
	
	Cavrnus::FPropertyValue SpacePropertyModel::GetPropValue(FPropertyId fullPropertyId)
	{
		if (PropValueExists(fullPropertyId))
			return GetCurrentPropValue(fullPropertyId);
		return Cavrnus::FPropertyValue();
	}

	void SpacePropertyModel::SetIsDefined(FPropertyId fullPropertyId)
	{
		CurrDefinedProps.Add(fullPropertyId);
	}


	void SpacePropertyModel::AddSpaceUser(FCavrnusUser user)
	{
		if (user.IsLocalUser)
		{
			LocalUser = &user;

			for (int i = 0; i < LocalUserArrivedCallbacks.Num(); i++)
			{
				LocalUserArrivedCallbacks[i].ExecuteIfBound(user);
			}
			LocalUserArrivedCallbacks.Empty();
		}

		CurrSpaceUsers.Add(user.UserConnectionId, user);
		for (int i = 0; i < UserAddedBindings.Num(); i++)
			UserAddedBindings[i].ExecuteIfBound(user);
	}

	void SpacePropertyModel::RemoveSpaceUser(FString userId)
	{
		if (CurrSpaceUsers.Contains(userId))
		{
			FCavrnusUser removedUser = CurrSpaceUsers[userId];
			CurrSpaceUsers.Remove(userId);

			for (int i = 0; i < UserRemovedBindings.Num(); i++)
				UserRemovedBindings[i].ExecuteIfBound(removedUser);
		}
	}

	void SpacePropertyModel::UpdateUserVideoTexture(FString userId, int ResX, int ResY, const TArray<uint8>& ByteArray)
	{
		if (FCavrnusUser* User = CurrSpaceUsers.Find(userId))
		{
			if (!User->VideoFrameTexture || User->VideoFrameTexture->GetSizeX() != ResX || User->VideoFrameTexture->GetSizeY() != ResY)
			{
				FName UniqueName = MakeUniqueObjectName(nullptr, UTexture2D::StaticClass(), "RTCStream");
				User->VideoFrameTexture = UTexture2D::CreateTransient(ResX, ResY, PF_B8G8R8A8, UniqueName);
			}

			void* TextureData = User->VideoFrameTexture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			FMemory::Memcpy(TextureData, ByteArray.GetData(), ByteArray.Num());
			User->VideoFrameTexture->GetPlatformData()->Mips[0].BulkData.Unlock();
			User->VideoFrameTexture->UpdateResource();

			if (UserVideoFrameBindings.Contains(userId))
			{
				for (auto& Binding : UserVideoFrameBindings[userId])
				{
					(*Binding)(User->VideoFrameTexture);
				}
			}
		}
	}

	void SpacePropertyModel::AwaitLocalUser(FCavrnusSpaceUserEvent localUserArrived)
	{
		LocalUserArrivedCallbacks.Add(localUserArrived);
	}

	FCavrnusBinding SpacePropertyModel::BindSpaceUsers(FCavrnusSpaceUserEvent userAdded, FCavrnusSpaceUserEvent userRemoved)
	{
		UserAddedBindings.Add(userAdded);
		UserRemovedBindings.Add(userRemoved);

		for (auto& UserElem : CurrSpaceUsers)
			userAdded.ExecuteIfBound(UserElem.Value);

		return FCavrnusBinding([this, userAdded, userRemoved]()
			{
				UserAddedBindings.Remove(userAdded);
				UserRemovedBindings.Remove(userRemoved);
			});
	}

}