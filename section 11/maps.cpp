#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
    cout << "std:map" << endl;

    map<string, int> orderedMap;
    orderedMap["one"] = 1;
    orderedMap["two"] = 2;
    orderedMap["three"] = 3;
    for (const auto &pair: orderedMap) {
        cout << pair.first << " = " << pair.second << endl;
    }

    cout << "\nstd:unorderedMap" << endl;
    unordered_map<string, int> unorderedMap;
    unorderedMap["one"] = 1;
    unorderedMap["two"] = 2;
    unorderedMap["three"] = 3;
    for (const auto &pair: unorderedMap) {
        cout << pair.first << " = " << pair.second << endl;
    }
}
