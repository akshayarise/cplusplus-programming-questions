// public and private class members
#include <iostream>
using namespace std;

class Car
{
    string brand;

public:
    int price;
};

int main()
{
    Car obj1;
    obj1.brand = "Ford";
    obj1.price = 1300000;

    return 0;
}