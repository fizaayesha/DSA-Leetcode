#include <iostream>
using namespace std;
class Solution
{
public:
    int bulbSwitch(int n)
    {
        int count = 0;
        for (int i = 1; i * i <= n; i++)
        {
            count++;
        }
        return count;
    }
};
int main()
{
    Solution s;
    cout << s.bulbSwitch(6);
    return 0;
}