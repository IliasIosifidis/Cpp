#include <iostream>
#include "LibraryCard.h"
#include "LibraryCard.cpp"
using namespace std;

void printDetails(const LibraryCard &library_card);

int main() {
    LibraryCard jorgeCard("Jorge");
    LibraryCard jameHoldenCard("J.Holden");
    printDetails(jorgeCard);
    jorgeCard.checkoutBook();

    printDetails(jorgeCard);
    jorgeCard.checkoutBook();

    printDetails(jorgeCard);
    jorgeCard.returnBook();

    printDetails(jorgeCard);
    jorgeCard.returnBook();

    printDetails(jorgeCard);
    jorgeCard.returnBook();

}

void printDetails(const LibraryCard &library_card) {
    cout << library_card.getCardHolderName() << "'s card, has "
            << library_card.getBooksCheckout() << " books" << endl;
}
