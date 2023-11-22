/*
 * stringToInteger.cpp
 *
 *  Author:
 *  Akshay Kumar <akshayawakearise[at]gmail[dot]com>
 *
 * This program demonstrates how to convert the number string into Integer.
 *
 * The program takes as input the string of the number and return its number into Integer form.
 *
 *
 */

#include <iostream>
using namespace std;

int main()
{
    string number;
    cout << "Enter the number\n";
    cin >> number;
    cout << stoi(number) << endl;
    return 0;
}