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

	if (currentModeIndex = 0) {
		// ���̎��̏ꍇ�������o��	
	}
}

string ModeSelect::getCurrentMode() const {
	return modes[currentModeIndex];
}