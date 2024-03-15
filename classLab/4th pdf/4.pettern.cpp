#include <iostream>

using namespace std;
class PatternPrinter
{
public:
    void printPattern(int rows)
    {
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < i; ++j)
                cout << " ";
    
            for (int k = 0; k < 2 * (rows - i) - 1; ++k)
                cout << "*";

            cout << endl;
        }
    }
};

int main()
{
    PatternPrinter patternPrinter;
    int rows = 7;
    patternPrinter.printPattern(rows);
    return 0;
}
