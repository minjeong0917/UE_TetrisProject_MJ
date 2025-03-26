// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "PlayGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TETRIS_API APlayGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Tetris")
	int RandomTetrisBlock();

	TArray<int> Blocks = { 0,1,2,3,4,5,6 };

};
