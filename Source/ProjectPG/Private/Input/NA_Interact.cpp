// Fill out your copyright notice in the Description page of Project Settings.


#include "Input/NA_Interact.h"
#include "Characters/CustomPlayerCharacter.h"

bool UNA_Interact::ShouldRegisterTriggerEvent(ETriggerEvent TriggerEvent) const
{
	if (ETriggerEvent::Completed == TriggerEvent)
		return true;

	return false;
}

void UNA_Interact::Completed(const FInputActionValue& InputActionValue, ACustomPlayerCharacter* PlayerCharacter)
{
	PlayerCharacter->Interact();
}
