#include <iostream>
#include "ArrayStack.h"
using namespace std;

int main() {
    ArrayStack stack;

    for (int i = 0; i < 16; i++) {
        stack.push(i * 7);
    }

    while (!stack.isEmpty()) {
        cout << stack.pop() << endl;
    }
}