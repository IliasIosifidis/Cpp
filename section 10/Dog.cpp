#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog(string name, double weight, string breed) : Animal(name, weight) {
    this->breed = breed;
}

string Dog::getBreed() const {
    return breed;
}

void Dog::digHole() const {
    cout << "I m a stupid dog i go brrrrr" << endl;
}

string Dog::makeNoice() const {
    return "bam bam";
}

void Dog::chaseCat() {
    cout << "Cats are better than dogs" << endl;
}

string Dog::eat() const {
    return "i eat therefore i exist";
}
