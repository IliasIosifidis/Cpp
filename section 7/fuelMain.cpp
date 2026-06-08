#include <iostream>
#include <stdexcept>
#include "FuelLevelException.h"
using namespace std;

void checkFuelLevel(int perc);

int main() {
    try {
        checkFuelLevel(9);
    } catch (const runtime_error ex) {
        cout << ex.what() << endl;
    }
}

void checkFuelLevel(int perc) {
    if (perc > 10) {
        cout << "Looks good to me" << endl;
    } else {
        throw FuelLevelException();
    }
}
