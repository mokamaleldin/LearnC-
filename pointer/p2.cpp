#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
    int nums[]{10, 20, 30, 40};
    int *ptr = &nums[0];

    cout << "first Element\n\n";
    cout << "Value with index " << nums[0] << endl; //10
    cout << "value with pointer: " << *ptr << endl; //10
    cout << "Address with index " << &nums[0] << endl; //address
    cout << "Address with pointer: " << ptr << endl; //address

    cout << "\n\nsecond Element\n\n";
    cout << "Value with index " << nums[1] << endl; //20
    cout << "value with pointer: " << *(ptr+1) << endl; //20
    cout << "Address with index " << &nums[1] << endl; //address
    cout << "Address with pointer: " << ptr+1 << endl; //address
}
