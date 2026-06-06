#ifndef HOUSE_H
#define HOUSE_H
#define UNTITLED_ENCAPSULATIONS_H
#include <string>
using namespace std;

class House {
public:
    House();
    House(int stories, int windows, string color);
    virtual ~House();
    void toString(House house);
    void setStories(int stories);
    void setWindows(int windows);
    void setColor(string color);
    int getStories() const;
    int getWindows() const;
    string getColor() const;

private:
    int stories;
    int windows;
    string color;
};

#endif

