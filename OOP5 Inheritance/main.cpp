#include <iostream>
#include <vector>
#include <string>
#include "Student.h"

using namespace std;


int main()
{
    Student s2("Ali", "Male", 25, 4, 3.8, "isu", 545454);
    s2.display();
    // output
    // the person basic data
    // Name: Ali age: 25 gender: Male
    // Depart: isu level: 4 gpa: 3.8 student number: 545454
}
  