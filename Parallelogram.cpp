#ifndef PARALLELOGRAM_CPP
#define PARALLELOGRAM_CPP

#include "Shape.cpp"

class Parallelogram : public Shape {
private:
    double base, side, height;

public:
    Parallelogram(double b, double s, double h) {
        if (b <= 0 || s <= 0 || h <= 0) {
            cout << "Error: All dimensions must be positive!" << endl;
            base = side = height = 1;
        } else {
            base = b;
            side = s;
            height = h;
        }
    }

    double area() const {
        return base * height;
    }

    double perimeter() const {
        return 2 * (base + side);
    }

    void display() const {
        cout << "Shape: Parallelogram" << endl;
        cout << "Base: " << base << ", Side: " << side << ", Height: " << height << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

#endif
