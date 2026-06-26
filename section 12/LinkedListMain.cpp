#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
    LinkedList myList;

    for (int i=0; i< 15; i++) {
        myList.add(i * 7);
    }

    myList.add(75,myList.size());

    myList.set(997, 3);

    myList.printList();

    cout << "Size: " << myList.size() << endl;

    int lastIndex = myList.size() - 1;
    int removed = myList.remove(lastIndex);
    cout << "Removed: " << removed << endl;

    myList.makeEmpty();
    myList.printList();
    cout << myList.size() << endl;

}