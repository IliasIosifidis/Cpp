#include <iostream>
#include <stdexcept>
#include "FuelLevelException.h"
using namespace std;

void checkFuelLevel(int perc);

int main() {
    checkFuelLevel(9);
}

void checkFuelLevel(int perc) {
    if (perc > 10) {
        cout << "Looks good to me" << endl;
    } else {
        throw FuelLevelException();
    }
}
