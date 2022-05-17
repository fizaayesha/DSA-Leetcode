// binary search problem
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int firstIndex(vector<int> &arr, int target)
    {
        int low = 0;
        int high = arr.size() - 1;
        int ans = -1;
        while (low <= high)
        {
            int mid = low + (high - low / 2);
            if (arr[mid] == target)
            {
                ans = mid;
                high = mid - 1;
            }
            else if (arr[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
    int lastIndex(vector<int> &arr, int target)
    {
        int low = 0;
        int high = arr.size() - 1;
        int ans = -1;
        while (low <= high)
        {
            int mid = low + (high - low / 2);
            if (arr[mid] == target)
            {
                ans = mid;
                low = mid + 1;
            }
            else if (arr[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> ans(2, -1);
        int first = firstIndex(nums, target);
        if (first == -1)
        {
            return ans;
        }
        int last = lastIndex(nums, target);
        ans[0] = first;
        ans[1] = last;
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums{0, 0, 1, 1, 2, 2, 2, 2};
    int target = 3;
    s.searchRange(nums, target);
    return 0;
}