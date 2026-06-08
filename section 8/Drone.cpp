#include "Drone.h"
#include <iostream>
using namespace std;

Drone::Drone(string modelName, double batterLife) {
    this->modelName = modelName;
    this->batteryLife = batterLife;
}

string Drone::getModelName() const {
    return modelName;
}

double Drone::getBatteryLife() const {
    return batteryLife;
}
