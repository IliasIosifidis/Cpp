#include <iostream>
#include "Rect.h"
#include "Rect.cpp"
using namespace std;

int main() {
    Rect r1(3.4,10.22);

    cout << "R1 area: " << r1.area() << endl;
    cout << "R2 perimeter: " << r1.perim() << endl;

    r1.setLength(2.2);
    r1.setWidth(4.4);
    cout << "R1 area: " << r1.area() << endl;
    cout << "R2 perimeter: " << r1.perim() << endl;
}
