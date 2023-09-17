// Another approach of making the object.

#include <iostream>
using namespace std;

class Complex
{
public:
    int real, imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}
    void info()
    {
        cout << "real: " << real << endl;
        cout << "imag: " << imag << endl;
    }
};

int main()
{
    Complex *ptr = new Complex(45, 89);
    cout << ptr << endl;
    cout << ptr->real << endl;
    cout << ptr->imag << endl;
    ptr->info();
    return 0;
}