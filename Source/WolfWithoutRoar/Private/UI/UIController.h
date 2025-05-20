// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UIController.generated.h"

/**
 * 
 */
UCLASS()
class AUIController : public AHUD
{
	GENERATED_BODY()
	
public:
	// Callback Function Bindings

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnHealthBarUpdate(const float& NormalizedHealth);

	virtual void OnHealthBarUpdate_Implementation(const float& NormalizedHealth);


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnItemDisplayUpdate(const int64& CollectedItemAmount, const FString& ItemID);

	virtual void OnItemDisplayUpdate_Implementation(const int64& CollectedItemAmount, const FString& ItemID);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnUpdateRoarAbilityRequisites(const int& EggsToRoar, const int& CurrentEggs);

	virtual void OnUpdateRoarAbilityRequisites_Implementation(const int& EggsToRoar, const int& CurrentEggs);
};
