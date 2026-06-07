#include <iostream>
using namespace std;

int imBroken(int a, int b);

int main() {
    int a;
    a = imBroken(10,5);
    cout << a << endl;

    a = imBroken(10, 0);
    cout << a << endl;
}

int imBroken(int a, int b) {
    int result = 0;

    if (a != 0) {
        result = a / b;
    } else {
        throw invalid_argument("Cant divide by zero");
    }
    return result;
}
