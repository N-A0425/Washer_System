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

}

void Washer::setModeStrategy(std::unique_ptr<ModeStrategy> strategy) {
    modeStrategy = std::move(strategy);
}

void Washer::run() {
    // 重量計測  
    initializeWeight();

    display.showSelectMode(modeSelect.getCurrentMode()); // 選択されたモードを表示
    display.showCurrentWeight(weightSensor.getCurrentWeight());

    // モード選択  
    modeSelect.select();
    

    // 選ばれたモード戦略の取得
    auto strategy = modeSelect.getStrategy();
    setModeStrategy(std::move(strategy));

    Wash wash(modeStrategy.get());
    wash.setCurrentWeight(weightSensor.getCurrentWeight());
    display.showTotalWater(wash.total_wash_water_aligned()); // 洗い水量を表示
	display.showTotalTime(wash.total_wash_time_aligned()); // 洗い時間を表示
    

    if (modeStrategy) {
        // 洗い  
        display.showCurrentProcess("洗い中...");
        display.showWashWater(wash.wash_water_calc()); // 洗い水量を表示
		display.showWashTime(wash.wash_time_calc()); // 洗い時間を表示
		
        // すすぎ
        Rinse rinse(modeStrategy.get());
        rinse.setCurrentWeight(weightSensor.getCurrentWeight());
        display.showCurrentProcess("すすぎ中...");
        display.showRinseWater(rinse.rinse_water_calc()); // すすぎ水量を表示
        display.showRinseTime(rinse.rinse_time_calc(), modeStrategy->getRinseCount()); // すすぎ時間を表示
		
		


        // 脱水  
        Spin spin(modeStrategy.get());
        spin.setCurrentWeight(weightSensor.getCurrentWeight());
        display.showCurrentProcess("脱水中...");
        display.showSpinMode(spin.spin_mode_calc()); // 脱水モードを表示
		display.showSpinTime(spin.spin_time_calc()); // 脱水時間を表示
		

    }


}