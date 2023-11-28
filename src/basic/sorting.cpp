
/*
 * sorting.cpp
 *
 *  Author:
 *  Akshay Kumar <akshayawakearise[at]gmail[dot]com>
 *
 * sort the elements of the array in decreasing order.
 *
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void inputArray(vector<int> &arr, int n)
{
    cout << "Enter the elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void printArray(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool compare(int i, int j)
{
    return i > j;
}

int main()
{
    int n;
    cout << "Enter the number of elements you want to enter\n";
    cin >> n;
    vector<int> arr(n);
    inputArray(arr, n);
    printArray(arr, n);
    sort(arr.begin(), arr.end(), compare);
    printArray(arr, n);

    return 0;
}