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

}

void Washer::setModeStrategy(std::unique_ptr<ModeStrategy> strategy) {
    modeStrategy = std::move(strategy);
}

void Washer::run() {
    // �d�ʌv��  
    initializeWeight();

    display.showSelectMode(modeSelect.getCurrentMode()); // �I�����ꂽ���[�h��\��
    display.showCurrentWeight(weightSensor.getCurrentWeight());

    // ���[�h�I��  
    modeSelect.select();
    

    // �I�΂ꂽ���[�h�헪�̎擾
    auto strategy = modeSelect.getStrategy();
    setModeStrategy(std::move(strategy));

    Wash wash(modeStrategy.get());
    wash.setCurrentWeight(weightSensor.getCurrentWeight());
    display.showTotalWater(wash.total_wash_water_aligned()); // �􂢐��ʂ�\��
	display.showTotalTime(wash.total_wash_time_aligned()); // �􂢎��Ԃ�\��
    

    if (modeStrategy) {
        // ��  
        display.showCurrentProcess("�􂢒�...");
        display.showWashWater(wash.wash_water_calc()); // �􂢐��ʂ�\��
		display.showWashTime(wash.wash_time_calc()); // �􂢎��Ԃ�\��
		
        // ������
        Rinse rinse(modeStrategy.get());
        rinse.setCurrentWeight(weightSensor.getCurrentWeight());
        display.showCurrentProcess("��������...");
        display.showRinseWater(rinse.rinse_water_calc()); // ���������ʂ�\��
        display.showRinseTime(rinse.rinse_time_calc(), modeStrategy->getRinseCount()); // ���������Ԃ�\��
		
		


        // �E��  
        Spin spin(modeStrategy.get());
        spin.setCurrentWeight(weightSensor.getCurrentWeight());
        display.showCurrentProcess("�E����...");
        display.showSpinMode(spin.spin_mode_calc()); // �E�����[�h��\��
		display.showSpinTime(spin.spin_time_calc()); // �E�����Ԃ�\��
		

    }


}