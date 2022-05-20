#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        vector<int> v;
        int n = nums.size() - 1;
        int i = 0;
        while (i <= n)
        {
            for (int j = 0; j < nums[i]; j++)
            {
                v.push_back(nums[i + 1]);
            }
            i += 2;
        }
        return v;
    }
};
int main()
{
    Solution s;
    vector<int> nums{5, 2, 6, 1};
    vector<int> result = s.decompressRLElist(nums);
    cout << "result: ";
    for (auto num : result)
    {
        cout << num << " ";
    }

    return 0;
}