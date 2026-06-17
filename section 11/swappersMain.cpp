#include <iostream>

#include "Swappers.h"
using namespace std;

int main() {
    Swapper<int> intSwapper(5, 10);
    Swapper<string> strSwapper("John", "Cenna");

    cout << "before: " << endl;
    cout << intSwapper.getFirst() << " - "<< intSwapper.getSecond() << endl;
    cout << strSwapper.getFirst() << " - "<< strSwapper.getSecond() << endl;
    cout << "\nafter: " << endl;
    intSwapper.swap();
    strSwapper.swap();
    cout << intSwapper.getFirst() << " - "<< intSwapper.getSecond() << endl;
    cout << strSwapper.getFirst() << " - "<< strSwapper.getSecond() << endl;
}