#include <iostream>
#include <cmath>

using namespace std;

double calculateVolume(double side) {
    return pow(side, 3);
}

double calculateVolume(double length, double width, double height) {
    return length * width * height;
}


double calculateVolume(double radius, double height, char shape) {
    if (shape == 'c' || shape == 'C') {
        return (1.0 / 3) * M_PI * pow(radius, 2) * height;
    } else {
        cerr << "Invalid shape choice. Please choose 'c' for cone or 's' for cylinder." << endl;
        return 0.0;
    }
}

double calculateVolume_sp(double radius) {
    return (4.0 / 3) * M_PI * pow(radius, 3);
}

int main() {
    int choice;
    double result;

    do {
        cout << "\nMenu:\n";
        cout << "1. Calculate the volume of a Cube\n";
        cout << "2. Calculate the volume of a Cuboid\n";
        cout << "3. Calculate the volume of a Cone\n";
        cout << "4. Calculate the volume of a Sphere\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double side;
                cout << "Enter the side length of the cube: ";
                cin >> side;
                result = calculateVolume(side);
                cout << "Volume of the cube: " << result << endl;
                break;
            }
            case 2: {
                double length, width, height;
                cout << "Enter the length, width, and height of the cuboid: ";
                cin >> length >> width >> height;
                result = calculateVolume(length, width, height);
                cout << "Volume of the cuboid: " << result << endl;
                break;
            }
            case 3: {
                double radius, coneHeight;
                char shapeChoice;
                cout << "Enter the radius of the base of the cone: ";
                cin >> radius;
                cout << "Enter the height of the cone: ";
                cin >> coneHeight;
                cout << "Is it a cone (c) or a cylinder (s)? ";
                cin >> shapeChoice;
                result = calculateVolume(radius, coneHeight, shapeChoice);
                break;
            }
            case 4: {
                double sphereRadius;
                cout << "Enter the radius of the sphere: ";
                cin >> sphereRadius;
                result = calculateVolume_sp(sphereRadius);
                cout << "Volume of the sphere: " << result << endl;
                break;
            }
            case 0:
                cout << "Exiting the program.\n";
                break;
            default:
                cerr << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 0);

    return 0;
}
