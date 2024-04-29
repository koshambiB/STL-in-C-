/*You're given a warehouse management system where items of various types need to be stacked and later retrieved for shipment. Each item has a unique identifier, and the warehouse manager needs a flexible solution to handle items of different types efficiently.Your task is to implement a stack class template that can handle items of any type. The stack should support the following operations:

· Push: Add an item to the top of the stack.

· Pop: Remove and retrieve the item from the top of the stack.

· IsEmpty: Check if the stack is empty.*/
#include <iostream>
#include <string>
using namespace std;
template <class T>
class Warehouse
{
    private:
    T* ptr;
    int top;//indexof top element
    int size;//size of stack
    string id;
    public:
    Warehouse(string id,int size);
    void push(string id );
    T pop();
    bool isEmpty();
    void display();
    ~Warehouse() {
    delete[] ptr;
  }

};
template <class T>
Warehouse<T>::Warehouse(string id , int size)
{
    this->ptr = new T[size];
    this->id=id;
    this->top =-1;
}
template <class T>
void Warehouse<T>::push(string id )
{
    if(top== size)
    {
        cout <<"stack is full"<<endl;
    }
    ptr[++top] = id;
}
template <class T>
T Warehouse<T>::pop( )
{
    if(top==-1)
    {
        cout << "stack is empty" <<endl;
        return T();
    }
    int temp;
    temp=top;
    top--;
    
    return  ptr[temp];
}
template <class T>
bool Warehouse<T>::isEmpty( )
{
    if(top==-1)
    return true;
    else
    return false;
}
template <class T>
void Warehouse<T>::display()
{
    for (int i = 0; i <= top; i++)
        cout <<  *(ptr + i) <<" ";
    cout << endl;
}
int main()
{
    string arr[] ={"tg","gbh","h"};
    Warehouse<string> obj("",10);
    cout << obj.isEmpty()<<endl;
    cout << obj.pop()<<endl;
    for(int i =0;i<3;i++)
    {
    obj.push(arr[i]);
    }
    obj.display();
    cout << obj.pop()<<endl;
    obj.display();
    cout << obj.isEmpty()<<endl;
    return 0;
}