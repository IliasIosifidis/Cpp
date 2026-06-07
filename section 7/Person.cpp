#include "Person.h"
#include <stdexcept>
using namespace std;

Person::Person(string name) {
    setName(name);
}

string Person::getName() const noexcept {
    return name;
}

void Person::setName(string name) {
    if (name != "Tiffany") {
        this->name = name;
    } else {
        throw runtime_error(" Way too high on the Hot-Crazy scale ");
    }

}
