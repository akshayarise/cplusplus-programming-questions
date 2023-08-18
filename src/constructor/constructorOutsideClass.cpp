// Constructor outside class
#include <iostream>
using namespace std;

class Car
{
public:
    string modelC;
    string brandC;
    int priceC;
    Car(string model, string brand, int price);
};
Car::Car(string model, string brand, int price)
{
    modelC = model;
    brandC = brand;
    priceC = price;
}

int main()
{
    Car obj1("Ecosport", "Ford", 1300000);
    cout << "model: " << obj1.modelC << endl;
    cout << "brand: " << obj1.brandC << endl;
    cout << "price: " << obj1.priceC << endl;

    return 0;
}