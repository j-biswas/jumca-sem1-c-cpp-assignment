#include <iostream>

using namespace std;

class Base {
public:
    Base(const string& message) : message(message) {
        cout << "Base Parameterized Constructor: " << message << endl;
    }

    virtual ~Base() {
        cout << "Base Virtual Destructor" << endl;
    }

    Base(const Base& other) : message(other.message) {
        cout << "Base Copy Constructor: " << message << endl;
    }

    void displayMessage() const {
        cout << "Message: " << message << endl;
    }

private:
    string message;
};

class Derived : public Base {
public:
    Derived(const string& message, const string& derivedMessage)
        : Base(message), derivedMessage(derivedMessage) {
        cout << "Derived Parameterized Constructor: " << derivedMessage << endl;
    }

    ~Derived() override {
        cout << "Derived Virtual Destructor" << endl;
    }

    Derived(const Derived& other) : Base(other), derivedMessage(other.derivedMessage) {
        cout << "Derived Copy Constructor: " << derivedMessage << endl;
    }

private:
    string derivedMessage;
};

int main() {
    Base baseObject("Hello from Base!");
    Base copiedBaseObject = baseObject;
    Derived derivedObject("Hello from Base in Derived!", "Hello from Derived!");
    Derived copiedDerivedObject = derivedObject;
    return 0;
}
