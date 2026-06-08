#ifndef UNTITLED_DRONE_H
#define UNTITLED_DRONE_H
#include <iostream>
using namespace std;

class Drone {
public:
    Drone(string modelName, double batterLife);
    string getModelName() const;
    double getBatteryLife() const;
private:
    string modelName;
    double batteryLife;
};


#endif //UNTITLED_DRONE_H
