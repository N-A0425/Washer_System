#include "Spin.h"  
#include <iostream>  
#include <string>

using namespace std;

Spin::Spin() : currentWeight(0), Spin_time(0), spin_mode("ïWèÄ"), out(0) {}

void Spin::setCurrentWeight(int currentWeight) {
    this->currentWeight = currentWeight;
}

int Spin::getCurrentWeight() const {
    return currentWeight;
}

int Spin::spin_time_calc() {
    Spin_time = currentWeight * 1;
    cout << "[Spin] íEêÖéûä‘: " << Spin_time << " ï™" << endl;
    cout << "[Spin] íEêÖêÖó : 0 L" << endl; // íEêÖÇÕêÖó 0LÇ≈èoóÕ
    return Spin_time;
}

std::string Spin::spin_mode_calc() {
    if (currentWeight > 5) {
        spin_mode = "ã≠";
    } else {
        spin_mode = "ïWèÄ";
    }
    cout << "[Spin] íEêÖÉÇÅ[Éh: " << spin_mode << endl;
    return spin_mode;
}