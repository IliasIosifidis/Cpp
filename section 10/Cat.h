#ifndef UNTITLED_CAT_H
#define UNTITLED_CAT_H
#include "Animal.h"
using namespace std;

class Cat : public Animal{
public:
    Cat(string name, double weight);
    string makeNoice() const override;
    string eat() const override;
    void chaseMouse();
};


#endif //UNTITLED_CAT_H
