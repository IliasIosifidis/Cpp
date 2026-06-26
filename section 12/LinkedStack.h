#ifndef UNTITLED_LINKEDSTACK_H
#define UNTITLED_LINKEDSTACK_H
#include <iostream>
#include <iterator>
#include "Stack.h"

using namespace std;

class Node {
public:
    Node(int data, Node *next) : data(data), next(next){}

    int getData() const {
        return data;
    }
    int setData(int data) {
        this->data = data;
    }
    Node getNext() const {
        return next;
    }
    void setNext(Node *next) {
        this->next = next;
    }
private:
    int data;
    Node *next;
};

class LinkedStack: public Stack {
public:
    LinkedStack() :top(nullptr){}

    virtual ~LinkedStack() {
        makeEmpty();
    }

    void push(int newEntry) override {
        Node *newNode = new Node(newEntry, top);
        top = newNode;
    }

    int pop() override {
        if (isEmpty()) {
            cout << "Stack is empty"<< endl;
            return 0;
        }
        Node *temp = top;
        int data = temp->getData();
        top = top->getNext();
        delete temp;
        temp = nullptr;
        return data;
    };

    int peek() override {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return top->getData();
    };

    bool isEmpty() override {
        return top == nullptr;
    };

    void makeEmpty() override {
        while (top !=nullptr) {
            Node *temp = top;
            top = top->getNext();
            delete temp;
        }
    };

private:
    Node *top;
};

#endif //UNTITLED_LINKEDSTACK_H
