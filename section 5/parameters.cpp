#include <iostream>
using namespace std;

void printYellow();
void printNumber(int x);
int giveme5();
int addition(int x, int y);
int square(int x);

int main() {
    printYellow();
    printNumber(42);
    cout << giveme5() << endl;
    cout << addition(5, 10) << endl;
    printNumber(addition(10,10));
    cout << square(25) << endl;
}

void printYellow() {
    cout << "Blue" << endl;
}

void printNumber(int x) {
    cout << "the number is: " << x << endl;
}

int giveme5() {
    return 5;
}

int addition(int x, int y) {
    return x + y;
}

int square(int x) {
    return x * x;
}
