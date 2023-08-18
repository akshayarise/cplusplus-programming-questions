// constructor with parameters
#include <iostream>
using namespace std;

class Car
{
public:
    int priceC;
    string modelC;
    string brandC;

    Car(string model, string brand, int price)
    {
        priceC = price;
        modelC = model;
        brandC = brand;
    }
};

int main()
{
    Car obj1("Ecosport", "Ford", 1300000);

    cout << "model: " << obj1.modelC << endl;
    cout << "brand: " << obj1.brandC << endl;
    cout << "price: " << obj1.priceC << endl;
    return 0;
}