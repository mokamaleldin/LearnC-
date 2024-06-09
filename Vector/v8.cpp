#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {20,55,-6,-1,3,20, 11, 100,20,99, 7}; 
    vector<int>::iterator it;

    int val = 20;
    int countTimes = count(v.begin(), v.end(), val);

    //here it will give me how many times i have 20 in the vectors i have 
    cout<< "number " << val << " found " << countTimes << " times "<<endl;

    cout << "============\n";

    //here it will print all the number in the vector for me with out sort 
    for (int &n : v)
    {
        cout << n << endl;
    }

    cout << "============\n";

    //here it will sort the number and give me it 
    sort(v.begin(), v.end());
    for (int &n : v)
    {
        cout << n << endl;
    }

}
