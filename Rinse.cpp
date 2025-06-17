#include "Rinse.h"  

#include <iostream>  
#include <string>
using namespace std;

Rinse::Rinse() : currentWeight(0), rinse_time(0), rinse_water(0), out(0) {}

int Rinse::rinse_time_calc() {
    rinse_time = currentWeight * 2;
    cout << "[Rinse] ‚·‚·‚¬ŽžŠÔ: " << rinse_time << " •ª" << endl;
    return rinse_time;
}

int Rinse::rinse_water_calc() {
    rinse_water = currentWeight * 10;
    cout << "[Rinse] ‚·‚·‚¬…—Ê: " << rinse_water << " L" << endl;
    return rinse_water;
}

void Rinse::setCurrentWeight(int currentWeight) {
    this->currentWeight = currentWeight;
}

int Rinse::getCurrentWeight() const {
    return currentWeight;
}
