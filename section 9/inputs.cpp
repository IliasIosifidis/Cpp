#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    int inputNum;
    int sum = 0;
    vector<int> nums;

    ifstream infile("inputfile.txt");

    if (!infile) {
        cerr << "There is no file to open"<< endl;
        return 1;
    }

    while (infile >> inputNum) {
        nums.push_back(inputNum);
        sum += inputNum;
    }

    for (int num : nums) {
        cout << num << endl;
    }

    cout << sum;

    infile.close();
}