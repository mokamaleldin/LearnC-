#include <iostream>
using namespace std;

class Employee {
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
        cout<<"Name - "<<Name<<endl;
        cout<<"Company - "<<Company<<endl;
        cout<<"Age - "<<Age<<endl;
    }
};

/*
                **************************************
                *                                    *
                *                                    *
                *         Mohamed Kamaleldin         *
                *                                    *
                *                                    *
                **************************************

*/

int main()
{
    Employee employee1;
    employee1.Name="Mohamed";
    employee1.Age=18;
    employee1.Company="Mkee";
    employee1.IntroduceYourself();
    
    Employee employee2;
    employee2.Name="Amr";
    employee2.Age=19;
    employee2.Company="ID8";
    employee2.IntroduceYourself();

    cout<<"\n";
}