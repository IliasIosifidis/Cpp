#include <iostream>
using namespace std;

int main() {
    srand(time(nullptr));
    int roll;

    for (int i = 0; i < 10; i++) {
        roll = rand() % 6 + 1;
        cout << roll << endl;
    }
}
