#include <iostream>
#include "ArrayList.h"
using namespace std;

int main() {
    ArrayList myList;

    for (int i=0; i< 15; i++) {
        myList.add(i * 7);
    }

    myList.add(75,myList.size());

    myList.set(997, 3);

    myList.printList();

    cout << "Size: " << myList.size() << endl;
}