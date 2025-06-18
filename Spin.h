#ifndef SPIN_H
#define SPIN_H

#include "ModeStrategy.h"

class ModeStrategy;

class Spin {
private:
	int currentWeight;
	int spin_time;
	double spin_time_ratio = 0.15;
	int spin_mode_index; // 0: �W��, 1: ����
	std::string spin_mode; // char�^����string�^�֏C��
	const ModeStrategy* strategy;

public:
	Spin();
	Spin(const ModeStrategy* strategy);
	void setCurrentWeight(int currentWeight);
	int getCurrentWeight() const;
	int spin_time_calc();
	std::string spin_mode_calc(); // �߂�l�^��string�ɏC��
};

#endif // SPIN_H