#include <iostream>
#include <vector>

// Interface (Abstract Class)
class IShape {
public:
    virtual void draw() const = 0;  // Pure virtual function
    virtual double area() const = 0;  // Another pure virtual function
    virtual ~IShape() {}  // Virtual destructor
};

// Circle class implementing Shape interface
class Circle : public IShape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {} // constructor
    
    void draw() const override {
        std::cout << "Drawing a Circle (" << radius << ")\n";
    }

    double area() const override {
        return 3.14159 * radius * radius;
    }
};

// Rectangle class implementing Shape interface
class Rectangle : public IShape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {} // constructor
    
    void draw() const override {
        std::cout << "Drawing a Rectangle (" << width << ", " << height << ")\n";
    }

    double area() const override {
        return width * height;
    }
};

int main() {
    std::vector<IShape*> shapes; // creating a vector of pointers of Shape interface

    shapes.push_back(new Circle(5.0));
    shapes.push_back(new Rectangle(4.0, 6.0));

    for (const auto& shape : shapes) {
        shape->draw();
        std::cout << "Area: " << shape->area() << "\n";
    }

    // Clean up
    for (auto& shape : shapes) {
        delete shape;
    }
    return 0;
}
