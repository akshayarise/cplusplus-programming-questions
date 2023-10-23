// Stable Selection Sort.
#include <iostream>
using namespace std;

void ss(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < len; j++)
            if (arr[min] > arr[j])
                min = j;

        int key = arr[min];
        for (int k = min; k > i; k--)
            arr[k] = arr[k - 1];
        arr[i] = key;
    }
}

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[] = {8, 7, 8, 1};
    int len = sizeof(arr) / sizeof(arr[0]);
    ss(arr, len);
    printArray(arr, len);
    return 0;
}