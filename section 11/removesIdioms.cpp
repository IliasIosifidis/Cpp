#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(const vector<int> &vec);

int main() {
    vector<int> integers = {1,2,3,5,1,5,1,3,5};
    cout << "Original vector: ";
    printVector(integers);
    auto newEnd = remove(integers.begin(), integers.end(), 5);
    integers.erase(newEnd, integers.end());

    cout << "Erased 5 vector: ";
    printVector(integers);
}

void printVector(const vector<int> &vec) {
    for (int value: vec) {
        cout << value << " ";
    }
    cout << endl;
}
