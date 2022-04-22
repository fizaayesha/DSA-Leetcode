#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int distributeCandies(vector<int> &c)
    {
        int count = 1;
        int n = c.size();
        sort(c.begin(), c.end());
        for (int i = 1; i < n; i++)
        {
            if (c[i] != c[i - 1])
            {
                count++;
            }
            if (count > n / 2)
            {
                return n / 2;
            }
        }
        return count;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution s;
    cout << s.distributeCandies(arr);
    return 0;
}