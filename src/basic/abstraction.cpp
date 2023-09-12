#include <iostream>
using namespace std;

class Car
{
private:
    string name, speed;

public:
    void setName(string name)
    {
        this->name = name;
    }
    void setSpeed(string speed)
    {
        this->speed = speed;
    }
    string getName()
    {
        return this->name;
    }
    string getSpeed()
    {
        return this->speed;
    }
};

int main()
{
    Car obj1;
    obj1.setName("Toyota");
    obj1.setSpeed("300 Km/hr");
    cout << obj1.getName() << endl;
    cout << obj1.getSpeed() << endl;
    return 0;
}