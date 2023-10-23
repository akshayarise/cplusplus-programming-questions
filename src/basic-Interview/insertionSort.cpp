// Insertion Sort
#include <iostream>
using namespace std;

void insertionSort(int arr[], int len)
{
    int i = 0;
    for (int k = 1; k < len; k++)
    {

        for (int j = k; j > 0; j--)
        {
            if (arr[j - 1] > arr[j])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {12, 34, 55, 1, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, len);
    insertionSort(arr, len);
    cout << "\nArray after Insertion Sort\n";
    printArray(arr, len);

    return 0;
}