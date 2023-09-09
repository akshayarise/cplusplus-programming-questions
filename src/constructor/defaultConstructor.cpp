#include <iostream>
using namespace std;

class Apartment
{
public:
    string name, price, size;

    Apartment()
    {
        name = "ATS Orchard";
        price = "3 Crore";
        size = "250 gaj";
    }
    void apartmentInfo();
};

void Apartment::apartmentInfo()
{
    cout << "name is: " << name << endl;
    cout << "price is: " << price << endl;
    cout << "size is: " << size << endl;
}

int main()
{
    Apartment obj1;
    obj1.apartmentInfo();
    return 0;
}