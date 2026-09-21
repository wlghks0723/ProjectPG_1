// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/PlayerController_InGame.h"
#include "Core/UIManagerSubSystem.h"
#include "UI/ItemDragDropOperation.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include <UI/Controller/LobbyUIFlowController.h>

void APlayerController_InGame::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("PC BeginPlay: %s"), *GetName());
}

void APlayerController_InGame::ToggleInventory()
{

	UE_LOG(	LogTemp,Warning,TEXT("인벤토리 오픈")
	);

	if (UGameInstance* GI = GetGameInstance())
	{
		if (UUIManagerSubSystem* UIMgr = GI->GetSubsystem<UUIManagerSubSystem>())
		{
			// PlayerController는 InventoryWidget의 존재를 몰라도 됨!
			// 열거형(EUIType)만 넘겨서 UIManager에게 처리를 위임함.
			UIMgr->OpenUI(EUIType::Character);
		}
	}
}

void APlayerController_InGame::SetupInputComponent()
{
	Super::SetupInputComponent();
	UE_LOG(LogTemp, Warning, TEXT("PC SetupInputComponent called: %s"), *GetName());
	if (InputComponent)
	{
		InputComponent->BindKey(EKeys::R, IE_Pressed, this, &APlayerController_InGame::OnRotateKey);
		InputComponent->BindKey(EKeys::I, IE_Pressed, this, &APlayerController_InGame::ToggleInventory);

	}
}

void APlayerController_InGame::OnRotateKey()
{
	if (UItemDragDropOperation* DragOp = Cast<UItemDragDropOperation>(UWidgetBlueprintLibrary::GetDragDroppingContent()))
	{
		DragOp->RotateItem();
	}
}
