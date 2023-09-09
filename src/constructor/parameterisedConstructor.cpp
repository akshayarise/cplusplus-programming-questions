#include <iostream>
using namespace std;

class Apartment
{
    string name, price, location;

public:
    Apartment(string apart_name, string apart_price, string apart_location)
    {
        name = apart_name;
        price = apart_price;
        location = apart_location;
    }
    string info();
};
string Apartment::info()
{
    return "name is: " + name + " price is: " + price + " location is: " + location;
};

int main()
{
    Apartment obj1("Green Valley", "6 crore", "Sohna Road");
    cout << obj1.info();

    return 0;
}