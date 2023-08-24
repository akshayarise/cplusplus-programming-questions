#include <iostream>
using namespace std;

int main()
{

    auto num = 10;
    auto name = "Akshay";
    auto salary = 3200000.9;

    cout << typeid(num).name() << endl;
    cout << typeid(name).name() << endl;
    cout << typeid(salary).name() << endl;

    return 0;
}