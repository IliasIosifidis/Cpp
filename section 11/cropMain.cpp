#include <iostream>
#include "Crop.h"
#include "Crop.cpp"
#include <memory>
#include <vector>
using namespace std;

void printCrop(const Crop &crop);

int main() {
    vector<unique_ptr<Crop>> crops;

    crops.push_back(make_unique<Crop>(30,40,20));
    crops.push_back(make_unique<Crop>(22,44,21));
    crops.push_back(make_unique<Crop>(12,49,12));

    Crop hybrid = *crops[0] + *crops[1];

    cout << "Crop 1: " << endl;
    printCrop(*crops[0]);

    cout << "Crop 2: " << endl;
    printCrop(*crops[1]);

    cout << "Hybrid: " << endl;
    printCrop(hybrid);

    cout << boolalpha;
    cout << "Hybrid == Crop 3? " << (hybrid == *crops[2]);
    cout << "Hybrid > Crop 3? " << (hybrid > *crops[2]);
}

void printCrop(const Crop &crop) {
    cout << " Height: " << crop.getHeight()
            << " Yield: " << crop.getYield()
            << " Resist: " << crop.getDroughtResistance()
            << " Score: " << crop.getScore() << endl;
}
