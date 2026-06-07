#include <iostream>
#include "AngryCatException.h"
using namespace std;

void feedKitty(int treats);

int main() {
    int treats;
    cout << "How many treats wuju give to the kitty?" << endl;
    cin >> treats;

    try {
        feedKitty(treats);
    } catch (const AngryCatException &cat) {
        cerr << cat.what() << endl;
    }
}

void feedKitty(int treats) {
    if (treats < 3) {
        throw AngryCatException();
    } else if (treats < 6) {
        throw AngryCatException("not mad just disappointed");
    } else {
        cout << "Kitty is happy with " << treats << " treats" << endl;
    }
}
