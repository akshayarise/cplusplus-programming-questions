#include <iostream>
using namespace std;

namespace akshay
{
    void print()
    {
        cout << "Akshay" << endl;
    }
}
namespace kumar
{
    void print()
    {
        cout << "Kumar" << endl;
    }
}

using namespace akshay;

int main()
{
    print();
    return 0;
}
