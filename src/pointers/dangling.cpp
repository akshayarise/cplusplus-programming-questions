#include <iostream>
using namespace std;

int *student()
{
    static int x = 90;
    return &x;
}

int main()
{
    int *p = student();
    cout << *p << endl;
    return 0;
}