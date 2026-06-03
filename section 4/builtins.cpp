#include <iostream>
#include <string>
using namespace std;

int main() {
    const int ARRAY_SIZE = 5;
    int myArray[ARRAY_SIZE];
    string myNamesArray[ARRAY_SIZE];

    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;
    myArray[3] = 40;
    myArray[4] = 50;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << myArray[i] << endl;
    }

    myNamesArray[0] = "one";
    myNamesArray[1] = "two";
    myNamesArray[2] = "three";
    myNamesArray[3] = "four";
    myNamesArray[4] = "five";
    for (string name : myNamesArray) {
        cout << name << endl;
    }

}
