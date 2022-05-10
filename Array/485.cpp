#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int n = nums.size();
        int maxi = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                count++;
            }
            else
            {
                count = 0;
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};
int main()
{
    Solution s;
    vector<int> nums{1, 1, 0, 1, 1, 1};
    cout << s.findMaxConsecutiveOnes(nums);
    return 0;
}