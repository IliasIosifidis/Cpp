#include <iostream>
#include "Exhibit.h"
#include "Exhibit.cpp"

using namespace std;

int main() {
    const int EXHIBIT_COUNT = 3;
    Exhibit *exhibitPtr[EXHIBIT_COUNT];

    exhibitPtr[0] = new Exhibit("trx ropes", 101, 2.2);
    exhibitPtr[1] = new Exhibit("bar bells", 204, 3.4);
    exhibitPtr[2] = new Exhibit("panikos", 404, 1.72);

    for (int i = 0; i < EXHIBIT_COUNT; i++) {
        cout << "Exhibit no: " << exhibitPtr[i]->getName() << " "
                << "Room: " << exhibitPtr[i]->getRoomNumber() << " "
                << "Size: " << exhibitPtr[i]->getDisplaySize() << endl;
    }
    for (int i = 0; i < EXHIBIT_COUNT; i++) {
        delete exhibitPtr[i];
        exhibitPtr[i] = nullptr;
    }
}
