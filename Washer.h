#ifndef WASHER_H
#define WASHER_H

#include "WeightSensor.h"
#include "ModeSelect.h"
#include "ModeStrategy.h"
#include "Wash.h"


#include <memory>

class Washer {
private:
    WeightSensor weightSensor;
    ModeSelect modeSelect;
    int initialWeight; // 初期の重量を保持
    std::unique_ptr<ModeStrategy> modeStrategy;

public:
    Washer();
    void initializeWeight();
    void setModeStrategy(std::unique_ptr<ModeStrategy> strategy);
    void run(); // モード選択をして洗濯を開始

};

#endif // WASHER_H