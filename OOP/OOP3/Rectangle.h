#include <iostream>
using namespace std;
class Rectangle
{
private:
    float length;
    float width;
public:
     void setLength(float l);
    void setWidth(float w);
    float getLength();
    float getWidth();
    float space();
    Rectangle(float l, float w);
    Rectangle();
    ~Rectangle();
};

