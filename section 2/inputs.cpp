#include <iostream>
using namespace std;

int main() {
    string fullName;
    string location;
    int initialScore;

    cout << "full name?" << endl;
    getline(cin, fullName);

    cout << "location?" << endl;
    getline(cin, location);

    cout << "Initial Score?" << endl;
    cin >> initialScore;

    cout << "Hello, " << fullName << endl;
    cout << "You are from " << location << endl;
    cout << "Your original score is " << initialScore
         << ", but with five points added, your score is "
         << (initialScore + 5);

    return 0;
}