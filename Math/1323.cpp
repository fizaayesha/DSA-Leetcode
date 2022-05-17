#include <iostream>
#include <cmath>
using namespace std;
class Solution
{
public:
    int maximum69Number(int num)
    {
        // add 3*10^(length-position from starting)
        int n = num;
        int i = 0, j = 0;
        while (n != 0)
        {
            int rem = n % 10;
            n = n / 10;
            i++;
            if (rem == 6)
            {
                j = i;
            }
        }
        return num + (3 * pow(10, j - 1));
    }
};
int main()
{
    Solution s;
    cout << s.maximum69Number(99645);
    return 0;
}