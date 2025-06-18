#include "Wash.h"

#include <iostream>  
#include <string>
#include <thread>
#include <chrono>

using namespace std;

Wash::Wash()
    : currentWeight(0), wash_time(0), wash_water(0),
    wash_time_ratio(0.45), wash_water_ratio(0.6), strategy(nullptr) {
}

Wash::Wash(const ModeStrategy* strategy)
    : currentWeight(0), wash_time(0), wash_water(0),
    wash_time_ratio(0.45), wash_water_ratio(0.6), strategy(strategy) {
}

int Wash::total_wash_time_aligned() {
    double wash_time_coefficient = strategy->getWashTimeCoefficient();
    int total_time = ((currentWeight - 1) * 10 + 25);
    wash_time = total_time * wash_time_ratio * wash_time_coefficient;
    int total_time_aligned = total_time - (total_time % 5); // 5•ª’PˆÊ‚É’²®

    //display.showTotalTime(total_time_aligned); // ª‚ðo—Í

    return total_time_aligned;
}
int Wash::wash_time_calc() {
    double wash_time_coefficient = strategy->getWashTimeCoefficient();
    int total_time = ((currentWeight - 1) * 10 + 25);
    wash_time = total_time * wash_time_ratio * wash_time_coefficient;

    return wash_time;
}

int Wash::total_wash_water_aligned() {
    int wash_water_coefficient = strategy->getWashWaterCoefficient();
    int total_water = ((currentWeight - 1) * 5 + 40);
    wash_water = total_water * wash_water_ratio * wash_water_coefficient;
	int total_water_aligned = total_water - (total_water % 5); // 5L’PˆÊ‚É’²®

	return total_water_aligned;
}

int Wash::wash_water_calc() {
    int wash_water_coefficient = strategy->getWashWaterCoefficient();
	int total_water = ((currentWeight - 1) * 5 + 40);
    wash_water = total_water* wash_water_ratio * wash_water_coefficient;

	//display.showTotalWater(wash_water);
    
    return wash_water;
}

void Wash::setCurrentWeight(int currentWeight) {  
    this->currentWeight = currentWeight;  
}  

int Wash::getCurrentWeight() const {  
    return currentWeight;  
}  
