#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double bill;
    double tipPerc;

    cout << fixed << setprecision(2);

    cout << "How much did you pay?" << endl;
    cin >> bill;
    cout << "Tip? " << endl;
    cin >> tipPerc;
    cout << "Total amount: " << (bill + ((bill * tipPerc) / 100));

    return 0;
}
