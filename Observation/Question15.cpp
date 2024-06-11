// 15. Program to calculate Area by demonstrating polymorphism using base class Shape and derived classes Circle and Rectangle
#include <iostream>
using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double calculateArea() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double calculateArea() override {
        return length * width;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    Shape* shape1 = &c;
    Shape* shape2 = &r;
    cout << "Area of Circle: " << shape1->calculateArea() << endl;
    cout << "Area of Rectangle: " << shape2->calculateArea() << endl;
    return 0;
}
