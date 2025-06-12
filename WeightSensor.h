#ifndef WEIGHT_SENSOR_H
#define WEIGHT_SENSOR_H

#include "WashingTub.h"

class WeightSensor {
private:
    WashingTub washingTub;

public:
    WeightSensor(); // コンストラクタ
    void setWeight(); // 重量計測メソッド
    int getCurrentWeight() const; // 重量取得メソッド
};

#endif // WEIGHT_SENSOR_H