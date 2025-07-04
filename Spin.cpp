#include "Spin.h"  
#include <iostream>  
#include <string>

using namespace std;

Spin::Spin()
    : currentWeight(0), spin_time(0), spin_mode("標準"), 
      spin_time_ratio(0.15), strategy(nullptr) {}

Spin::Spin(const ModeStrategy* strategy)
    : currentWeight(0), spin_time(0), spin_mode("標準"),
      spin_time_ratio(0.15), strategy(strategy) {}

int Spin::spin_time_calc() {
	int spin_time_coefficient = strategy->getSpinTimeCoefficient(); // モードに応じた脱水時間係数を取得
	int total_time = ((currentWeight - 1) * 10 + 25); // 基本の脱水時間計算
	spin_time = total_time * spin_time_ratio * spin_time_coefficient; // 脱水時間の計算
    
    return spin_time;
}

std::string Spin::spin_mode_calc() {
    if (currentWeight >= 5) {
        spin_mode = "送風";
    } else {
        spin_mode = "標準";
    }

    return spin_mode;
}

void Spin::setCurrentWeight(int currentWeight) {
    this->currentWeight = currentWeight;
}

int Spin::getCurrentWeight() const {
    return currentWeight;
}