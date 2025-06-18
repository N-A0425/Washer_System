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

	virtual int getWashTimeCoefficient() const = 0;
	virtual int getWashWaterCoefficient() const = 0;
	virtual int getRinseTimeCoefficient() const = 0;
	virtual int getRinseWaterCoefficient() const = 0;
	virtual int getSpinTimeCoefficient() const = 0;

	virtual void applyWash(int currentWeight) const = 0;
	virtual void applyRinse(int currentWeight) const = 0;
	virtual void applySpin(int currentWeight) const = 0;
};

class StandardMode : public ModeStrategy {
private:
	int wash_time_coefficient = 1;
	int wash_water_coefficient = 1;
	int rinse_time_coefficient = 1;
	int rinse_water_coefficient = 1;
	int spin_time_coefficient = 1;

public:
	int getWashTimeCoefficient() const override {
		return wash_time_coefficient;
	}

	int getWashWaterCoefficient() const override {
		return wash_water_coefficient;
	}

	int getRinseTimeCoefficient() const override {
		return rinse_time_coefficient;
	}

	int getRinseWaterCoefficient() const override {
		return rinse_water_coefficient;
	}

	int getSpinTimeCoefficient() const override {
		return spin_time_coefficient;
	}

	void applyWash(int currentWeight) const override {}
	void applyRinse(int currentWeight) const override {}
	void applySpin(int currentWeight) const override {}
	int out = 1;
};

class FashionableClothMode : public ModeStrategy {
private:
	int wash_time_coefficient = 2;
	int wash_water_coefficient = 2;
	int rinse_time_coefficient = 2;
	int rinse_water_coefficient = 2;
	int spin_time_coefficient = 2;

public:
	int getWashTimeCoefficient() const override {
		return wash_time_coefficient;
	}

	int getWashWaterCoefficient() const override {
		return wash_water_coefficient;
	}

	int getRinseTimeCoefficient() const override {
		return rinse_time_coefficient;
	}

	int getRinseWaterCoefficient() const override {
		return rinse_water_coefficient;
	}

	int getSpinTimeCoefficient() const override {
		return spin_time_coefficient;
	}

	void applyWash(int currentWeight) const override {}
	void applyRinse(int currentWeight) const override {}
	void applySpin(int currentWeight) const override {}
	int out = 2;
};

class DelicateMode : public ModeStrategy {
private:
	int wash_time_coefficient = 3;
	int wash_water_coefficient = 3;
	int rinse_time_coefficient = 3;
	int rinse_water_coefficient = 3;
	int spin_time_coefficient = 3;

public:
	int getWashTimeCoefficient() const override {
		return wash_time_coefficient;
	}

	int getWashWaterCoefficient() const override {
		return wash_water_coefficient;
	}

	int getRinseTimeCoefficient() const override {
		return rinse_time_coefficient;
	}

	int getRinseWaterCoefficient() const override {
		return rinse_water_coefficient;
	}

	int getSpinTimeCoefficient() const override {
		return spin_time_coefficient;
	}

	void applyWash(int currentWeight) const override {}
	void applyRinse(int currentWeight) const override {}
	void applySpin(int currentWeight) const override {}
	int out = 3;
};

class RoomDryingMode : public ModeStrategy {
private:
	int wash_time_coefficient = 4;
	int wash_water_coefficient = 4;
	int rinse_time_coefficient = 4;
	int rinse_water_coefficient = 4;
	int spin_time_coefficient = 4;

public:
	int getWashTimeCoefficient() const override {
		return wash_time_coefficient;
	}

	int getWashWaterCoefficient() const override {
		return wash_water_coefficient;
	}

	int getRinseTimeCoefficient() const override {
		return rinse_time_coefficient;
	}

	int getRinseWaterCoefficient() const override {
		return rinse_water_coefficient;
	}

	int getSpinTimeCoefficient() const override {
		return spin_time_coefficient;
	}

	void applyWash(int currentWeight) const override {}
	void applyRinse(int currentWeight) const override {}
	void applySpin(int currentWeight) const override {}
	int out = 4;
};

class DringInsideMode : public ModeStrategy {
private:
	int wash_time_coefficient = 5;
	int wash_water_coefficient = 5;
	int rinse_time_coefficient = 5;
	int rinse_water_coefficient = 5;
	int spin_time_coefficient = 5;

public:
	int getWashTimeCoefficient() const override {
		return wash_time_coefficient;
	}

	int getWashWaterCoefficient() const override {
		return wash_water_coefficient;
	}

	int getRinseTimeCoefficient() const override {
		return rinse_time_coefficient;
	}

	int getRinseWaterCoefficient() const override {
		return rinse_water_coefficient;
	}

	int getSpinTimeCoefficient() const override {
		return spin_time_coefficient;
	}

	void applyWash(int currentWeight) const override {}
	void applyRinse(int currentWeight) const override {}
	void applySpin(int currentWeight) const override {}
	int out = 5;
};

class QuickMode : public ModeStrategy {
private:
	int wash_time_coefficient = 6;
	int wash_water_coefficient = 6;
	int rinse_time_coefficient = 6;
	int rinse_water_coefficient = 6;
	int spin_time_coefficient = 6;

public:
	int getWashTimeCoefficient() const override {
		return wash_time_coefficient;
	}

	int getWashWaterCoefficient() const override {
		return wash_water_coefficient;
	}

	int getRinseTimeCoefficient() const override {
		return rinse_time_coefficient;
	}

	int getRinseWaterCoefficient() const override {
		return rinse_water_coefficient;
	}

	int getSpinTimeCoefficient() const override {
		return spin_time_coefficient;
	}

	void applyWash(int currentWeight) const override {}
	void applyRinse(int currentWeight) const override {}
	void applySpin(int currentWeight) const override {}
	int out = 6;
};

class EcoMode : public ModeStrategy {
private:
	int wash_time_coefficient = 7;
	int wash_water_coefficient = 7;
	int rinse_time_coefficient = 7;
	int rinse_water_coefficient = 7;
	int spin_time_coefficient = 7;

public:
	int getWashTimeCoefficient() const override {
		return wash_time_coefficient;
	}

	int getWashWaterCoefficient() const override {
		return wash_water_coefficient;
	}

	int getRinseTimeCoefficient() const override {
		return rinse_time_coefficient;
	}

	int getRinseWaterCoefficient() const override {
		return rinse_water_coefficient;
	}

	int getSpinTimeCoefficient() const override {
		return spin_time_coefficient;
	}

	void applyWash(int currentWeight) const override {}
	void applyRinse(int currentWeight) const override {}
	void applySpin(int currentWeight) const override {}
	int out = 7;
};

class RinseAndDeciccationMode : public ModeStrategy {
private:
	int wash_time_coefficient = 8;
	int wash_water_coefficient = 8;
	int rinse_time_coefficient = 8;
	int rinse_water_coefficient = 8;
	int spin_time_coefficient = 8;

public:
	int getWashTimeCoefficient() const override {
		return wash_time_coefficient;
	}

	int getWashWaterCoefficient() const override {
		return wash_water_coefficient;
	}

	int getRinseTimeCoefficient() const override {
		return rinse_time_coefficient;
	}

	int getRinseWaterCoefficient() const override {
		return rinse_water_coefficient;
	}

	int getSpinTimeCoefficient() const override {
		return spin_time_coefficient;
	}

	void applyWash(int currentWeight) const override {}
	void applyRinse(int currentWeight) const override {}
	void applySpin(int currentWeight) const override {}
	int out = 8;
};

class CustomMode : public ModeStrategy {
private:
	int wash_time_coefficient = 9;
	int wash_water_coefficient = 9;
	int rinse_time_coefficient = 9;
	int rinse_water_coefficient = 9;
	int spin_time_coefficient = 9;

public:
	int getWashTimeCoefficient() const override {
		return wash_time_coefficient;
	}

	int getWashWaterCoefficient() const override {
		return wash_water_coefficient;
	}

	int getRinseTimeCoefficient() const override {
		return rinse_time_coefficient;
	}

	int getRinseWaterCoefficient() const override {
		return rinse_water_coefficient;
	}

	int getSpinTimeCoefficient() const override {
		return spin_time_coefficient;
	}

	void applyWash(int currentWeight) const override {}
	void applyRinse(int currentWeight) const override {}
	void applySpin(int currentWeight) const override {}
	int out = 9;
};

#endif // MODESTRATEGY_H