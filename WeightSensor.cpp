#include "WeightSensor.h"
#include <cstdlib>
#include <ctime>

WeightSensor::WeightSensor() {
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // �����_���V�[�h�̏�����
}

void WeightSensor::setWeight() {
    int currentWeight = std::rand() % 7 + 1; // 1����7�̃����_���Ȑ���
    this->washingTub.setCurrentWeight(currentWeight);
}

int WeightSensor::getCurrentWeight() const {
    return this->washingTub.getCurrentWeight();
}