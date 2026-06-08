#include <iostream>
#include "Drone.h"
#include "Drone.cpp"
using namespace std;

void printFleet(Drone **fleet, int size);

int main() {
    int droneCount;
    string model;
    double battery;
    auto droneFleet = new Drone *[droneCount];

    cout << "how many do you need to: ANNIHILATE THE ENEMY?" << endl;
    cin >> droneCount;

    for (int i = 0; i < droneCount; i++) {
        cout << "ANNIHILATOR no: " << (i + 1) << "'s name?" << endl;
        cin.get();
        getline(cin, model);

        battery = rand() % (100 + 1);
        droneFleet[i] = new Drone(model, battery);
    }

    printFleet(droneFleet, droneCount);

    for (int i = 0; i < droneCount; i++) {
        delete droneFleet[i];
    }

    droneFleet = nullptr;

}

void printFleet(Drone **fleet, int size) {
    for (int i = 0; i < size; i++) {
        cout << "DESTROYER no: " << i + 1
                << "name: " << fleet[i]->getModelName()
                << "| @" << fleet[i]->getBatteryLife() << endl;
    }
}
