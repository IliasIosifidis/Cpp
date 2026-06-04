#include <iostream>
using namespace std;

void aFunction(int number);

double myGlobalParam = 42;

int main() {
    int localToMain = 20;

    cout << "The local to main variable is: " << localToMain << endl;
    cout << "The global double in main is: " << myGlobalParam << endl;

    aFunction(25);
    aFunction(28);
    aFunction(32);
}

void aFunction(int number) {
    int myLocal = 100;
    myLocal++;

    static int myStatic = 500;
    myStatic++;

    myGlobalParam++;

    cout << "\nlocal: " << myLocal << endl;
    cout << "the param is " << number << endl;
    cout << "Global Double " << myGlobalParam << endl;
    cout << "My static" << myStatic << endl;
}
