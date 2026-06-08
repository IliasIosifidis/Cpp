#ifndef UNTITLED_CAT_H
#define UNTITLED_CAT_H
#include <string>
using namespace std;


class Cat {
public:
    Cat(string name, string foundAt);
    string getName() const;
    string getFoundAt() const;

private:
    string name;
    string foundAt;
};


#endif //UNTITLED_CAT_H
