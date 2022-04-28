#include <iostream>
using namespace std;
class Solution
{
public:
    int getSum(int a, int b)
    {
        while (a > 0)
        {
            b++;
            a--;
        }
        while (a < 0)
        {
            b--;
            a++;
        }
        return b;
    }
};
int main()
{
    Solution s;
    cout << s.getSum(12, 3);
    return 0;
}