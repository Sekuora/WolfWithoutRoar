// Fill out your copyright notice in the Description page of Project Settings.


#include "Entities/Players/Wolf/WolfCharacter.h"

// Sets default values
AWolfCharacter::AWolfCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AWolfCharacter::OnChickenSpawnedEvent_Implementation(const int& TotalChickens)
{
	UE_LOG(LogTemp, Display, TEXT("Default C++ Event Implementation"));
}

// Called when the game starts or when spawned
void AWolfCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWolfCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWolfCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

