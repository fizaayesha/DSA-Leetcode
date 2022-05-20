#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void reverseArray(vector<int> &nums, int i, int n)
    {
        while (i <= n)
        {
            swap(nums[i], nums[n]);
            i++;
            n--;
        }
    }
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n;
        reverseArray(nums, 0, n - 1);
        reverseArray(nums, 0, k - 1);
        reverseArray(nums, k, n - 1);
    }
};
int main()
{
    Solution s;
    vector<int> v{1, 2, 3, 4, 5};
    s.rotate(v, 2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}