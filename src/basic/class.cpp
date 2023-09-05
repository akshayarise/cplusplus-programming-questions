// class and Object example of the Car.

#include <iostream>
using namespace std;

class Car
{
public:
    string carModel;
    int plateNumber;
};

int main()
{

    Car obj1, obj2;
    obj1.carModel = "Audi";
    obj1.plateNumber = 4345543;

    obj2.carModel = "BMW";
    obj2.plateNumber = 987444;

    cout << "carModel: " << obj1.carModel << endl;
    cout << "plateNumber: " << obj1.plateNumber << endl;

    cout << "carModel: " << obj2.carModel << endl;
    cout << "plateNumber: " << obj2.plateNumber << endl;

    return 0;
}