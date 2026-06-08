#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream nameFile("names.txt");
    ifstream ageFile("ages.txt");
    ofstream outfile("output.txt");
    string tempName;
    int tempAge;

    if (!nameFile || !ageFile) {
        cerr << "one of the files do not exist" << endl;;
    }

    while (getline(nameFile, tempName) && (ageFile >> tempAge)) {
        outfile << tempName << " - " << tempAge << endl;
    }



    nameFile.close();
    ageFile.close();
    outfile.close();
    cout << "Done" << endl;
}
