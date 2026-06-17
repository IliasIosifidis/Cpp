#include <iostream>
#include <deque>
using namespace std;

void printDeque(const deque<int> &deck);

int main() {
    deque<int> intDeque;
    intDeque.push_back(1);
    intDeque.push_back(3);
    intDeque.push_back(4);

    cout << "Initial print: " << endl;
    printDeque(intDeque);

    intDeque.push_front(12);
    intDeque.push_front(24);
    intDeque.push_front(54);


    cout << "\nSecond print: " << endl;
    printDeque(intDeque);

}

void printDeque(const deque<int> &deck) {
    for (int num: deck) {
        cout << num << endl;
    }
}

