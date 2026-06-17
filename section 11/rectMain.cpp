#include <iostream>
#include "Rectangle.h"
#include "Rectangle.cpp"
#include "RectangleHelper.h"
using namespace std;


int main() {
    Rectangle r1(10,20);
    RectangleHelper helper;
    cout << "Area: " << r1.area() << endl;

    changeData(r1);
    cout << "Area: " << r1.area() << endl;

    helper.modifyRect(r1);
    cout << "Area after helper modifies: " << r1.area() << endl;
}