#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name){ //setter
        Name=name;
    }
    string getName(){ //getter
        return Name;
    }
    void setCompnay(string company){
        Company=company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age=age;
    }
    int getAge(){
        return Age;
    }
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
    void AskForPromotion(){
        if(Age > 30)
            cout<<Name<<" got promoted"<<endl;
        else
            cout<<Name<<", sorry no promoted for you! "<<endl;
        
    }
};

int main()
{
    Employee employee1= Employee("Mohamed","MKee",18);
    Employee employee2= Employee("Ali","Apple",35);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
}