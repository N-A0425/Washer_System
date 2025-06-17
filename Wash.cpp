#include "Wash.h"  

#include <iostream>  
#include <string>
using namespace std;  

Wash::Wash() : currentWeight(0), wash_time(0), wash_water(0), out(0) {}

int Wash::wash_time_calc() {  
    wash_time = currentWeight * wash_time_coefficient;
    cout << "[Wash] �􂢎���: " << wash_time << " ��" << endl;  
    return wash_time;
}

int Wash::wash_water_calc() {
    wash_water = currentWeight * 12;
    cout << "[Wash] �􂢐���: " << wash_water << " L" << endl;
    return wash_water;
}

void Wash::setCurrentWeight(int currentWeight) {  
    this->currentWeight = currentWeight;  
}  

int Wash::getCurrentWeight() const {  
    return currentWeight;  
}  
