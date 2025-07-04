#include "Rinse.h"  

#include <iostream>  
#include <string>

using namespace std;

Rinse::Rinse() 
	 : currentWeight(0), rinse_time(0), rinse_water(0), 
	   rinse_time_ratio(0.2), rinse_water_ratio(0.2), strategy(nullptr) {}

Rinse::Rinse(const ModeStrategy* strategy)
	: currentWeight(0), rinse_time(0), rinse_water(0),
	  rinse_time_ratio(0.2), rinse_water_ratio(0.2), strategy(strategy) {}

int Rinse::rinse_time_calc() {
	double rinse_time_coefficient = strategy->getRinseTimeCoefficient();
	int rinse_count = strategy->getRinseCount(); // すすぎ回数を取得
	int total_time = ((currentWeight - 1) * 10 + 25);
	rinse_time = total_time * rinse_time_ratio * rinse_time_coefficient * rinse_count;

    return rinse_time;
}

int Rinse::rinse_water_calc() {
	int rinse_water_coefficient = strategy->getRinseWaterCoefficient();
	int total_water = ((currentWeight - 1) * 5 + 40);
	rinse_water = total_water * rinse_water_ratio * rinse_water_coefficient;
    
    return rinse_water;
}

void Rinse::setCurrentWeight(int currentWeight) {
    this->currentWeight = currentWeight;
}

int Rinse::getCurrentWeight() const {
    return currentWeight;
}
