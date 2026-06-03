#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<int> ints;
    vector<string> strings;

    ints.push_back(1);
    ints.push_back(2);
    ints.push_back(4);
    for (int integer : ints) {
        cout << integer << endl;
    }

    strings.push_back("ena");
    strings.push_back("dyo");
    strings.push_back("tria");
    for (string str : strings) {
        cout << str << endl;
    }
}