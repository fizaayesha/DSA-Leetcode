#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums, vector<int> &v)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if (n == 1)
        {
            return v;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};
int main()
{
    Solution s;
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> arr1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    s.findDuplicates(arr,arr1);
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}