#include <iostream>
#include "Book.h"
#include "Book.cpp"
using namespace std;

int main() {
    Book bookOne("someOne", "one", "Onesies", 111);
    Book bookTwo("SomeTwo", "two", "Twoz", 222);
    bookOne.printDetails();
    bookTwo.printDetails();
}