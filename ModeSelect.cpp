#include "ModeSelect.h"

#include <iostream>
#include <conio.h> // Windows�ł̃��A���^�C���L�[���͂Ɏg�p

using namespace std;

ModeSelect::ModeSelect() : currentModeIndex() {
	modes = { "�W��", "������ꒅ", "�f���P�[�g", "��������", "���}��", "�G�R", "�������A�E��" };
}

void ModeSelect::select() {
	char input;
	cout << "���݂̃��[�h: " << modes[currentModeIndex] << endl;
	cout << "���L�[(���⁫)�Ń��[�h��I�сAEnter�L�[�Ŋm�肵�܂��B\n";
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
			cout << "\r���ݑI������Ă��郂�[�h: " << modes[currentModeIndex];
			blanks = 0;
			blanks = LimChar - (modes[currentModeIndex].length() / FullChar);
			for (int cnt = 0; cnt < blanks; cnt++) {
				cout << "�@";
			}
			cout.flush();
		}
		if (input == '\r') { // Enter�L�[
			break;
		}
	}
	cout << "\n\n�I���������[�h: " << modes[currentModeIndex] << endl;

	if (modes[currentModeIndex] == "�W��") {
		strategy = std::make_unique<StandardMode>();
	}
	else if (modes[currentModeIndex] == "������ꒅ") {
		strategy = std::make_unique<FashionableClothMode>();
	}
	else if (modes[currentModeIndex] == "�f���P�[�g") {
		strategy = std::make_unique<DelicateMode>();
	}
	else if (modes[currentModeIndex] == "��������") {
		strategy = std::make_unique<RoomDryingMode>();
	}
	else if (modes[currentModeIndex] == "���}��") {
		strategy = std::make_unique<QuickMode>();
	}
	else if (modes[currentModeIndex] == "�G�R") {
		strategy = std::make_unique<EcoMode>();
	}
	else if (modes[currentModeIndex] == "�������A�E��") {
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

