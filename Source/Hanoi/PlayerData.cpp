// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerData.h"

void APlayerData::addAchievement(TArray<float> times, TArray<int> moves)
{
	int movesMade = 0;
	for (int m : moves)
		movesMade += m;
	float timeSpent = 0;
	for (float f : times)
		timeSpent += f;

	FAchievement newAchievement = {moves.Num(), times, moves, movesMade, timeSpent};
}
