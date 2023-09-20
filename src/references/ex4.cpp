#include <iostream>
using namespace std;

class Student
{
public:
    string name = "Akshay";
    int rollNo = 99;
};

void info(Student &s1)
{
    cout << s1.name << endl;
    cout << s1.rollNo << endl;
    s1.name = "Rahul";
}

int main()
{
    Student s2;
    info(s2);
    cout << s2.name << endl;
    return 0;
}