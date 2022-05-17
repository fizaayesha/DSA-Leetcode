#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
                else
                {
                    count;
                }
            }
        }
        return count;
    }
};
int main()
{
    Solution s;
    vector <int> nums {2,5,3,3,7,3};
    cout<<s.numIdenticalPairs(nums);
    return 0;
}