// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/CavrnusUIManager.h"
#include "CavrnusFunctionLibrary.h"
#include "CavrnusSpatialConnectorSubSystem.h"
#include "UI/CavrnusWidgetBase.h"

#include <Blueprint/UserWidget.h>

#if WITH_EDITOR
#include <LevelEditor.h>
#include <SLevelViewport.h>
#endif

void UCavrnusUIManager::Initialize(ACavrnusSpatialConnector* Connector)
{
	CurrentCavrnusSpatialConnector = Connector;
	World = Connector->GetWorld();
}

UCavrnusWidgetBase* UCavrnusUIManager::SpawnWidget(TSubclassOf<UCavrnusWidgetBase> WidgetClass)
{
	if (UCavrnusWidgetBase* Widget = CreateWidget<UCavrnusWidgetBase>(World, WidgetClass))
	{
		Widget->UIManager = this;
		CavrnusWidgets.Add(Widget);

		if (UCavrnusSpatialConnectorSubSystemProxy* SubProxy = UCavrnusFunctionLibrary::GetCavrnusSpatialConnectorSubSystemProxy())
		{
			if (SubProxy->bInEditorMode)
			{
#if WITH_EDITOR
				Widget->InitializeCavrnusWidget();

				Widget->SetFlags(RF_Transient);
				FLevelEditorModule& LevelEditorModule = FModuleManager::Get().GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
				TSharedPtr<SLevelViewport> GameViewport = LevelEditorModule.GetFirstActiveLevelViewport();
				TSharedPtr<SOverlay> ViewportOverlay = StaticCastSharedPtr<SOverlay>(GameViewport->GetViewportWidget().Pin()->GetContent());
				GameViewport->AddOverlayWidget(Widget->TakeWidget());
#endif
			}
			else
			{
				Widget->AddToViewport();
			}

			return Widget;
		}
	}

	return nullptr;
}

void UCavrnusUIManager::RemoveWidget(UCavrnusWidgetBase* Widget)
{
	if (Widget)
	{
		if (UCavrnusSpatialConnectorSubSystemProxy* SubProxy = UCavrnusFunctionLibrary::GetCavrnusSpatialConnectorSubSystemProxy())
		{
			if (SubProxy->bInEditorMode)
			{
#if WITH_EDITOR
				FLevelEditorModule& LevelEditorModule = FModuleManager::Get().GetModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
				TSharedPtr<SLevelViewport> GameViewport = LevelEditorModule.GetFirstActiveLevelViewport();
				if (GameViewport.IsValid())
				{
					GameViewport->RemoveOverlayWidget(Widget->TakeWidget());
				}
#endif
			}
			else
			{
				Widget->RemoveFromParent();
			}
		}

		CavrnusWidgets.Remove(Widget);
	}
}

void UCavrnusUIManager::RemoveAllWidgets()
{
	for (int i = CavrnusWidgets.Num() - 1; i > -1; i--)
	{
		if (UCavrnusWidgetBase* Widget = CavrnusWidgets[i].Get())
		{
			RemoveWidget(Widget);
		}
	}
}

void UCavrnusUIManager::ShowGuestLoginWidget(FCavrnusAuthRecv AuthSuccess, FCavrnusError AuthFailure)
{
	ACavrnusSpatialConnector* CavrnusSpatialConnector = GetConnector();
	if (UCavrnusGuestLoginWidget* LoginWidget = CreateWidget<UCavrnusGuestLoginWidget>(World, CavrnusSpatialConnector->GuestJoinMenu))
	{
		LoginWidget->OnLogin.AddLambda
		(
			[this, LoginWidget, CavrnusSpatialConnector, AuthSuccess, AuthFailure](FString GuestLoginUsername)
			{
				RemoveWidget(LoginWidget);
				UCavrnusFunctionLibrary::AuthenticateAsGuest(CavrnusSpatialConnector->MyServer, GuestLoginUsername, AuthSuccess, AuthFailure);
			}
		);

		LoginWidget->AddToViewport();
	}
}

void UCavrnusUIManager::ShowLoginWidget(FCavrnusAuthRecv AuthSuccess, FCavrnusError AuthFailure)
{
	ACavrnusSpatialConnector* CavrnusSpatialConnector = GetConnector();

	// Spawn a widget and get credentials from that
	if (UCavrnusLoginWidget* LoginWidget = Cast<UCavrnusLoginWidget>(SpawnWidget(CavrnusSpatialConnector->MemberLoginMenu)))
	{
		LoginWidget->OnLogin.AddLambda
		(
			[this, LoginWidget, CavrnusSpatialConnector, AuthSuccess, AuthFailure](FString LoginEmail, FString LoginPassword)
			{
				RemoveWidget(LoginWidget);
				UCavrnusFunctionLibrary::AuthenticateWithPassword(CavrnusSpatialConnector->MyServer, LoginEmail, LoginPassword, AuthSuccess, AuthFailure);
			}
		);
	}
}

void UCavrnusUIManager::ShowLoadingWidget(bool bShowWidget)
{
	if (bShowWidget)
	{
		ACavrnusSpatialConnector* CavrnusSpatialConnector = GetConnector();
		if (CavrnusSpatialConnector->LoadingWidgetClass)
		{
			LoadingWidget = SpawnWidget(CavrnusSpatialConnector->LoadingWidgetClass);
		}
	}
	else
	{
		RemoveWidget(LoadingWidget.Get());
	}
}

void UCavrnusUIManager::ShowSpaceList()
{
	ACavrnusSpatialConnector* CavrnusSpatialConnector = GetConnector();
	if (UCavrnusSpaceListWidget* SpaceListWidget = Cast<UCavrnusSpaceListWidget>(SpawnWidget(CavrnusSpatialConnector->SpaceJoinMenu)))
	{
		SpaceListWidget->OnCavrnusSpaceSelected.AddLambda
		(
			[this, SpaceListWidget](FString SpaceJoinId)
			{
				RemoveWidget(SpaceListWidget);
				if (UCavrnusSpatialConnectorSubSystemProxy* SubProxy = UCavrnusFunctionLibrary::GetCavrnusSpatialConnectorSubSystemProxy())
				{
					SubProxy->AttemptToJoinSpace(SpaceJoinId);
				}
			}
		);
	}
}

ACavrnusSpatialConnector* UCavrnusUIManager::GetConnector()
{
	return  CurrentCavrnusSpatialConnector.Get();
}
