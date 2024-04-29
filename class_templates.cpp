#include<iostream>
#include<iostream>
#include <vector>
#include <algorithm>
#include<numeric>
#include<string>
#include <list>
using namespace std;
/*The syntax goes like 
template <typename T,typename U,....> Class name{ 
 T* variable;  U* variable;......
 constructor declaration
 returntype function declaration
 .
 .
 .
 .
};
template <typename T,typename U,....> 
classname <T,U,...>::Classname(arguments)
{
    .
    .
    .
    .
}
returntype classname <T,U,...>::funcname(arguments)
{
    .
    .
    .
    .
}
inside main create an object using
classname <datatype , datatype,....> obj(constructor argument);
*/
template <typename T,typename U>
class Trial
{
    private:
    T* ptr;//variable of type template must be pointer
    U* ptr2;
    int size;

public:
    Trial(T arr[], U arr2[], int s);//constructor declaration
    ~Trial() { delete[] ptr; delete[] ptr2; }
    void print();//function declaration
};
template <typename T> 
Trial<T, U>::Trial(T arr[], U arr2[], int s)
{
    this->ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
      {  ptr[i] = arr[i];}

    this->ptr2 = new U[s];
    size = s;
    for (int i = 0; i < size; i++)
      {  ptr2[i] = arr2[i];}


}
template <typename T>
void Trial<T,U>::print()
{
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr + i);
    cout << endl;
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr2 + i);
    cout << endl;
}
int main()
{
    int arr[10] = { 1, 2, 3, 4, 5 };
    int arr2[10] = { 1, 2, 3, 4, 5,6,7,8,9 };
    Trial<int, int> a(arr,arr2, 10);//a is a n object of trial clss
    a.print();
 return 0;
}