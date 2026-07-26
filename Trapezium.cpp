#ifndef TRAPEZIUM_CPP
#define TRAPEZIUM_CPP

#include "Shape.cpp"

class Trapezium : public Shape {
private:
    double a, b, height; // a and b are parallel sides

public:
    Trapezium(double side1, double side2, double h) {
        if (side1 <= 0 || side2 <= 0 || h <= 0) {
            cout << "Error: All dimensions must be positive!" << endl;
            a = b = height = 1;
        } else {
            a = side1;
            b = side2;
            height = h;
        }
    }

    double area() const {
        return 0.5 * (a + b) * height;
    }

    // perimeter needs non-parallel sides, simplified here as sum of parallel sides + 2*height
    double perimeter() const {
        return a + b + 2 * height;
    }

    void display() const {
        cout << "Shape: Trapezium" << endl;
        cout << "Side A: " << a << ", Side B: " << b << ", Height: " << height << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

#endif
