#include <iostream>
using namespace std;

int main() {
    int age;
    age = 12;
    cout << "Your age is " << age << endl;

    if (age >= 16) {
        cout << "go drive" << endl;
    } else {
        cout << "you can't drive " << endl;
    }

    for (int i = 1; i <= age; i++) {
        cout << "Happy " << i << endl;
    }
}
