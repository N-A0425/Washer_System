#ifndef WEIGHT_SENSOR_H
#define WEIGHT_SENSOR_H

#include "WashingTub.h"

class WeightSensor {
private:
    WashingTub washingTub;

public:
    WeightSensor(); // �R���X�g���N�^
    void setWeight(); // �d�ʌv�����\�b�h
    int getCurrentWeight() const; // �d�ʎ擾���\�b�h
};

#endif // WEIGHT_SENSOR_H