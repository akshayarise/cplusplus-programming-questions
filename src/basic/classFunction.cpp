// functions in class with its definition inside the class and outside the class.
#include <iostream>
using namespace std;

class Car
{
public:
    void printBrandName(string name)
    {
        cout << "car name is: " << name << endl;
    }
    void printModelName(string model)
    {
        cout << "model name is: " << model << endl;
    }
    void printKmsCovered(float kms);
};

void Car::printKmsCovered(float kms)
{
    cout << "Kilometers covered by the car is: " << kms << "kms" << endl;
}

int main()
{

    Car obj1;

    obj1.printBrandName("Ford");
    obj1.printModelName("Ecosport");
    obj1.printKmsCovered(4000.909);
    return 0;
}