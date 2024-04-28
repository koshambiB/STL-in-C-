#include<iostream>
#include<iostream>
#include <vector>
#include <algorithm>
#include<numeric>
#include<string>
#include <list>
using namespace std;
//declaration of template for finding area
template <class T>
T area (T a, T b)
    {
        T result = a*b;
        return result;
    }
// declaration of template for bubblesort
template <typename T> 
void bubbleSort(T a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0;j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    cout << "Sorted array : ";
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
   int a[10] = { 10, 50, 30, 40, 20, 5 };
   int size = sizeof(a) / sizeof(a[0]);
   bubbleSort<int>(a, size);

   cout << area<int>(3, 7.1) << endl;
   cout << area<double>(3.0, 7.1) << endl;
 return 0;
}