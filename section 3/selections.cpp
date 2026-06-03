#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Velcame to ze bar somewhere in Russia" << endl;
    cout << "how old are you?" << endl;
    cin >> age;

    if (age >= 12) {
        cout << "Vodka" << endl;
    } else if (age >= 8) {
        cout << "i can only give beer" << endl;
    } else {
        cout << "would you like a coke? Not the ...cola one" << endl;
    }
}
