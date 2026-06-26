#ifndef UNTITLED_NODE_H
#define UNTITLED_NODE_H

class Node {
public:
    Node(int data, Node *next) : data(data), next(next) {}

    void setData(int data) {
        this->data = data;
    }

    void setNext(Node *next) {
        this->next = next;
    }

    int getData() const {
        return data;
    }

    Node *getNext() {
        return next;
    }
private:
    int data;
    Node *next;
};

#endif //UNTITLED_NODE_H
