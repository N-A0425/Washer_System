#ifndef WASH_H
#define WASH_H

#include "ModeStrategy.h"

class ModeStrategy;

class Wash {  
private:  
    int currentWeight;  
    int wash_time;  
    int wash_water;  
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