#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    bool possible(vector<int> v, int n, int k, int mid)
    {
        int painter = 1;
        int walls = 0;
        for (int i = 0; i < n; i++)
        {
            if (walls + v[i] <= mid)
            {
                walls += v[i];
            }
            else
            {
                painter++;
                if (painter > k || v[i] > mid)
                {
                    return false;
                }
                walls = v[i];
            }
        }
        return true;
    }

    int findLargestMinDistance(vector<int> &boards, int k)
    {
        //    Write your code here.
        int sum = 0;
        int n = boards.size();
        for (int i = 0; i < n; i++)
        {
            sum += boards[i];
        }
        int s = 0;
        int e = sum;
        int ans = -1;
        int mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (possible(boards, n, k, mid))
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> v = {3, 4, 6, 5, 6};
    // cout << s.findLargestMinDistance(v, 4);
    return 0;
}