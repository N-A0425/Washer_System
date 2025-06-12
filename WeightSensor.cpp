#include "WeightSensor.h"
#include <cstdlib>
#include <ctime>

WeightSensor::WeightSensor() {
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // ランダムシードの初期化
}

void WeightSensor::setWeight() {
    int currentWeight = std::rand() % 7 + 1; // 1から7のランダムな整数
    this->washingTub.setCurrentWeight(currentWeight);
}

int WeightSensor::getCurrentWeight() const {
    return this->washingTub.getCurrentWeight();
}