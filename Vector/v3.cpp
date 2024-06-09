#include <iostream>
#include <vector>
using namespace std;

/*
  Vector

  - Access
  --- at()
  --- Square Brackets [] < Do Not Use

  - Add
  --- push_back => Add Element To The End

  - Update
  --- at()

  - Delete
  --- pop_back() => Remove Element From The End
*/

int main()  
{
    vector<int> nums = {10, 20, 3, 55, 855};

    cout << nums.at(1) << endl;//20

    cout << nums.size() << endl; //5
    nums.push_back(55);
    cout << nums.size() << endl; //6

    nums.at(1) = 70;
    cout << nums.at(1) << endl;//70

    nums.pop_back();
    cout << nums.size() << endl; // 5
}
