#include "Car.h"
#include "Car.cpp"
#include <iostream>
#include <memory>
#include <utility>
using namespace std;

int main() {
    auto myCarPtr = make_unique<Car>("pink", 1);
    cout<< "Color: " << myCarPtr->getColor() << endl;
    cout<< "Number of doors: " << myCarPtr->getNumDoors() << endl;
}
