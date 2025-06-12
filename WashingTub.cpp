#include "WashingTub.h"

WashingTub::WashingTub() : currentWeight(0) {}

void WashingTub::setCurrentWeight(int weight) {
    currentWeight = weight;
}

int WashingTub::getCurrentWeight() const {
    return currentWeight;
}