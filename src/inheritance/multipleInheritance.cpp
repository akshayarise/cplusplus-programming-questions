// multiple Inheritance example
#include <iostream>
using namespace std;

class College
{
public:
    string collegeName = "IIT Bombay";
};

class Department
{
public:
    string departmentName = "Mechanical Engineering";
};

class Student : public College, public Department
{
public:
    string studentName = "Akshay Kumar";
};

int main()
{
    Student obj1;
    cout << "college name: " << obj1.collegeName << endl;
    cout << "department name: " << obj1.departmentName << endl;
    cout << "student name: " << obj1.studentName << endl;

    return 0;
}