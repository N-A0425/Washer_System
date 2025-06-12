#ifndef MODESTRATEGY_H
#define MODESTRATEGY_H

#include <iostream>

class ModeStrategy {
public:
	virtual ~ModeStrategy() = default;
	virtual void execute() const = 0;
};

class StandardMode : public ModeStrategy {
public:
	void execute() const override {
		
	}
};

class FashionableClothMode : public ModeStrategy {
public:
	void execute() const override {

	}
};

class DelicateMode : public ModeStrategy {
public:
	void execute() const override {

	}
};

class DringInsideMode : public ModeStrategy {
public:
	void execute() const override {

	}
};

class QuickMode : public ModeStrategy {
public:
	void execute() const override {

	}
};

class EcoMode : public ModeStrategy {
public:
	void execute() const override {

	}
};

class RinseAndDeciccationMode : public ModeStrategy {
public:
	void execute() const override {

	}
};

#endif // MODESTRATEGY_H