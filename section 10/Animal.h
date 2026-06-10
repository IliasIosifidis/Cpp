#ifndef UNTITLED_ANIMAL_H
#define UNTITLED_ANIMAL_H
#include <iostream>
using namespace std;

class Animal {
public:
    Animal(string name, double weight);
    string getName() const;
    double getWeight() const;
    void setName();
    void setWeight();
    virtual string makeNoice() const = 0;
    virtual string eat() const = 0;
private:
    string name;
    double weight;
};


#endif //UNTITLED_ANIMAL_H
