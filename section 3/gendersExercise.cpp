#include <iostream>
using namespace std;

int main() {
    int age;
    char gender;

    cout << "age?" << endl;
    cin >> age;

    cout << "gender" << endl;
    cin >> gender;

    if (tolower(gender) == 'f' && age >= 60) {
        cout << "eligible" << endl;
    } else {
        cout << "not eligible" << endl;
    }
}
