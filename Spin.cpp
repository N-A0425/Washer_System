#include "Spin.h"  
#include <iostream>  
#include <string>

using namespace std;

Spin::Spin() : currentWeight(0), Spin_time(0), spin_mode("�W��"), strategy(nullptr) {}

Spin::Spin(const ModeStrategy* strategy) : currentWeight(0), Spin_time(0), spin_mode("�W��"), strategy(strategy) {}

int Spin::spin_time_calc() {
	int spin_time_coefficient = strategy->getSpinTimeCoefficient(); // ���[�h�ɉ������E�����ԌW�����擾
    Spin_time = currentWeight * spin_time_coefficient;
    cout << "[Spin] �E������: " << Spin_time << " ��" << endl;
    return Spin_time;
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