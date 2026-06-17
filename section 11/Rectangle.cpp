#include "Rectangle.h"

void changeData(Rectangle &rect) {
    rect.length = 100;
    rect.width = 100;
}

Rectangle::Rectangle() {
    length = 1;
    width = 1;
}

Rectangle::Rectangle(double length, double width) {
    this->length = length;
    this->width = width;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setLength(double length) {
    this->length = length;
}

void Rectangle::setWidth(double width) {
    this->width = width;
}

double Rectangle::area() const {
    return width * length;
}

double Rectangle::perim() const {
    return (width + length) * 2;
}

bool Rectangle::operator==(const Rectangle &other) const {
    return length == other.length && width == other.width;
}

bool Rectangle::operator!=(const Rectangle &other) const {
    return !(*this == other);
}

Rectangle Rectangle::operator+(const Rectangle &other) const {
    return Rectangle(length + other.length, width + other.width);
}

void Rectangle::operator=(const Rectangle &other) {
    length = other.length;
    width = other.width;
}
