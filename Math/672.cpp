#include <iostream>
using namespace std;
class Solution
{
public:
    int flipLights(int n, int p)
    {
        if (p == 0 || n == 0)
        {
            return 1;
        }
        if (n == 1)
        {
            return 2;
        }
        if (p == 1)
        {
            return 3 + (n >= 3);
        }
        if (n == 2)
        {
            return 3 + (p >= 2);
        }
        return 7 + (p >= 3);
    }
};
int main()
{
    Solution s;
    cout << s.flipLights(1, 1);
    return 0;
}