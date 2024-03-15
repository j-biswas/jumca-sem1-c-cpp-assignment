#include <iostream>
#include <algorithm>
using namespace std;

class Number_List
{
private:
    int *arr;
    int size;

public:
    Number_List(int n)
    {
        size = n;
        arr = new int[size];
    }

    void createArray()
    {
        cout << "Enter " << size << " integers:" << endl;
        for (int i = 0; i < size; ++i)
        {
            cin >> arr[i];
        }
    }

 
    void sortArray()
    {
        sort(arr, arr + size);
        cout << "Array after sorting:" << endl;
        displayArray();
    }


    void findMinMax()
    {
        int minVal = *min_element(arr, arr + size);
        int maxVal = *max_element(arr, arr + size);

       cout << "Minimum value: " << minVal << endl;
       cout << "Maximum value: " << maxVal << endl;
    }


    void displayArray()
    {
        cout << "Array elements:" << std::endl;
        for (int i = 0; i < size; ++i)
            cout << arr[i] << " ";
        
        cout << endl;
    }

  
};

int main(){
    Number_List n1(5);
    n1.createArray();
    n1.displayArray();
    n1.findMinMax();
    n1.sortArray();
    n1.displayArray();
}
