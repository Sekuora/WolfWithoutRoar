// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"


#include "UIUpdateSubsystem.generated.h"

// Delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthUpdate, const float&, NormalizedHealth);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemPickup, const int64&, CollectedItemAmount, const FString&, ItemID);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdateRoarAbilityRequisites, const int&, EggsToRoar, const int&, CurrentEggs);

/**
 * 
 */
UCLASS()
class UUIUpdateSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	// Bind Function Handlers
	UPROPERTY(BlueprintAssignable)
	FOnHealthUpdate OnHealthUpdateListener;

	UPROPERTY(BlueprintAssignable)
	FOnItemPickup OnItemPickupListener;

	UPROPERTY(BlueprintAssignable)
	FOnUpdateRoarAbilityRequisites OnUpdateRoarAbilityRequisitesListener;

	// Broadcast
	UFUNCTION(BlueprintCallable)
	void Broadcast_OnHealthUpdate(const float& NormalizedHealth);

	UFUNCTION(BlueprintCallable)
	void Broadcast_OnItemPickup(const int64& CollectedItemAmount, const FString& ItemID);

	UFUNCTION(BlueprintCallable)
	void Broadcast_OnUpdateRoarAbilityRequisites(const int& EggsToRoar, const int& CurrentEggs);





};
