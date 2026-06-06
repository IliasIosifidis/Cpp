#include "Rect.h"

Rect::Rect() {
    this->length = 1.0;
    this->width = 1.0;
}

Rect::Rect(double length, double width) {
    this->length = length;
    this->width = width;
}

double Rect::getLength() const {
    return this->length;
}

double Rect::getWidth() const {
    return this->width;
}

void Rect::setLength(double length) {
    this->length = length;
}

void Rect::setWidth(double width) {
    this->width = width;
}

double Rect::area() const {
    return length * width;
}

double Rect::perim() const {
    return 2 * length + 2 * width;
}
