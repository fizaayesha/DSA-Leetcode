#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(nums[i]);
            v.push_back(nums[n + i]);
        }
        return v;
    }
};
int main()
{
    Solution s;
    vector<int> v{1, 3, 5, 3, 6, 7};
    vector<int> ans = s.shuffle(v, 3);
    for (auto v : ans)
    {
        cout << v << " ";
    }
    return 0;
}