#include <iostream>
using namespace std;

int main() {
    string package;
    int devices;
    int charge;

    cout << "Package?" << endl;
    cin >> package;

    cout << "Devices?" << endl;
    cin >> devices;

    if (package == "basic") {
        if (devices <= 1) {
            charge = 9;
        } else {
            charge = 9 + ((devices - 1) * 6);
        }
    } else if (package == "standard") {
        if (devices <= 3) {
            charge = 14;
        } else {
            charge = 14 + ((devices - 3) * 4);
        }
    } else {
        if (devices <= 5) {
            charge = 20;
        } else {
            charge = 20 + ((devices - 5) * 2);
        }
    }

    cout << "You pay " << charge << endl;
}
