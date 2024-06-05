#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    string job;
    float salary;

public:
    Employee(string n,string j,float s){
        name = n;
        job = j;
        salary = s;
    }
};

// it is inheritance from Base
class Student
{
private:
    string department;
    string research;

public:
    Student(string d,string ra){
        department = d;
        research = ra;
    }
};

class teachingAssistang:public Student,public Employee
{
private:

public:
    teachingAssistang(string n,string j,float s,string d,string ra):Employee(n,j,s),Student(d,ra)
    {

    }
};



int main()
{
    teachingAssistang t1("mohamd", "TA", 5000, "Isu", "DataBasese");
}
