#ifndef RHOMBUS_CPP
#define RHOMBUS_CPP

#include "Shape.cpp"
#include <cmath>

class Rhombus : public Shape {
private:
    double d1, d2; // diagonals

public:
    Rhombus(double diagonal1, double diagonal2) {
        if (diagonal1 <= 0 || diagonal2 <= 0) {
            cout << "Error: Diagonals must be positive!" << endl;
            d1 = d2 = 1;
        } else {
            d1 = diagonal1;
            d2 = diagonal2;
        }
    }

    double area() const {
        return (d1 * d2) / 2.0;
    }

    double perimeter() const {
        // side = sqrt((d1/2)^2 + (d2/2)^2)
        double side = sqrt((d1 / 2) * (d1 / 2) + (d2 / 2) * (d2 / 2));
        return 4 * side;
    }

    void display() const {
        cout << "Shape: Rhombus" << endl;
        cout << "Diagonal 1: " << d1 << ", Diagonal 2: " << d2 << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

#endif
