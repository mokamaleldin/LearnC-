#include <iostream>
#include <vector>
#include <string>
#include "Person.h"

using namespace std;

class Student: public Person
{
private :
    int level;
    float gpa;
    string depart;
    int sNumber;

public:
   // i import it from the person constructor
   Student(string n,string g, float a,int l,float gg,string d,int s):Person( n, g,  a){
      level = l;
      gpa = gg;
      depart = d;
      sNumber = s;
   }

    void setLevel(int l){
        level = l;
    }
    int getLevel(){
        return level;
     }
     void setGpa(float g){
        gpa = g;
     }
    float getGpa(){
        return gpa;
     }
     void setDepart(string d){
        depart = d;
     }
    string getDepart(){
        return depart ;
     }
     void setSNumber(int s){
        sNumber = s;
     }
    int  getSNumber(){
        return sNumber;
     }

     void display(){
        Person::display(); //import this function form Person
        cout << "Depart: " << depart << " level: " << level << " gpa: " << gpa << " student number: " << sNumber<<endl;
     }
};
