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
    //to erase the entire vector
    sample2.erase(sample2.begin(),sample2.end());
    //to erase only certain elements
    sample2.erase(sample2.begin()+1,sample2.end()-2);

 return 0;
}