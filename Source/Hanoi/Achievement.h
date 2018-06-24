#pragma once

#include "Achievement.generated.h"

USTRUCT(BlueprintType)
struct FAchievement {
	
	GENERATED_USTRUCT_BODY()

	FAchievement() {
		
	}

	UPROPERTY()
	int levelReached;

	UPROPERTY()
	TArray<float> secondsElapsedPerLevel;

	UPROPERTY()
	TArray<int> movesMadePerLevel;

	UPROPERTY()
	int totalMoves;

	UPROPERTY()
	float totalSeconds;

	UPROPERTY()
	time_t dateAtReached;
};