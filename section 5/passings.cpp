#include <iostream>
using namespace std;

void valueChanged1(int number1);

void valueChanged2(int &number1);

void tripleValue(int input, int &output);

int main() {
    int myNumber = 20;
    int inputNumber = 10;
    int outputNumber = 10;
    cout << "before change: " << myNumber << endl;
    valueChanged1(myNumber);
    cout << "after change is: " << myNumber << endl;
    cout << "----------------------------" << endl;
    cout << "after change is: " << myNumber << endl;
    valueChanged2(myNumber);
    cout << "after change is: " << myNumber << endl;
    cout << "----------------------------" << endl;
    cout << "og number: " << inputNumber << endl;
    tripleValue(inputNumber, outputNumber);
    cout << "changed value: " << outputNumber << endl;
}

void valueChanged1(int number1) {
    number1 = 100;
    cout << "Number now is: " << number1 << endl;
}

void valueChanged2(int &number1) {
    number1 = 100;
    cout << "Number2 now is: " << number1 << endl;
}

void tripleValue(int input, int &output) {
    output = input * 3;
}
