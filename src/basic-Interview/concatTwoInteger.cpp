/*
 * concatTwoInteger.cpp
 *
 *  Author:
 *  Akshay Kumar <akshayawakearise[at]gmail[dot]com>
 *
 * This program demonstrates how to convert the two Integers into one Integer.
 *
 * The program takes as input an Integer.
 *
 *
 */

#include <iostream>
using namespace std;

int concatTwoInteger(int x, int y)
{
    // stoi() converts the string into Integer.
    // to_string() converts the number into String.
    return stoi(to_string(x) + to_string(y));
}
int main()
{
    int x, y;
    cout << "Enter the first Integer\n";
    cin >> x;
    cout << "Enter the second Integer\n";
    cin >> y;
    cout << concatTwoInteger(x, y) << endl;
    return 0;
}