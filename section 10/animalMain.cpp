#include <iostream>
#include "Animal.h"
#include "Animal.cpp"
#include "Dog.h"
#include "Dog.cpp"
#include "Cat.h"
#include "Cat.cpp"
using namespace std;

int main() {
    Dog dog("Dog", 7.3, "haski");

    Animal *dogPtr = new Dog("stupid animal", 2.9, "brown dog");
    Animal *catPtr = new Cat("gata", 2.3);

    cout << "make noice " << dogPtr->makeNoice() << endl;
    cout << "eat: " << dogPtr->eat() << endl;
    cout << "eat: " << dog.eat() << endl;

    cout << "make noice: " << catPtr->makeNoice() << endl;
    cout << "eat: " << catPtr->eat() << endl;
    Cat *actualCat = dynamic_cast<Cat*>(catPtr);
    if (actualCat) {
        actualCat->chaseMouse();
    }

    delete dogPtr;
    dogPtr = nullptr;
    delete catPtr;
    catPtr = nullptr;
    dog.digHole();
    dog.chaseCat();
}
