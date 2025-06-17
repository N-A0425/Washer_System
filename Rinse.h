#ifndef RINSE_H
#define RINSE_H

#include "ModeStrategy.h"

class ModeStrategy;

class Rinse {
private:
	int currentWeight;
	int rinse_time;
	int rinse_water;
	const ModeStrategy* strategy;

public:
	Rinse();
	Rinse(const ModeStrategy* strategy);
	void setCurrentWeight(int currentWeight);
	int rinse_time_calc();
	int rinse_water_calc();
	int getCurrentWeight() const;
};

#endif // RINSE_H