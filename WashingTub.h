#ifndef WASHINGTUB_H
#define WASHINGTUB_H

class WashingTub {
private:
    int currentWeight;

public:
    WashingTub();
    void setCurrentWeight(int weight);
    int getCurrentWeight() const;
};

#endif // WASHINGTUB_H