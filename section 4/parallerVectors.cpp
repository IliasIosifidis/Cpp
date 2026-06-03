#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> titles;
    vector<int> ratings;
    string title;
    int rating;

    for (int i = 0; i < 5; i++) {
        cout << "Give me a movie" << endl;
        getline(cin, title);
        titles.push_back(title);

        cout << "Rating?" << endl;
        cin >> rating;
        ratings.push_back(rating);
        cin.get();
    }

    for (int i = 0; i < 5; i++) {
        cout << titles[i] << ": " << ratings[i] << "/10" << endl;
    }
}
