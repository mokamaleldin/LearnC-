#include <iostream>
#include <vector>
#include <string>
#include "Distance"
using namespace std;

Distance::Distance():feet(0),inches(0.0)
{
}
Distance::Distance(int f,float i):feet(f),inches(i)
{
}

// Copy Constructor
void Distance::setDistance(int f,float i)
{
}

void Distance::print(){
    cout<<"Feet= "<<feet<<" "<<"inches= "<<inches;
}

Distance::~Distance()
{
}

int main()
{
    Distance d1;
    Distance d2(5,3.5);
    Distance d3(d2); // The default Copy Constructor
    d3.print();
    d2.print();
    d3.setDistance(7,4.25);
    Distance d4=d3;
    d4.print();
}
