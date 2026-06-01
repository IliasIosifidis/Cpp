#include <iostream>
using namespace std;

int main() {
    bool isRaining = true;
    bool isWarm = false;

    cout << boolalpha;
    cout << "is raining AND is warm? " << (isRaining && isWarm) << endl;
    cout << "is raining OR is warm? " << (isRaining || isWarm) << endl;

    return 0;
}