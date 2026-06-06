#include "House.h"
#include <iostream>
using namespace std;

House::House() {
    this->stories = 1;
    this->windows = 1;
    this->color = "white";
}

House::House(int stories, int windows, string color) {
    this->stories = stories;
    this->windows = windows;
    this->color = color;
}

House::~House() {
    cout << "a house is on fire" << endl;
}

void House::toString(House house) {
    cout << "Color: " << this->getColor() << endl
            << "Windows: " << this->getWindows() << endl
            << "Stories: " << this->getStories() << endl;
}

void House::setStories(int stories) {
    this->stories = stories;
}

void House::setWindows(int windows) {
    this->windows = windows;
}

void House::setColor(string color) {
    this->color = color;
}

int House::getStories() const {
    return stories;
}

int House::getWindows() const {
    return windows;
}

string House::getColor() const {
    return color;
}
