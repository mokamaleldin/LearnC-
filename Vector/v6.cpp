#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> v = {3, 11, 99, 7}; 
    vector<int>::iterator first = v.begin();
    vector<int>::iterator last = v.end()-1;

    cout << "first Element is: " << *first << endl; //3
    cout << "second Element is: " << first[1] << endl;//11
    cout << "third Element is: " << first[2] << endl;//99
    
    cout << "last Element is: " << *last << endl;//7
    cout << "last Element is: " << *(last-1) << endl;//99

    advance(first, 3); // first => 7   تقدم 3 خظوات 
    cout << "first Element is: " << *first << endl; //7

}
