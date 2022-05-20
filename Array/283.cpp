#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[j], nums[i]);
                j++;
            }
        }
    }
};
int main()
{
    Solution s;
    vector<int> nums{0, 7, 3, 0, 4, 0, 7, 0};
    s.moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}