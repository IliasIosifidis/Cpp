#ifndef UNTITLED_RULESCHALLENGE_H
#define UNTITLED_RULESCHALLENGE_H
#include <iostream>
#include <cstring>
using namespace std;

class Buffer {
public:
    Buffer(const char* input) {
        cout << "Constructor called " << endl;
        length = strlen(input);
        data = new char[length + 1];
        strcpy_s(data, strlen(input) + 1, input);
    }

    ~Buffer() {
        cout << "Destructor called" << endl;
        delete[] data;
    }

    Buffer(const Buffer &other) {
        cout << "Copy constructor called" << endl;
        length = other.length;
        data = new char[length + 1];
        strcpy_s(data, strlen(other.data) + 1,other.data);
    }

    Buffer &operator=(const Buffer &other) {
        cout << "Copy assignment called" << endl;
        if (this != &other) {
            delete[] data;
            length = other.length;
            data = new char[length + 1];
            strcpy_s(data, strlen(other.data) + 1, other.data);
        }
        return *this;
    }
    Buffer(Buffer &&other) noexcept {
        cout << "Move constructor called" << endl;
        data = other.data;
        length = other.length;
        other.data = nullptr;
        other.length = 0;
    }

    Buffer &operator=(Buffer &&other) noexcept{
        cout << "Move assignment called" << endl;
        if (this != &other) {
            delete[] data;
            data = other.data;
            length = other.length;
            other.data = nullptr;
            other.length = 0;
        }
        return *this;
    }

    void print() const{
        cout << "Buffer contents: " << (data ? data : "null") << endl;
    }

private:
    char *data;
    size_t length;
};


#endif //UNTITLED_RULESCHALLENGE_H
