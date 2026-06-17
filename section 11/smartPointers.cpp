#include <iostream>
#include <memory>
#include <utility>
using namespace std;

int main() {
    const int ARRAY_SIZE = 5;
    // unique_ptr<double> myDoublePtr(new double);
    unique_ptr<double> myDoublePtr = make_unique<double>();
    // unique_ptr<double> otherPtr = move(myDoublePtr);
    // cout << *otherPtr << endl;

    auto myArray = make_unique<int[]>(ARRAY_SIZE);

    *myDoublePtr = 2.24;
    cout << *myDoublePtr << endl;

    cout << "------------------" << endl;

    for (int i = 0; i<ARRAY_SIZE; i++) {
        myArray[i] = i * 17;
    }

    for (int i = 0; i<ARRAY_SIZE; i++) {
        cout << myArray[i] << ", ";
    }
}