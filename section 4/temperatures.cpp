#include <array>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    const int NUM_DAY = 4;
    array<double, NUM_DAY> fahrTemps;
    double f;
    double c;

    cout << fixed << setprecision(2);

    for (int i = 0; i < 4; i++) {
        cout << "Give me Fahrenheit" << endl;
        cin >> fahrTemps[i];
    }

    cout << "Celsius convert" << endl;

    for (double temp : fahrTemps) {
        cout << ((temp - 32) * 5.0 / 9) << endl;
    }
}
