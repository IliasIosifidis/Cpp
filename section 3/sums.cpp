#include <iostream>
using namespace std;

int main() {
    int runningTotal = 0;
    int input;

    cout << "enter a number"<<endl;
    cin >> input;

    while (input >= 0) {
        runningTotal += input;
        cout << "another!"<< endl;
        cin >> input;
    }
    cout<< "total: "<< runningTotal<< endl;
}