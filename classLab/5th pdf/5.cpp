#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
public:
    class AreaCalculator {
    public:
        double calculateArea(double radius) {
            return 3.14 * radius * radius;
        }
    };

    void setRadius(double radius) {
        this->radius = radius;
    }

    double getRadius() {
        return radius;
    }
};

int main() {
    Circle circle;
    circle.setRadius(5.0);
    Circle::AreaCalculator calculator;
    double area = calculator.calculateArea(circle.getRadius());
    cout << "Area of circle: " << area << endl;
    return 0;
}
