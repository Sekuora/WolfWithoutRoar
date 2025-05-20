// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameEventsSubsystem.generated.h"


// Delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerSpecialAbility, bool, AbilityCastedState, const float&, AbilityDuration);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChickenSpawned, const int&, TotalChickens);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerNoHealth, bool, IsPlayerHealthZero);

/**
 * 
 */
UCLASS()
class UGameEventsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	// Bind Function Handlers
	UPROPERTY(BlueprintAssignable)
	FOnPlayerSpecialAbility OnPlayerSpecialAbilityListener;

	UPROPERTY(BlueprintAssignable)
	FOnChickenSpawned OnChickenSpawnedListener;

	UPROPERTY(BlueprintAssignable)
	FOnPlayerNoHealth OnPlayerNoHealthListener;

	// Broadcast
	UFUNCTION(BlueprintCallable)
	void Broadcast_OnPlayerSpecialAbility(bool AbilityCastedState, const float& AbilityDuration);
	
	UFUNCTION(BlueprintCallable)
	void Broadcast_OnChickenSpawned(const int& TotalChickens);


	UFUNCTION(BlueprintCallable)
	void Broadcast_OnPlayerNoHealth(bool IsPlayerHealthZero);

};
