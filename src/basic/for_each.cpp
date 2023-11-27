#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student
{
    void operator()(int i)
    {
        cout << i * 3 << " ";
    }
} s1;

int main()
{
    int n;
    cout << "Enter the how many numbers you want to enter: \n";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The number of elements are: \n";
    for_each(arr.begin(), arr.end(), s1);
    cout << endl;
    return 0;
}