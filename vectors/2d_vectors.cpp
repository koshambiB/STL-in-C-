#include<iostream>
#include <vector>
#include <algorithm>
#include<numeric>
#include<string>
#include <list>
using namespace std;
int main()
{
    vector <vector<int>> vect{ {1, 2},{4, 5, 6},{7, 8, 9, 10}  };
    for (int i = 0; i < vect.size(); i++)  
    { 
        for (int j = 0; j < vect[i].size(); j++) 
        { 
            cout << vect[i][j] << " "; 
        }     
        cout << endl; 
    } 
    cout<<"--------------------"<<endl;
    int row = 5; 
    int column[] = {5, 3, 4, 2, 1};  //number of columns in each row--first row will have 5 columns
    vector <vector<int>> vec(row);
    for(int i = 0; i < row; i++) 
    {    
        /* Declaring the size of that column. */
        int col = column[i];  
        vec[i] = vector<int>(col); 
        for(int j = 0; j < col; j++) 
        { 
            vec[i][j] = j + 1; 
        }     
    } 
    for(int i = 0; i < row; i++) 
    { 
        for (int j = 0; j < vec[i].size(); j++) 
        { 
            cout << vec[i][j] << " "; 
        }     
        cout << endl; 
    } 

    int n = 4; 
    int m = 5; 
    cout<<"--------------------"<<endl;
    //"n" vectors each of size "m". 
    vector<vector<int>> vect2( n , vector<int> (m)); 
    for(int i = 0; i < n; i++) 
    { 
        for(int j = 0; j < m; j++) 
        { 
            vect2[i][j] = j + i + 1; 
        } 
    } 
  
    for(int i = 0; i < n; i++) 
    { 
        for(int j = 0; j < m; j++) 
        { 
            cout << vect2[i][j] << " "; 
        } 
        cout << endl; 
    }  
 return 0;
}