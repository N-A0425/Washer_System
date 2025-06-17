#include "Washer.h"
#include <iostream>
#include "Wash.h"
#include "Rinse.h"
#include "Spin.h"
#include "ModeStrategy.h"
#include "ModeSelect.h"

using namespace std;

Washer::Washer()
    : initialWeight(0)
{
}

void Washer::initializeWeight() {
    weightSensor.setWeight();
    initialWeight = weightSensor.getCurrentWeight();
    cout << "計測された重量: " << initialWeight << " kg" << endl;
}

void Washer::setModeStrategy(std::unique_ptr<ModeStrategy> strategy) {
    modeStrategy = std::move(strategy);
}

void Washer::run() {
    // 重量計測
    initializeWeight();

    // モード選択
    modeSelect.select();

    // 洗い
    Wash wash;
    wash.setCurrentWeight(initialWeight);
    wash.wash_time_calc();
    wash.wash_water_calc();

    // すすぎ
    Rinse rinse;
    rinse.setCurrentWeight(initialWeight);
    rinse.rinse_time_calc();
    rinse.rinse_water_calc();

    // 脱水
    Spin spin;
    spin.setCurrentWeight(initialWeight);
    spin.spin_time_calc();
    spin.spin_mode_calc();
}