#ifndef SQUARE_CPP
#define SQUARE_CPP

#include "Shape.cpp"

class Square : public Shape {
private:
    double side;

public:
    Square(double s) {
        if (s <= 0) {
            cout << "Error: Side must be positive!" << endl;
            side = 1;
        } else {
            side = s;
        }
    }

    double area() const {
        return side * side;
    }

    double perimeter() const {
        return 4 * side;
    }

    void display() const {
        cout << "Shape: Square" << endl;
        cout << "Side: " << side << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

#endif
