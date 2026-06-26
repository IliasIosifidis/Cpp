#ifndef UNTITLED_ARRAYSTACK_H
#define UNTITLED_ARRAYSTACK_H
#include "Stack.h"
#include <iostream>
using namespace std;

class ArrayStack: public Stack {
public:
    ArrayStack(int s = 16): MAX_SIZE(s) {
        top = -1;
        mArray = new int[MAX_SIZE];
    }
    void push(int newEntry) override {
        if (top < MAX_SIZE - 1) {
            top++;
            mArray[top] = newEntry;
        } else {
            cout << "Array is full" << endl;
        }
    };

    int pop() override {
        if (!isEmpty()) {
            return mArray[top--];
        } else {
            cout << "Array is empty" << endl;
            return 0;
        }
    };

    int peek() override {
        if (!isEmpty()) {
            return mArray[top];
        } else {
            cout << "The list is empty" << endl;
        }
        return 0;
    };

    bool isEmpty() override {
        return top == -1;
    };

    void makeEmpty() override {
        top = -1;
    };

private:
    int *mArray;
    const int MAX_SIZE;
    int top;
};

#endif //UNTITLED_ARRAYSTACK_H
