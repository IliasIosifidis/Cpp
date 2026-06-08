#include <iostream>
using namespace std;

int main() {
    int myInt = 150;
    int *intPtr = &myInt;

    double myDouble = 42.15;
    double *doublePtr = &myDouble;

    cout << "myInt OG: " << myInt << endl;
    cout << "pointer holds value: " << intPtr << endl;
    cout << "pointer deref: " << *intPtr << endl;
    // *intPtr = 200;
    // cout << "my int is now: " << myInt << endl;

    cout << "my double: " << myDouble << endl;
    cout << "pointer's memory address: " << doublePtr << endl;
    cout << "pointer deref: " << *doublePtr << endl;
}
