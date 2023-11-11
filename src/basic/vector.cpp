#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {90, 80, 70, 60, 50};

    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout << *i << endl;
    }
    cout << endl;
    cout << arr.size() << endl;
    return 0;
}