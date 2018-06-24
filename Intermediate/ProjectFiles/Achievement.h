#pragma once

#include "vector"
#include "time.h"

struct achievement {
	int levelReached;
	std::vector<float> secondsElapsedPerLevel;
	std::vector<int> movesMadePerLevel;
	int totalMoves;
	float totalSeconds;
	time_t dateAtReached;
};