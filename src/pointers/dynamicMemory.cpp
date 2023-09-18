#include <iostream>
using namespace std;

int *mem(int num)
{
    int *ptr = (int *)malloc(num * sizeof(int));
    ptr[0] = 90;
    return ptr;
}

int main()
{
    int num = 10;
    int *ptr = mem(num);
    cout << "Address is: " << ptr << endl;
    cout << "Value is: " << *ptr << endl;
    free(ptr);
    cout << "Address is: " << ptr << endl;
    cout << "Value is: " << *ptr << endl;
    return 0;
}