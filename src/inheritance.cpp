// inheritance with public members

#include <iostream>
using namespace std;

class Vehicle
{
    int price = 23;

public:
    string brand = "Hyundai";
};

class Car : public Vehicle
{
};

int main()
{
    Car obj1;
    cout << "brand: " << obj1.brand << endl;
    return 0;
}