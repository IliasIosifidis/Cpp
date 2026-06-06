#ifndef UNTITLED_ICECREAM_H
#define UNTITLED_ICECREAM_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class IceCream {
public:
    IceCream(string flavor);

    void addTopic(const string &topping);

    string getFavor() const;
    vector<string> getTopics() const;
    void printRecipe();

private:
    string flavor;
    vector<string> toppings;
};

#endif //UNTITLED_ICECREAM_H
