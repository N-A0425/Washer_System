#include "Washer.h"  
#include <iostream>  
using namespace std;

Washer::Washer()
    : initialWeight(0)
{
}

void Washer::initializeWeight() {
    weightSensor.setWeight();
    initialWeight = weightSensor.getCurrentWeight();
    cout << "計測された重量: " << weightSensor.getCurrentWeight() << " kg" << endl;
}

void Washer::setModeStrategy(std::unique_ptr<ModeStrategy> strategy) {
    modeStrategy = std::move(strategy);
}

void Washer::run() {
    // 重量計測  
    initializeWeight();

    // モード選択  
    modeSelect.select();

    // 選ばれたモード戦略の取得
    auto strategy = modeSelect.getStrategy();
    setModeStrategy(std::move(strategy));

    if (modeStrategy) {
        // 洗い  
        Wash wash(modeStrategy.get());
        wash.setCurrentWeight(weightSensor.getCurrentWeight());
        wash.wash_time_calc();
        wash.wash_water_calc();

        // すすぎ
        Rinse rinse(modeStrategy.get());
        rinse.setCurrentWeight(weightSensor.getCurrentWeight());
        rinse.rinse_time_calc();
        rinse.rinse_water_calc();

        // 脱水  
        Spin spin(modeStrategy.get());
        spin.setCurrentWeight(weightSensor.getCurrentWeight());
        spin.spin_time_calc();
        spin.spin_mode_calc();
    }
}