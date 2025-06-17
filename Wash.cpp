#include "Wash.h"  

#include <iostream>  
#include <string>

using namespace std;  

Wash::Wash() : currentWeight(0), wash_time(0), wash_water(0), strategy(nullptr) {}

Wash::Wash(const ModeStrategy* strategy) : currentWeight(0), wash_time(0), wash_water(0), strategy(strategy) {}

int Wash::wash_time_calc() {  
    int wash_time_coefficient = strategy->getWashTimeCoefficient();
	wash_time = currentWeight * wash_time_coefficient;
    cout << "[Wash] ô‚¢ŽžŠÔ: " << wash_time << " •ª" << endl;  
    return wash_time;
}

int Wash::wash_water_calc() {
    int wash_water_coefficient = strategy->getWashWaterCoefficient();
    wash_water = currentWeight * wash_water_coefficient;
    cout << "[Wash] ô‚¢…—Ê: " << wash_water << " L" << endl;
    return wash_water;
}

void Wash::setCurrentWeight(int currentWeight) {  
    this->currentWeight = currentWeight;  
}  

int Wash::getCurrentWeight() const {  
    return currentWeight;  
}  
