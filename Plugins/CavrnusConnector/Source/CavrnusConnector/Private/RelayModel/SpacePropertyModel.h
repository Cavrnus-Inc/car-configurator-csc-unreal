#pragma once

#include <Containers/Map.h>
#include "../../Public/Types/CavrnusBinding.h"
#include "../../Public/Types/CavrnusCallbackTypes.h"
#include "PropertyId.h"
#include "CavrnusPropertyValue.h"

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

		void UpdateServerPropVal(PropertyId fullPropertyId, FPropertyValue value);
		int SetLocalPropVal(PropertyId fullPropertyId, FPropertyValue value);
		void InvalidateLocalPropValue(PropertyId fullPropertyId, int propValidationId);
		void UpdatePropMetadata(PropertyId fullPropertyId, bool isReadonly);

		FCavrnusBinding BindStringProperty(PropertyId fullPropertyId, const CavrnusStringFunction& callback);
		FCavrnusBinding BindBoolProperty(PropertyId fullPropertyId, const CavrnusBoolFunction& callback);
		FCavrnusBinding BindFloatProperty(PropertyId fullPropertyId, const CavrnusFloatFunction& callback);
		FCavrnusBinding BindColorProperty(PropertyId fullPropertyId, const CavrnusColorFunction& callback);
		FCavrnusBinding BindVectorProperty(PropertyId fullPropertyId, const CavrnusVectorFunction& callback);
		FCavrnusBinding BindTransformProperty(PropertyId fullPropertyId, const CavrnusTransformFunction& callback);
		FCavrnusBinding BindUserVideoTexture(const FCavrnusUser& User, FCavrnusUserVideoFrameEvent callback);

		FString GetStringPropValue(PropertyId fullPropertyId);
		bool GetBoolPropValue(PropertyId fullPropertyId);
		float GetFloatPropValue(PropertyId fullPropertyId);
		FLinearColor GetColorPropValue(PropertyId fullPropertyId);
		FVector4 GetVectorPropValue(PropertyId fullPropertyId);
		FTransform GetTransformPropValue(PropertyId fullPropertyId);

		void AddSpaceUser(FCavrnusUser user);
		void RemoveSpaceUser(FString userId);
		void UpdateUserVideoTexture(FString userId, int ResX, int ResY, const TArray<uint8>& ByteArray);

		void AwaitLocalUser(FCavrnusSpaceUserEvent localUserArrived);
		FCavrnusBinding BindSpaceUsers(FCavrnusSpaceUserEvent userAdded, FCavrnusSpaceUserEvent userRemoved);

		TMap<FString, FCavrnusUser> CurrSpaceUsers;
		FCavrnusUser* LocalUser;

	private:
		TMap<PropertyId, bool> CurrDefinedProps;

		TMap<PropertyId, FPropertyValue> CurrServerPropValues;
		TMap<PropertyId, FPropertyValue> CurrLocalPropValues;

		TMap<PropertyId, bool> CurrPropReadonlyMetadata;

		int validationIdIncrementer = 0;
		TMap<PropertyId, int> LocalPropValidationIds;
				
		TMap<PropertyId, TArray<TSharedPtr<const CavrnusStringFunction>>> StringPropBindings;
		TMap<PropertyId, TArray<TSharedPtr<const CavrnusBoolFunction>>> BoolPropBindings;
		TMap<PropertyId, TArray<TSharedPtr<const CavrnusFloatFunction>>> FloatPropBindings;
		TMap<PropertyId, TArray<TSharedPtr<const CavrnusColorFunction>>> ColorPropBindings;
		TMap<PropertyId, TArray<TSharedPtr<const CavrnusVectorFunction>>> VectorPropBindings;
		TMap<PropertyId, TArray<TSharedPtr<const CavrnusTransformFunction>>> TransformPropBindings;

		TArray<FCavrnusSpaceUserEvent> LocalUserArrivedCallbacks;

		TArray<FCavrnusSpaceUserEvent> UserAddedBindings;
		TArray<FCavrnusSpaceUserEvent> UserRemovedBindings;

		TMap<FString, TArray<FCavrnusUserVideoFrameEvent>> UserVideoFrameBindings;

		FPropertyValue GetCurrentPropValue(PropertyId fullPropertyId);
		void TryExecPropBindings(PropertyId fullPropertyId);
		bool PropValueExists(PropertyId fullPropertyId);

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