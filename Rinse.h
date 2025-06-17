#ifndef RINSE_H
#define RINSE_H

#include "ModeStrategy.h"

class Rinse {
private:
	int currentWeight;
	int rinse_time;
	int rinse_water;
	int out;

public:
	Rinse();
	void setCurrentWeight(int currentWeight);
	int getCurrentWeight() const;
	int rinse_time_calc();
	int rinse_water_calc();

};

#endif // RINSE_H