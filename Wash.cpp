#include "Wash.h"  

#include <iostream>  
#include <string>
#include <thread>
#include <chrono>

using namespace std;  

Wash::Wash() : currentWeight(0), wash_time(0), wash_water(0), strategy(nullptr) {}

Wash::Wash(const ModeStrategy* strategy) : currentWeight(0), wash_time(0), wash_water(0), strategy(strategy) {}
int Wash::wash_water_calc() {
    int wash_water_coefficient = strategy->getWashWaterCoefficient();
	int total_water = ((currentWeight - 1) * 5 + 40) * wash_water_coefficient;
    wash_water = total_water* wash_water_ratio;
    cout << "[Wash] 洗い水量：約 " << wash_water << " L" << endl;
    return wash_water;
}
int Wash::wash_time_calc() {
    double wash_time_coefficient = strategy->getWashTimeCoefficient();
    int total_time = ((currentWeight - 1) * 10 + 25);
    int wash_time = total_time * wash_time_ratio * wash_time_coefficient;
	int total_time_aligned = total_time - (total_time % 5); // 5分単位に調整
	cout << "洗濯時間：約" << total_time_aligned << " 分";
    for (int cnt = wash_time; cnt > 0; cnt--) {
        cout << "\r[Wash] 洗い時間：約 " << cnt << " 分";
        std::this_thread::sleep_for(chrono::milliseconds(500));
    }
    return wash_time;
}



void Wash::setCurrentWeight(int currentWeight) {  
    this->currentWeight = currentWeight;  
}  

int Wash::getCurrentWeight() const {  
    return currentWeight;  
}  
