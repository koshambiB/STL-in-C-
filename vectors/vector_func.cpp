#include<iostream>
#include <vector>
#include <algorithm>
#include<numeric>
#include<string>
#include <list>
using namespace std;
void func(vector<int> vect) 
{
    vect.push_back(30);
 } 
void func2(vector<int> &vect)
 { vect.push_back(30);
  } 
void modifyVector(vector<vector<int>>& vect) {
  // Insert values in the first three rows

  for (int i = 0; i < 3; ++i) {
    int j =vect[i].size();
    vect[i].resize(j+1);
    vect[i][j] = 10 + i;
  }

  // Add a new row with values {12, 14, 16}
  vect.push_back({12, 14, 16});
}

// Function to display the 2D vector
void displayVector(const vector<vector<int>>& vect) {
  for (int i = 0; i < vect.size(); i++)  
    { 
        for (int j = 0; j < vect[i].size(); j++) 
        { 
            cout << vect[i][j] << " "; 
        }     
        cout << endl; 
}}
int main()
{
    int arr[] = {10, 20, 5, 23 ,42 , 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> sample2(arr, arr+n);
    //pass by value
    func(sample2);
    // vect remains unchanged after function 
    for (auto itr = sample2.begin(); itr != sample2.end(); itr++)
        cout << ' ' << *itr;
    cout<<endl;
    cout<<"--------------------"<<endl;
    //pass by reference
    func2(sample2); 
    // vect changed after function 
    for (auto itr = sample2.begin(); itr != sample2.end(); itr++)
        cout << ' ' << *itr;
    cout<<endl;
    cout<<"--------------------"<<endl;
    //2d vector passing
    /*Create a 2d vector of 2 rows with 3 columns each and pass it as a reference to a function that performs the following operation.
     The function should insert value 10 to the first row, 11 to the second row ,12 to the third row and also adds {12 ,14,16} as the fourth row .
     Also create a display function to display the modified vector */
    vector <vector<int>> vect{ {1, 2},{4, 5, 6},{7, 8, 9, 10}  };
    modifyVector(vect);
    displayVector(vect);
    


 return 0;
}