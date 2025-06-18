#include "ModeSelect.h"
#include <iostream>
#include <conio.h> // Windows�ł̃��A���^�C���L�[���͂Ɏg�p

using namespace std;

ModeSelect::ModeSelect() : currentModeIndex(0), strategy(nullptr) {
    modes = { "�W��", "������ꒅ", "�f���P�[�g", "��������", "���}��", "�G�R", "�������A�E��" };
}

void ModeSelect::select() {
    char input;

    display.showCurrentMode(modes[currentModeIndex]);

	//display.showSelectMode(modes[currentModeIndex]);
    
    
    while (true) {
        input = _getch(); // �L�[�{�[�h���͂��G�R�[�Ŏ󂯎��
        bool modeChanged = false;
        if (input == 72 && currentModeIndex > 0) { // ��L�[
            --currentModeIndex;
            modeChanged = true;
        }
        else if (input == 80 && currentModeIndex < modes.size() - 1) { // ���L�[
            ++currentModeIndex;
            modeChanged = true;
        }
        if (modeChanged) {

			display.showCurrentMode(modes[currentModeIndex]);
            
        }
        if (input == '\r') { // Enter�L�[
            break;
        }
    }

	display.showDecisionMode(modes[currentModeIndex]);
    
}

std::unique_ptr<ModeStrategy> ModeSelect::getStrategy() {
    if (modes[currentModeIndex] == "�W��") {
        return std::make_unique<StandardMode>();
    }
    else if (modes[currentModeIndex] == "������ꒅ") {
        return std::make_unique<FashionableClothMode>();
    }
    else if (modes[currentModeIndex] == "�f���P�[�g") {
        return std::make_unique<DelicateMode>();
    }
    else if (modes[currentModeIndex] == "��������") {
        return std::make_unique<RoomDryingMode>();
    }
    else if (modes[currentModeIndex] == "���}��") {
        return std::make_unique<QuickMode>();
    }
    else if (modes[currentModeIndex] == "�G�R") {
        return std::make_unique<EcoMode>();
    }
    else if (modes[currentModeIndex] == "�������A�E��") {
        return std::make_unique<RinseAndDeciccationMode>();
    }
    else {
        return std::make_unique<CustomMode>();
    }
}



string ModeSelect::getCurrentMode() const {
    return modes[currentModeIndex];
}