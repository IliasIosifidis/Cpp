#ifndef UNTITLED_BOOK_H
#define UNTITLED_BOOK_H
#include <string>
using namespace std;


class Book {
public:
    Book(string author, string title, string genre, int pages);

    string getAuthor() const;
    string getTitle() const;
    string getGenre() const;
    int getPages() const;

    void setAuthor(string author);
    void setTitle(string title);
    void setGenre(string genre);
    void setPages(int pages);

    void printDetails();

private:
    string author;
    string title;
    string genre;
    int pages;
};


#endif //UNTITLED_BOOK_H
