// Fill out your copyright notice in the Description page of Project Settings.


#include "TetrisBoard.h"
#include "BoardBlock.h"
// Sets default values
ATetrisBoard::ATetrisBoard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATetrisBoard::BeginPlay()
{
	Super::BeginPlay();
    
    GenerateBoard();
}

// Called every frame
void ATetrisBoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATetrisBoard::GenerateBoard()
{
    FVector BoardOrigin = GetActorLocation();

    for (int32 y = 0; y < BoardHeight; y++)
    {
        for (int32 x = 0; x < BoardWidth; x++)
        {
            if (x == 0 || x == BoardWidth - 1)
            {
                FVector BlockLocation = BoardOrigin + FVector(0, x * BlockSize - (BoardWidth * BlockSize) / 2, y * BlockSize);
                FRotator BlockRotation = FRotator::ZeroRotator;

                GetWorld()->SpawnActor<ABoardBlock>(Block, BlockLocation, BlockRotation);
            }

        }
    }
}
