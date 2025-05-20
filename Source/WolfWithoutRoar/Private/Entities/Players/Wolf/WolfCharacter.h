// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WolfCharacter.generated.h"

UCLASS()
class AWolfCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWolfCharacter();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnChickenSpawnedEvent(const int& TotalChickens);

	virtual void OnChickenSpawnedEvent_Implementation(const int& TotalChickens);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
