#include <iostream>
using namespace std;
class Solution
{
public:
    int minOperations(int n)
    {
        int s = 0;
        int e = n - 1;
        int moves = 0;
        while (s < e)
        {
            moves += (e * 2 - s * 2) / 2;
            s++;
            e--;
        }
        return moves;
    }
};
int main()
{
    Solution s;
    cout<<s.minOperations(6);
    return 0;
}