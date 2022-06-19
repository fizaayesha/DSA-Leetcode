#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void solve(vector<int> nums, vector<vector<int>> &ans, int ind)
    {
        if (ind >= nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for (int i = ind; i < nums.size(); i++)
        {
            swap(nums[ind], nums[i]);
            solve(nums, ans, ind + 1);
            swap(nums[ind], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int ind = 0;
        solve(nums, ans, ind);
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums{1, 2, 3};
    vector<vector<int>> ans = s.permute(nums);
    return 0;
}