#ifndef WASH_H
#define WASH_H

#include "ModeStrategy.h"

class Wash {
private:
    int currentWeight;
    int wash_time;
    int wash_water;
	int wash_time_coefficient;
	int wash_water_coefficient;
	int rinse_time_coefficient;
	int rinse_water_coefficient;
	int spin_time_coefficient;
    int out;

public:
    Wash();
    void setCurrentWeight(int currentWeight);
    int getCurrentWeight() const;
    int wash_time_calc();
    int wash_water_calc();
};

#endif // WASH_H