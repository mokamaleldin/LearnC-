#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

void Car::setMaker(string m){
    maker=m;
}

string Car::getMaker(){
    return maker;
}
void Car::setModel(int m){
    model = m;
}

int Car::getModel(){
    return model;
}


int main(){
    Car c1;
    c1.setMaker("Honda");
    c1.setModel(2018);
    cout<<"This car make with "<<c1.getMaker()<<endl;
    cout<<"This car model is "<<c1.getModel()<<endl;
}