#include "Cat.h"
#include <iostream>
#include <string>
using namespace std;

Cat::Cat(string name, string foundAt) {
    this->name = name;
    this->foundAt = foundAt;
}

string Cat::getName() const{
    return name;
}

string Cat::getFoundAt() const{
    return foundAt;
}
