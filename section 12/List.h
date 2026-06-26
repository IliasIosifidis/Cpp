#ifndef UNTITLED_LIST_H
#define UNTITLED_LIST_H

class List {
public:
    virtual void add(int newEntity)= 0;
    virtual void add(int newEntity, int position) = 0;
    virtual void set(int newEntity, int position) = 0;

    virtual bool contains(int entry) const = 0;
    virtual int find(int entry) const =0;
    virtual int remove(int position) = 0;
    virtual void makeEmpty() = 0;

    virtual int size() const = 0;
    virtual bool isEmpty() = 0;
    virtual void printList() const = 0;
};

#endif //UNTITLED_LIST_H
