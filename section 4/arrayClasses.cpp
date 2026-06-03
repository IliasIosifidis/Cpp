#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> myIntArray{};
    int arraySize = myIntArray.size();
    srand(time(nullptr));

    for (int i = 0; i < arraySize; i++) {
        myIntArray[i] = rand() % 20;
    }

    for (int num: myIntArray) {
        cout << num << endl;
    }
}
