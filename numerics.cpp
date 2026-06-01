#include <iostream>

int main() {
    int myInt = 13;
    double myDouble = 3.41;

    int y(10);
    int z {22};

    std::cout << myInt << std::endl;
    std::cout << z << std::endl;
    std::cout << myDouble << std::endl;

    return 0;
}