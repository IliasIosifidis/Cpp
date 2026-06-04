#include <iostream>
#include <array>
using namespace std;

int countEvens(int ar[], int size);

int main() {
    int myArray[10];

    for (int i = 0; i < 10; i++) {
        myArray[i] = i * 81;
    }

    for (int num: myArray) {
        cout << num << " ";
    }

    cout << endl;
    cout << countEvens(myArray, 10);
}

int countEvens(int ar[], int size) {
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (ar[i] % 2 == 0) {
            counter++;
        }
    }
    return counter;
}
