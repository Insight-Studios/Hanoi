// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
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

	UPROPERTY()
		TArray<FAchievement> history;
};
