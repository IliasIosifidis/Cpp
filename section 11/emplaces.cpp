#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age) : name(name), age(age) {
        cout << "constructed: " << name << endl;
    }

    Person(const Person &other) {
        name = other.name;
        age = other.age;
        cout << "Copied: " << name << endl;
    }
};

int main() {
    vector<Person> personas;
    cout << "push back: " << endl;

    Person p1("Malice", 30);
    personas.push_back(p1);
    
    personas.emplace_back("Bobbie", 55);
}
