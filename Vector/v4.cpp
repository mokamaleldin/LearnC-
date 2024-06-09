/*
  Vector
  - size()     => Current Number Of Elements
  - max_size() => Maximum Number Of Elements
  - capacity() => Storage Capacity
  - front()    => First Element
  - back()     => Last Element
  - clear()    => Clear All Elements From Vector
  - empty()    => Check If Its Empty Or No
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> nums = { 10, 20, 30, 40 };
  cout << nums.size() << "\n";
  cout << nums.max_size() << "\n";
  nums.push_back(50);
  nums.push_back(60);
  nums.push_back(70);
  nums.push_back(80);
  cout << nums.capacity() << "\n";
  cout << nums.front() << "\n";
  cout << nums.at(0) << "\n";
  cout << nums.back() << "\n";
  cout << nums.at(nums.size() - 1) << "\n";
  nums.clear();
  cout << nums.size() << "\n";
  nums.push_back(100);
  if (nums.empty())
  {
    cout << "Vector Is Empty\n";
  }
  else
  {
    cout << "Vector Is Not Empty\n";
  }
  return 0;
}