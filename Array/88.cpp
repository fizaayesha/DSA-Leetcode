#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n, vector<int> &v)
    {
        int i = 0, j = 0;
        while (i < m && j < n)
        {
            if (nums1[i] < nums2[j])
            {
                v.push_back(nums1[i]);
                i++;
            }
            else
            {
                v.push_back(nums2[j]);
                j++;
            }
        }
        while (i < m)
        {
            v.push_back(nums1[i]);
            i++;
        }
        while (j < n)
        {
            v.push_back(nums2[j]);
            j++;
        }
        nums1 = v;
    }
};
int main()
{
    Solution s;
    vector<int> a1{2, 4, 5, 7};
    vector<int> b1{1, 4, 8, 17};
    vector<int> c1{};
    int an = a1.size();
    int bn = b1.size();
    s.merge(a1, an, b1, bn, c1);
    for (auto ans : c1)
    {
        cout << ans << " ";
    }
    return 0;
}