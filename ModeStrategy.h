#ifndef MODESTRATEGY_H
#define MODESTRATEGY_H

#include <iostream>

#include "WashingTub.h"
#include "Wash.h"
#include "Rinse.h"
#include "Spin.h"

class ModeStrategy {
public:
	virtual ~ModeStrategy() = default;
	virtual void execute(int currentWeight) const = 0;
};

class StandardMode : public ModeStrategy {
public:
	void execute(int currentWeight) const override {
		Wash();
		Rinse();
		Spin();
	}
};

class FashionableClothMode : public ModeStrategy {
public:
	void execute(int currentWeight) const override {
		Wash();
		Rinse();
		Spin();
	}
};

class DelicateMode : public ModeStrategy {
public:
	void execute(int currentWeight) const override {
		Wash();
		Rinse();
		Spin();
	}
};

class DringInsideMode : public ModeStrategy {
public:
	void execute(int currentWeight) const override {
		Wash();
		Rinse();
		Spin();
	}
};

class QuickMode : public ModeStrategy {
public:
	void execute(int currentWeight) const override {
		Wash();
		Rinse();
		Spin();
	}
};

class EcoMode : public ModeStrategy {
public:
	void execute(int currentWeight) const override {
		Wash();
		Rinse();
		Spin();
	}
};

class RinseAndDeciccationMode : public ModeStrategy {
public:
	void execute(int currentWeight) const override {
		Wash();
		Rinse();
		Spin();
	}
};

#endif // MODESTRATEGY_H