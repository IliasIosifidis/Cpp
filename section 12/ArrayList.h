#ifndef UNTITLED_ARRAYLIST_H
#define UNTITLED_ARRAYLIST_H
#include <iostream>
#include "List.h"
using namespace std;

class ArrayList : public List {
public:
    ArrayList(int s = 16) : MAX_SIZE(s) {
        mArray = new int[MAX_SIZE];
        mNumElements = 0;
    }

    void add(int newEntry) override {
        if (mNumElements >= MAX_SIZE) {
            cout << "The array is full" << endl;
            return;
        }
        mArray[mNumElements++] = newEntry;
    }

    void add(int newEntity, int position) override {
        if (mNumElements >= MAX_SIZE) {
            cout << "the array is full" << endl;
            return;
        }
        if (position < 0 || position > mNumElements) {
            cout << "out of bounds exception" << endl;
            return;
        }
        for (int i = mNumElements; i > position; i--) {
            mArray[i] = mArray[i - 1];
        }
        mArray[position] = newEntity;
        mNumElements++;
    };

    void set(int newEntity, int position) override {
        if (position < 0 || position >= mNumElements) {
            cout << "out of bounds exception" << endl;
            return;
        }
        mArray[position] = newEntity;
    };
    bool contains(int entry) const override {
        for (int i = 0; i < mNumElements; i++) {
            if (mArray[i] == entry) {
                return true;
            } else {
                return false;
            }
        }
    };

    int find(int entry) const override {
        for (int i = 0; i < mNumElements; i++) {
            if (mArray[i] == entry) {
                return i;
            } else {
                return -1;
            }
        }
    };

    int remove(int position) override {
        if (position < 0 || position > mNumElements) {
            cout << "out of bounds exception";
            return -1;
        }
        int value = mArray[position];
        for (int i = position; i < mNumElements-1; i++) {
            mArray[i] = mArray[i + 1];
        }
        mNumElements--;
        return value;
    };

    void makeEmpty() override {
        mNumElements = 0;
    };

    int size() const override {
        return mNumElements;
    };

    bool isEmpty() override {
        return mNumElements == 0;

    };

    void printList() const override {
        for (int i = 0; i < mNumElements; i++) {
            cout << mArray[i] << endl;
        }
    };

private:
    int *mArray;
    const int MAX_SIZE;
    int mNumElements;
};

#endif //UNTITLED_LIST_H
