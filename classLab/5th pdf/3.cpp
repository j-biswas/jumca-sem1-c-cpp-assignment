#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    Rectangle(double length, double breadth) {
        this->length = length;
        this->breadth = breadth;
    }

    double getLength() {
        return length;
    }

    double getBreadth() {
        return breadth;
    }
};

int main() {
    Rectangle rectangles[5] = {
        Rectangle(4.5, 3.2),
        Rectangle(8.2, 8.2),
        Rectangle(6.3, 4.2),
        Rectangle(3.1, 3.1),
        Rectangle(5.4, 3.9)
    };

    cout << "Rectangles with equal length and breadth:" << endl;
    for (int i = 0; i < 5; i++) {
        if (rectangles[i].getLength() == rectangles[i].getBreadth()) {
            cout << "Rectangle " << i + 1 << ": " << rectangles[i].getLength() << " x " << rectangles[i].getBreadth() << endl;
        }
    }

    return 0;
}