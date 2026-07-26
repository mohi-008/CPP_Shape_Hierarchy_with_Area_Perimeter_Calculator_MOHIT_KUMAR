#ifndef SHAPE_CPP
#define SHAPE_CPP

#include <iostream>
#include <string>
using namespace std;

// Abstract base class for all shapes
class Shape {
public:
    virtual ~Shape() {}

    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void display() const = 0;
};

#endif
