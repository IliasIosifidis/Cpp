#include <iostream>
using namespace std;

double averageOfThree(double a, double b, double c);

int main(int argc, char *argv[]) {
    cout << averageOfThree(10.5, 20.6, 34.75);
}

double averageOfThree(double a, double b, double c) {
    return (a + b + c)/ 3;
}
