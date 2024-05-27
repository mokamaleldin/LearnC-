#include <iostream>
#include <vector>
#include <string>
using namespace std;



class Shape
{
private:
    string color;

public:
    Shape(string c){
        color = c;
    };
    virtual int area(){
        cout << "parent class area: " << endl;
        return 0;
    }
    virtual void draw(){
        cout << "Draw parent shape in " << color << " color" << endl;
    }
    virtual void erase()
    {
        cout << "Erase the parent shape " << endl;
    }
    ~Shape(){};
};

class Rectangle :public Shape
{
private:
    int lenght;
    int width;

public:
    Rectangle(int l,int w,string c):Shape(c){
        lenght = l;
        width = w;
    }
    int area(){
        cout << "Rectangle class area: " << (width * lenght) << endl;
        return (width * lenght);
    }
    void draw(){
        cout << "Draw Rectangle " << endl;
    }
    void erase(){
        cout << "The Retangle Erased" << endl;
    }
};

class Circle :public Shape
{
private:
    int rediuse;

public:
    Circle(int r,string c):Shape(c){
        rediuse = r;
    }
    int area(){
        cout << "Circle class area: " << 3.14 * (rediuse * rediuse) << endl;
        return (3.14 * rediuse * rediuse);
    }
    void draw(){
        cout << "Draw Circle " << endl;
    }
    void erase(){
        cout << "The Circle Erased" << endl;
    }
};

int main(){

    Shape *shap_ptr;
    Rectangle r(10, 7, "red");
    Circle c(5, "blue");

    shap_ptr = &r;
    shap_ptr->area();
    shap_ptr->draw();

    shap_ptr = &c;
    shap_ptr->area();
    shap_ptr->draw();

}