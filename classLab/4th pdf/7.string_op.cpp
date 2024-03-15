#include <iostream>
#include <cstring>

using namespace std;
class String {
private:
    char *str;

public:
    
    String(const char *s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }


    void display(){
        cout << "String: " << str << endl;
    }


    String join(const String &s2) {
        int newLen = strlen(str) + strlen(s2.str);
        char *newStr = new char[newLen + 1];
        strcpy(newStr, str);
        strcat(newStr, s2.str);
        String result(newStr);
        delete[] newStr;
        return result;
    }

    ~String() {
        delete[] str;
    }
};

int main() {
    
    String s1("Hello, ");
    String s2("world!");

    cout << "Original Strings:" << endl;
    s1.display();
    s2.display();

    String result = s1.join(s2);

    cout << "\nJoined String:" << endl;
    result.display();

    return 0;
}
