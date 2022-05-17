#include <iostream>
using namespace std;
class Solution
{
public:
    int numberOfSteps(int num)
    {
        int count = 0;
        while (num != 0)
        {
            if (num % 2 == 0)
            {
                num = num / 2;
            }
            else
            {
                num -= 1;
            }
            count++;
        }
        return count;
    }
};
int main()
{
    Solution s;
    cout << s.numberOfSteps(14);
    return 0;
}