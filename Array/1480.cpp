#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> v;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            v.push_back(sum);
        }
        return v;
    }
};
int main()
{
    Solution s;
    vector<int> v = {2, 6, 4, 2};
    s.runningSum(v);
    return 0;
}