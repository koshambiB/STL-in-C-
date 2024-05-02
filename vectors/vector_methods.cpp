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
    vector <int> sample1(5,6);
    vector<int> temp{ 2, 5, 9, 0, 3, 10 }; 
    //empty() -returns true or false
    if (sample2.empty()) 
    {
        cout << "True"<<endl;
    }
    else {
        cout << "False"<<endl;
    }
    //.front() and .back() -direct reference to the first and last element
    //.size()-number of elements
    cout << sample2.size()<<endl;
    //max_size()-the maximum number of elements that can be held by the vector container. 
    cout<<sample2.max_size()<<endl;
    //capacity()  the size of the storage space currently allocated for the vector, expressed in terms of elements.
    cout<<sample2.capacity()<<endl;
    //resize()-resizes the vector by creating or deleting memory space-adds zero for extra elements and removes from back
    //shrink_to_fit()-removes element w/o destroying memory space
    //-------------------------------------------------------------------------------------------------------------
    //vector::push_back(value)- push elements into a vector from the back. 
    // vector::pop_back()- removes elements from a vector from the back
    sample2.push_back(6); 
    //vector::operator= assignment of one vector to another but the datatype of two vectors must be same
    sample1=sample2;
    for (auto itr = sample1.begin(); itr != sample1.end(); itr++)
        cout << ' ' << *itr;
    cout<<endl;
    sample1.pop_back();
    //vector::insert(position, number of times to insert(optional),value)  inserts new elements before the element at the specified position
    sample1.insert(sample1.begin() + 3, 2, 100);
    //can also insert a range of elements
    //insert(position,(inclusive)starting iterator from source,(exclusive)ending iterator from source)
    sample1.insert(sample1.begin() + 5, temp.begin() + 2, temp.begin() + 5); 
    cout << "after insert()" <<endl;
    for (auto itr = sample1.begin(); itr != sample1.end(); itr++)
        cout << ' ' << *itr;
    cout<<endl;
    //.clear()-removes all elements //
    //.erase(position1,position2)-removes from position1 to position1 or just at that position
    sample1.erase(sample1.begin()+5,sample1.end()-2);
    sample1.erase(sample1.begin());
    cout << "after removal()" <<endl;
    for (auto itr = sample1.begin(); itr != sample1.end(); itr++)
        cout << ' ' << *itr;
    cout<<endl;





 return 0;
}