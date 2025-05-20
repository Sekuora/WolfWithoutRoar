// Fill out your copyright notice in the Description page of Project Settings.


#include "Entities/Enemies/EnemyActor.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemyActor::AEnemyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyActor::BeginPlay()
{
	Super::BeginPlay();
	
	// Assign target actor to current player
	TargetActor = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	// Initial Settings
	RandomRepelForce = FMath::RandRange(RepelForceMin, RepelForceMax);
	RandomMovementSpeed = FMath::RandRange(MovementSpeedMin, MovementSpeedMax);

	CurrentSpeed = RandomMovementSpeed;
}

void AEnemyActor::MoveToTargetActor()
{
	CurrentSpeed = RandomMovementSpeed;

	// Set the new location of this actor to the composed Move Direction over Time 
	SetActorLocation(GetActorLocation() += CurrentSpeed * GetWorld()->GetDeltaSeconds() * CollectMovementDirection());

	FVector LookAtVector = FVector(FMath::Lerp(GetActorForwardVector(), CollectMovementDirection() * RotationSpeed, GetWorld()->GetDeltaSeconds()));

	SetActorRotation(LookAtVector.Rotation());
}

void AEnemyActor::AddRepelForce()
{
	// Add opposite direction movement to simulate repel force
	SetActorLocation(GetActorLocation() -= RandomRepelForce * (GetWorld()->GetDeltaSeconds()) * CollectMovementDirection());
}

void AEnemyActor::AddRepelForceAndSlow()
{
	RandomRepelForce = 150.0f;

	// Add opposite direction movement to simulate repel force
	SetActorLocation(GetActorLocation() -= RandomRepelForce * (GetWorld()->GetDeltaSeconds()) * CollectMovementDirection());
}

FVector AEnemyActor::CollectMovementDirection()
{
	if (!TargetActor) { return FVector().ZeroVector; }

	// Set Target Location to Target Actor
	FVector TargetLocation = TargetActor->GetActorLocation();

	// Collect Distance To Target
	float DistanceToTarget = FVector().Distance(GetActorLocation(), TargetLocation);

	// Assign Move Direction : Subtract target location with this actor location
	FVector MoveDirection = (TargetLocation - GetActorLocation()).GetSafeNormal();

	return MoveDirection;
}

// Called every frame
void AEnemyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemyActor::OnPlayerSpecialAbility_Implementation(bool AbilityCastedState, const float& AbilityDuration)
{
	UE_LOG(LogTemp, Display, TEXT("Casted C++ Callback Function Delegate"));
}

