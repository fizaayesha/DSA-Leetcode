#include <iostream>
using namespace std;

class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int m, sum = 0, product = 1;
        while (n > 0)
        {
            m = n % 10;
            sum += m;
            product *= m;
            n = n / 10;
        }
        return product - sum;
    }
};
int main()
{
    Solution s;
    cout << s.subtractProductAndSum(4);
    return 0;
}