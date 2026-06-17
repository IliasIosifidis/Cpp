#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums{1,2,3,4,5,6};

    cout << "og vector: " << endl;
    for (int num : nums) {
        cout << num << ", ";
    }
    cout << endl;

    for (auto it = nums.begin(); it != nums.end();) {
        if (*it % 2 == 0) {
            it = nums.erase((it));
        } else {
            ++it;
        }
    }

    // DANGEROUS they say
    // for (int n : nums) {
    //     if (n % 2 == 0) {
    //         nums.erase(remove(nums.begin(), nums.end(), n), nums.end());
    //     }
    // }
    cout << "removing even numbers:" << endl;
    for (int num : nums) {
        cout << num << ", ";
    }
    cout << endl;
}