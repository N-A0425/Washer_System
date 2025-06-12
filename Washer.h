#ifndef WASHER_H
#define WASHER_H

#include "WeightSensor.h"
#include "ModeSelect.h"

class Washer {
private:
    WeightSensor weightSensor;
    ModeSelect modeSelect;
    int initialWeight; // �����̏d�ʂ�ێ�

public:
    Washer();
    void initializeWeight();
    void run(); // ���[�h�I�������Đ�����J�n
};

#endif // WASHER_H