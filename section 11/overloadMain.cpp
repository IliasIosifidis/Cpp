#include <iostream>
#include "Rectangle.h"
#include "Rectangle.cpp"
using namespace std;

int main() {
    Rectangle rect1(10, 22);
    Rectangle rect2(50, 60);
    Rectangle rect3(10, 22);
    Rectangle resultRect;

    resultRect = rect1 + rect2;
    cout << boolalpha;
    cout << "rect1 == rect3 " << (rect1 == rect3) << endl;
    cout << "rect1 != rect2 " << (rect1 != rect2) << endl;
    cout << "resultRect: "
            << resultRect.getLength() << " * "
            << resultRect.getWidth() << " = "
            << resultRect.area() << endl;
}
