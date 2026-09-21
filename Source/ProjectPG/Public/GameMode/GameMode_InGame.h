// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameMode_InGame.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTPG_API AGameMode_InGame : public AGameModeBase
{
	GENERATED_BODY()
public:
	AGameMode_InGame();

	void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage);

};
