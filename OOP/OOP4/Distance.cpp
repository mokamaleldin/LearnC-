#include <iostream>
#include <vector>
#include <string>
#include "Distance.h"
using namespace std;

Distance::Distance():feet(0),inches(0.0)
{
}
Distance::Distance(int f,float i):feet(f),inches(i)
{
}


void Distance::print(){
    cout<<endl<<"Feet= "<<feet<<" "<<"inches= "<<inches<<endl;
}

Distance Distance::addDistance(Distance d2){
    Distance result;
    result.feet = feet + d2.feet;
    result.inches = inches + d2.inches;
    return result;
}

int main()
{
    Distance d1(5,4.52);
    Distance d2(7, 4.2);
    Distance d3 =d1.addDistance(d2);
    d3.print(); //Feet= 12 inches= 8.72
}
