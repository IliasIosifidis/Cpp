#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

void getMonth(int month);

int main() {
    int month;
    cout << "gimme month" << endl;
    cin >> month;
    getMonth(month);
}

void getMonth(int month) {
    switch (month) {
        case 1:
            cout << "Jan";
            break;
        case 2:
            cout << "Feb";
            break;
        case 3:
            cout << "Mar";
            break;
        case 4:
            cout << "Apr";
            break;
        default:
            throw out_of_range("Months go up to April");
    }
}
