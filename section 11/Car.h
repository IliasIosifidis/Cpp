#ifndef UNTITLED_CAR_H
#define UNTITLED_CAR_H
#include <iostream>
using namespace std;


class Car {
public:
    Car(string color, int numDoors);
    string getColor() const ;
    int getNumDoors() const;
private:
    string color;
    int numDoors;
};


#endif //UNTITLED_CAR_H
