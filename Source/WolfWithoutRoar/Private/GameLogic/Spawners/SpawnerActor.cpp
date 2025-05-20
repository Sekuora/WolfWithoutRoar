// Fill out your copyright notice in the Description page of Project Settings.


#include "GameLogic/Spawners/SpawnerActor.h"

// Sets default values
ASpawnerActor::ASpawnerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnerActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpawnerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnerActor::OnPlayerSpecialAbility_Implementation(bool AbilityCastedState, const float& AbilityDuration)
{
	UE_LOG(LogTemp, Display, TEXT("Called C++ Function"));
}

void ASpawnerActor::OnChickenSpawnedEvent_Implementation(const int& TotalChickens)
{
	UE_LOG(LogTemp, Display, TEXT("Called C++ Function"));
}

