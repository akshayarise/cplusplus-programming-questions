#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr(5, 90);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}