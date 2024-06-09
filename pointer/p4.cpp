#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
    int nums[]{10, 20, 30, 40};

    cout << nums << endl; //1st Element => memory address
    cout << &nums[0] << endl; //1st Element => memory address

    cout << *nums << endl; //10
    cout << nums[0] << endl; //10

    int *ptr = nums;
    cout << ptr << endl; //1st Element => memory address
    cout << *ptr << endl; //1st Element => 10

    ptr++;
    cout << ptr << endl; // 2st Element => memory address
    cout << *ptr << endl; //2st Element => 20
}
 