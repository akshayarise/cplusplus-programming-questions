#include <iostream>
using namespace std;

int main()
{
    int num = 10, val = 50;
    int &temp = num;
    num = val;
    cout << "num: " << num << endl;
    cout << "temp: " << temp << endl;
    cout << "val: " << val << endl;
    cout << "Address of temp: " << &temp << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Address of val: " << &val << endl;
    return 0;
}