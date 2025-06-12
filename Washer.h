#ifndef WASHER_H
#define WASHER_H

#include "WeightSensor.h"
#include "ModeSelect.h"

class Washer {
private:
    WeightSensor weightSensor;
    ModeSelect modeSelect;
    int initialWeight; // 初期の重量を保持

public:
    Washer();
    void initializeWeight();
    void run(); // モード選択をして洗濯を開始
};

#endif // WASHER_H