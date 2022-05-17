#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int n = arr.size();
        int max = 0;
        int ans;
        int i;
        for (i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                ans = i;
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> arr{2, 6, 75, 3, 5};
    cout << s.peakIndexInMountainArray(arr);
    return 0;
}