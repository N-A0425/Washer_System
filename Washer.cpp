#include "Washer.h"

#include <iostream>

Washer::Washer() : weightSensor(), modeSelect(), initialWeight(0) {} // �����̏d�ʂ�0�ɐݒ�

void Washer::initializeWeight() {
    weightSensor.setWeight(); // �d�ʌv�����\�b�h���g�p
    initialWeight = weightSensor.getCurrentWeight(); // �����̏d�ʂ�ۑ�
    std::cout << "�����̐��󕨂̏d��: " << initialWeight << "kg\n";
}

void Washer::setModeStrategy(std::unique_ptr<ModeStrategy> strategy) {
    modeStrategy = std::move(strategy);
}


void Washer::run() {
    initializeWeight(); // �����d�ʂ�ݒ�
    modeSelect.select(); // ���[�h��I��
    std::cout << "�I�΂ꂽ���[�h�Ő�����J�n���܂��B���[�h: " << modeSelect.getCurrentMode()
        << ", �d��: " << initialWeight << "kg\n";
    //Wash();
    //Rinse();
    //Spin();
}