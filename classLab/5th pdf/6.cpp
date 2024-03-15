#include <iostream>
#include <cmath>

using namespace std;

class Arithmetic
{
public:
    double add(double a, double b)
    {
        return a + b;
    }

    double subtract(double a, double b)
    {
        return a - b;
    }

    double multiply(double a, double b)
    {
        return a * b;
    }

    double divide(double a, double b)
    {
        return a / b;
    }

    double power(double a, double b)
    {
        return pow(a, b);
    }
};

class Trigonometry
{
public:
    double sine(double angle)
    {
        return sin(angle);
    }

    double cosine(double angle)
    {
        return cos(angle);
    }

    double tangent(double angle)
    {
        return tan(angle);
    }

    double cosecant(double angle)
    {
        return 1 / sin(angle);
    }

    double secant(double angle)
    {
        return 1 / cos(angle);
    }

    double cotangent(double angle)
    {
        return 1 / tan(angle);
    }
};

class Calculator
{
public:
    Arithmetic arithmetic;
    Trigonometry trigonometry;

    void displayMenu()
    {
        cout << "Calculator Menu" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Power" << endl;
        cout << "6. Sine" << endl;
        cout << "7. Cosine" << endl;
        cout << "8. Tangent" << endl;
        cout << "9. Cosecant" << endl;
        cout << "10. Secant" << endl;
        cout << "11. Cotangent" << endl;
        cout << "12. Exit" << endl;
        cout << "Enter your choice: ";
    }

    void calculate()
    {
        int choice;
        double a, b;

        do
        {
            displayMenu();
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << arithmetic.add(a, b) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << arithmetic.subtract(a, b) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << arithmetic.multiply(a, b) << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << arithmetic.divide(a, b) << endl;
                break;
            case 5:
                cout << "Enter a number and its power: ";
                cin >> a >> b;
                cout << "Result: " << arithmetic.power(a, b) << endl;
                break;
            case 6:
                cout << "Enter an angle in degrees: ";
                cin >> a;
                cout << "Result: " << trigonometry.sine(a * M_PI / 180) << endl;
                break;
            case 7:
                cout << "Enter an angle in degrees: ";
                cin >> a;
                cout << "Result: " << trigonometry.cosine(a * M_PI / 180) << endl;
                break;
            case 8:
                cout << "Enter an angle in degrees: ";
                cin >> a;
                cout << "Result: " << trigonometry.tangent(a * M_PI / 180) << endl;
                break;
            case 9:
                cout << "Enter an angle in degrees: ";
                cin >> a;
                cout << "Result: " << trigonometry.cosecant(a * M_PI / 180) << endl;
                break;
            case 10:
                cout << "Enter an angle in degrees: ";
                cin >> a;
                cout << "Result: " << trigonometry.secant(a * M_PI / 180) << endl;
                break;
            case 11:
                cout << "Enter an angle in degrees: ";
                cin >> a;
                cout << "Result: " << trigonometry.cotangent(a * M_PI / 180) << endl;
                break;
            case 12:
                cout << "Exiting calculator..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 12." << endl;
            }
        } while (choice != 12);
    }
};
int main()
{
    Calculator calculator;
    calculator.calculate();
    return 0;
}