#include "Circle.cpp"
#include "Rectangle.cpp"
#include "Triangle.cpp"
#include "Square.cpp"
#include "Parallelogram.cpp"
#include "Rhombus.cpp"
#include "Trapezium.cpp"
#include "ShapeManager.cpp"

int main() {
    ShapeManager manager;
    int choice;

    do {
        cout << "\n===== Shape Calculator Menu =====" << endl;
        cout << "1. Add Circle" << endl;
        cout << "2. Add Rectangle" << endl;
        cout << "3. Add Triangle" << endl;
        cout << "4. Add Square" << endl;
        cout << "5. Add Parallelogram" << endl;
        cout << "6. Add Rhombus" << endl;
        cout << "7. Add Trapezium" << endl;
        cout << "8. Display All Shapes" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            double r;
            cout << "Enter radius: ";
            cin >> r;
            manager.addShape(new Circle(r));
            cout << "Circle added! Total shapes: " << manager.getCount() << endl;

        } else if (choice == 2) {
            double l, w;
            cout << "Enter length: ";
            cin >> l;
            cout << "Enter width: ";
            cin >> w;
            manager.addShape(new Rectangle(l, w));
            cout << "Rectangle added! Total shapes: " << manager.getCount() << endl;

        } else if (choice == 3) {
            double s1, s2, s3;
            cout << "Enter side 1: ";
            cin >> s1;
            cout << "Enter side 2: ";
            cin >> s2;
            cout << "Enter side 3: ";
            cin >> s3;
            manager.addShape(new Triangle(s1, s2, s3));
            cout << "Triangle added! Total shapes: " << manager.getCount() << endl;

        } else if (choice == 4) {
            double s;
            cout << "Enter side: ";
            cin >> s;
            manager.addShape(new Square(s));
            cout << "Square added! Total shapes: " << manager.getCount() << endl;

        } else if (choice == 5) {
            double b, s, h;
            cout << "Enter base: ";
            cin >> b;
            cout << "Enter side: ";
            cin >> s;
            cout << "Enter height: ";
            cin >> h;
            manager.addShape(new Parallelogram(b, s, h));
            cout << "Parallelogram added! Total shapes: " << manager.getCount() << endl;

        } else if (choice == 6) {
            double d1, d2;
            cout << "Enter diagonal 1: ";
            cin >> d1;
            cout << "Enter diagonal 2: ";
            cin >> d2;
            manager.addShape(new Rhombus(d1, d2));
            cout << "Rhombus added! Total shapes: " << manager.getCount() << endl;

        } else if (choice == 7) {
            double a, b, h;
            cout << "Enter parallel side 1: ";
            cin >> a;
            cout << "Enter parallel side 2: ";
            cin >> b;
            cout << "Enter height: ";
            cin >> h;
            manager.addShape(new Trapezium(a, b, h));
            cout << "Trapezium added! Total shapes: " << manager.getCount() << endl;

        } else if (choice == 8) {
            manager.displayAll();

        } else if (choice == 9) {
            cout << "Goodbye!" << endl;

        } else {
            cout << "Invalid choice, try again." << endl;
        }

    } while (choice != 9);

    return 0;
}
