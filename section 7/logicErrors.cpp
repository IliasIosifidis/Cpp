#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    try {
        nums.resize(nums.max_size() + 1);
    } catch (const length_error e) {
        cerr << e.what() << endl;
    }

    cout << "big big vector" << endl;
}
