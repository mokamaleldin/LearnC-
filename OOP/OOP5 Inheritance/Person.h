#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    string gender;
    float age;

public:
    Person(){
        name = "unKnow";
        gender = "unKnow";
        age = 0;
    }
    Person(string n,string g, float a){
        name = n;
        gender = g;
        age = a;
    }
    void setAge(float a){
        age = a;
    }
    float getAge(){
        return age;
    }
    void setName(string n){
        name = n ;
    }
    string getName(){
        return name;
    }
    void setGender(string g){
        gender = g;
    }
    string getGender(){
        return gender;
    }
    void display(){
        cout << "the person basic data" << endl;
        cout << "Name: " << name << " age: " << age << " gender: " << gender << endl;
    }
};


