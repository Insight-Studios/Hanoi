// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ctime"
#include "Achievement.h"
#include "PlayerData.generated.h"

/**
 * 
 */
UCLASS()
class HANOI_API APlayerData : public APlayerState
{
	GENERATED_BODY()
	
public:

	TArray<FAchievement> achievementHistory;

	UPROPERTY(BlueprintReadOnly)
		FAchievement highestAchievement;

	UPROPERTY(BlueprintReadOnly)
		FAchievement fastest;

	UFUNCTION(BlueprintCallable)
		void addAchievement(TArray<float> times, TArray<int> moves);
	
	
};
