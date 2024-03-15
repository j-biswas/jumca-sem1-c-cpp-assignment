#include <iostream>

using namespace std;

class Number
{

  public:
    class Nested
    {
        int num1, num2, num3;
      public:
        void getNumbers()
        {
          cout << "Enter three numbers: ";
          cin >> num1 >> num2 >> num3;
        }

        int findGreatest()
        {
          if (num1 > num2 && num1 > num3)
          {
            return num1;
          }
          else if (num2 > num1 && num2 > num3)
          {
            return num2;
          }
          else
          {
            return num3;
          }
        }
    };
};

int main()
{
  Number::Nested obj;
  obj.getNumbers();
  cout << "Greatest number among the three numbers is: " << obj.findGreatest() << endl;

  return 0;
}