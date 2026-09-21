// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/InteractActor.h"
#include "Components/InventoryComponent.h"
// Sets default values
AInteractActor::AInteractActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	InvenComp = CreateDefaultSubobject<UInventoryComponent>(TEXT("InvenComp"));
	

}

// Called when the game starts or when spawned
void AInteractActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInteractActor::Interact_Implementation(ACharacter* Character)
{

}

