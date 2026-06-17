#include <iostream>
#include <string>
using namespace std;

// double getBigger(double a,double b);
// int getBigger(int a, int b);
// string getBigger(string a, string b);
template <class T>
T getBigger(T a, T b);


int main() {
    double biggerDub = getBigger(2.34, 25.43);
    int biggerInt = getBigger(2,5);
    string biggerStr = getBigger("John", "Yannis");

    cout << biggerDub << "\n" << biggerInt << "\n" << biggerStr;
}

template<class T>
T getBigger(T a, T b) {
    return (a > b) ? a : b;
}

// double getBigger(double a, double b) {
//     return (a > b) ? a : b;
// }
//
// int getBigger(int a, int b) {
//     return (a > b) ? a : b;
// }
//
// string getBigger(string a, string b) {
//     return (a > b) ? a : b;
// }
