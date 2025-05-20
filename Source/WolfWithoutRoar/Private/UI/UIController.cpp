// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/UIController.h"

void AUIController::OnHealthBarUpdate_Implementation(const float& NormalizedHealth)
{
	UE_LOG(LogTemp, Display, TEXT("C++ Event Called"));
}

void AUIController::OnItemDisplayUpdate_Implementation(const int64& CollectedItemAmount, const FString& ItemID)
{
	UE_LOG(LogTemp, Display, TEXT("C++ Event Called"));
}

void AUIController::OnUpdateRoarAbilityRequisites_Implementation(const int& EggsToRoar, const int& CurrentEggs)
{
	UE_LOG(LogTemp, Display, TEXT("C++ Event Called"));
}
