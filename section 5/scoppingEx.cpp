#include <iostream>
using namespace std;

int counter = 0;

void modifyGlobal();

int main() {
    cout << "Before: " << counter << endl;
    for (int i = 0; i < 2; i++) {
        modifyGlobal();
    }
    cout << "After: " << counter << endl;
}

void modifyGlobal() {
    counter++;
    cout << counter << endl;
}
