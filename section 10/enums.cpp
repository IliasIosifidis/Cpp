#include <iostream>
using namespace std;

int main() {
    enum Direction { UP, DOWN, LEFT, RIGHT, STANDING};
    Direction myDir = UP;
    cout << myDir << endl;
    if (myDir == UP) {
        cout << "it's uP!" << endl;
    } else if (myDir == DOWN) {
        cout << "it's down" << endl;
    } else if (myDir == RIGHT) {
        cout << "it's right" << endl;
    } else if (myDir == LEFT) {
        cout << "it's left" << endl;
    } else {
        cout << "whatever" << endl;
    }
}
