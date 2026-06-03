#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int input;

    while (count < 4) {
        cout << count << " is less than 10" << endl;
        count++;
    }

    do {
        cout << "print " << count << endl;
        count++;
    } while (count < 4);

    for (int i = 0; i < 4; i++) {
        cout << i << " is smaller than 10 " << endl;
    }

    cout << "Enter Input" << endl;
    cin >> input;

    while (input >= 0) {
        cout << "Enter negative to quit" << endl;
        cin >> input;
    }
    cout << "that was negative" << endl;
}
