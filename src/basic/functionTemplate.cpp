// Generic Function to find the greater among two numbers or two characters.
#include <iostream>
using namespace std;

template <typename T>

T myMax(T x, T y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int x, y;
    cout << "Enter the two numbers in Integers\n";
    cin >> x >> y;
    cout << "The Greater number among two numbers are: \n";
    cout << myMax<int>(x, y) << endl;

    char m, n;
    cout << "Enter the two characters\n";
    cin >> m >> n;
    cout << "The Greater character among two characters are: \n";
    cout << myMax<char>(m, n) << endl;

    return 0;
}