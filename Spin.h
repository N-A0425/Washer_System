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
	int spin_mode_index; // 0: 標準, 1: 送風
	std::string spin_mode; // char型からstring型へ修正
	const ModeStrategy* strategy;
	Display display; // ディスプレイオブジェクト

public:
	Spin();
	Spin(const ModeStrategy* strategy);
	void setCurrentWeight(int currentWeight);
	int getCurrentWeight() const;
	int spin_time_calc();
	std::string spin_mode_calc(); // 戻り値型をstringに修正
};

#endif // SPIN_H