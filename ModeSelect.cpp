#include "ModeSelect.h"

#include <iostream>
#include <conio.h> // Windowsでのリアルタイムキー入力に使用

using namespace std;

ModeSelect::ModeSelect() : currentModeIndex() {
	modes = { "標準", "おしゃれ着", "デリケート", "部屋干し", "お急ぎ", "エコ", "すすぎ、脱水" };
}

void ModeSelect::select() {
	char input;
	cout << "現在のモード: " << modes[currentModeIndex] << endl;
	cout << "矢印キー(↑や↓)でモードを選び、Enterキーで確定します。\n";
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
			cout << "\r現在選択されているモード: " << modes[currentModeIndex];
			blanks = 0;
			blanks = LimChar - (modes[currentModeIndex].length() / FullChar);
			for (int cnt = 0; cnt < blanks; cnt++) {
				cout << "　";
			}
			cout.flush();
		}
		if (input == '\r') { // Enterキー
			break;
		}
	}
	cout << "\n\n選択したモード: " << modes[currentModeIndex] << endl;

	if (modes[currentModeIndex] == "標準") {
		strategy = std::make_unique<StandardMode>();
	}
	else if (modes[currentModeIndex] == "おしゃれ着") {
		strategy = std::make_unique<FashionableClothMode>();
	}
	else if (modes[currentModeIndex] == "デリケート") {
		strategy = std::make_unique<DelicateMode>();
	}
	else if (modes[currentModeIndex] == "部屋干し") {
		strategy = std::make_unique<RoomDryingMode>();
	}
	else if (modes[currentModeIndex] == "お急ぎ") {
		strategy = std::make_unique<QuickMode>();
	}
	else if (modes[currentModeIndex] == "エコ") {
		strategy = std::make_unique<EcoMode>();
	}
	else if (modes[currentModeIndex] == "すすぎ、脱水") {
		strategy = std::make_unique<RinseAndDeciccationMode>();
	}
	else {
		strategy = std::make_unique<CustomMode>();
	}

	strategy->applyWash(wash, currentWeight);
}

string ModeSelect::getCurrentMode() const {
	return modes[currentModeIndex];
}

