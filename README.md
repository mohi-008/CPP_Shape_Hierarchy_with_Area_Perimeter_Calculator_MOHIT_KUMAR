# Shape Hierarchy Calculator

## Project Description

The **Shape Hierarchy Calculator** is a C++ Object-Oriented Programming (OOP) project designed to calculate the **area** and **perimeter** of various geometric shapes. The project follows a hierarchical class design where a base **Shape** class is extended by multiple derived classes. It demonstrates the practical implementation of core OOP concepts such as **Inheritance**, **Polymorphism**, **Abstraction**, and **Encapsulation**.

This project is modular, easy to understand, and can be extended by adding new shapes with minimal code changes.

---

## Features

- Calculate the **Area** and **Perimeter** of different geometric shapes.
- Supports multiple shapes through a common Shape hierarchy.
- Demonstrates runtime polymorphism using a base class interface.
- Modular and extensible object-oriented design.
- Simple and efficient C++ implementation.

---

## Supported Shapes

- Circle
- Rectangle
- Square
- Triangle
- Parallelogram
- Rhombus
- Trapezium

---

## OOP Concepts Used

### Classes & Objects
Each geometric shape is represented as a separate class and instantiated as an object.

### Inheritance
All shape classes inherit from the base **Shape** class.

### Polymorphism
Each derived class provides its own implementation of the Area and Perimeter calculation functions.

### Encapsulation
The properties and methods of each shape are encapsulated within their respective classes.

### Abstraction
The base **Shape** class provides a common interface for all derived shape classes.

---

## Project Structure

```text
Shape-Hierarchy-Calculator/
│
├── main.cpp
├── Shape.cpp
├── ShapeManager.cpp
├── Circle.cpp
├── Rectangle.cpp
├── Square.cpp
├── Triangle.cpp
├── Parallelogram.cpp
├── Rhombus.cpp
└── Trapezium.cpp
```

---

## Project Workflow

```text
Start Program
      │
      ▼
User Selects a Shape
      │
      ▼
Enter Shape Dimensions
      │
      ▼
Create Shape Object
      │
      ▼
Call Area() Function
      │
      ▼
Call Perimeter() Function
      │
      ▼
Display Calculated Results
      │
      ▼
End Program
```

---

## How to Compile

### Using g++

Compile all source files:

```bash
g++ *.cpp -o shapes
```

### Run the Program

**Windows**

```bash
shapes.exe
```

**Linux / macOS**

```bash
./shapes
```

> **Note:** Ensure all `.cpp` files are present in the same directory before compiling.

---

## Future Improvements

- Add support for additional geometric shapes.
- Improve user input validation.
- Separate class declarations into header (`.h`) files.
- Store shape information using file handling.
- Develop a graphical user interface (GUI).

---

## Author

**Mohit Kumar**

- **Course:** B.Tech Computer Science Engineering
- **Programming Language:** C++
- **Project:** Shape Hierarchy Calculator

---

## License

This project is created for educational purposes as part of a C++ Object-Oriented Programming course.

