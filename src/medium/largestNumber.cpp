/*
 * largestNumber.cpp
 *
 *  Author:
 *  Akshay Kumar <akshayawakearise[at]gmail[dot]com>
 *
 * Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

 * Since the result may be very large, so you need to return a string instead of an integer.

 * Example 1:

 * Input: nums = [10,2]
 * Output: "210"
 * Example 2:

 * Input: nums = [3,30,34,5,9]
 * Output: "9534330"
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    static int compare(string i, string j)
    {
        string X = i.append(j);
        string Y = j.append(i);

        if (X.compare(Y) > 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    string largestNumber(vector<int> &nums)
    {
        int n = nums.size();
        vector<string> arr;
        for (int i = 0; i < n; i++)
        {
            arr.push_back(to_string(nums[i]));
        }

        sort(arr.begin(), arr.end(), compare);

        string res = "";
        for (int i = 0; i < n; i++)
        {
            res = res + arr[i];
        }
        return res;
    }
};

int main()
{
    Solution s1;
    int n;
    cout << "Enter the number of elements\n";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << "The largest number is: " << s1.largestNumber(nums) << endl;
    return 0;
}
