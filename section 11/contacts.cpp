#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string,string> contacts;
    contacts["jow"] = "698741235";
    contacts["dow"] = "698523147";
    contacts["jay"] = "695874123";
    for (auto element: contacts) {
        cout << element.first << " = " << element.second << endl;
    }
}