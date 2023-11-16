/*
 * radixSort.cpp
 *
 *  Author:
 *  Akshay Kumar <akshayawakearise[at]gmail[dot]com>
 *
 * This program demonstrates how to sort the array using
 * radix sort
 *
 * The program takes as input an array
 *
 *
 */

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

// Single Inheritance
class Counting
{
public:
    void printArray(vector<int> arr)
    {
        // Range based for loop introduced in C++11.
        for (int i : arr)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    void countingSort(vector<int> &arr, int place)
    {
        int count[10] = {};
        // initializing the count array with value 0.
        memset(count, 0, 10);
        // finding the frequency of each of the element of the arr in count array.
        for (int i = 0; i < arr.size(); i++)
        {
            count[(arr[i] / place) % 10]++;
        }
        int len = sizeof(count) / sizeof(count[0]);
        for (int i = 1; i < len; i++)
        {
            count[i] = count[i] + count[i - 1];
        }
        vector<int> outputArray(arr.size());
        for (int i = (arr.size() - 1); i >= 0; i--)
        {
            outputArray[count[(arr[i] / place) % 10] - 1] = arr[i];
            count[(arr[i] / place) % 10]--;
        }
        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = outputArray[i];
        }
    }
};

class Radix : public Counting
{
public:
    void radix(vector<int> arr)
    {
        int largest = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            largest = max(largest, arr[i]);
        }

        for (int i = 1; i <= largest; i *= 10)
        {
            countingSort(arr, i);
        }

        printArray(arr);
    }
};

int main()
{
    vector<int> arr = {543, 986, 217, 765, 329};
    Radix r1;
    r1.printArray(arr);
    r1.radix(arr);

    return 0;
}
