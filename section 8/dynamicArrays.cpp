#include <iostream>
#include <string>
using namespace std;

int main() {
    int userSize;
    cout << "what's your ...size?" << endl;
    cin >> userSize;

    int *myArray = new int[userSize];

    for (int i = 0; i < userSize; i++) {
        myArray[i] = i * 2;
    }

    for (int i = 0; i < userSize; i++) {
        cout << myArray[i] << endl;
    }

    delete[] myArray;
    myArray = nullptr;
}
