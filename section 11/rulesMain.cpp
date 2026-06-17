#include <iostream>
#include "rulesChallenge.h"
using namespace std;

int main() {
    cout << "Creating buffer a..." << endl;
    Buffer a("Alpha");

    cout << "Copying a to b..." << endl;
    Buffer b = a;

    cout << "Moving a to c..." << endl;
    Buffer c = move(a);

    cout << "Assigning b to d..." << endl;
    Buffer d("temp");
    d = b;

    cout << "Moving c to e..." << endl;
    Buffer e("temp");
    e = move(c);

    b.print();
    d.print();
    e.print();
}