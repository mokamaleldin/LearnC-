#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> v = {3, 11, 99, 7}; 
    vector<int>::iterator it;

    for (it = v.begin(); it < v.end();++it){
        cout << "number " << *it << endl;
    }

    //Ranged Loop 
    for(int val : v){
    cout << ": " << val << endl;
    }

    //Ranged loop with array
    int number[] = {30, 40, 50, 60, 70};
    for (int myNumber : number)
    {
        cout << myNumber << endl;
    }
}
