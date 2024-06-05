#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

int Car::count = 0;

Car::Car(string m,int mod,string c):maker (m),model (mod),colors (c)
{
    count++;
}
Car::~Car(){
    count--;
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


int Car::getCarsCount()
{
    return count;
}

int main(){
    Car c1("Toyota",2020,"Black");
    cout << "counter reached: " << c1.getCarsCount() << endl; //counter reached: 1

    Car c2("Toyota",2020,"Black");
    cout << "counter reached: " << c2.getCarsCount() << endl; //counter reached: 1

        Car c3("Toyota",2020,"Black");
    cout << "counter reached: " << c3.getCarsCount() << endl; //counter reached: 1
}