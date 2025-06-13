#include "Washer.h"

#include <iostream>

Washer::Washer() : weightSensor(), modeSelect(), initialWeight(0) {} // 初期の重量を0に設定

void Washer::initializeWeight() {
    weightSensor.setWeight(); // 重量計測メソッドを使用
    initialWeight = weightSensor.getCurrentWeight(); // 初期の重量を保存
    std::cout << "初期の洗濯物の重量: " << initialWeight << "kg\n";
}

void Washer::setModeStrategy(std::unique_ptr<ModeStrategy> strategy) {
    modeStrategy = std::move(strategy);
}


void Washer::run() {
    initializeWeight(); // 初期重量を設定
    modeSelect.select(); // モードを選択
    std::cout << "選ばれたモードで洗濯を開始します。モード: " << modeSelect.getCurrentMode()
        << ", 重量: " << initialWeight << "kg\n";
    //Wash();
    //Rinse();
    //Spin();
}