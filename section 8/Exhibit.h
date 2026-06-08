#ifndef UNTITLED_EXHIBITTRACKER_H
#define UNTITLED_EXHIBITTRACKER_H
#include <string>
using namespace std;

class Exhibit {
public:
    Exhibit(string name, int roomNumber, double displaySize);
    string getName() const;
    int getRoomNumber() const;
    double getDisplaySize() const;
private:
    string name;
    int roomNumber;
    double displaySize;
};


#endif //UNTITLED_EXHIBITTRACKER_H
