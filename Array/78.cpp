#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void solve(vector<int> nums, vector<int> output, int ind, vector<vector<int>> &ans)
    {
        if (ind >= nums.size())
        {
            ans.push_back(output);
            return;
        }
        solve(nums, output, ind + 1, ans);

        int element = nums[ind];
        output.push_back(element);
        solve(nums, output, ind + 1, ans);
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> output;
        int ind = 0;
        solve(nums, output, ind, ans);
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> arr{1, 2, 3};
    s.subsets(arr);
    return 0;
}