// you cannot access the private methods with object in C++.
#include <iostream>
using namespace std;

class Car
{
private:
    void carName()
    {
        cout << "Honda City";
    }
    void carSpeed()
    {
        cout << "250Km/hr";
    }
};

int main()
{
    Car obj1;
    obj1.carName();
    obj1.carSpeed();
    return 0;
}