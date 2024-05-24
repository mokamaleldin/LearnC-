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
     void setSNumber(int n){
        sNumber = n;
     }
    int  getSNumber(){
        return sNumber;
     }
};
