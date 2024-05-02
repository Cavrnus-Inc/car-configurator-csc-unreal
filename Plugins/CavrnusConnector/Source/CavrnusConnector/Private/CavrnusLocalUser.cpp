#include "CavrnusLocalUser.h"
#include "CavrnusValueSyncVector.h"
#include "CavrnusValueSyncFloat.h"
#include "CavrnusValueSyncTransform.h"
#include <GameFramework/Actor.h>
#include <Kismet/KismetSystemLibrary.h>
#include "CavrnusPropertiesContainer.h"

//===========================================================
UCavrnusLocalUser::UCavrnusLocalUser()
{

}


//===========================================================
UCavrnusLocalUser::~UCavrnusLocalUser()
{
}

void UCavrnusLocalUser::BeginPlay()
{
	Super::BeginPlay();

	OnSpaceConnected.BindUFunction(this, GET_FUNCTION_NAME_CHECKED(UCavrnusLocalUser, SpaceConnected));

	UCavrnusFunctionLibrary::AwaitAnySpaceConnection(OnSpaceConnected);
}

void UCavrnusLocalUser::SpaceConnected(FCavrnusSpaceConnection SpaceConnection)
{
	SpaceConn = SpaceConnection;

	TArray<UCavrnusValueSyncBase*> ValueSyncComponents;
	GetOwner()->GetComponents(ValueSyncComponents);
	for (UActorComponent* Component : ValueSyncComponents)
	{
		if (UCavrnusValueSyncBase* ValueSync = Cast<UCavrnusValueSyncBase>(Component))
		{
			//TODO: Send initial value
		}
	}

	FString PropertyPath = TEXT("users/") + SpaceConn.LocalUserConnectionId;
	UCavrnusPropertiesContainer::ReplaceClassNameInPropertiesContainers(GetOwner(), PropertyPath);
}
