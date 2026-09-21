// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/CustomGameMode.h"
#include "GameMode/PlayerController_InGame.h"
#include "UI/Controller/LobbyUIFlowController.h"

void ACustomGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
	FNetworkVersion::GetLocalNetworkVersionOverride.BindLambda([]()
		{
			return 389978850;
		});
	PlayerControllerClass = APlayerController_InGame::StaticClass();

}

void ACustomGameMode::BeginPlay()
{
	Super::BeginPlay();
	

}

void ACustomGameMode::ChangeScene(ESceneType scene)
{
}
