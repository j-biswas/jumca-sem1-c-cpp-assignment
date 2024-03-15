#include <iostream>

using namespace std;
class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}
    friend Complex addComplex(const Complex& c1, const Complex& c2);

    void displayComplex() const {
        cout << "Complex Number: " << real;
        if (imaginary >= 0) {
            cout << " + " << imaginary << "i";
        } else {
            cout << " - " << -imaginary << "i";
        }
        cout << endl;
    }
};

Complex addComplex(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

int main() {
    double real1, imaginary1, real2, imaginary2;

    cout << "Enter the real part of the first complex number: ";
    cin >> real1;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> imaginary1;

    cout << "Enter the real part of the second complex number: ";
    cin >> real2;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> imaginary2;

    Complex complex1(real1, imaginary1);
    Complex complex2(real2, imaginary2);

    cout << "\nOriginal Complex Numbers:\n";
    complex1.displayComplex();
    complex2.displayComplex();

    Complex sum = addComplex(complex1, complex2);

    cout << "\nSum of Complex Numbers:\n";
    sum.displayComplex();

    return 0;
}
