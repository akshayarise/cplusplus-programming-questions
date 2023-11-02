/*
 * quickSort.cpp
 *
 *  Author:
 *  Akshay Kumar <akshayawakearise[at]gmail[dot]com>
 *
 * This program demonstrates how to sort the array using
 * quick sort
 *
 * The program takes as input an array
 *
 *
 */

#include <iostream>
using namespace std;

void printArray(int arr[], int len)
{

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int p, int r)
{
    int pivot = arr[r];
    int i = p - 1, j = p;

    while (j < r)
    {
        if (arr[j] <= pivot)
        {
            i++;
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        j++;
    }
    int temp;
    temp = arr[i + 1];
    arr[i + 1] = arr[r];
    arr[r] = temp;
    return i + 1;
}

void quickSort(int arr[], int p, int r)
{
    if (p < r)
    {
        int q = partition(arr, p, r);
        quickSort(arr, p, q - 1);
        quickSort(arr, q + 1, r);
    }
}
int main()
{

    int arr[] = {2, 8, 7, 1, 3, 5, 6, 4}, len;
    len = sizeof(arr) / sizeof(arr[0]);
    int p = 0, r = len - 1;
    printArray(arr, len);
    cout << "Array after performing the quick sort\n";
    quickSort(arr, p, r);
    printArray(arr, len);
    return 0;
}