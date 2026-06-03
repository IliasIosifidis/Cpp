#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> shopping;
    string item;

    while (true) {
        cout << "Add item or say done" << endl;
        getline(cin, item);
        
        if (item == "done") {
            break;
        }
        shopping.push_back(item);
    }

    for (string itm : shopping) {
        cout<< itm << endl;
    }

}