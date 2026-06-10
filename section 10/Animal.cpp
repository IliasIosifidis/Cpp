#include "Animal.h"

Animal::Animal(string name, double weight) {
    this->name = name;
    this->weight = weight;
}

string Animal::getName() const {
    return name;
}

double Animal::getWeight() const {
    return weight;
}

void Animal::setName() {
    this->name = name;
}

void Animal::setWeight() {
    this->weight = weight;
}