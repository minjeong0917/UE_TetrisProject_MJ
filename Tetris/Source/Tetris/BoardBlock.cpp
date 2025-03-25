// Fill out your copyright notice in the Description page of Project Settings.


#include "BoardBlock.h"

// Sets default values
ABoardBlock::ABoardBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    BoardBlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh"));
    RootComponent = BoardBlockMesh;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshAsset(TEXT("/Game/Resources/BoardBlockMesh.BoardBlockMesh"));
    if (BlockMeshAsset.Succeeded())
    {
        BoardBlockMesh->SetStaticMesh(BlockMeshAsset.Object);
    }
}

// Called when the game starts or when spawned
void ABoardBlock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoardBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

