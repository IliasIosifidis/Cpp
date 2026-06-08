#include <iostream>
#include "Cat.h"
#include "Cat.cpp"
using namespace std;

int main() {
    Cat *lunaPtr = new Cat("Luna", "skoupidia");
    Cat *gingerPtr = new Cat("ginger", "keramidia");

    cout << "Using arrow opp: " << endl;
    cout << lunaPtr->getName() << " - " << lunaPtr->getFoundAt() << endl;
    cout << (*lunaPtr).getName() << " - " << (*lunaPtr).getFoundAt() << endl;
    cout << gingerPtr->getName() << " - " << gingerPtr->getFoundAt() << endl;

    delete lunaPtr;
    delete gingerPtr;
}
