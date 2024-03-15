#include <iostream>

using namespace std;
class NumberSwap {
private:
    int num1;
    int num2;

public:
  
    NumberSwap(int a, int b) : num1(a), num2(b) {}
    friend void swapNumbers(NumberSwap&);
    void displayNumbers() const {
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
    }
};

void swapNumbers(NumberSwap& ns) {
    ns.num1 = ns.num1 + ns.num2;
    ns.num2 = ns.num1 - ns.num2;
    ns.num1 = ns.num1 - ns.num2;
}

int main() {
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    NumberSwap numbers(a, b);

    cout << "Original Numbers:\n";
    numbers.displayNumbers();

    swapNumbers(numbers);

    cout << "\nNumbers after swapping:\n";
    numbers.displayNumbers();

    return 0;
}
