#include <iostream>
#include <vector>
#include <string>
#include "Student.h"

using namespace std;
class PostGraduatedStudent : public Student
{
private:
    string research;

public:
    PostGraduatedStudent(string n,string g, float a,int l,float gg,string d,int s,string r):Student(n,g,a,l,gg,d,s){
        research = r;
    }
    void setResearch(string r){
        research = r;
    }
    string getResearch() {
        return research;
    }

    void display(){
        Student::display(); //import this function form Student
        cout << "research: " << research <<endl;
     }
};

