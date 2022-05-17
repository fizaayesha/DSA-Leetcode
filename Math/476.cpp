#include <iostream>
using namespace std;
class Solution
{
public:
    int findComplement(int num)
    {
        int m = num;
        int mask = 0;
        while (m != 0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int ans = (~num) & mask;
        return ans;
    }
};
int main()
{
    Solution s;
    cout << s.findComplement(5);
    return 0;
}