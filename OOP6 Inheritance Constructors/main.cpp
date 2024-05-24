#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Base
{
private:
    int x = 0;
public:
    Base(){
        x = 0;
        cout << "Base default constructor \n";
    }
};

// it is inheritance from Base
class Derived : public Base
{
private:
    int y;
public:
    Derived(){
        y = 0;
        cout << "Derived default constructor \n";
    }
    Derived(int i){
        y = i;
        cout << "Derived parameterized constructor \n";
    }
};

int main()
{
    Base b;
    Derived d1; //object form the base first and then enter in the Derived
    Derived d2(5); //object form the base first and then enter in the Derived
    // output
    
}
