/*
 * vector.cpp
 *
 *  Author:
 *  Akshay Kumar <akshayawakearise[at]gmail[dot]com>
 *
 * This program demonstrates how to perform various operations on vector array or Dynamic array.
 *
 */
#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the number of elements you want to insert into the vector\n";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the numbers into vector\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printArray(arr);
    arr.erase(arr.begin(), arr.begin() + 2);
    arr.insert(arr.begin(), 10);
    printArray(arr);
    return 0;
}