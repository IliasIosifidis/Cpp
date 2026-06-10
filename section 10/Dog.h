#ifndef UNTITLED_DOG_H
#define UNTITLED_DOG_H
#include <string>

#include "Animal.h"
using namespace std;

class Dog :public Animal{
public:
    Dog(string name, double weight, string breed);
    string getBreed() const;
    void digHole() const;
    string makeNoice() const override;
    string eat() const override;
    void chaseCat();
private:
    string breed;
};


#endif //UNTITLED_DOG_H
