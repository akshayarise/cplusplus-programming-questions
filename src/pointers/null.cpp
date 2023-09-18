#include <iostream>
using namespace std;

void fun(char *ptr)
{
    cout << "fun(char *ptr)" << endl;
}

void fun(int num)
{
    cout << "fun(int num)" << endl;
}

int main()
{
    fun(NULL);
    return 0;
}