#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
    virtual void display() = 0;
    virtual ~Shape() {cout << "Shape destructor called" << endl;} 
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float radius) {this->radius = radius;}
    float area() override {return 3.14 * radius * radius;}
    void display() override {cout << "Circle with radius " << radius << endl;}
    ~Circle() {cout << "Circle destructor called" << endl;}
};

class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(float length, float width) {this->length = length; this->width = width;}
    float area() override {return length * width;}
    void display() override {cout << "Rectangle with length " << length << " and width " << width << endl;}
    ~Rectangle() {cout << "Rectangle destructor called" << endl;}
};

class Trapezoid : public Shape {
private:
    float base1, base2, height;
public:
    Trapezoid(float base1, float base2, float height) {this->base1 = base1; this->base2 = base2; this->height = height;}
    float area() override {return 0.5 * (base1 + base2) * height;}
    void display() override {cout << "Trapezoid with base1 " << base1 << ", base2 " << base2 << " and height " << height << endl;}
    ~Trapezoid() {cout << "Trapezoid destructor called" << endl;}
};

int main() {
    Shape *shapes[] = {new Circle(5), new Rectangle(4, 6), new Trapezoid(3, 7, 8)};
    for (int i = 0; i < 3; i++) {
        cout << "Area of " << typeid(*shapes[i]).name()<<" " << ": " << shapes[i]->area() << endl;
        shapes[i]->display();
        delete shapes[i];
    }
    return 0;
}