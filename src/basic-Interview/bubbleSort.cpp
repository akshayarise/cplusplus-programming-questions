// bubble sort

#include <iostream>
using namespace std;

void bs(int arr[], int len)
{
    bool swapped;
    for (int k = 0; k < len; k++)
    {
        swapped = false;
        for (int i = 0; i < len - 1 - k; i++)
        {
            int j = i + 1;
            if (arr[i] > arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << " " << arr[i];
    }
}

int main()
{
    int arr[] = {23, 45, 66, 77, 88};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "Array is: \n";
    printArray(arr, len);
    bs(arr, len);
    cout << "\nSorted Array is: \n";
    printArray(arr, len);
    return 0;
}