#ifndef WASH_H
#define WASH_H

#include "ModeStrategy.h"

class ModeStrategy;

class Wash {  
private:  
    int currentWeight;  
    int wash_time;  
    int wash_water;
    double wash_time_ratio = 0.45;
    double wash_water_ratio = 0.6;
    const ModeStrategy* strategy;

public:  
    Wash();
    Wash(const ModeStrategy* strategy);  
    void setCurrentWeight(int currentWeight);
    int wash_time_calc();  
    int wash_water_calc();
    int getCurrentWeight() const;  
};  

#endif // WASH_H