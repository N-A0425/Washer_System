#include "Spin.h"  
#include <iostream>  
#include <string>

using namespace std;

Spin::Spin() : currentWeight(0), spin_time(0), spin_mode("�W��"), strategy(nullptr) {}

Spin::Spin(const ModeStrategy* strategy) : currentWeight(0), spin_time(0), spin_mode("�W��"), strategy(strategy) {}

int Spin::spin_time_calc() {
	int spin_time_coefficient = strategy->getSpinTimeCoefficient(); // ���[�h�ɉ������E�����ԌW�����擾
	int total_time = ((currentWeight - 1) * 10 + 25); // ��{�̒E�����Ԍv�Z
	spin_time = total_time * spin_time_ratio * spin_time_coefficient; // �E�����Ԃ̌v�Z
    cout << "[Spin] �E�����ԁF�� " << spin_time << " ��" << endl;
    return spin_time;
}

std::string Spin::spin_mode_calc() {
    if (currentWeight >= 5) {
        spin_mode = "����";
    } else {
        spin_mode = "�W��";
    }
    cout << "[Spin] �E�����[�h: " << spin_mode << endl;
    return spin_mode;
}

void Spin::setCurrentWeight(int currentWeight) {
    this->currentWeight = currentWeight;
}

int Spin::getCurrentWeight() const {
    return currentWeight;
}