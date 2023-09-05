// pass the array in function as a parameter and print the array elements

#include <iostream>
using namespace std;

void arrayElements(int *num, int len)
{
    int i = 0;
    while (i < len)
    {
        cout << *(num + i) << endl;
        i++;
    }
}

int main()
{
    int arr[] = {23, 4, 55, 6, 71, 100};
    int len = sizeof(arr) / sizeof(arr[0]);
    arrayElements(arr, len);
    return 0;
}
