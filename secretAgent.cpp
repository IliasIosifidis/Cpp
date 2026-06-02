#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string fullName;
    string secretAlias;
    int age;
    int agentLevel;
    string gadget;

    cout << "Name?" << endl;
    cin >> fullName;

    cout << "Alias?" << endl;
    cin >> secretAlias;

    cout << "Age?" << endl;
    cin >> age;

    cout << "Level? 1-10" << endl;
    cin >> agentLevel;

    cout << "Toy? " << endl;
    cin >> gadget;

    cout << "Name:   " << fullName << endl;
    cout << "Alias:  " << secretAlias << endl;
    cout << "Age:    " << age << endl;
    cout << "Level:  " << agentLevel << endl;
    cout << "Gadget: " << gadget;
}
