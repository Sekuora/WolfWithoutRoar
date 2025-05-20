// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "WWRGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class AWWRGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnPlayerNoHealth(bool IsPlayerHealthZero);

	virtual void OnPlayerNoHealth_Implementation(bool IsPlayerHealthZero);
};
