#ifndef UNTITLED_RULES_H
#define UNTITLED_RULES_H
#include <iostream>
#include <cstring>
#include <memory>
using namespace std;

class RuleOfThree {
public:
    RuleOfThree(const char *text = "default") {
        data = new char[strlen(text) + 1];
        strcpy_s(data,strlen(text) + 1, text);
        cout << "[Three] Constructed with: " << data << endl;
    }

    RuleOfThree(const RuleOfThree &other) {
        data = new char[strlen(other.data) + 1];
        strcpy_s(data,strlen(other.data) + 1, other.data);
        cout << "[Three] Copied: " << data << endl;
    }

    RuleOfThree &operator=(const RuleOfThree &other) {
        if (this != &other) {
            delete[] data;
            data = new char[strlen(other.data) + 1];
            strcpy_s(data,strlen(other.data) + 1, other.data);
        }
        cout << "[Three] Assigned: " << data << endl;
    }

    ~RuleOfThree() {
        cout << "[Three] Destroyed: " << data << endl;
        delete[] data;
    }

private:
    char *data;
};

class RuleOfFive {
public:
    RuleOfFive(const char *text = "default") {
        data = new char[strlen((text) + 1)];
        strcpy_s(data,strlen(text) + 1, text);
        cout << "[Five] Constructed with: " << data << endl;
    }

    RuleOfFive(const RuleOfFive &other) {
        data = new char[strlen(other.data) + 1];
        strcpy_s(data,strlen(other.data) + 1, other.data);
        cout << "[Five] Copied: " << data << endl;
    }

    RuleOfFive &operator=(const RuleOfFive &other) {
        if (this != &other) {
            delete[] data;
            data = new char[strlen(other.data) + 1];
        }
        cout << "[Five] Copy-assigned " << data << endl;
        return *this;
    }

    RuleOfFive(RuleOfFive &&other) noexcept {
        data = other.data;
        other.data = nullptr;
        cout << "[Five] Moved!" << endl;
    }

    RuleOfFive &operator=(RuleOfFive &&other) noexcept {
        if (this != &other) {
            delete[] data;
            data = other.data;
            other.data = nullptr;
        }
        cout << "[Five] Move-assigned!" << endl;
        return *this;
    }

    ~RuleOfFive() {
        cout << "[Five] Destroyed: " << (data ? data : "null") << endl;
        delete[] data;
    }

private:
    char *data;
};

class RuleOfZero {
public:
    RuleOfZero(const char* text = "default") {
        data = make_unique<char[]>(strlen(text) + 1);
        strcpy_s(data.get(),strlen(text) + 1, text);
        cout << "[Zero] Contructed with: " << data.get()<< endl;
    }

    void print() const {
        cout << "[Zero] Content: " << data.get() << endl;
    }
private:
    unique_ptr<char[]> data;
};


#endif //UNTITLED_RULES_H
