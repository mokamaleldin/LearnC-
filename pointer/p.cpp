#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*
  Pointers

  What Are Pointers ?
  --- A Variable That Store Memory Address Of Other Variable

  Why We Need Pointers ?
  --- To Iterate On Elements In Data Structures Like Array
  --- Pass Function To Other Function
  --- Dynamic Memory Allocation

  Benefits Of Using Pointers
  --- Reduce The Code and Increase Performance

  Note
  --- There's Raw Pointer And Smart Pointer

  Syntax
  --- Declare A Pointer
  --- Print Variable Memory Address => Reference Operator || Address Of [&]
  --- Print Value That Memory Address Point To => Dereference Operator [*]
  --- Change Variable Value With Pointer
*/

int main()
{
    int num = 100;
    int *ptr = &num;

    cout << "Value " << num << endl; //100
    cout << "Address " << &num << endl; //address
    cout << "Address " << ptr << endl; //address
    cout << "value " << *ptr << endl; //100
}
