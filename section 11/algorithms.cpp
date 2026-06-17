#include <iostream>
#include <map>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

void fillVec(vector<int> &myVec);
void printVec(const vector<int> &myVec);
void countFives(const vector<int> &myVec);

int main() {
    vector<int> myVector;
    fillVec(myVector);
    printVec(myVector);
    countFives(myVector);
    cout << "replace 5s with 77s:\n";
    replace(myVector.begin(), myVector.end(), 5, 77);
    printVec(myVector);
    sort(myVector.begin(),myVector.end());
    printVec(myVector);
}

void fillVec(vector<int> &myVec) {
    srand(time((nullptr)));
    for (int i=0; i < 20; i++) {
        myVec.push_back(rand() % 5 +1);
    }
}

void printVec(const vector<int> &myVec) {
    for (int val: myVec) {
        cout << val << " ";
    }
    cout << endl;
}

void countFives(const vector<int> &myVec) {
    int countOfFives = count(myVec.begin(), myVec.end(),5);
    cout << "No of 5: " << countOfFives << endl;
}
