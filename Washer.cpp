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
    cout << "�v�����ꂽ�d��: " << weightSensor.getCurrentWeight() << " kg" << endl;
}

void Washer::setModeStrategy(std::unique_ptr<ModeStrategy> strategy) {
    modeStrategy = std::move(strategy);
}

void Washer::run() {
    // �d�ʌv��  
    initializeWeight();

    // ���[�h�I��  
    modeSelect.select();

    // �I�΂ꂽ���[�h�헪�̎擾
    auto strategy = modeSelect.getStrategy();
    setModeStrategy(std::move(strategy));

    if (modeStrategy) {
        // ��  
        Wash wash(modeStrategy.get());
        wash.setCurrentWeight(weightSensor.getCurrentWeight());
        wash.wash_time_calc();
        wash.wash_water_calc();

        // ������
        Rinse rinse(modeStrategy.get());
        rinse.setCurrentWeight(weightSensor.getCurrentWeight());
        rinse.rinse_time_calc();
        rinse.rinse_water_calc();

        // �E��  
        Spin spin(modeStrategy.get());
        spin.setCurrentWeight(weightSensor.getCurrentWeight());
        spin.spin_time_calc();
        spin.spin_mode_calc();
    }
}