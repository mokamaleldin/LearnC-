#include <iostream>
#include <vector>
#include <string>
#include "Counter.h"
#include "Distance.h"
using namespace std;


int main(){
    int i = 5, j = 10;
    cout << i +j << endl;
    string a = "hi", b = "you";
    cout << a + b << endl;

    Counter c1(5);
    Counter c2(10);
    Counter c2(c1+c2);

}