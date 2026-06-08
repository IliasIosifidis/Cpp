#include <iostream>
using namespace std;

void noConst();

void cp2ncd();

void ncp2cd();

void cp2cd();

void noChange(const double *const someValue);

int main() {

    double *aDuble = new double(2.17);

    noConst();
    cout << endl;

    cp2ncd();
    cout << endl;

    ncp2cd();
    cout << endl;

    cp2cd();
    cout << endl;

    noChange(aDuble);
}

// 1. no const pointer, no const data
void noConst() {
    cout << "In no const " << endl;
    int *intPtr = new int(50);
    cout << "\toriginal value: " << *intPtr << endl;

    *intPtr = 100;
    cout << "\tchanged data: " << *intPtr << endl;

    delete intPtr;

    intPtr = new int(125);
    cout << "\tnew int entirely: " << *intPtr << endl;

    delete intPtr;
}

// 2. const pointer, no const data
void cp2ncd() {
    cout << "In cp2ncd" << endl;
    int *const intPtr = new int(100);

    cout << "\toriginal value: " << *intPtr << endl;
    *intPtr = 250;
    cout << "\tmodified value: " << *intPtr << endl;

    // Can't do    intPtr = new int(222);
    delete intPtr;
}

// 3. no const pointer, const data
void ncp2cd() {
    cout << "in ncp2cd" << endl;
    const int *intPtr = new int(500);

    cout << "\toriginal value: " << *intPtr << endl;
    // Can't do     *intPtr = 600;
    delete intPtr;

    intPtr = new int(1000);
    cout << "\tnew value: " << *intPtr << endl;

    delete intPtr;
}

// 4. const pointer, const data
void cp2cd() {
    cout << "in cp2cd" << endl;
    const int *intPtr = new int(5000);
    cout << "\toriginal value: " << *intPtr << endl;
    // Can't do     *intPtr = 6000;
    // Can't do     intPtr = new int(6000);
    delete intPtr;
}

void noChange(const double *const someValue) {
    cout << *someValue << endl;
}
