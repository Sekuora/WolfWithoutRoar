// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnerActor.generated.h"

UCLASS()
class ASpawnerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Callback Function Bindings
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnPlayerSpecialAbility(bool AbilityCastedState, const float& AbilityDuration);

	virtual void OnPlayerSpecialAbility_Implementation(bool AbilityCastedState, const float& AbilityDuration);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnChickenSpawnedEvent(const int& TotalChickens);

	virtual void OnChickenSpawnedEvent_Implementation(const int& TotalChickens);

};
