// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Achievement.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FAchievement
{
		GENERATED_BODY()
		
		UPROPERTY(BlueprintReadWrite, Category = "Achievement")
			TArray<float> Times;

		UPROPERTY(BlueprintReadWrite, Category = "Achievement")
			TArray<int> Moves;

		UPROPERTY(BlueprintReadWrite, Category = "Achievement")
			int CurrentLevel;

		UPROPERTY(BlueprintReadWrite, Category = "Achievement")
			int MaxLevel;

		UPROPERTY(BlueprintReadWrite, Category = "Achievement")
			FDateTime DateQuit;
};
