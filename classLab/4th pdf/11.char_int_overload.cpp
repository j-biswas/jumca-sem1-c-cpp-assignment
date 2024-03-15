#include<iostream>
#include<cmath>

using namespace std;
class Calculator {
public:
 
    int reverseDigits(int num) {
        int reversed = 0;
        while (num != 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        return reversed;
    }

    
    bool isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

   
    void calculate(int m, char ch) {
        if (ch == 'r') {
            if (m >= 10) {
                int reversed = reverseDigits(m);
                cout << "Reversed digits: " << reversed << endl;
            } else {
                cout << "Number of digits should be greater than 1 for reversal." << endl;
            }
        } else if (ch == 'p') {
            if (m >= 10) {
                if (isPrime(m)) {
                    cout << m << " is a prime number." << endl;
                } else {
                    cout << m << " is not a prime number." << endl;
                }
            } else {
                cout << "Number of digits should be greater than 1 for prime check." << endl;
            }
        } else {
            cout << "Invalid character argument. Use 'r' for reversal or 'p' for prime check." << endl;
        }
    }
};

int main() {
    Calculator calculator;

    calculator.calculate(12345, 'r'); 
    calculator.calculate(29, 'p');    
    calculator.calculate(5, 'r');    
    calculator.calculate(7, 'p');     
    calculator.calculate(123, 'x');   

    return 0;
}
