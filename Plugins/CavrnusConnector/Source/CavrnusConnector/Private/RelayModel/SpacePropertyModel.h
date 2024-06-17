// Copyright(c) Cavrnus. All rights reserved.
#pragma once

#include <Containers/Map.h>
#include "Types/CavrnusBinding.h"
#include "Types/CavrnusCallbackTypes.h"
#include "Types/PropertyId.h"
#include "Types/CavrnusPropertyValue.h"
#include "Types/CavrnusSpaceConnection.h"

namespace Cavrnus
{
	template<typename TValueType>
	struct FCaseSensitiveLookupKeyFuncs : BaseKeyFuncs<TValueType, FString>
	{
		static FORCEINLINE const FString& GetSetKey(const TPair<FString, TValueType>& Element)
		{
			return Element.Key;
		}
		static FORCEINLINE bool Matches(const FString& A, const FString& B)
		{
			return A.Equals(B, ESearchCase::CaseSensitive);
		}
		static FORCEINLINE uint32 GetKeyHash(const FString& Key)
		{
			return FCrc::StrCrc32<TCHAR>(*Key);
		}
	};

	template <typename K,typename T> using CaseSensitiveMap = TMap<K, T, FDefaultSetAllocator, FCaseSensitiveLookupKeyFuncs<T>>;

	class SpacePropertyModel
	{
	public:
		SpacePropertyModel();
		virtual ~SpacePropertyModel();

		void UpdateServerPropVal(FPropertyId fullPropertyId, FPropertyValue value);
		int SetLocalPropVal(FPropertyId fullPropertyId, FPropertyValue value);
		void InvalidateLocalPropValue(FPropertyId fullPropertyId, int propValidationId);
		void UpdatePropMetadata(FPropertyId fullPropertyId, bool isReadonly);

		UCavrnusBinding* BindProperty(FPropertyId fullPropertyId, CavrnusPropertyFunction callback);

		UCavrnusBinding* BindUserVideoTexture(const FCavrnusUser& User, VideoFrameUpdateFunction callback);

		bool PropValueExists(FPropertyId fullPropertyId);

		Cavrnus::FPropertyValue GetPropValue(FPropertyId fullPropertyId);

		void SetIsDefined(FPropertyId fullPropertyId);
		TArray<FPropertyId> CurrDefinedProps;

		void AddSpaceUser(FCavrnusUser user);
		void RemoveSpaceUser(FString userId);
		void UpdateUserVideoTexture(FString userId, int ResX, int ResY, const TArray<uint8>& ByteArray);

		void AwaitLocalUser(CavrnusSpaceUserEvent localUserArrived);
		UCavrnusBinding* BindSpaceUsers(CavrnusSpaceUserEvent userAdded, CavrnusSpaceUserEvent userRemoved);

		CaseSensitiveMap<FString, FCavrnusUser> CurrSpaceUsers;

		FCavrnusUser LocalUser;
		bool hasLocalUser = false;

	private:
		TMap<FPropertyId, FPropertyValue> CurrServerPropValues;
		TMap<FPropertyId, FPropertyValue> CurrLocalPropValues;

		TMap<FPropertyId, bool> CurrPropReadonlyMetadata;

		int validationIdIncrementer = 0;
		TMap<FPropertyId, int> LocalPropValidationIds;
				
		TMap<FPropertyId, TArray<CavrnusPropertyFunction*>> PropBindings;

		TArray<CavrnusSpaceUserEvent*> LocalUserArrivedCallbacks;

		TArray<CavrnusSpaceUserEvent*> UserAddedBindings;
		TArray<CavrnusSpaceUserEvent*> UserRemovedBindings;

		TMap<FString, TArray<VideoFrameUpdateFunction*>> UserVideoFrameBindings;

		FPropertyValue GetCurrentPropValue(FPropertyId fullPropertyId);
		void TryExecPropBindings(FPropertyId fullPropertyId);

		FString GetContainerName(FString fullPropId)
		{
			TArray<FString> split;
			fullPropId.ParseIntoArray(split, TEXT("/"), false);

			FString res;

			for (int i = 0; i < split.Num() - 1; i++)
			{
				res += split[i] + "/";
			}

			res.RemoveFromEnd("/");

			return res;
		}

		FString GetPropertyName(FString fullPropId)
		{
			TArray<FString> split;
			fullPropId.ParseIntoArray(split, TEXT("/"), false);
			return split.Last();
		}
	};

} // namespace CavrnusRelay