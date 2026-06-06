#include "IceCream.h"
#include <string>
using namespace std;

IceCream::IceCream(string flavor) {
    this->flavor = flavor;
}

void IceCream::addTopic(const string &topping) {
    toppings.push_back(topping);
}

string IceCream::getFavor() const {
    return flavor;
}

vector<string> IceCream::getTopics() const {
    return  toppings;
}

void IceCream::printRecipe() {
    cout << "flavors:" << endl;
    if (toppings.empty()) {
        cout << "None";
    }
    for (string top : toppings) {
        cout << "  " << top << endl;
    }
}
