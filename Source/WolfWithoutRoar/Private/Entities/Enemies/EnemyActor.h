// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyActor.generated.h"


UCLASS()
class AEnemyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	// By default the Target Actor is the current player controller at index 0
	UFUNCTION(BlueprintCallable)
	virtual void MoveToTargetActor();

	// Custom Repel Force - Adds a bounce opposite to the current target actor direction
	UFUNCTION(BlueprintCallable)
	virtual void AddRepelForce();


	// Custom Repel Force - Adds a bounce opposite to the current target actor direction
	UFUNCTION(BlueprintCallable)
	virtual void AddRepelForceAndSlow();

	UFUNCTION(BlueprintCallable)
	FVector CollectMovementDirection();

	// Target to Attack;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Entity Data")
	ACharacter* TargetActor;

	// Movement Speed


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity Data | Physics")
	float CurrentSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Entity Data | Physics")
	float RandomMovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity Data | Physics")
	float MovementSpeedMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity Data | Physics")
	float MovementSpeedMax;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity Data | Physics")
	float RotationSpeed;

	// Repel Force

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity Data | Physics")
	float RandomRepelForce;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Entity Data | Physics")
	float RepelForceMin = 220.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Entity Data | Physics")
	float RepelForceMax;
	



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Callback Function Bindings
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnPlayerSpecialAbility(bool AbilityCastedState, const float& AbilityDuration);

	virtual void OnPlayerSpecialAbility_Implementation(bool AbilityCastedState, const float& AbilityDuration);


};
