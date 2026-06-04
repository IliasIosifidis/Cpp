#include <iostream>
using namespace std;

void countDownFrom(int num);
int totalSum(int num);
int factorialNum(int num);

int main() {
    // countDownFrom(10);
    int totalSumOf = totalSum(10);
    int fact = factorialNum(8);
    cout << totalSumOf << endl;
    cout << fact << endl;
}

void countDownFrom(int num) {
    if (num >= 0) {
        cout << num << endl;
        countDownFrom((num - 1));
    }
}

int totalSum(int num) {
    if (num > 1) {
        return num + totalSum(num - 1);
    }
    return num;
}

int factorialNum(int num) {
    if (num > 1) {
        return num * factorialNum(num -1);
    } else {
        return 1;
    }
}
