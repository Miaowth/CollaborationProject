// Fill out your copyright notice in the Description page of Project Settings.


#include "Base_Player_Character.h"

// Sets default values
ABase_Player_Character::ABase_Player_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABase_Player_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABase_Player_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABase_Player_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

