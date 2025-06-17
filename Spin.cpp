#include "Spin.h"  
#include <iostream>  
#include <string>

using namespace std;

Spin::Spin() : currentWeight(0), Spin_time(0), spin_mode("標準"), strategy(nullptr) {}

Spin::Spin(const ModeStrategy* strategy) : currentWeight(0), Spin_time(0), spin_mode("標準"), strategy(strategy) {}

int Spin::spin_time_calc() {
	int spin_time_coefficient = strategy->getSpinTimeCoefficient(); // モードに応じた脱水時間係数を取得
    Spin_time = currentWeight * spin_time_coefficient;
    cout << "[Spin] 脱水時間: " << Spin_time << " 分" << endl;
    return Spin_time;
}

std::string Spin::spin_mode_calc() {
    if (currentWeight >= 5) {
        spin_mode = "送風";
    } else {
        spin_mode = "標準";
    }
    cout << "[Spin] 脱水モード: " << spin_mode << endl;
    return spin_mode;
}

void Spin::setCurrentWeight(int currentWeight) {
    this->currentWeight = currentWeight;
}

int Spin::getCurrentWeight() const {
    return currentWeight;
}