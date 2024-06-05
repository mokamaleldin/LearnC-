#include <iostream>
#include <vector>
#include <string>
using namespace std;

// vector <Type> varibleNam;

int main()
{
    vector<int> v1 = {3, 11, 99, 7};
    vector<int> v2 (5,33);

    for (int i = 0; i < v1.size();i++){
        cout << " " << v1.at(i);
    }

    cout << "\n==============\n";

    for (int i = 0; i < v2.size();i++){
        cout << " " << v2.at(i);
    }
}
