#include <iostream>
#include <vector>
#include <string>
#include "Student.h"

using namespace std;


int main()
{
    Student s1;
    s1.setAge(18);
    s1.setName("mohamed");
    s1.setGender("Male");
    s1.setGpa(3.5);
    s1.display();
}
  