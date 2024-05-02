#include "RelayModel/CavrnusContentModel.h"
#include <Misc/FileHelper.h>

namespace Cavrnus
{

	CavrnusContentModel::CavrnusContentModel()
	{
	}

	CavrnusContentModel::~CavrnusContentModel()
	{

	}
	void CavrnusContentModel::RegisterContentCallbacks(FString contentId, const CavrnusContentProgressFunction& prog, const CavrnusContentFunction& complete)
	{
		if (CompletedContentPaths.Contains(contentId))
		{
			complete(CompletionToStream(CompletedContentPaths[contentId]));
			return;
		}

		using progFunction = const CavrnusContentProgressFunction;
		TSharedPtr<progFunction> ProgCallbackPtr = MakeShareable(new progFunction(prog));
		ProgressBindings.FindOrAdd(contentId);
		ProgressBindings[contentId].Add(ProgCallbackPtr);

		using completedFunction = const CavrnusContentFunction;
		TSharedPtr<completedFunction> CompletedCallbackPtr = MakeShareable(new completedFunction(complete));
		CompletionBindings.FindOrAdd(contentId);
		CompletionBindings[contentId].Add(CompletedCallbackPtr);
	}

	void CavrnusContentModel::HandleProgressCallback(FString contentId, float progress, FString step)
	{
		if (!ProgressBindings.Contains(contentId))
			return;

		for (int i = 0; i < ProgressBindings[contentId].Num(); i++)
			(*ProgressBindings[contentId][i])(progress, step);
	}

	void CavrnusContentModel::HandleCompletionCallback(FString contentId, FString filePath)
	{
		if (!CompletionBindings.Contains(contentId))
			return;

		for (int i = 0; i < CompletionBindings[contentId].Num(); i++)
			(*CompletionBindings[contentId][i])(CompletionToStream(filePath));

		ProgressBindings.Remove(contentId);
		CompletionBindings.Remove(contentId);

		CompletedContentPaths.Add(contentId, filePath);
	}

	TArray<uint8> CavrnusContentModel::CompletionToStream(FString filePath)
	{
		TArray<uint8> res;
		FFileHelper::LoadFileToArray(res, *filePath, 0);

		return res;
	}
}