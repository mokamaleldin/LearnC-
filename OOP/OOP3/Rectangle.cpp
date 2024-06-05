#include <iostream>
#include "Rectangle.h"
using namespace std;


Rectangle::Rectangle(float l,float w):length(l),width(w)
{
}

Rectangle::Rectangle():length(8),width(10)
{
}

Rectangle::~Rectangle()
{
}
void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

float Rectangle::getLength() {
    return length;
}

float Rectangle::getWidth() {
    return width;
}
float Rectangle::space() {
    return width*length;
}


int main(){
    Rectangle r1(2, 5);
    Rectangle r2;
    cout<<r1.space()<<endl;//10
    cout<<r2.space()<<endl;//80
}