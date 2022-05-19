#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> v;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (nums[j] < nums[i] && j != i)
                {
                    count++;
                }
            }
            v.push_back(count);
        }
        return v;
    }
};
int main()
{
    Solution s;
    vector<int> nums{6, 3, 6, 3, 12};
    vector<int> result = s.smallerNumbersThanCurrent(nums);
    cout << "result: ";
    for (auto num : result)
    {
        cout << num << " ";
    }
    return 0;
}