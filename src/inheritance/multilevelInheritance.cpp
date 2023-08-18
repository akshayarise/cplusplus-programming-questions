#include <iostream>
using namespace std;

class College
{
public:
    string field = "Engineering";
};

class IIT : public College
{
public:
    string name = "IIT Madras";
    int fees = 30000;
};

class CSE : public IIT
{
public:
    string subject = "Operating System";
};

int main()
{
    CSE obj1;
    cout << "College field: " << obj1.field << endl;
    cout << "College name: " << obj1.name << endl;
    cout << "College fees: " << obj1.fees << endl;
    cout << "College subject: " << obj1.subject << endl;
    return 0;
}