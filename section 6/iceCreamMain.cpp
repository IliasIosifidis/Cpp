#include <iostream>
#include "IceCream.h"
#include "IceCream.cpp"

int main() {
    IceCream patata("patata");
    patata.addTopic("kourabies");
    patata.addTopic("skata");
    patata.addTopic("fraoules");

    patata.printRecipe();
}
