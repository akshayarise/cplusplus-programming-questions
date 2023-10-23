// Selection Sort
#include <iostream>
using namespace std;

void selection(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {34, 5, 66, 77, 21, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    selection(arr, len);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}