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
    FVector BoardOrigin = GetActorLocation(); // 기준 위치 설정

    for (int32 y = 0; y < BoardHeight; y++)
    {
        for (int32 x = 0; x < BoardWidth; x++)
        {
            FVector BlockLocation = BoardOrigin + FVector(x * BlockSize, 0, y * BlockSize);
            FRotator BlockRotation = FRotator::ZeroRotator;

            // 블록 생성
            GetWorld()->SpawnActor<ABoardBlock>(BlockBlueprintClass, BlockLocation, BlockRotation);
        }
    }
}
