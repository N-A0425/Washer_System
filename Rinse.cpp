#include "Rinse.h"  

#include <iostream>  
#include <string>

using namespace std;

Rinse::Rinse(const ModeStrategy* strategy) : currentWeight(0), rinse_time(0), rinse_water(0), strategy(nullptr) {}

int Rinse::rinse_time_calc() {
	int rinse_time_coefficient = strategy->getRinseTimeCoefficient();
    rinse_time = currentWeight * rinse_time_coefficient;
    cout << "[Rinse] ‚·‚·‚¬ŽžŠÔ: " << rinse_time << " •ª" << endl;
    return rinse_time;
}

int Rinse::rinse_water_calc() {
	int rinse_water_coefficient = strategy->getRinseWaterCoefficient();
    rinse_water = currentWeight * rinse_water_coefficient;
    cout << "[Rinse] ‚·‚·‚¬…—Ê: " << rinse_water << " L" << endl;
    return rinse_water;
}

void Rinse::setCurrentWeight(int currentWeight) {
    this->currentWeight = currentWeight;
}

int Rinse::getCurrentWeight() const {
    return currentWeight;
}
