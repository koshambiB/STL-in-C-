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
    //declaration of a vector
    vector <int> sample;
    //adding elements to a declared vector
    sample.push_back(11);
    sample.push_back(13);
    for (int i = 1; i <= 5; i++) 
        sample.push_back(i);
    cout<<"Sample : ";
    for(auto itr = sample.begin(); itr < sample.end();itr++)
    {
        cout<< *itr <<",";
    }
    cout<<endl;
    //Initialization With a Single Value
    vector <double> sample1(5,6.0);
    // Initializing vector with existing array values
    cout<<"Sample1 : ";
    for(auto itr = sample1.begin(); itr < sample1.end();itr++)
    {
        cout<< *itr <<",";
    }
    cout<<endl;
    int arr[] = {10, 20, 5, 23 ,42 , 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> sample2(arr, arr+n);
    cout<<"Sample2 : ";
    for(auto itr = sample2.begin(); itr < sample2.end();itr++)
    {
        cout<< *itr <<",";
    }
    cout<<endl;

    cout << "offset dereference : "<<sample2[3] <<endl;
 return 0;
}