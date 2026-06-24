#include <iostream>
#include "LanguageTrans.h"
#include "LanguageTrans.cpp"
using namespace std;

void printMenu();
void handleAdd(LanguageTrans &trans);
void handleLookup(const LanguageTrans &trans);

int main() {
    LanguageTrans trans;
    int choice;

    printMenu();
    cin >> choice;
    cin.ignore();

    while (choice != 0) {
        if (choice == 1) {
            handleAdd(trans);
        } else if (choice == 2) {
            handleLookup(trans);
        } else if (choice == 3) {
            trans.printAll();
        } else {
            choice = 0;
        }
        cout << endl;
        printMenu();
        cin >> choice;
        cin.ignore();
    }

}

void printMenu() {
    cout << "Select option" << endl;
    cout << "1 - Add or update" << endl;
    cout << "2 - translate a word" << endl;
    cout << "3 - Print All trans" << endl;
    cout << "4 - exit" << endl;
}

void handleAdd(LanguageTrans &trans) {
    string english;
    string translated;

    cout << "Enter the english word: "<< endl;
    getline(cin, english);

    cout << "Enter the translation: "<< endl;
    getline(cin, translated);

    trans.addTranslation(english, translated);
}

void handleLookup(const LanguageTrans &trans) {
    string word;
    cout << "Enter the Englishword";
    getline(cin, word);
    cout << "Translation -> " << trans.getTranslation(word);
}
