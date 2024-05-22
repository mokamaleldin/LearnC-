#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

//Constructor 
Car::Car(string m,int mod,string c):maker (m),model (mod),colors (c)
{
}
//Destructor
Car::~Car(){
    cout<<"thanks to use my program"<<endl;
    cout<<"Good Bye"<<endl;
}

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

string Car::getColors(){
    return colors;
}


int main(){
    Car c1("Toyota",2020,"Black");
    cout<<"This car make with "<<c1.getMaker()<<endl;
    cout<<"This car model is "<<c1.getModel()<<endl;
    cout<<"This car color is "<<c1.getColors()<<endl;
}