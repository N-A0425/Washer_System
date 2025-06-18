#include "ModeSelect.h"
#include <iostream>
#include <conio.h> // Windowsでのリアルタイムキー入力に使用

using namespace std;

ModeSelect::ModeSelect() : currentModeIndex(0), strategy(nullptr) {
    modes = { "標準", "おしゃれ着", "デリケート", "部屋干し", "お急ぎ", "エコ", "すすぎ、脱水" };
}

void ModeSelect::select() {
    char input;

    display.showCurrentMode(modes[currentModeIndex]);

	//display.showSelectMode(modes[currentModeIndex]);
    
    
    while (true) {
        input = _getch(); // キーボード入力を非エコーで受け取る
        bool modeChanged = false;
        if (input == 72 && currentModeIndex > 0) { // 上キー
            --currentModeIndex;
            modeChanged = true;
        }
        else if (input == 80 && currentModeIndex < modes.size() - 1) { // 下キー
            ++currentModeIndex;
            modeChanged = true;
        }
        if (modeChanged) {

			display.showCurrentMode(modes[currentModeIndex]);
            
        }
        if (input == '\r') { // Enterキー
            break;
        }
    }

	display.showDecisionMode(modes[currentModeIndex]);
    
}

std::unique_ptr<ModeStrategy> ModeSelect::getStrategy() {
    if (modes[currentModeIndex] == "標準") {
        return std::make_unique<StandardMode>();
    }
    else if (modes[currentModeIndex] == "おしゃれ着") {
        return std::make_unique<FashionableClothMode>();
    }
    else if (modes[currentModeIndex] == "デリケート") {
        return std::make_unique<DelicateMode>();
    }
    else if (modes[currentModeIndex] == "部屋干し") {
        return std::make_unique<RoomDryingMode>();
    }
    else if (modes[currentModeIndex] == "お急ぎ") {
        return std::make_unique<QuickMode>();
    }
    else if (modes[currentModeIndex] == "エコ") {
        return std::make_unique<EcoMode>();
    }
    else if (modes[currentModeIndex] == "すすぎ、脱水") {
        return std::make_unique<RinseAndDeciccationMode>();
    }
    else {
        return std::make_unique<CustomMode>();
    }
}



string ModeSelect::getCurrentMode() const {
    return modes[currentModeIndex];
}