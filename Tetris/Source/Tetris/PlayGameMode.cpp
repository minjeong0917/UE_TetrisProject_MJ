// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayGameMode.h"

int APlayGameMode::RandomTetrisBlock()
{
    if (Blocks.Num() == 0)
    {
        Blocks = { 0, 1, 2, 3, 4, 5, 6 };
    }

    int RandomInt = FMath::RandRange(0, Blocks.Num() - 1);

    int TetrisNum = Blocks[RandomInt];

    Blocks.RemoveAt(RandomInt);

    return TetrisNum;
}
