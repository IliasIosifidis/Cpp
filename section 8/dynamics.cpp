#include <iostream>
using namespace std;

int main() {
    int *myIntPtr = new int(123);

    cout << *myIntPtr << endl;
    delete myIntPtr;
    myIntPtr = nullptr;

    bool *myBull = new bool(true);
    cout << boolalpha;
    cout << *myBull << endl;
    delete myBull;
    myBull = nullptr;
}
