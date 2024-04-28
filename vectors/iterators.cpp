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
    vector <int> :: iterator i;
    vector <int> ar = {1,2,3,4,5,6,7,8};
    //ptr iterator points to the first element in the vector
    vector<int> :: iterator ptr= ar.begin();
    //ftr iterator points to the  theoretical element that follows the last element in the vector
    vector<int> :: iterator ftr= ar.end();

    cout << "Output of begin and end: "; 
    for (auto i = ar.begin(); i != ar.end(); ++i) 
    {
        cout << *i << " ";
    }
    cout << endl;

    //rbegin() points to the last element while rend() points to the theoretical element that preceeds the first element in the vector
    cout << "Output of rbegin and rend: "; 
    for (auto i = ar.rbegin(); i != ar.rend(); ++i) 
    {
        cout << *i << " "; 
    }
    cout<<endl;

    // cbegin(), cend(), crbegin() and crend() which are used to return constant iterators
 return 0;
}