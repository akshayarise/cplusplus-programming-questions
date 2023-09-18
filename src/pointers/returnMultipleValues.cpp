#include <iostream>
#include <math.h>
using namespace std;

void calc(double num, double *square, double *squareRoot)
{
    *square = num * num;
    *squareRoot = sqrt(num);
}

int main()
{
    double num = 2, squareRes, squareRootRes;

    calc(num, &squareRes, &squareRootRes);
    cout << "square: " << squareRes << endl;
    cout << "squareRoot: " << squareRootRes << endl;

    return 0;
}