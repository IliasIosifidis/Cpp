#include "Cat.h"
#include "Animal.h"
#include <iostream>

Cat::Cat(string name, double weight) :Animal(name, weight) {
}

string Cat::makeNoice() const {
    return "maw";
}

string Cat::eat() const {
    return "i m a cat i eat things, and this is alright";
}

void Cat::chaseMouse() {
    cout << "i find mice, i chase em, and that's alright" << endl;;
}
