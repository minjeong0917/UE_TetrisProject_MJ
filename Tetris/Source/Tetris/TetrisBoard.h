// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TetrisBoard.generated.h"

UCLASS()
class TETRIS_API ATetrisBoard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATetrisBoard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tetris Settings")
	int32 BoardWidth = 10;  // 가로 개수 (기본 10칸)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tetris Settings")
	int32 BoardHeight = 20; // 세로 개수 (기본 20칸)

	const int32 BlockSize = 50; // 블록 크기 (고정)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tetris Settings", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class ABoardBlock> BlockBlueprintClass;


	void GenerateBoard();
};
