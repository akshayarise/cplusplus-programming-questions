// polymorphism example
#include <iostream>
using namespace std;

class Car
{
public:
    int price = 200000;
};

class Ford : public Car
{
public:
    int price = 1300000;
};

class Tata : public Car
{
public:
    int price = 1500000;
};

class Mg : public Car
{
public:
    int price = 2000000;
};

int main()
{
    Car obj1;
    Ford obj2;
    Tata obj3;
    Mg obj4;

    cout << "Car price is: " << obj1.price << endl;
    cout << "Ford price is: " << obj2.price << endl;
    cout << "Tata price is: " << obj3.price << endl;
    cout << "Mg price is: " << obj4.price << endl;

    return 0;
}