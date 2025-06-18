#ifndef WASH_H
#define WASH_H

#include "ModeStrategy.h"
#include "Display.h"

class ModeStrategy;

class Wash {  
private:  
    int currentWeight;  
    int wash_time;  
    int wash_water;
    double wash_time_ratio;
    double wash_water_ratio;
    const ModeStrategy* strategy;
    Display display;

public:  
    Wash();
    Wash(const ModeStrategy* strategy);  
    void setCurrentWeight(int currentWeight);
	int total_wash_time_aligned();
    int wash_water_calc();
	int total_wash_water_aligned();
    int wash_time_calc();  
    int getCurrentWeight() const;  
};  

#endif // WASH_H