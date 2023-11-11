// memset() usage
#include <iostream>
#include <cstring>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 11, 12, 13, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    memset(arr, 0, sizeof(arr));
    printArray(arr, n);
    return 0;
}
