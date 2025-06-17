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

	virtual void applyWash(const class Wash& wash, int currentWeight) const = 0;
	virtual void applyRinse(const class Rinse& rinse, int currentWeight) const = 0;
	virtual void applySpin(const class Spin& spin, int currentWeight) const = 0;
};

class StandardMode : public ModeStrategy {
private:
	int wash_time_coefficient = 5;

public:
	void applyWash(const Wash& wash, int currentWeight) const override {}
	void applyRinse(const Rinse& rinse, int currentWeight) const override {}
	void applySpin(const Spin& spin, int currentWeight) const override {}
	int out = 1;
};

class FashionableClothMode : public ModeStrategy {
public:
	void applyWash(const Wash& wash, int currentWeight) const override {}
	void applyRinse(const Rinse& rinse, int currentWeight) const override {}
	void applySpin(const Spin& spin, int currentWeight) const override {}
	int out = 2;
};

class DelicateMode : public ModeStrategy {
public:
	void applyWash(const Wash& wash, int currentWeight) const override {}
	void applyRinse(const Rinse& rinse, int currentWeight) const override {}
	void applySpin(const Spin& spin, int currentWeight) const override {}
	int out = 3;
};

class RoomDryingMode : public ModeStrategy {
public:
	void applyWash(const Wash& wash, int currentWeight) const override {}
	void applyRinse(const Rinse& rinse, int currentWeight) const override {}
	void applySpin(const Spin& spin, int currentWeight) const override {}
	int out = 4;
};

class DringInsideMode : public ModeStrategy {
public:
	void applyWash(const Wash& wash, int currentWeight) const override {}
	void applyRinse(const Rinse& rinse, int currentWeight) const override {}
	void applySpin(const Spin& spin, int currentWeight) const override {}
	int out = 5;
};

class QuickMode : public ModeStrategy {
public:
	void applyWash(const Wash& wash, int currentWeight) const override {}
	void applyRinse(const Rinse& rinse, int currentWeight) const override {}
	void applySpin(const Spin& spin, int currentWeight) const override {}
	int out = 6;
};

class EcoMode : public ModeStrategy {
public:
	void applyWash(const Wash& wash, int currentWeight) const override {}
	void applyRinse(const Rinse& rinse, int currentWeight) const override {}
	void applySpin(const Spin& spin, int currentWeight) const override {}
	int out = 7;
};

class RinseAndDeciccationMode : public ModeStrategy {
public:
	void applyWash(const Wash& wash, int currentWeight) const override {}
	void applyRinse(const Rinse& rinse, int currentWeight) const override {}
	void applySpin(const Spin& spin, int currentWeight) const override {}
	int out = 8;
};

class CustomMode : public ModeStrategy {
public:
	void applyWash(const Wash& wash, int currentWeight) const override {}
	void applyRinse(const Rinse& rinse, int currentWeight) const override {}
	void applySpin(const Spin& spin, int currentWeight) const override {}
	int out = 9;
};

#endif // MODESTRATEGY_H