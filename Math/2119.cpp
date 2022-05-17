#include <iostream>
using namespace std;
class Solution
{
public:
    int reverseOne(int n)
    {
        int rev = 0;
        while (n != 0)
        {
            int l = n % 10;
            rev = (rev * 10) + l;
            n = n / 10;
        }
        return rev;
    }
    bool isSameAfterReversals(int num)
    {
        int num1 = reverseOne(num);
        int num2 = reverseOne(num1);
        if (num == num2)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Solution s;
    cout << s.isSameAfterReversals(1800);
    return 0;
}