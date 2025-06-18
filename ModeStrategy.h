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

	virtual double getWashTimeCoefficient() const = 0;
	virtual double getWashWaterCoefficient() const = 0;
	virtual double getRinseTimeCoefficient() const = 0;
	virtual double getRinseWaterCoefficient() const = 0;
	virtual double getSpinTimeCoefficient() const = 0;
	virtual int getRinseCount() const = 0;

	virtual void applyWash(int currentWeight) const = 0;
	virtual void applyRinse(int currentWeight) const = 0;
	virtual void applySpin(int currentWeight) const = 0;
};

class StandardMode : public ModeStrategy {
private:
	double wash_time_coefficient = 1;
	double wash_water_coefficient = 1;
	double rinse_time_coefficient = 1;
	double rinse_water_coefficient = 1;
	double spin_time_coefficient = 1;
	int rinse_count = 2;

public:
	double getWashTimeCoefficient() const override {
		return wash_time_coefficient;
	}

	double getWashWaterCoefficient() const override {
		return wash_water_coefficient;
	}

	double getRinseTimeCoefficient() const override {
		return rinse_time_coefficient;
	}

	double getRinseWaterCoefficient() const override {
		return rinse_water_coefficient;
	}

	double getSpinTimeCoefficient() const override {
		return spin_time_coefficient;
	}

	int getRinseCount() const override {
		return rinse_count;
	}

	void applyWash(int currentWeight) const override {}
	void applyRinse(int currentWeight) const override {}
	void applySpin(int currentWeight) const override {}
	int out = 1;
};

class FashionableClothMode : public ModeStrategy {
private:
	double wash_time_coefficient = 1.2;
	double wash_water_coefficient = 1.2;
	double rinse_time_coefficient = 1;
	double rinse_water_coefficient = 1;
	double spin_time_coefficient = 1;
	int rinse_count = 1;

public:
	double getWashTimeCoefficient() const override {
		return wash_time_coefficient;
	}

	double getWashWaterCoefficient() const override {
		return wash_water_coefficient;
	}

	double getRinseTimeCoefficient() const override {
		return rinse_time_coefficient;
	}

	double getRinseWaterCoefficient() const override {
		return rinse_water_coefficient;
	}

	double getSpinTimeCoefficient() const override {
		return spin_time_coefficient;
	}

	int getRinseCount() const override {
		return rinse_count;
	}

	void applyWash(int currentWeight) const override {}
	void applyRinse(int currentWeight) const override {}
	void applySpin(int currentWeight) const override {}
	int out = 2;
};

class DelicateMode : public ModeStrategy {
private:
	double wash_time_coefficient = 1.2;
	double wash_water_coefficient = 1.2;
	double rinse_time_coefficient = 1.2;
	double rinse_water_coefficient = 1.2;
	double spin_time_coefficient = 1;
	int rinse_count = 1;

public:
	double getWashTimeCoefficient() const override {
		return wash_time_coefficient;
	}

	double getWashWaterCoefficient() const override {
		return wash_water_coefficient;
	}

	double getRinseTimeCoefficient() const override {
		return rinse_time_coefficient;
	}

	double getRinseWaterCoefficient() const override {
		return rinse_water_coefficient;
	}

	double getSpinTimeCoefficient() const override {
		return spin_time_coefficient;
	}

	int getRinseCount() const override {
		return rinse_count;
	}

	void applyWash(int currentWeight) const override {}
	void applyRinse(int currentWeight) const override {}
	void applySpin(int currentWeight) const override {}
	int out = 3;
};

class RoomDryingMode : public ModeStrategy {
private:
	double wash_time_coefficient = 1;
	double wash_water_coefficient = 1;
	double rinse_time_coefficient = 1;
	double rinse_water_coefficient = 1;
	double spin_time_coefficient = 1;
	int rinse_count = 2;

public:
	double getWashTimeCoefficient() const override {
		return wash_time_coefficient;
	}

	double getWashWaterCoefficient() const override {
		return wash_water_coefficient;
	}

	double getRinseTimeCoefficient() const override {
		return rinse_time_coefficient;
	}

	double getRinseWaterCoefficient() const override {
		return rinse_water_coefficient;
	}

	double getSpinTimeCoefficient() const override {
		return spin_time_coefficient;
	}

	int getRinseCount() const override {
		return rinse_count;
	}

	void applyWash(int currentWeight) const override {}
	void applyRinse(int currentWeight) const override {}
	void applySpin(int currentWeight) const override {}
	int out = 4;
};

class QuickMode : public ModeStrategy {
private:
	double wash_time_coefficient = 0.8;
	double wash_water_coefficient = 1;
	double rinse_time_coefficient = 0.8;
	double rinse_water_coefficient = 1;
	double spin_time_coefficient = 0.8;
	int rinse_count = 1;

public:
	double getWashTimeCoefficient() const override {
		return wash_time_coefficient;
	}

	double getWashWaterCoefficient() const override {
		return wash_water_coefficient;
	}

	double getRinseTimeCoefficient() const override {
		return rinse_time_coefficient;
	}

	double getRinseWaterCoefficient() const override {
		return rinse_water_coefficient;
	}

	double getSpinTimeCoefficient() const override {
		return spin_time_coefficient;
	}

	int getRinseCount() const override {
		return rinse_count;
	}

	void applyWash(int currentWeight) const override {}
	void applyRinse(int currentWeight) const override {}
	void applySpin(int currentWeight) const override {}
	int out = 6;
};

class EcoMode : public ModeStrategy {
private:
	double wash_time_coefficient = 0.9;
	double wash_water_coefficient = 0.9;
	double rinse_time_coefficient = 0.9;
	double rinse_water_coefficient = 0.9;
	double spin_time_coefficient = 0.9;
	int rinse_count = 1;

public:
	double getWashTimeCoefficient() const override {
		return wash_time_coefficient;
	}

	double getWashWaterCoefficient() const override {
		return wash_water_coefficient;
	}

	double getRinseTimeCoefficient() const override {
		return rinse_time_coefficient;
	}

	double getRinseWaterCoefficient() const override {
		return rinse_water_coefficient;
	}

	double getSpinTimeCoefficient() const override {
		return spin_time_coefficient;
	}

	int getRinseCount() const override {
		return rinse_count;
	}

	void applyWash(int currentWeight) const override {}
	void applyRinse(int currentWeight) const override {}
	void applySpin(int currentWeight) const override {}
	int out = 7;
};

class RinseAndDeciccationMode : public ModeStrategy {
private:
	double wash_time_coefficient = 0;
	double wash_water_coefficient = 0;
	double rinse_time_coefficient = 1;
	double rinse_water_coefficient = 1;
	double spin_time_coefficient = 1;
	int rinse_count = 2;

public:
	double getWashTimeCoefficient() const override {
		return wash_time_coefficient;
	}

	double getWashWaterCoefficient() const override {
		return wash_water_coefficient;
	}

	double getRinseTimeCoefficient() const override {
		return rinse_time_coefficient;
	}

	double getRinseWaterCoefficient() const override {
		return rinse_water_coefficient;
	}

	double getSpinTimeCoefficient() const override {
		return spin_time_coefficient;
	}

	int getRinseCount() const override {
		return rinse_count;
	}

	void applyWash(int currentWeight) const override {}
	void applyRinse(int currentWeight) const override {}
	void applySpin(int currentWeight) const override {}
	int out = 8;
};

class CustomMode : public ModeStrategy {
private:
	double wash_time_coefficient;
	double wash_water_coefficient;
	double rinse_time_coefficient;
	double rinse_water_coefficient;
	double spin_time_coefficient;
	int rinse_count;

public:
	double getWashTimeCoefficient() const override {
		return wash_time_coefficient;
	}

	double getWashWaterCoefficient() const override {
		return wash_water_coefficient;
	}

	double getRinseTimeCoefficient() const override {
		return rinse_time_coefficient;
	}

	double getRinseWaterCoefficient() const override {
		return rinse_water_coefficient;
	}

	double getSpinTimeCoefficient() const override {
		return spin_time_coefficient;
	}

	int getRinseCount() const override {
		return rinse_count;
	}

	void applyWash(int currentWeight) const override {}
	void applyRinse(int currentWeight) const override {}
	void applySpin(int currentWeight) const override {}
	int out = 9;
};

#endif // MODESTRATEGY_H