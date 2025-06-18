#ifndef WASHER_H
#define WASHER_H

#include "WeightSensor.h"
#include "ModeSelect.h"
#include "ModeStrategy.h"
#include "Wash.h"
#include "Display.h"


#include <memory>

class Washer {
private:
    WeightSensor weightSensor;
    ModeSelect modeSelect;
    int initialWeight; // �����̏d�ʂ�ێ�
    std::unique_ptr<ModeStrategy> modeStrategy;
	Display display; // �f�B�X�v���C�I�u�W�F�N�g

public:
    Washer();
    void initializeWeight();
    void setModeStrategy(std::unique_ptr<ModeStrategy> strategy);
    void run(); // ���[�h�I�������Đ�����J�n

};

#endif // WASHER_H