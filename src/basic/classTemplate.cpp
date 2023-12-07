// Class Template Example
#include <iostream>
using namespace std;
template <typename T>

class Array
{
private:
    T *ptr;
    int size;

public:
    Array(T arr[], int s)
    {
        ptr = new T[s];
        size = s;
        for (int i = 0; i < size; i++)
        {
            ptr[i] = arr[i];
        }
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << *(ptr + i) << " ";
        }
        cout << endl;
    }
};

int main()
{
    int arr[5] = {45, 3, 22, 90, 88};
    Array<int> a(arr, 5);
    a.print();
    string str[] = {"Akshay", "Kumar", "Arun", "Jaiswal", "Raju", "Manoj"};
    int len = sizeof(str) / sizeof(str[0]);
    Array<string> b(str, len);
    b.print();
    return 0;
}