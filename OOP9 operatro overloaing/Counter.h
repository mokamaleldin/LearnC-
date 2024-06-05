#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Counter
{
private:
    unsigned int count;

public:
    Counter():count(0){

    };
    Counter(int c):count(c){}

    int getCount(){
        return count;
    }
};
