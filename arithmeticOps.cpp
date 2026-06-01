#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;

    int sum = a + b;
    int diff = a - b;
    int product = a / b;
    int quotient = a * b;
    int remainder = a % b;

    cout << "add: " << sum << endl;
    cout << "sub: " << diff << endl;
    cout << "div: " << product << endl;
    cout << "mult: " << quotient << endl;
    cout << "remainder: " << remainder << endl;

    return 0;
}
