// function template example
#include <iostream>
using namespace std;

template <class T, class U>

void show(T a, U b)
{
    cout << a << " " << b << endl;
}

int main()
{
    show(3, 90);
    show(34.9, 85.9);
    show("akshay", "kumar");
    show("Ramesh", 8.6);
    show(90.45, "Baalyan");
    return 0;
}