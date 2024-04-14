#include <iostream>
using namespace std;

class Employee {
private:
    string Name;
    string Company;
    int Age;

public:
    void
    Employee(string name,string company,int age){
        Name = name;
        Company=company;
        Age=age;
    }

    void IntroduceYourself(){
        cout<<"Name - "<<Name<<endl;
        cout<<"Company - "<<Company<<endl;
        cout<<"Age - "<<Age<<endl;
    }
};

int main()
{
    Employee employee1=Employee("Mohamed","MKee",18);
    employee1.IntroduceYourself();
    Employee employee2=Employee("Ali","ID8",35);
    employee2.IntroduceYourself();
    cout<<"\n";
}