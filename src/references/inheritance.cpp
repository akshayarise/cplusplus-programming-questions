// Run Time Polymorphism.
#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void nameVehicle()
    {
        cout << "This is Vehicle Class" << endl;
    }
};

class Car : public Vehicle
{
public:
    virtual void nameVehicle()
    {
        cout << "This  is Car Class" << endl;
    }
};

void info(Vehicle v1)
{
    v1.nameVehicle();
}

int main()
{
    Car c1;
    info(c1);
    return 0;
}