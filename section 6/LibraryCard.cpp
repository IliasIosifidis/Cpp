#include "LibraryCard.h"

LibraryCard::LibraryCard(string cardHolderName) {
    this->cardHolderName = cardHolderName;
    booksCheckout = 0;
}

void LibraryCard::checkoutBook() {
    booksCheckout++;
}

void LibraryCard::returnBook() {
    if (booksCheckout > 0) {
        booksCheckout--;
    } else {
        cout <<cardHolderName << ", you dont have books to return" << endl;
    }
}

string LibraryCard::getCardHolderName() const {
    return cardHolderName;
}

int LibraryCard::getBooksCheckout() const {
    return booksCheckout;
}

void LibraryCard::setCardHolderName(const string &cardHolderName) {
    this->cardHolderName = cardHolderName;
}

void LibraryCard::setBooksCheckout(int booksCheckout) {
    this->booksCheckout = booksCheckout;
}
