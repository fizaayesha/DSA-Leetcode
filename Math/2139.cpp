#include <iostream>
using namespace std;
class Solution
{
public:
    int minMoves(int target, int maxDoubles)
    {
        int ans = 0;
        while (target != 1)
        {
            if (target % 2)
            {
                target--;
                ans++;
            }
            else if (maxDoubles)
            {
                target = target / 2;
                ans++;
                maxDoubles--;
            }
            else
            {
                ans += target - 1;
                break;
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    cout << s.minMoves(19, 2);
    return 0;
}