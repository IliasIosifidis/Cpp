#include "Book.h"
#include <iostream>

Book::Book(string author, string title, string genre, int pages) {
    this->author = author;
    this->title = title;
    this->genre = genre;
    this->pages = pages;
}

string Book::getAuthor() const {
    return author;
}

string Book::getTitle() const {
    return title;
}

string Book::getGenre() const {
    return genre;
}

int Book::getPages() const {
    return pages;
}

void Book::setAuthor(string author) {
    this->author = author;
}

void Book::setTitle(string title) {
    this->title = title;
}

void Book::setGenre(string genre) {
    this->genre = genre;
}

void Book::setPages(int pages) {
    this->pages = pages;
}

void Book::printDetails() {
    cout << title << " by " << author << ", number of pages: " << pages << endl;
}
