#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> v1 = {3, 11, 99, 7};
    vector<int> v3 = {444, 55,3, 11, 99, 7};
    vector<int> v2 (4,34);

    for (int i = 0; i < v1.size();i++){
        cout << " " << v1.at(i);
    }

    cout << "\n==============\n";

    for (int i = 0; i < v3.size();i++){
        cout << " " << v3.at(i);
    }
    cout << "\n==============\n";

    for (int i = 0; i < v2.size();i++){
        cout << " " << v2.at(i);
    }
    cout << "\n==============\n"; 

    //now i want to make a rezise for the v3
    cout << "number of Elements is: " << v3.size() << endl;
    v3.push_back(155); // to add any things to the vectors i used push_back
    cout << "number of Elements is: " << v3.size() << endl;
}
