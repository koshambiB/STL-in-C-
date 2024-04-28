#include<iostream>
#include<iostream>
#include <vector>
#include <algorithm>
#include<numeric>
#include<string>
#include <list>
using namespace std;
int main()
{
    int arr[] = {10, 20, 5, 23 ,42 , 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> sample2(arr, arr+n);
    cout << "Size : " << sample2.size(); //maximum number of elements that the vector currently holds.
    cout << "\nCapacity : " << sample2.capacity(); 
    cout << "\nMax_Size : " << sample2.max_size(); //maximum number of elements that the vector can hold.
    cout<<endl;
    sample2.resize(4);//resizing the vector to hold 4 elements
    for(auto itr = sample2.begin(); itr < sample2.end();itr++)
    {
        cout<< *itr <<"  ";
    }
    cout<<endl;
 return 0;
}