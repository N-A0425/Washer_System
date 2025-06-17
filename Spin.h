#ifndef SPIN_H
#define SPIN_H

#include "ModeStrategy.h"

class ModeStrategy;

class Spin {
private:
	int currentWeight;
	int Spin_time;
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