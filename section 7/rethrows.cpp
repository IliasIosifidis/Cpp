#include <iostream>
#include <stdexcept>
using namespace std;

void processPositive(int num);

void doSomething(int num);

int main() {
    int input;

    try {
        doSomething(150);
    } catch (const invalid_argument &err) {
        cerr << err.what() << endl;
    } catch (const out_of_range &err) {
        cerr << err.what() << endl;
    }
}

void processPositive(int num) {
    // cout << "welcome to the positive integer processor" << endl;
    if (num > 100) {
        cout << "number is too big" << endl;
        throw out_of_range("number cant be above 100");
    } else if (num > 0) {
        cout << "positive number" << endl;
    } else {
        throw invalid_argument("Negative number");
    }
}

void doSomething(int num) {
    try {
        processPositive(num);
        cout << "Hey do something, process the num" << endl;
    } catch (const invalid_argument &err) {
        cout << "do something says there is a problem" << endl;
        throw;
    } catch (const out_of_range &err) {
        cout << "do something says there is a problem" << endl;
        throw;
    }
}
