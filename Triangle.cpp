#ifndef TRIANGLE_CPP
#define TRIANGLE_CPP

#include "Shape.cpp"
#include <cmath>

class Triangle : public Shape {
private:
    double a, b, c;

public:
    Triangle(double s1, double s2, double s3) {
        if (s1 <= 0 || s2 <= 0 || s3 <= 0) {
            cout << "Error: All sides must be positive!" << endl;
            a = b = c = 1;
        } else if (s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s1) {
            cout << "Error: These sides don't form a valid triangle!" << endl;
            a = b = c = 1;
        } else {
            a = s1;
            b = s2;
            c = s3;
        }
    }

    // using Heron's formula
    double area() const {
        double s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double perimeter() const {
        return a + b + c;
    }

    void display() const {
        cout << "Shape: Triangle" << endl;
        cout << "Side A: " << a << endl;
        cout << "Side B: " << b << endl;
        cout << "Side C: " << c << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

#endif
