#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void printFormatted(ofstream outfile, int highNum);

int main() {
    int highNum;

    cout << "Gimme high num" << endl;
    cin >> highNum;

    cout << "writing to file" << endl;
    ofstream outfile("outputfile.txt");

    if (!outfile) {
        cerr << "There's no file to write to" << endl;
        return 1;
    }

    cout << fixed << showpoint;
    outfile << fixed << showpoint;

    printFormatted(std::move(outfile), highNum);


    outfile.close();
    cout << "Done" << endl;
}

void printFormatted(ofstream outfile, int highNum) {
    for (int i = 1; i <= highNum; i++) {
        double val1 = i * 4.123;
        double val2 = i * 6.263;

        cout << setw(12) << setprecision(2) << val1
                << setw(12) << setprecision(3) << val2 << endl;

        outfile << setw(12) << setprecision(2) << val1
               << setw(12) << setprecision(3) << val2 << endl;
    }
}
