#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "enter grade (a - c)" << endl;
    cin >> grade;

    switch (tolower(grade)) {
        case 'a':
            cout << "wow, A, impressive" << endl;
            break;
        case 'b':
            cout << "that's a b if i have seen one" << endl;
            break;
        case 'c':
            cout << "i can't C a thing" << endl;
            break;
        default:
            cout << "default" << endl;
    }
}
