#ifndef UNTITLED_LIBRARYCARD_H
#define UNTITLED_LIBRARYCARD_H
#include <iostream>
#include <string>

using namespace std;

class LibraryCard {
public:
    LibraryCard(string cardHolderName);

    void checkoutBook();
    void returnBook();

    string getCardHolderName() const;
    int getBooksCheckout() const;

    void setCardHolderName(const string &cardHolderName);
    void setBooksCheckout(int booksCheckout);

private:
    string cardHolderName;
    int booksCheckout;
};


#endif //UNTITLED_LIBRARYCARD_H
