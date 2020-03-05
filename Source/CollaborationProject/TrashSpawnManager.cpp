// Fill out your copyright notice in the Description page of Project Settings.


#include "TrashSpawnManager.h"


// Sets default values
ATrashSpawnManager::ATrashSpawnManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	VisualMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ATrashSpawnManager::BeginPlay()
{
	Super::BeginPlay();
	
	GetWorldTimerManager().SetTimer(SpawnTimerHandle, this, &ATrashSpawnManager::SpawnTrash, 3.000,true);
}

// Called every frame
void ATrashSpawnManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATrashSpawnManager::SpawnTrash()
{
	//Spawns some trash
	FVector SpawnLocation = GetActorLocation();
	SpawnLocation.operator+=({ 100.0, 100.0, 0 });

	GetWorld()->SpawnActor<ABaseTrash>();
	UE_LOG(LogTemp, Warning, TEXT("Spawned In Object"));
}
