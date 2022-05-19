#include <iostream>
using namespace std;
class Solution
{
public:
    int mySqrt(int x)
    {
        int s = 0;
        int e = x;
        int ans = -1;
        while (s <= e)
        {
            long long int mid = s + (e - s) / 2;
            if (mid * mid == x)
            {
                return mid;
            }
            else if (mid * mid > x)
            {
                e = mid - 1;
            }
            else
            {
                ans = mid;
                s = mid + 1;
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    cout << s.mySqrt(24);
    return 0;
}