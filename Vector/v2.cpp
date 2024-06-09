#include <iostream>
#include <vector>
#include <string>
#include <array>
using namespace std;

void cals(vector<int>numsVector){
    int result = 0;
    for (int i = 0; i < numsVector.size();i++){
        result += numsVector[i];
    }
    cout << "Result is: " << result << endl;
}

int main()  
{
    vector<int> arrayOfNumbers = {10, 20, 3, 55, 855};
    cals(arrayOfNumbers);
}
