#ifndef CIRCLE_CPP
#define CIRCLE_CPP

#include "Shape.cpp"
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        if (r <= 0) {
            cout << "Error: Radius must be positive!" << endl;
            radius = 1;
        } else {
            radius = r;
        }
    }

    double area() const {
        return M_PI * radius * radius;
    }

    double perimeter() const {
        return 2 * M_PI * radius;
    }

    void display() const {
        cout << "Shape: Circle" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

#endif
