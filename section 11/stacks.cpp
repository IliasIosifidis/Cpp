#include <iostream>
#include <stack>
using namespace std;

void storeReverse(const string &ogString, stack<char> &reverseStack);

bool isPalindrome(const string &ogString);

void printResult(const string ogString);

int main() {
    string strArray[5]= {"racecar","bob","civic", "nancy","marianna"};
    for (const string &str: strArray) {
        printResult(str);
        cout << endl;
    }
}

void storeReverse(const string &ogString, stack<char> &reverseStack) {
    for (char c: ogString) {
        reverseStack.push(c);
    }
}

bool isPalindrome(const string &ogString) {
    stack<char> reverseStack;
    for (char c: ogString)
        reverseStack.push(c);
    for (char c: ogString) {
        if (reverseStack.top() != c)
            return false;
        reverseStack.pop();
    }
    return true;
}

void printResult(const string ogString) {
    cout << ogString << endl;
    cout << boolalpha << isPalindrome(ogString) << endl;
}
