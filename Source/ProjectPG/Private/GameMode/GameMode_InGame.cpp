// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/GameMode_InGame.h"
#include "GameMode/PlayerController_InGame.h"
AGameMode_InGame::AGameMode_InGame()
{
    PlayerControllerClass = APlayerController_InGame::StaticClass();
    bUseSeamlessTravel = false;
}

void AGameMode_InGame::InitGame(
    const FString& MapName,
    const FString& Options,
    FString& ErrorMessage)
{
    Super::InitGame(MapName, Options, ErrorMessage);

    UE_LOG(LogTemp, Warning,
        TEXT("InitGame GameMode"));

   
}