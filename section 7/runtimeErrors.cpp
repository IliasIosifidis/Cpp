#include <iostream>
#include <stdexcept>
#include "Person.h"
#include "Person.cpp"
using namespace std;

int main() {
    try {
        Person maria("Maria");
        cout << "Her name is: " << maria.getName() << endl;

        Person tiffany("Tiffany");
        cout << "Her name is: " << tiffany.getName() << endl;
    } catch (const runtime_error re) {
        cerr << re.what() << endl;
    }
}
