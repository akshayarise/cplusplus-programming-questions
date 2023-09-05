// access and modify the private members of the class.

#include <iostream>
using namespace std;

class Car
{
    string brandC;

public:
    void setter(string brand)
    {
        brandC = brand;
    }
    string getter()
    {
        return brandC;
    }
};

int main()
{
    Car obj1;
    obj1.setter("Nissan");
    cout << obj1.getter() << endl;
    return 0;
}