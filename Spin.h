#ifndef SPIN_H
#define SPIN_H

#include "ModeStrategy.h"
#include "Display.h"

class ModeStrategy;

class Spin {
private:
	int currentWeight;
	int spin_time;
	double spin_time_ratio;
	int spin_mode_index; // 0: �W��, 1: ����
	std::string spin_mode; // char�^����string�^�֏C��
	const ModeStrategy* strategy;
	Display display; // �f�B�X�v���C�I�u�W�F�N�g

public:
	Spin();
	Spin(const ModeStrategy* strategy);
	void setCurrentWeight(int currentWeight);
	int getCurrentWeight() const;
	int spin_time_calc();
	std::string spin_mode_calc(); // �߂�l�^��string�ɏC��
};

#endif // SPIN_H