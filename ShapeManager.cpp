#ifndef SHAPEMANAGER_CPP
#define SHAPEMANAGER_CPP

#include "Shape.cpp"
#include <vector>

// Manages a collection of shapes using polymorphism
class ShapeManager {
private:
    vector<Shape*> shapes;

public:
    // destructor to free memory
    ~ShapeManager() {
        for (int i = 0; i < shapes.size(); i++) {
            delete shapes[i];
        }
    }

    void addShape(Shape* s) {
        shapes.push_back(s);
    }

    int getCount() const {
        return shapes.size();
    }

    double totalArea() const {
        double sum = 0;
        for (int i = 0; i < shapes.size(); i++) {
            sum += shapes[i]->area();
        }
        return sum;
    }

    double totalPerimeter() const {
        double sum = 0;
        for (int i = 0; i < shapes.size(); i++) {
            sum += shapes[i]->perimeter();
        }
        return sum;
    }

    void displayAll() const {
        if (shapes.empty()) {
            cout << "No shapes added yet." << endl;
            return;
        }

        for (int i = 0; i < shapes.size(); i++) {
            cout << "\n--- Shape #" << (i + 1) << " ---" << endl;
            shapes[i]->display();
        }

        cout << "\n================================" << endl;
        cout << "Total Area: " << totalArea() << endl;
        cout << "Total Perimeter: " << totalPerimeter() << endl;
        cout << "================================" << endl;
    }
};

#endif
