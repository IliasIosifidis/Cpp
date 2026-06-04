#include <iostream>
using namespace std;

int adding(int num1, int num2);
int adding(int num1, int num2, int num3);
string adding(string str1, string str2);

int main() {
    cout << adding(1, 2) << endl;;
    cout << adding(1, 2, 3) << endl;;
    cout << adding("maria", "eleni");
}

int adding(int num1, int num2) {
    return num1 + num2;
}

int adding(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

string adding(string str1, string str2) {
    return str1 + " " + str2;
}
