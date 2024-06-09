#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
--- Why We Use Iterators
  [1] Simplify The Code => No Need To See The Full Iteration On Containers
  [2] Support For Many Algorithms Like Sorting And Finding
  [3] Allow The Dealing With One Element Without The Need To Load The Full List
  [4] Work The Same Way With All Containers
  [5] It Reduce The Complexity And Execution Time Of The Application

[*] Dereference => Dont Print The Iterator, Print What Its Point To
*/
int main()
{
    vector<int> v = {3, 11, 99, 7}; 
    vector<int>::iterator it = v.begin();

    auto ite = v.begin() + 1;

    cout << "first Element is: " << *it << endl;
    cout << "second Element is: " << *ite << endl;
}
