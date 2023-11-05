/*
 * heapSort.cpp
 *
 *  Author:
 *  Akshay Kumar <akshayawakearise[at]gmail[dot]com>
 *
 * This program demonstrates how to sort the array using
 * heap sort
 *
 * The program takes as input an array
 *
 *
 */

#include <iostream>
#include <math.h>
using namespace std;

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int arr[], int i, int j)
{
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void maxHeapify(int arr[], int i, int len)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest;
    if ((left < len) && (arr[left] > arr[i]))
    {
        largest = left;
    }
    else
    {
        largest = i;
    }
    if ((right < len) && (arr[right] > arr[largest]))
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr, i, largest);
        maxHeapify(arr, largest, len);
    }
}

void buildMaxHeap(int arr[], int len)
{
    int i = floor(len / 2);
    for (i; i >= 0; i--)
    {
        maxHeapify(arr, i, len);
    }
}

void heapSort(int arr[], int len)
{
    buildMaxHeap(arr, len);
    for (int i = len - 1; i >= 1; i--)
    {
        swap(arr, 0, i);

        maxHeapify(arr, 0, i);
    }
}

int main()
{
    int arr[] = {10, 34, 67, 89};
    int len = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, len);
    heapSort(arr, len);
    cout << "After HeapSort on this array\n";
    printArray(arr, len);
    return 0;
}
