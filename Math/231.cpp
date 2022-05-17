#include <iostream>
#include <cmath>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int i = 0;
        while (i <= 30)
        {
            int x = pow(2, i);
            if (x == n)
            {
                return true;
            }
            i++;
        }
        return false;
    }
};
int main()
{
    Solution s;
    cout << s.isPowerOfTwo(89);
    return 0;
}