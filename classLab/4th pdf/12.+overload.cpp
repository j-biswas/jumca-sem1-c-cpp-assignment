#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class ReverseConcatenation {
private:
    string str;

public:
    ReverseConcatenation() : str("") {}

    ReverseConcatenation(const string& s) : str(s) {}

    ReverseConcatenation operator+(const ReverseConcatenation& other) const {
        ReverseConcatenation result;
        result.str = str + other.str;
        reverse(result.str.begin(), result.str.end());
        return result;
    }

    void display() const {
        cout << "Reversed Concatenated String: " << str << endl;
    }
};

int main() {

    ReverseConcatenation str1("Good");
    ReverseConcatenation str2("Morning");

    ReverseConcatenation result = str1 + str2;

    result.display();

    return 0;
}
