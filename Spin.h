#ifndef SPIN_H
#define SPIN_H

#include "ModeStrategy.h"

class Spin {
private:
	int currentWeight;
	int Spin_time;
	std::string spin_mode; // char�^����string�^�֏C��
	int out;

public:
	Spin();
	void setCurrentWeight(int currentWeight);
	int getCurrentWeight() const;
	int spin_time_calc();
	std::string spin_mode_calc(); // �߂�l�^��string�ɏC��

};

#endif // SPIN_H