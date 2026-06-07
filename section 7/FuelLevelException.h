#ifndef UNTITLED_FUELS_H
#define UNTITLED_FUELS_H
#include <stdexcept>
using namespace std;

class FuelLevelException : runtime_error {
public:
    FuelLevelException() : runtime_error("Fuel Level is low"){}
};


#endif //UNTITLED_FUELS_H
