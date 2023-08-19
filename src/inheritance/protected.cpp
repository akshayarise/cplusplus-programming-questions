// protected access specifier example.
#include <iostream>
using namespace std;

class Vehicle
{
protected:
    int wheels = 4;
};

class Car : public Vehicle
{
public:
    string brand = "Volkswagon";
    int carWheel()
    {
        return wheels;
    }
};

int main()
{
    Car obj1;
    cout << "wheels are: " << obj1.carWheel() << endl;
    cout << "brand is: " << obj1.brand << endl;

    return 0;
}