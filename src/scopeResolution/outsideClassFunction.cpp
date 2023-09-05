#include <iostream>
using namespace std;

class Cars
{
public:
    string name;
    void printName();
};

void Cars::printName()
{
    name = "Volkswagon";
    cout << "Car name is: " << name << endl;
}

int main()
{
    Cars obj;
    obj.printName();
    return 0;
}