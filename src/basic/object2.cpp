#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    Student *info();
};

Student *Student::info()
{
    name = "Akshay";
    rollNo = 1;
    cout << name << endl
         << rollNo << endl;
    return this;
}

int main()
{
    Student s1;
    Student *ptr = &s1;
    cout << "*ptr---------" << ptr << endl;
    ptr->info();
    Student *p = s1.info();
    cout << p;
    return 0;
}