#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
    int *ptr1; //wild pointer
    int *ptr2=NULL; //wild pointer
    int *ptr3=nullptr; // wild pointer

    cout << ptr1 << endl; //Garbage value => it mean it can be any number
    cout << ptr2 << endl; //0
    cout << ptr3 << endl; //0

    int a = 100;
    void *ptr = &a;
    cout << ptr << endl; //address
     cout << *(int *)ptr << endl; //100 
     //modern way
     cout << *static_cast<int *>(ptr) << endl; //10
}
