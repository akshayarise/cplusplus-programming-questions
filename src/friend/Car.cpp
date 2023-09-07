// Friend Function demo.
#include <iostream>
using namespace std;

class Car
{
private:
    string brand;

protected:
    float price;

public:
    Car()
    {
        brand = "Mahindra";
        price = 2000000;
    }

    friend void maxSpeed(Car obj);
};

void maxSpeed(Car obj)
{
    cout << "brand is: " << obj.brand << endl;
    cout << "price is: " << obj.price << endl;
}

int main()
{
    Car obj;
    maxSpeed(obj);
    return 0;
}