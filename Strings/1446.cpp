#include <iostream>
using namespace std;
class Solution
{
public:
    int maxPower(string s)
    {
        int max = 1;
        int count = 1;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            if (count > max)
            {
                max = count;
            }
        }
        return max;
    }
};
int main()
{
    Solution s;
    cout << s.maxPower("wewq");
    return 0;
}