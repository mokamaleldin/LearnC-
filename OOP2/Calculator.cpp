#include <iostream>
#include "Calculator.h"
using namespace std;

int Calculator::add(int num1,int num2){
    return num1+num2;
}
int Calculator::add(int num1,int num2,int num3){
    return num1+num2+num3;
}

double Calculator::add(double num1, double num2) {
    return num1 + num2;
}

Calculator::Calculator()
{
}

Calculator::~Calculator()
{
}



int main(){
   Calculator c1;
   cout<<"this is the version 1 "<<c1.add(3,7)<<endl;
   cout<<"this is the version 2 "<<c1.add(3,7,10)<<endl;
   cout<<"this is the version 3 "<<c1.add(3.6,7.9)<<endl;
}