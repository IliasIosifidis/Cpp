#ifndef UNTITLED_RETANGLE_H
#define UNTITLED_RETANGLE_H


class Rectangle {
    friend void changeData(Rectangle &rect);
    friend class RectangleHelper;

public:
    Rectangle();
    Rectangle(double length, double width);
    double getLength() const;
    double getWidth() const;
    void setLength(double length);
    void setWidth(double width);
    double area() const;
    double perim() const;

    //overload operators
    bool operator==(const Rectangle &other) const;
    bool operator!=(const Rectangle &other) const;
    Rectangle operator+(const Rectangle &other) const;
    void operator= (const Rectangle &other);
private:
    double length;
    double width;
};


#endif //UNTITLED_RETANGLE_H
