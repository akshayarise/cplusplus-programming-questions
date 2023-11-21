/*
 * numberToString.cpp
 *
 *  Author:
 *  Akshay Kumar <akshayawakearise[at]gmail[dot]com>
 *
 * This program demonstrates how to convert the number into string.
 *
 * The program takes as input a string.
 *
 *
 */
#include <iostream>
using namespace std;

string numberToString(int num)
{
    // to_string() function takes the number as an input and returns the string as output.
    return to_string(num);
}
int main()
{
    int num;
    cout << "Enter the number\n";
    cin >> num;
    string str = numberToString(num);
    cout << str << endl;
    return 0;
}