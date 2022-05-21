#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int maxi = 0;
        int n = gain.size();
        vector<int> v;
        v.push_back(0);
        for (int i = 0; i < n; i++)
        {
            v.push_back(v[i] + gain[i]);
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] > maxi)
            {
                maxi = v[i];
            }
        }
        return maxi;
    }
};
int main()
{
    Solution s;
    vector<int> nums{3, 7, 8, 3, 5};
    cout << s.largestAltitude(nums);
    return 0;
}