#include <iostream>
using namespace std;
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int count = 0;
        while (n != 0)
        {
            if (n & 1)
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};
int main()
{
    Solution s;
    cout << s.hammingWeight(100111101001);
    return 0;
}