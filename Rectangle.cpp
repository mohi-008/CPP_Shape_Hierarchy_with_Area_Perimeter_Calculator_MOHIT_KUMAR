#ifndef RECTANGLE_CPP
#define RECTANGLE_CPP

#include "Shape.cpp"

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        if (l <= 0 || w <= 0) {
            cout << "Error: Length and width must be positive!" << endl;
            length = 1;
            width = 1;
        } else {
            length = l;
            width = w;
        }
    }

    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2 * (length + width);
    }

    void display() const {
        cout << "Shape: Rectangle" << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

#endif
