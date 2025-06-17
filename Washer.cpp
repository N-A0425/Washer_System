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
    cout << "�v�����ꂽ�d��: " << initialWeight << " kg" << endl;
}

void Washer::setModeStrategy(std::unique_ptr<ModeStrategy> strategy) {
    modeStrategy = std::move(strategy);
}

void Washer::run() {
    // �d�ʌv��
    initializeWeight();

    // ���[�h�I��
    modeSelect.select();

    // ��
    Wash wash;
    wash.setCurrentWeight(initialWeight);
    wash.wash_time_calc();
    wash.wash_water_calc();

    // ������
    Rinse rinse;
    rinse.setCurrentWeight(initialWeight);
    rinse.rinse_time_calc();
    rinse.rinse_water_calc();

    // �E��
    Spin spin;
    spin.setCurrentWeight(initialWeight);
    spin.spin_time_calc();
    spin.spin_mode_calc();
}