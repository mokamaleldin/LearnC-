#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    float age;

public:
    Person()
    {
        name = "unKnow";
        age = 0;
    }
    Person(string n, float a)
    {
        name = n;
        age = a;
    }
    friend class printClass;
};

class printClass
{

public:
    void print(Person p)
    {
        cout << "The Basicc Data of person" << endl;
        cout << "name " << p.name << " Age " << p.age << endl;
    }
};

int main()
{
    Person p("mohamed", 15);
    printClass pp;
    pp.print(p);
}
