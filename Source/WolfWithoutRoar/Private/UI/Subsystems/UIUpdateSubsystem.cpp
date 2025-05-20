// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Subsystems/UIUpdateSubsystem.h"
#include "UIUpdateSubsystem.h"

void UUIUpdateSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
}

void UUIUpdateSubsystem::Deinitialize()
{
}

void UUIUpdateSubsystem::Broadcast_OnHealthUpdate(const float& NormalizedHealth)
{
	OnHealthUpdateListener.Broadcast(NormalizedHealth);
}

void UUIUpdateSubsystem::Broadcast_OnItemPickup(const int64& CollectedItemAmount, const FString& ItemID)
{
	OnItemPickupListener.Broadcast(CollectedItemAmount, ItemID);

}

void UUIUpdateSubsystem::Broadcast_OnUpdateRoarAbilityRequisites(const int& EggsToRoar, const int& CurrentEggs)
{
	OnUpdateRoarAbilityRequisitesListener.Broadcast(EggsToRoar, CurrentEggs);
}
