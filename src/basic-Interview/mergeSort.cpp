// merge sort
#include <iostream>
#include <math.h>
using namespace std;

void merge(int arr[], int begin, int mid, int end)
{
    int n1 = mid - begin + 1, n2 = end - mid;
    // Adding infinity
    n1 = n1 + 1;
    n2 = n2 + 1;
    int left[n1], right[n2];
    left[n1 - 1] = 99999, right[n2 - 1] = 99999;

    for (int l = 0; l < n1 - 1; l++)
    {
        left[l] = arr[begin + l];
    }

    for (int m = 0; m < n2 - 1; m++)
    {
        right[m] = arr[mid + m + 1];
    }
    int i = 0, j = 0;
    for (int k = begin; k <= end; k++)
    {
        if (left[i] < right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
    }
}

void mergeSort(int arr[], int begin, int end)
{
    if (begin < end)
    {
        int mid = floor((begin + end) / 2);
        mergeSort(arr, begin, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, begin, mid, end);
    }
    else
    {
        return;
    }
}

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {34, 10, 22, 79, 44, 0};
    int len = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, len);
    int begin = 0, end = len - 1;
    mergeSort(arr, begin, end);
    cout << "\nArray after Merge Sort\n";
    printArray(arr, len);
    cout << endl;
    return 0;
}