#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H
#include <string>
using namespace std;

class Person {
public:
    Person(string name);
    string getName() const noexcept;
    void setName(string name);

private:
    string name;
};


#endif //UNTITLED_PERSON_H
