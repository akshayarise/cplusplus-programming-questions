/*
 * countingSort.cpp
 *
 *  Author:
 *  Akshay Kumar <akshayawakearise[at]gmail[dot]com>
 *
 * This program demonstrates how to sort the array using
 * counting sort
 *
 * The program takes as input an array
 *
 *
 */
#include <iostream>
#include <vector>
using namespace std;

class Sort
{
public:
    void countingSort(vector<int> &new_arr)
    {
        int N = new_arr.size();
        int m = 0;
        for (int i = 0; i < N; i++)
        {
            m = max(m, new_arr[i]);
        }
        vector<int> countArray(m + 1, 0);

        for (int i = 0; i < N; i++)
        {
            countArray[new_arr[i]]++;
        }
        vector<int> outputArray(N);

        for (int i = 1; i < (m + 1); i++)
        {
            countArray[i] = countArray[i] + countArray[i - 1];
        }

        for (int i = N - 1; i >= 0; i--)
        {
            outputArray[countArray[new_arr[i]] - 1] = new_arr[i];
            countArray[new_arr[i]]--;
        }
        printArray(outputArray);
    }
    void printArray(vector<int> arr)
    {
        cout << endl;
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    vector<int> arr = {4, 4, 7, 7, 0};
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout << *i << " ";
    }
    Sort s1;
    s1.countingSort(arr);

    return 0;
}