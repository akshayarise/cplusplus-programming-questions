#include <iostream>
using namespace std;

int fun(int &num)
{
    return num;
}

int main()
{
    int val = 8900;
    cout << fun(val) << endl;
    return 0;
}
