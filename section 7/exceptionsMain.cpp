#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> names(5);
    names.at(0) = "zero";
    names.at(1) = "one";
    names.at(2) = "two";
    names.at(3) = "three";
    names.at(4) = "four";

    for (string name: names) {
        cout << name << endl;
    }

    try {
        names.at(5) = "six";
    } catch (const exception &ex) {
        cout << ex.what() << endl;
    }

    cout << names.at(3) << endl;
}