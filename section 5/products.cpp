#include <iostream>
#include <array>
using namespace std;

void productArray(array<int, 6> myArray, int& result);

int main() {
    int results = 1;
    array<int, 6> myArray {1,2,3,4,5,6};

    productArray(myArray, results);
    cout << results;
}

void productArray(array<int, 6> myArray, int &result) {
    for (int i : myArray) {
        result *= i;
    }
}
