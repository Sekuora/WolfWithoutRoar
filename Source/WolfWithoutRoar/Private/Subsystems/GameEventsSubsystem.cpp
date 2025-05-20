// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystems/GameEventsSubsystem.h"

void UGameEventsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
}

void UGameEventsSubsystem::Deinitialize()
{
}

void UGameEventsSubsystem::Broadcast_OnPlayerSpecialAbility(bool AbilityCastedState, const float& AbilityDuration)
{
	OnPlayerSpecialAbilityListener.Broadcast(AbilityCastedState, AbilityDuration);
}

void UGameEventsSubsystem::Broadcast_OnChickenSpawned(const int& TotalChickens)
{
	if (TotalChickens >= 0)
	{
		OnChickenSpawnedListener.Broadcast(TotalChickens);
	}
	
}

void UGameEventsSubsystem::Broadcast_OnPlayerNoHealth(const bool IsPlayerHealthZero)
{

	OnPlayerNoHealthListener.Broadcast(IsPlayerHealthZero);
}

